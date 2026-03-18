/*
 * XREFs of ??_GCRenderTargetManager@@EEAAPEAXI@Z @ 0x18011B090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CRenderTargetManager@@EEAA@XZ @ 0x18011B048 (--1CRenderTargetManager@@EEAA@XZ.c)
 */

CRenderTargetManager *__fastcall CRenderTargetManager::`scalar deleting destructor'(
        CRenderTargetManager *this,
        char a2)
{
  CRenderTargetManager::~CRenderTargetManager(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CRenderTargetManager *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
