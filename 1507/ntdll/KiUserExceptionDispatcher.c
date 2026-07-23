/*
 * XREFs of KiUserExceptionDispatcher @ 0x180095830
 * Callers:
 *     <none>
 * Callees:
 *     RtlDispatchException @ 0x180013890 (RtlDispatchException.c)
 *     RtlGuardRestoreContext @ 0x1800718D0 (RtlGuardRestoreContext.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x180094DC0 (ZwRaiseException.c)
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
