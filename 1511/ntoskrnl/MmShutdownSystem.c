/*
 * XREFs of MmShutdownSystem @ 0x1403B1F2C
 * Callers:
 *     PoBroadcastSystemState @ 0x1403A49B4 (PoBroadcastSystemState.c)
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     MmTrimAllSystemPagableMemory @ 0x1401D87E0 (MmTrimAllSystemPagableMemory.c)
 *     MiShutdownSystem @ 0x1403B1B80 (MiShutdownSystem.c)
 */

char __fastcall MmShutdownSystem(int a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi

  if ( !a1 )
    return MiShutdownSystem();
  if ( a1 == 1 )
  {
    if ( (unsigned int)dword_1402FEC44 < 2 )
    {
      dword_1402FEC44 = 2;
      if ( (PopShutdownCleanly & 2) != 0 )
      {
        MmTrimAllSystemPagableMemory(1);
        if ( Count )
        {
          v2 = qword_1403013A0;
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
  else if ( (unsigned int)dword_1402FEC44 < 3 )
  {
    dword_1402FEC44 = 3;
  }
  return 1;
}
