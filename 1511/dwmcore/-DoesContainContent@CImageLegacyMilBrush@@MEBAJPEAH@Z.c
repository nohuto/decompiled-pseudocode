/*
 * XREFs of ?DoesContainContent@CImageLegacyMilBrush@@MEBAJPEAH@Z @ 0x18005A1D0
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18005CEA0 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?HasContent@CCachedVisualImage@@UEBA_NXZ @ 0x18005B530 (-HasContent@CCachedVisualImage@@UEBA_NXZ.c)
 */

__int64 __fastcall CImageLegacyMilBrush::DoesContainContent(CImageLegacyMilBrush *this, int *a2)
{
  __int64 v3; // rdi
  bool (__fastcall *v4)(CCachedVisualImage *__hidden); // rsi
  bool HasContent; // al

  *a2 = 0;
  v3 = *((_QWORD *)this + 64);
  if ( v3 )
  {
    v4 = *(bool (__fastcall **)(CCachedVisualImage *__hidden))(*(_QWORD *)(v3 + 8) + 80LL);
    if ( v4 == CCachedVisualImage::HasContent )
      HasContent = CCachedVisualImage::HasContent((CCachedVisualImage *)(v3 + 8));
    else
      HasContent = v4((CCachedVisualImage *)(v3 + 8));
    if ( HasContent )
      *a2 = 1;
  }
  return 0LL;
}
