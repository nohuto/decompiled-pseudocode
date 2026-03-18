/*
 * XREFs of Interrupter_DetermineSegmentSizeAndCount @ 0x1C004B398
 * Callers:
 *     Interrupter_PrepareInterrupter @ 0x1C004B430 (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Interrupter_DetermineSegmentSizeAndCount(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // r10d
  unsigned int v3; // edx
  unsigned int v4; // r8d
  __int64 result; // rax
  bool v6; // cf

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(*(_QWORD *)(v1 + 80) + 92LL);
  v3 = *(_DWORD *)(v1 + 376);
  v4 = (*(_QWORD *)(v1 + 232) & 0x10000000LL) != 0 ? 8 : 4;
  if ( v2 < v4 )
    v4 = *(_DWORD *)(*(_QWORD *)(v1 + 80) + 92LL);
  if ( v3 - 1 <= 0xFFFFFFFD )
  {
    v6 = v3 < v4;
    v4 = *(_DWORD *)(v1 + 376);
    if ( !v6 && v2 < v3 )
      v4 = *(_DWORD *)(*(_QWORD *)(v1 + 80) + 92LL);
  }
  if ( v4 > 2 && (*(_QWORD *)(v1 + 232) & 0x1000000000000LL) != 0 )
    v4 = 2;
  *(_DWORD *)(a1 + 116) = v4;
  *(_DWORD *)(a1 + 120) = v4;
  if ( *(_DWORD *)(v1 + 380) == 512 )
    *(_DWORD *)(a1 + 112) = 512;
  else
    *(_DWORD *)(a1 + 112) = 4096;
  result = *(_DWORD *)(a1 + 112) >> 4;
  *(_DWORD *)(a1 + 124) = result;
  return result;
}
