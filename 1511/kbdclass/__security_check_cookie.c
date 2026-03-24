/*
 * XREFs of __security_check_cookie @ 0x1C0002DC0
 * Callers:
 *     KeyboardStart @ 0x1C0002440 (KeyboardStart.c)
 *     __GSHandlerCheckCommon @ 0x1C0002E20 (__GSHandlerCheckCommon.c)
 *     KeyboardClassFindMorePorts @ 0x1C000C000 (KeyboardClassFindMorePorts.c)
 *     KbdCreateClassObject @ 0x1C000CA30 (KbdCreateClassObject.c)
 *     KeyboardClassGetWaitWakeEnableState @ 0x1C000D030 (KeyboardClassGetWaitWakeEnableState.c)
 *     DriverEntry @ 0x1C000F020 (DriverEntry.c)
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
