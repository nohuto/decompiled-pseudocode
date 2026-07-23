/*
 * XREFs of PpmPerfApplyLatencyHint @ 0x140110B88
 * Callers:
 *     PpmPerfApplyLatencyHints @ 0x1400D3050 (PpmPerfApplyLatencyHints.c)
 * Callees:
 *     PpmGetHeterogeneousClass @ 0x1400D1E68 (PpmGetHeterogeneousClass.c)
 */

__int64 __fastcall PpmPerfApplyLatencyHint(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 HeterogeneousClass; // rcx
  int v4; // r8d
  __int64 v5; // r10
  __int64 result; // rax
  __int64 v7; // r9
  unsigned int v8; // r11d
  unsigned int v9; // r9d
  __int64 v10; // rdx

  v1 = *(_QWORD *)(a1 + 24184);
  v2 = *(_QWORD *)(v1 + 8);
  HeterogeneousClass = PpmGetHeterogeneousClass(a1);
  result = (unsigned int)(v4 - 1);
  v8 = *(unsigned __int8 *)(HeterogeneousClass + v7 + 105);
  if ( (result & 0xFFFFFFFD) != 0 )
  {
    result = (unsigned int)(v4 - 5);
    if ( (unsigned int)result <= 1 || PpmPerfBoostAtGuaranteed )
      v9 = *(_DWORD *)(v1 + 32);
    else
      v9 = 100;
  }
  else
  {
    v9 = *(_DWORD *)(v5 + 304);
  }
  v10 = v9;
  if ( v8 < v9 )
    v10 = v8;
  if ( (unsigned int)v10 > *(_DWORD *)(v1 + 56) )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v5 + 272))(v2, v10, *(unsigned int *)(v5 + 312));
    *(_DWORD *)(v1 + 56) = result;
  }
  return result;
}
