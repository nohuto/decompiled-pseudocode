/*
 * XREFs of MiScanPagefiles @ 0x1400135C0
 * Callers:
 *     MiWorkingSetManager @ 0x1400131F4 (MiWorkingSetManager.c)
 * Callees:
 *     MiFreePageFileHashPfns @ 0x1400135E8 (MiFreePageFileHashPfns.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

void __fastcall MiScanPagefiles(__int64 a1)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  int v4; // edx
  __int64 i; // r8

  MiFreePageFileHashPfns();
  if ( *(_QWORD *)(a1 + 5888) <= 0x420uLL )
  {
    v2 = *(_DWORD *)(a1 + 5720);
    if ( v2 )
    {
      if ( *(_QWORD *)(a1 + 6128) && !*(_QWORD *)(a1 + 904) )
      {
        v3 = *(_DWORD *)(a1 + 912);
        if ( v3 >= 0x1E )
        {
          v4 = 0;
          for ( i = a1 + 5728; (*(_BYTE *)(*(_QWORD *)i + 204LL) & 0x50) != 0 || !*(_QWORD *)(*(_QWORD *)i + 24LL); i += 8LL )
          {
            if ( ++v4 >= v2 )
            {
              if ( *(_BYTE *)(a1 + 594) == 1 )
              {
                *(_BYTE *)(a1 + 594) = 0;
                *(_DWORD *)(a1 + 912) = 0;
                *(_QWORD *)(a1 + 896) = MiScanPagefileSpace;
                *(_QWORD *)(a1 + 904) = a1;
                *(_QWORD *)(a1 + 880) = 0LL;
                ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 880), HyperCriticalWorkQueue);
              }
              return;
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 912) = v3 + 1;
        }
      }
    }
  }
}
