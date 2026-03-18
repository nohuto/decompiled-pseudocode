/*
 * XREFs of ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18008320C
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18004AC20 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18004ADC0 (-EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJPEAVCMILFactory@@U-$TMILFlagsEnum@W4FlagsEnum@MilR.c)
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x180055580 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z @ 0x180055628 (-IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z.c)
 *     ?NeedsBlackBars@CDisplay@@QEBA_NXZ @ 0x180057B98 (-NeedsBlackBars@CDisplay@@QEBA_NXZ.c)
 *     ?IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z @ 0x18005817C (-IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z.c)
 *     ?IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z @ 0x18008CECC (-IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18000DD28 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x18008E020 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(_DWORD *a1, _DWORD *a2)
{
  char v2; // dl
  _DWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8

  if ( *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3]
    || TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(a1)
    && TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v4)
    || (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v5)
    && (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v6) )
  {
    return 1;
  }
  return v2;
}
