/*
 * XREFs of SymCryptParallelHashSetNextWork @ 0x1402377EC
 * Callers:
 *     SymCryptParallelHashProcess @ 0x140237378 (SymCryptParallelHashProcess.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     SymCryptParallelSha256Result1 @ 0x140237238 (SymCryptParallelSha256Result1.c)
 *     SymCryptParallelSha256Result2 @ 0x1402372C0 (SymCryptParallelSha256Result2.c)
 *     SymCryptParallelSha256ResultDone @ 0x14023732C (SymCryptParallelSha256ResultDone.c)
 */

char __fastcall SymCryptParallelHashSetNextWork(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rsi
  __int64 v4; // rdi
  char v5; // al
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  size_t v8; // r8
  __int64 v9; // rcx
  size_t v10; // rbp
  unsigned __int64 v11; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = a1;
  v2 = *(unsigned int **)a2;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(a2 + 24);
      if ( !*(_BYTE *)(a2 + 8) )
        break;
      switch ( *(_BYTE *)(a2 + 8) )
      {
        case 1:
          v6 = *(unsigned __int8 *)(a2 + 9);
          *(_QWORD *)(a2 + 32) = v6 + *(_QWORD *)(v4 + 16);
          v7 = *(_QWORD *)(v4 + 24) - v6;
          *(_QWORD *)(a2 + 40) = v7;
          if ( v7 >= *((unsigned int *)SymCryptParallelSha256Algorithm_default + 10) )
          {
            *(_BYTE *)(a2 + 8) = 2;
            return 1;
          }
          goto LABEL_11;
        case 2:
LABEL_11:
          v8 = *(_QWORD *)(a2 + 40);
          if ( v8 )
          {
            memmove(v2 + 8, *(const void **)(a2 + 32), v8);
            *v2 = *(_DWORD *)(a2 + 40);
          }
LABEL_8:
          *(_QWORD *)(a2 + 24) = *(_QWORD *)(v4 + 32);
          *(_BYTE *)(a2 + 8) = 0;
          break;
        case 3:
          v5 = SymCryptParallelSha256Result2((__int64)&SymCryptParallelSha256Algorithm_default, (__int64)v2, a2, &v13);
LABEL_25:
          if ( v5 )
            return v13;
          break;
        case 4:
          SymCryptParallelSha256ResultDone(
            (__int64)&SymCryptParallelSha256Algorithm_default,
            (__int64)v2,
            *(_QWORD *)(a2 + 24));
          goto LABEL_8;
      }
    }
    if ( !v4 )
      return 0;
    v9 = *v2;
    if ( *(_DWORD *)(v4 + 8) != 1 )
    {
      v5 = SymCryptParallelSha256Result1((__int64)&SymCryptParallelSha256Algorithm_default, v2, a2, &v13);
      goto LABEL_25;
    }
    *((_QWORD *)v2 + 2) += *(_QWORD *)(v4 + 24);
    if ( *((_QWORD *)v2 + 2) < *(_QWORD *)(v4 + 24) )
      ++*((_QWORD *)v2 + 3);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v4 + 24);
      if ( (unsigned __int64)*((unsigned int *)SymCryptParallelSha256Algorithm_default + 10) - v9 < v10 )
        v10 = *((unsigned int *)SymCryptParallelSha256Algorithm_default + 10) - v9;
      memmove((char *)v2 + v9 + 32, *(const void **)(v4 + 16), v10);
      *v2 += v10;
      if ( *v2 == *((_DWORD *)SymCryptParallelSha256Algorithm_default + 10) )
      {
        *(_QWORD *)(a2 + 32) = v2 + 8;
        *(_QWORD *)(a2 + 40) = *((unsigned int *)SymCryptParallelSha256Algorithm_default + 10);
        if ( v10 == *(_QWORD *)(v4 + 24) )
        {
          *(_QWORD *)(a2 + 24) = *(_QWORD *)(v4 + 32);
        }
        else
        {
          *(_BYTE *)(a2 + 8) = 1;
          *(_BYTE *)(a2 + 9) = v10;
        }
        *v2 = 0;
        return 1;
      }
      *(_QWORD *)(a2 + 24) = *(_QWORD *)(v4 + 32);
    }
    else
    {
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(v4 + 16);
      v11 = *(_QWORD *)(v4 + 24);
      *(_QWORD *)(a2 + 40) = v11;
      *(_BYTE *)(a2 + 8) = 2;
      if ( v11 >= *((unsigned int *)SymCryptParallelSha256Algorithm_default + 10) )
        return 1;
    }
  }
}
