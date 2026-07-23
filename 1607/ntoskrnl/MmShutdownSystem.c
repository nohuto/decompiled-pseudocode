/*
 * XREFs of MmShutdownSystem @ 0x1403DEC00
 * Callers:
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MmTrimAllSystemPagableMemory @ 0x1401EA320 (MmTrimAllSystemPagableMemory.c)
 *     MiShutdownSystem @ 0x1403DE8F8 (MiShutdownSystem.c)
 */

char __fastcall MmShutdownSystem(int a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi

  if ( !a1 )
    return MiShutdownSystem();
  if ( a1 == 1 )
  {
    if ( (unsigned int)dword_140327054 < 2 )
    {
      dword_140327054 = 2;
      if ( (PopShutdownCleanly & 2) != 0 )
      {
        MmTrimAllSystemPagableMemory(1);
        if ( Count )
        {
          v2 = qword_140324E20;
          v3 = Count;
          do
          {
            if ( (*(_BYTE *)(*v2 + 204LL) & 0x40) == 0 )
              ObfDereferenceObject(*(PVOID *)(*v2 + 56LL));
            ++v2;
            --v3;
          }
          while ( v3 );
        }
      }
    }
  }
  else if ( (unsigned int)dword_140327054 < 3 )
  {
    dword_140327054 = 3;
  }
  return 1;
}
