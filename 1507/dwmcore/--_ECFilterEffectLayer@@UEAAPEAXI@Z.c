/*
 * XREFs of ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x180001800
 * Callers:
 *     ?PushFilterEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCFilterEffect@@@Z @ 0x1800104D0 (-PushFilterEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x180001B88 (--1CExternalLayer@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CFilterEffectLayer *__fastcall CFilterEffectLayer::`vector deleting destructor'(CFilterEffectLayer *this, char a2)
{
  *(_QWORD *)this = &CFilterEffectLayer::`vftable';
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CFilterEffectLayer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
