/*
 * XREFs of ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x1800107A0
 * Callers:
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x18000DE94 (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18003CA58 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x180010BE4 (--1CExternalLayer@@UEAA@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

CLinearInterpolationLayer *__fastcall CLinearInterpolationLayer::`scalar deleting destructor'(
        CLinearInterpolationLayer *this,
        char a2)
{
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  *(_QWORD *)this = &CLinearInterpolationLayer::`vftable';
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CLinearInterpolationLayer *))v4)(WPF::g_pProcessHeap, this);
  }
  return this;
}
