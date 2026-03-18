/*
 * XREFs of ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800ACBEC
 * Callers:
 *     ?GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800090D0 (-GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 *     ?IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z @ 0x180034BA8 (-IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z.c)
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x180036330 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z @ 0x1800363E8 (-IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180074CC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800A30CC (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x18011C700 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
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
