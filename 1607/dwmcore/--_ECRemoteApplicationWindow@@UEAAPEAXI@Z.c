/*
 * XREFs of ??_ECRemoteApplicationWindow@@UEAAPEAXI@Z @ 0x180164CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CRemoteApplicationWindow@@UEAA@XZ @ 0x180164CA0 (--1CRemoteApplicationWindow@@UEAA@XZ.c)
 */

CRemoteApplicationWindow *__fastcall CRemoteApplicationWindow::`vector deleting destructor'(
        CRemoteApplicationWindow *this,
        char a2)
{
  CRemoteApplicationWindow::~CRemoteApplicationWindow(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CRemoteApplicationWindow *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
