/*
 * XREFs of ??_GCCompositionSurfaceManager@@MEAAPEAXI@Z @ 0x18011B7F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CCompositionSurfaceManager@@MEAA@XZ @ 0x18011B550 (--1CCompositionSurfaceManager@@MEAA@XZ.c)
 */

CCompositionSurfaceManager *__fastcall CCompositionSurfaceManager::`scalar deleting destructor'(
        CCompositionSurfaceManager *this,
        char a2)
{
  CCompositionSurfaceManager::~CCompositionSurfaceManager(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCompositionSurfaceManager *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
