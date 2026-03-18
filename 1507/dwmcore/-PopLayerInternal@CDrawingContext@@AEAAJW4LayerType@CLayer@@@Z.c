/*
 * XREFs of ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180027F54
 * Callers:
 *     ?PopLayer@CDrawingContext@@AEAAJXZ @ 0x180028020 (-PopLayer@CDrawingContext@@AEAAJXZ.c)
 *     ?FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@W4Enum@MilCompositingMode@@@Z @ 0x18002A884 (-FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV-$CMatrix@UBaseSampling@Coor.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18002DFF8 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18002EDE0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180071210 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x180071370 (--_GCD2DLayer@@UEAAPEAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::PopLayerInternal(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v2; // r8
  CD2DLayer *v3; // rbx
  int v4; // edx
  __int64 (__fastcall *v5)(CD2DLayer *__hidden, struct CDrawingContext *); // rsi
  int v6; // eax
  void *(__fastcall *v7)(CD2DLayer *__hidden, unsigned int); // rdi

  v1 = 0;
  v2 = (unsigned int)(*(_DWORD *)(a1 + 544) - 1);
  v3 = *(CD2DLayer **)(*(_QWORD *)(a1 + 520) + 8 * v2);
  *(_DWORD *)(a1 + 544) = v2;
  v4 = *(_DWORD *)(a1 + 608);
  if ( v4 && *(CD2DLayer **)(*(_QWORD *)(a1 + 584) + 8LL * (unsigned int)(v4 - 1)) == v3 )
  {
    *(_DWORD *)(a1 + 608) = v4 - 1;
  }
  else
  {
    v5 = *(__int64 (__fastcall **)(CD2DLayer *__hidden, struct CDrawingContext *))(*(_QWORD *)v3 + 24LL);
    if ( v5 == CD2DLayer::RestoreState )
      v6 = CD2DLayer::RestoreState(v3, (struct CDrawingContext *)a1);
    else
      v6 = v5(v3, (struct CDrawingContext *)a1);
    v1 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1883u);
  }
  if ( v3 )
  {
    v7 = **(void *(__fastcall ***)(CD2DLayer *__hidden, unsigned int))v3;
    if ( v7 == CD2DLayer::`scalar deleting destructor' )
      CD2DLayer::`scalar deleting destructor'(v3, 1u);
    else
      v7(v3, 1u);
  }
  return v1;
}
