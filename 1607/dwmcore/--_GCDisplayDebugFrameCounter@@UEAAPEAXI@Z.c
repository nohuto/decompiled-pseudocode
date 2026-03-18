/*
 * XREFs of ??_GCDisplayDebugFrameCounter@@UEAAPEAXI@Z @ 0x180113EE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CDisplayDebugFrameCounter@@UEAA@XZ @ 0x180119444 (--1CDisplayDebugFrameCounter@@UEAA@XZ.c)
 */

CDisplayDebugFrameCounter *__fastcall CDisplayDebugFrameCounter::`scalar deleting destructor'(
        CDisplayDebugFrameCounter *this,
        char a2)
{
  CDisplayDebugFrameCounter::~CDisplayDebugFrameCounter(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDisplayDebugFrameCounter *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
