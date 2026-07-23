/*
 * XREFs of KiUserExceptionDispatcher @ 0x1800AA000
 * Callers:
 *     <none>
 * Callees:
 *     RtlDispatchException @ 0x1800349B0 (RtlDispatchException.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180085D10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlGuardRestoreContext @ 0x180087030 (RtlGuardRestoreContext.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A8E70 (ZwRaiseException.c)
 */

void __noreturn KiUserExceptionDispatcher()
{
  NTSTATUS v0; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( Wow64PrepareForException )
    ((void (__fastcall *)(unsigned __int64 *, _UNKNOWN **))Wow64PrepareForException)(&STACK[0x4F0], &retaddr);
  if ( RtlDispatchException((PEXCEPTION_RECORD)&STACK[0x4F0], (PCONTEXT)&retaddr) )
    RtlGuardRestoreContext((PCONTEXT)&retaddr, 0LL);
  else
    v0 = ZwRaiseException((PEXCEPTION_RECORD)&STACK[0x4F0], (PCONTEXT)&retaddr, 0);
  RtlRaiseStatus(v0);
}
