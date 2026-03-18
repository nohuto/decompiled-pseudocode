/*
 * XREFs of ??_GCBlurLayer@@UEAAPEAXI@Z @ 0x18014EE20
 * Callers:
 *     ?UpdateCVI@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014FE1C (-UpdateCVI@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x180013858 (--1CExternalLayer@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CBlurLayer *__fastcall CBlurLayer::`scalar deleting destructor'(CBlurLayer *this, char a2)
{
  *(_QWORD *)this = &CBlurLayer::`vftable';
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBlurLayer *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
