/*
 * XREFs of ??_GCHDRConvertLayer@@UEAAPEAXI@Z @ 0x180121540
 * Callers:
 *     ?PushHDRConversionLayer@CDrawingContext@@AEAAJXZ @ 0x1801245B4 (-PushHDRConversionLayer@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CHDRConvertLayer@@UEAA@XZ @ 0x180121360 (--1CHDRConvertLayer@@UEAA@XZ.c)
 */

CHDRConvertLayer *__fastcall CHDRConvertLayer::`scalar deleting destructor'(CHDRConvertLayer *this, char a2)
{
  CHDRConvertLayer::~CHDRConvertLayer(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHDRConvertLayer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
