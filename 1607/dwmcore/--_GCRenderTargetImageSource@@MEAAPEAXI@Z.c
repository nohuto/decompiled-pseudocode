/*
 * XREFs of ??_GCRenderTargetImageSource@@MEAAPEAXI@Z @ 0x180131AF4
 * Callers:
 *     ??_ECRenderTargetImageSource@@O7EAAPEAXI@Z @ 0x1800BFF60 (--_ECRenderTargetImageSource@@O7EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CRenderTargetImageSource@@MEAA@XZ @ 0x180131A54 (--1CRenderTargetImageSource@@MEAA@XZ.c)
 */

CRenderTargetImageSource *__fastcall CRenderTargetImageSource::`scalar deleting destructor'(
        CRenderTargetImageSource *this,
        char a2)
{
  CRenderTargetImageSource::~CRenderTargetImageSource(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CRenderTargetImageSource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
