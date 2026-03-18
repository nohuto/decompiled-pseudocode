/*
 * XREFs of ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x1800129A0
 * Callers:
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x180003E44 (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x180013858 (--1CExternalLayer@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
