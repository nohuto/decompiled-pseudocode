/*
 * XREFs of ??_EWin32kInterop@@UEAAPEAXI@Z @ 0x18000ACB4
 * Callers:
 *     ??_EWin32kInterop@@WBA@EAAPEAXI@Z @ 0x18000CD20 (--_EWin32kInterop@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1CursorNotificationProcessor@@QEAA@XZ @ 0x18000CFA8 (--1CursorNotificationProcessor@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void **__fastcall Win32kInterop::`vector deleting destructor'(void **this, char a2)
{
  void *v4; // rcx
  void *v5; // rcx

  CursorNotificationProcessor::~CursorNotificationProcessor((CursorNotificationProcessor *)(this + 12));
  operator delete(this[7]);
  v4 = this[6];
  this[6] = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = this[5];
  this[5] = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  this[2] = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents((MPCMouseProcessor *)this);
    else
      free(this);
  }
  return this;
}
