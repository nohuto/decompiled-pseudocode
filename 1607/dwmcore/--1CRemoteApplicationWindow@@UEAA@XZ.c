/*
 * XREFs of ??1CRemoteApplicationWindow@@UEAA@XZ @ 0x180164CA0
 * Callers:
 *     ??_ECRemoteApplicationWindow@@UEAAPEAXI@Z @ 0x180164CE0 (--_ECRemoteApplicationWindow@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRemoteApplicationWindow::~CRemoteApplicationWindow(CRemoteApplicationWindow *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CRemoteApplicationWindow::`vftable';
  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    DeleteObject(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
