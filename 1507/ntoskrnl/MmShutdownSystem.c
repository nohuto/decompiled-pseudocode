/*
 * XREFs of MmShutdownSystem @ 0x140402FFC
 * Callers:
 *     PoBroadcastSystemState @ 0x1403EE2D4 (PoBroadcastSystemState.c)
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MmTrimAllSystemPagableMemory @ 0x14021B88C (MmTrimAllSystemPagableMemory.c)
 *     MiShutdownSystem @ 0x140402C68 (MiShutdownSystem.c)
 */

char __fastcall MmShutdownSystem(int a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi

  if ( !a1 )
    return MiShutdownSystem();
  if ( a1 == 1 )
  {
    if ( (unsigned int)dword_14034F100 < 2 )
    {
      dword_14034F100 = 2;
      if ( (PopShutdownCleanly & 2) != 0 )
      {
        MmTrimAllSystemPagableMemory(1);
        if ( Count )
        {
          v2 = qword_1403551E0;
          v3 = Count;
          do
          {
            if ( (*(_BYTE *)(*v2 + 164LL) & 0x40) == 0 )
              ObfDereferenceObject(*(PVOID *)(*v2 + 64LL));
            ++v2;
            --v3;
          }
          while ( v3 );
        }
      }
    }
  }
  else if ( (unsigned int)dword_14034F100 < 3 )
  {
    dword_14034F100 = 3;
  }
  return 1;
}
