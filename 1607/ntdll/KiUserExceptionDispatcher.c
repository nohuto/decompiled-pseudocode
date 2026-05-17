/*
 * XREFs of KiUserExceptionDispatcher @ 0x1800AA000
 * Callers:
 *     <none>
 * Callees:
 *     RtlDispatchException @ 0x1800349C0 (RtlDispatchException.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180085D20 (RtlEndStrongEnumerationHashTable.c)
 *     RtlGuardRestoreContext @ 0x180087040 (RtlGuardRestoreContext.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A8E70 (ZwRaiseException.c)
 */

void __noreturn KiUserExceptionDispatcher()
{
  int v0; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( Wow64PrepareForException )
    Wow64PrepareForException(&STACK[0x4F0], &retaddr);
  if ( (unsigned __int8)RtlDispatchException((__int64)&STACK[0x4F0], (__int64)&retaddr) )
    RtlGuardRestoreContext((PCONTEXT)&retaddr, 0LL);
  else
    v0 = ZwRaiseException();
  RtlRaiseStatus(v0);
}
