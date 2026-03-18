/*
 * XREFs of ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800087A0
 * Callers:
 *     ?GetImageTransformForDirtyRects@CVisual@@KA_NPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x180003578 (-GetImageTransformForDirtyRects@CVisual@@KA_NPEAVIImageSource@@PEAVCMILMatrix@@@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180006BFC (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV-$TMilR.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180086E58 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
        CCompositionSurfaceBitmap *this,
        struct IBitmapRealization **a2)
{
  unsigned int v4; // ebx
  unsigned int (__fastcall *v5)(CBitmapOfDeviceBitmaps *__hidden); // rbp
  __int64 v6; // rax
  struct IBitmapRealization *v7; // rax

  v4 = 0;
  *a2 = 0LL;
  if ( CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)((char *)this - 40), 0) )
  {
    v5 = *(unsigned int (__fastcall **)(CBitmapOfDeviceBitmaps *__hidden))(**((_QWORD **)this + 50) + 8LL);
    if ( v5 == CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef(*((CBitmapOfDeviceBitmaps **)this + 50));
    else
      v5(*((CBitmapOfDeviceBitmaps **)this + 50));
    v6 = *((_QWORD *)this + 50);
    if ( v6 )
      v7 = (struct IBitmapRealization *)(v6 + 112);
    else
      v7 = 0LL;
    *a2 = v7;
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x166u);
  }
  return v4;
}
