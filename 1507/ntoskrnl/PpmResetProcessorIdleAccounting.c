/*
 * XREFs of PpmResetProcessorIdleAccounting @ 0x140168BC0
 * Callers:
 *     PoIdle @ 0x1400A7600 (PoIdle.c)
 *     PpmResetIdlePolicy @ 0x140168B78 (PpmResetIdlePolicy.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall PpmResetProcessorIdleAccounting(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebp
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax

  v2 = *a1;
  v4 = a1[2];
  memset(a1, 0, 984 * *a1 + 40);
  if ( v2 )
  {
    v6 = a1 + 50;
    v7 = v2;
    do
    {
      *(v6 - 17) = -1LL;
      v8 = v6;
      v9 = 26LL;
      do
      {
        *v8 = -1LL;
        v8 += 4;
        --v9;
      }
      while ( v9 );
      v6 += 123;
      --v7;
    }
    while ( v7 );
  }
  a1[8] = 0;
  result = v4 + 1;
  *((_QWORD *)a1 + 2) = a2;
  a1[2] = result;
  *a1 = v2;
  return result;
}
