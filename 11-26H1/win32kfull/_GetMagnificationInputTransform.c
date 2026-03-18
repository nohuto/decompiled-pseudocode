/*
 * XREFs of _GetMagnificationInputTransform @ 0x14025171C
 * Callers:
 *     MagGetLensContextInformation @ 0x1401EA86C (MagGetLensContextInformation.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetMagnificationInputTransform(__int64 a1)
{
  __int64 v2; // rax
  _OWORD *v3; // rcx
  __int64 result; // rax
  __int128 v5; // xmm1

  v2 = *((_QWORD *)PtiCurrent(a1) + 61);
  v3 = *(_OWORD **)(v2 + 224);
  if ( !v3 )
    return 0LL;
  *(_OWORD *)a1 = *v3;
  v5 = *(_OWORD *)(*(_QWORD *)(v2 + 224) + 16LL);
  *(_DWORD *)(a1 + 32) = 0;
  result = 1LL;
  *(_OWORD *)(a1 + 16) = v5;
  return result;
}
