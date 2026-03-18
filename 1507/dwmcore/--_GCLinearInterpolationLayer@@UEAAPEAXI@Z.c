/*
 * XREFs of ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x1800F12F0
 * Callers:
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x1800F40AC (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x180001B88 (--1CExternalLayer@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CLinearInterpolationLayer *__fastcall CLinearInterpolationLayer::`scalar deleting destructor'(
        CLinearInterpolationLayer *this,
        char a2)
{
  *(_QWORD *)this = &CLinearInterpolationLayer::`vftable';
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CLinearInterpolationLayer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
