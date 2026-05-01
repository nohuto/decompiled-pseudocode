/*
 * XREFs of ?get_ViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x18002D110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActivatedEventArgsWithViewIdBase::get_ViewSwitcher(RTL_SRWLOCK *this, PVOID *a2)
{
  RTL_SRWLOCK *v2; // rdi
  PVOID Ptr; // rcx

  v2 = this + 7;
  AcquireSRWLockShared(this + 7);
  *a2 = 0LL;
  if ( this[4].Ptr )
  {
    Ptr = this[4].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    *a2 = this[4].Ptr;
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
