/*
 * XREFs of _GetMagnificationInputTransform @ 0x1C02039A8
 * Callers:
 *     MagGetLensContextInformation @ 0x1C01FD4FC (MagGetLensContextInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMagnificationInputTransform(__int64 a1)
{
  __int64 v1; // rax
  _OWORD *v2; // rdx
  __int64 result; // rax
  __int128 v4; // xmm1

  v1 = *(_QWORD *)(gptiCurrent + 416LL);
  v2 = *(_OWORD **)(v1 + 208);
  if ( !v2 )
    return 0LL;
  *(_OWORD *)a1 = *v2;
  v4 = *(_OWORD *)(*(_QWORD *)(v1 + 208) + 16LL);
  *(_DWORD *)(a1 + 32) = 0;
  result = 1LL;
  *(_OWORD *)(a1 + 16) = v4;
  return result;
}
