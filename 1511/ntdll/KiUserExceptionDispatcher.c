/*
 * XREFs of KiUserExceptionDispatcher @ 0x1800A8BC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDispatchException @ 0x180034C40 (RtlDispatchException.c)
 *     RtlGuardRestoreContext @ 0x18007D980 (RtlGuardRestoreContext.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A7A90 (ZwRaiseException.c)
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
