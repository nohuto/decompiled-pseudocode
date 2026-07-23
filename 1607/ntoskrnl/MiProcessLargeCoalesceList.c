/*
 * XREFs of MiProcessLargeCoalesceList @ 0x1401FD398
 * Callers:
 *     MiRebuildLargeZeroPage @ 0x1401FDBBC (MiRebuildLargeZeroPage.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiCoalesceFreeLargePages @ 0x1401FCABC (MiCoalesceFreeLargePages.c)
 */

__int64 __fastcall MiProcessLargeCoalesceList(__int64 a1, unsigned __int16 *a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rbx
  unsigned __int64 *v9; // r14
  __int64 result; // rax
  volatile LONG *v12; // rbp
  KIRQL v13; // al
  __int64 v14; // rdx
  unsigned __int64 v15; // r8

  LODWORD(v5) = 0;
  do
  {
    v9 = (unsigned __int64 *)(a3 + 8 * ((unsigned int)v5 + 1LL));
    if ( *v9 )
    {
      result = MiCoalesceFreeLargePages(a1, *v9, a4);
      *v9 = 0LL;
      if ( (*(_WORD *)(a3 + 2))-- == 1 )
        return result;
      if ( a2[1] )
      {
        v12 = (volatile LONG *)(a1 + 5580);
        v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 5580));
        v14 = *a2;
        if ( a2[1] )
        {
          do
          {
            v15 = *(_QWORD *)&a2[4 * v14 + 4];
            if ( v15 )
            {
              if ( *v9 )
              {
                do
                {
                  v5 = (unsigned int)(v5 + 1);
                  if ( (_DWORD)v5 == 64 )
                    v5 = 0LL;
                }
                while ( *(_QWORD *)(a3 + 8 * v5 + 8) );
              }
              *(_QWORD *)&a2[4 * v14 + 4] = 0LL;
              --a2[1];
              v9 = (unsigned __int64 *)(a3 + 8 * ((unsigned int)v5 + 1LL));
              *v9 = v15;
              if ( ++*(_WORD *)(a3 + 2) == 64 )
                break;
            }
            v14 = (unsigned int)(v14 + 1);
            if ( (_DWORD)v14 == 64 )
              v14 = 0LL;
          }
          while ( a2[1] );
          v12 = (volatile LONG *)(a1 + 5580);
        }
        ExReleaseSpinLockExclusive(v12, v13);
        LODWORD(v5) = -1;
      }
    }
    LODWORD(v5) = v5 + 1;
    result = 64LL;
  }
  while ( (unsigned int)v5 < 0x40 );
  return result;
}
