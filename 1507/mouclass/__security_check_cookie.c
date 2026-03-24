/*
 * XREFs of __security_check_cookie @ 0x1C00029E0
 * Callers:
 *     MouseStart @ 0x1C00025B0 (MouseStart.c)
 *     __GSHandlerCheckCommon @ 0x1C0002A40 (__GSHandlerCheckCommon.c)
 *     MouseClassFindMorePorts @ 0x1C000B120 (MouseClassFindMorePorts.c)
 *     MouCreateClassObject @ 0x1C000B850 (MouCreateClassObject.c)
 *     MouseClassGetWaitWakeEnableState @ 0x1C000BD40 (MouseClassGetWaitWakeEnableState.c)
 *     DriverEntry @ 0x1C000E390 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
