/*
 * XREFs of ?get_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x18002D180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActivatedEventArgsWithViewIdBase::get_ActivationViewSwitcher(RTL_SRWLOCK *this, PVOID *a2)
{
  RTL_SRWLOCK *v2; // rdi
  unsigned int v5; // ebx
  PVOID Ptr; // rcx

  v2 = this + 5;
  AcquireSRWLockShared(this + 5);
  *a2 = 0LL;
  v5 = this[2].Ptr == 0LL ? 0x80004002 : 0;
  if ( this[2].Ptr )
  {
    Ptr = this[2].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v5 = 0;
    *a2 = this[2].Ptr;
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v5;
}
