/*
 * XREFs of ??0?$CMergedRectBase@$01@@QEAA@XZ @ 0x180126204
 * Callers:
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x1801266D4 (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

TemporaryConfiguration *__fastcall CMergedRectBase<2>::CMergedRectBase<2>(TemporaryConfiguration *a1)
{
  TemporaryConfiguration *result; // rax

  `vector constructor iterator'(
    a1,
    16LL,
    2LL,
    (void (__fastcall *)(TemporaryConfiguration *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  memset_0(a1, 0, 0x2CuLL);
  result = a1;
  *((_DWORD *)a1 + 9) = 1;
  return result;
}
