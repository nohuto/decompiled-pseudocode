/*
 * XREFs of ?ComputeAverageCursorVelocity@CursorAttraction@@AEAA?AUXMFLOAT2@DirectX@@XZ @ 0x180036098
 * Callers:
 *     ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x180035CCC (-ApplyCursorAttraction@CursorAttraction@@QEAA-AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall CursorAttraction::ComputeAverageCursorVelocity(__int64 a1, float *a2)
{
  int v2; // ebx
  int v4; // edi
  __int64 v5; // rbp
  unsigned int v6; // r10d
  __int64 v7; // r8
  __int64 v8; // rcx
  float *result; // rax

  v2 = 0;
  v4 = 0;
  v5 = 9LL;
  v6 = (*(_DWORD *)(a1 + 48) + 1) % 0xAu;
  do
  {
    v7 = (v6 + 1) % 0xA;
    v8 = v6 % 0xA;
    ++v6;
    v2 += *(_DWORD *)(a1 + 8 * v7 + 52) - *(_DWORD *)(a1 + 8 * v8 + 52);
    v4 += *(_DWORD *)(a1 + 8 * v7 + 56) - *(_DWORD *)(a1 + 8 * v8 + 56);
    --v5;
  }
  while ( v5 );
  result = a2;
  *a2 = (float)v2 / 10.0;
  a2[1] = (float)v4 / 10.0;
  return result;
}
