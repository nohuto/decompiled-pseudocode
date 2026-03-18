/*
 * XREFs of ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x1800039BC
 * Callers:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180003A7C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@W4Enum@MilCompositingMode@@@Z @ 0x180004604 (-FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV-$CMatrix@UBaseSampling@Coor.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18006BB68 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18006D600 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180005880 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x1800059B0 (--_GCD2DLayer@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PopLayerInternal(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // r8
  CD2DLayer *v3; // rbx
  int v4; // edx
  __int64 (__fastcall *v5)(CD2DLayer *__hidden, struct CDrawingContext *); // rax
  int v6; // eax
  void *(__fastcall *v7)(CD2DLayer *__hidden, unsigned int); // rax

  v1 = 0;
  v2 = (unsigned int)(*(_DWORD *)(a1 + 624) - 1);
  v3 = *(CD2DLayer **)(*(_QWORD *)(a1 + 600) + 8 * v2);
  *(_DWORD *)(a1 + 624) = v2;
  v4 = *(_DWORD *)(a1 + 688);
  if ( v4 && *(CD2DLayer **)(*(_QWORD *)(a1 + 664) + 8LL * (unsigned int)(v4 - 1)) == v3 )
  {
    *(_DWORD *)(a1 + 688) = v4 - 1;
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x189Fu);
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
