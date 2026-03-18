/*
 * XREFs of ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x180071370
 * Callers:
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180027F54 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M@Z @ 0x1800281B8 (-PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CD2DLayer *__fastcall CD2DLayer::`scalar deleting destructor'(CD2DLayer *this, char a2)
{
  __int64 v2; // rsi
  void (__fastcall *v5)(WPF::ProcessHeapImpl *, void *); // rsi

  v2 = *((_QWORD *)this + 3);
  *(_QWORD *)this = &CD2DLayer::`vftable';
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *(_QWORD *)this = &CLayer::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v5 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v5 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v5(WPF::g_pProcessHeap, this);
  }
  return this;
}
