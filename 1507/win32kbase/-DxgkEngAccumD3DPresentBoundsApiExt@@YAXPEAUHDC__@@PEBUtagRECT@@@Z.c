/*
 * XREFs of ?DxgkEngAccumD3DPresentBoundsApiExt@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C00B5890
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngAccumD3DPresentBoundsSupported_0 @ 0x1C0001558 (IsDxgkEngAccumD3DPresentBoundsSupported_0.c)
 *     DxgkEngAccumD3DPresentBounds_0 @ 0x1C0001560 (DxgkEngAccumD3DPresentBounds_0.c)
 */

void __fastcall DxgkEngAccumD3DPresentBoundsApiExt(HDC a1, const struct tagRECT *a2)
{
  if ( (int)IsDxgkEngAccumD3DPresentBoundsSupported_0() >= 0 )
    DxgkEngAccumD3DPresentBounds_0();
}
