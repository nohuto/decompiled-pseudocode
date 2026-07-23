/*
 * XREFs of PpmResetProcessorIdleAccounting @ 0x1401461FC
 * Callers:
 *     PoIdle @ 0x1400D7DE0 (PoIdle.c)
 *     PpmResetIdlePolicy @ 0x1401461C4 (PpmResetIdlePolicy.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall PpmResetProcessorIdleAccounting(char *a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // r15d
  char *v6; // rsi
  __int64 v7; // rbp
  char *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // r8
  __int64 result; // rax

  v2 = *(unsigned int *)a1;
  v4 = *((_DWORD *)a1 + 2);
  memset(a1, 0, 0x28uLL);
  if ( (_DWORD)v2 )
  {
    v6 = a1 + 200;
    v7 = (unsigned int)v2;
    do
    {
      memset(a1, 0, 0x28uLL);
      memset(v6, 0, 0x340uLL);
      v6 += 992;
      --v7;
    }
    while ( v7 );
    v8 = a1 + 208;
    v9 = v2;
    do
    {
      *((_QWORD *)v8 - 18) = -1LL;
      v10 = v8;
      v11 = 26LL;
      do
      {
        *v10 = -1LL;
        v10 += 4;
        --v11;
      }
      while ( v11 );
      v8 += 992;
      --v9;
    }
    while ( v9 );
  }
  *((_DWORD *)a1 + 8) = 0;
  result = (unsigned int)(v4 + 1);
  *((_DWORD *)a1 + 2) = result;
  *(_DWORD *)a1 = v2;
  *((_QWORD *)a1 + 2) = a2;
  return result;
}
