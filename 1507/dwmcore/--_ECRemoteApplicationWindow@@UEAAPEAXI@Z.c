/*
 * XREFs of ??_ECRemoteApplicationWindow@@UEAAPEAXI@Z @ 0x180125A50
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CRemoteApplicationWindow@@UEAA@XZ @ 0x180125A0C (--1CRemoteApplicationWindow@@UEAA@XZ.c)
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
