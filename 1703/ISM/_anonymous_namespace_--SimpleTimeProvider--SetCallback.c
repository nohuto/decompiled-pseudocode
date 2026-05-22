/*
 * XREFs of _anonymous_namespace_::SimpleTimeProvider::SetCallback @ 0x180099370
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::SimpleTimeProvider::SetCallback(struct _RTL_CRITICAL_SECTION *a1, HANDLE a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  HANDLE LockSemaphore; // rcx

  v2 = a1 + 2;
  EnterCriticalSection(a1 + 2);
  if ( a1[1].LockSemaphore != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(HANDLE))(*(_QWORD *)a2 + 8LL))(a2);
    LockSemaphore = a1[1].LockSemaphore;
    a1[1].LockSemaphore = a2;
    if ( LockSemaphore )
      (*(void (__fastcall **)(HANDLE))(*(_QWORD *)LockSemaphore + 16LL))(LockSemaphore);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
