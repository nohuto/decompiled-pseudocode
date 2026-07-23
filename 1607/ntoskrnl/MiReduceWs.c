/*
 * XREFs of MiReduceWs @ 0x1400AFD20
 * Callers:
 *     MiPreUnlockWorkingSetExclusive @ 0x1401F2898 (MiPreUnlockWorkingSetExclusive.c)
 * Callees:
 *     MiTrimWorkingSet @ 0x140015D90 (MiTrimWorkingSet.c)
 */

void __fastcall MiReduceWs(ULONG_PTR a1, char a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rdx
  unsigned int v7; // ebx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 128);
  v7 = 7;
  if ( v5 > a3 )
  {
    do
    {
      v8 = v5 - v4;
      if ( v7 )
      {
        v9 = v8;
        v8 = *(_QWORD *)(a1 + 8LL * (v7 - 1) + 40);
        if ( v8 > v9 )
          v8 = v9;
      }
      if ( v8 )
      {
        LOBYTE(a3) = a2;
        MiTrimWorkingSet(a1, v8, a3, v7, 0);
        if ( !v7 )
          break;
      }
      v5 = *(_QWORD *)(a1 + 128);
      --v7;
    }
    while ( v5 > v4 );
  }
}
