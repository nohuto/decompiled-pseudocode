/*
 * XREFs of SymCryptParallelHashProcess @ 0x140237378
 * Callers:
 *     SymCryptParallelSha256Process @ 0x140237160 (SymCryptParallelSha256Process.c)
 * Callees:
 *     qsort @ 0x14014E520 (qsort.c)
 *     SymCryptWipeAsm @ 0x140159710 (SymCryptWipeAsm.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SymCryptParallelSha256Append @ 0x140235CD4 (SymCryptParallelSha256Append.c)
 *     SymCryptParallelHashSetNextWork @ 0x1402377EC (SymCryptParallelHashSetNextWork.c)
 */

void __fastcall SymCryptParallelHashProcess(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  size_t v11; // r8
  unsigned __int64 v12; // rbp
  _QWORD *v13; // rdi
  unsigned __int64 v14; // r13
  _QWORD *v15; // rcx
  size_t v16; // rbx
  unsigned __int64 *i; // rdx
  unsigned __int64 v18; // r8
  int v19; // eax
  unsigned __int64 v20; // rax
  char v21; // bp
  size_t v22; // rsi
  __int64 v23; // r15
  _QWORD *v24; // r14
  unsigned __int64 v25; // rsi
  __int64 *v26; // r14
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 j; // rbp
  __int64 v32; // rdx
  __int64 v33; // rax

  if ( a5 )
  {
    v11 = 48 * a3;
    v12 = (a6 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v13 = (_QWORD *)(v11 + v12);
    v14 = (v11 + v12 + 8 * a3 + 31) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v14 + 2432 > a6 + 2926 )
      KeBugCheckEx(0x171u, 0x7073322EuLL, 0LL, 0LL, 0LL);
    memset((void *)((a6 + 15) & 0xFFFFFFFFFFFFFFF0uLL), 0, v11);
    v16 = 0LL;
    for ( i = (unsigned __int64 *)(a4 + 40 * a5); (unsigned __int64)i > a4; v15[3] = i )
    {
      i -= 5;
      v18 = *i;
      if ( *i >= a3 )
        KeBugCheckEx(0x171u, 0x70733278uLL, 0LL, 0LL, 0LL);
      v15 = (_QWORD *)(v12 + 48 * v18);
      if ( !*v15 )
      {
        *v15 = a2 + v18 * *((unsigned int *)SymCryptParallelSha256Algorithm_default + 8);
        v13[v16++] = v15;
      }
      v19 = *((_DWORD *)i + 2);
      if ( v19 == 1 )
      {
        v20 = i[3];
      }
      else
      {
        if ( v19 != 2 )
          KeBugCheckEx(0x171u, 0x70733279uLL, 0LL, 0LL, 0LL);
        v20 = *((unsigned int *)SymCryptParallelSha256Algorithm_default + 10);
      }
      v15[2] += v20;
      i[4] = v15[3];
    }
    v21 = 1;
    v22 = 0LL;
    v23 = *(_QWORD *)(*v13 + 16LL);
    if ( v16 )
    {
      v24 = &v13[v16 - 1];
      do
      {
        if ( (unsigned __int8)SymCryptParallelHashSetNextWork(v15, v13[v22]) )
        {
          if ( *(_QWORD *)(v13[v22] + 16LL) != v23 )
            v21 = 0;
          ++v22;
        }
        else
        {
          --v16;
          v13[v22] = *v24--;
        }
      }
      while ( v22 < v16 );
      if ( !v21 )
        qsort(v13, v16, 8uLL, compareRequestSize);
    }
    v25 = a8;
    if ( v16 < a8 )
      v25 = v16;
    v26 = &v13[v25];
    while ( v16 )
    {
      v27 = 1LL;
      v28 = *(_QWORD *)(*v13 + 40LL);
      while ( v27 < v25 )
      {
        v29 = v13[v27];
        if ( v28 >= *(_QWORD *)(v29 + 40) )
          v28 = *(_QWORD *)(v29 + 40);
        ++v27;
      }
      SymCryptParallelSha256Append(
        (__int64)v13,
        v25,
        (unsigned int)v28 & ~(*((_DWORD *)SymCryptParallelSha256Algorithm_default + 10) - 1),
        v14);
      for ( j = 0LL; j < v25; ++j )
      {
        v32 = v13[j];
        if ( *(_QWORD *)(v32 + 40) < (unsigned __int64)*((unsigned int *)SymCryptParallelSha256Algorithm_default + 10)
          && !(unsigned __int8)SymCryptParallelHashSetNextWork(v30, v32) )
        {
          if ( v16 <= v25 )
          {
            v13[j--] = v13[--v25];
          }
          else
          {
            v33 = *v26++;
            v13[j] = v33;
          }
          --v16;
        }
      }
    }
    SymCryptWipeAsm(v14, 0x980uLL);
  }
}
