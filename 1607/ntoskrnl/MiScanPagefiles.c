/*
 * XREFs of MiScanPagefiles @ 0x1400BC760
 * Callers:
 *     MiWorkingSetManager @ 0x1400BBD98 (MiWorkingSetManager.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     MiFreePageFileHashPfns @ 0x1400BC788 (MiFreePageFileHashPfns.c)
 */

void __fastcall MiScanPagefiles(__int64 a1)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  int v4; // edx
  __int64 i; // r8

  MiFreePageFileHashPfns();
  if ( *(_QWORD *)(a1 + 6464) <= 0x420uLL )
  {
    v2 = *(_DWORD *)(a1 + 6296);
    if ( v2 )
    {
      if ( *(_QWORD *)(a1 + 7344) && !*(_QWORD *)(a1 + 896) )
      {
        v3 = *(_DWORD *)(a1 + 904);
        if ( v3 >= 0x1E )
        {
          v4 = 0;
          for ( i = a1 + 6304; (*(_BYTE *)(*(_QWORD *)i + 204LL) & 0x50) != 0 || !*(_QWORD *)(*(_QWORD *)i + 24LL); i += 8LL )
          {
            if ( ++v4 >= v2 )
            {
              if ( *(_BYTE *)(a1 + 586) == 1 )
              {
                *(_BYTE *)(a1 + 586) = 0;
                *(_DWORD *)(a1 + 904) = 0;
                *(_QWORD *)(a1 + 888) = MiScanPagefileSpace;
                *(_QWORD *)(a1 + 896) = a1;
                *(_QWORD *)(a1 + 872) = 0LL;
                ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 872), HyperCriticalWorkQueue);
              }
              return;
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 904) = v3 + 1;
        }
      }
    }
  }
}
