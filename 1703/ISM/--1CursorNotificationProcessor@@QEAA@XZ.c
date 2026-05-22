/*
 * XREFs of ??1CursorNotificationProcessor@@QEAA@XZ @ 0x18000CFA8
 * Callers:
 *     ??_EWin32kInterop@@UEAAPEAXI@Z @ 0x18000ACB4 (--_EWin32kInterop@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CursorNotificationProcessor::~CursorNotificationProcessor(CursorNotificationProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _QWORD *v4; // rcx

  if ( *((_DWORD *)this + 4) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
  if ( *((_DWORD *)this + 8) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
  v2 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *(_QWORD **)this;
  *(_QWORD *)this = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
}
