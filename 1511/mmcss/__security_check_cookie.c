/*
 * XREFs of __security_check_cookie @ 0x1C00029E0
 * Callers:
 *     CiSchedulerSetTaskIndexMode @ 0x1C00015C0 (CiSchedulerSetTaskIndexMode.c)
 *     CiSchedulerThreadFunction @ 0x1C0001D60 (CiSchedulerThreadFunction.c)
 *     __GSHandlerCheckCommon @ 0x1C0002A40 (__GSHandlerCheckCommon.c)
 *     CiLogSchedulerEvent @ 0x1C00037B0 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C0003884 (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C00038FC (CiLogSchedulerWakeup.c)
 *     CiLogSetTaskIndexMode @ 0x1C0003960 (CiLogSetTaskIndexMode.c)
 *     CiLogTaskIndexCancelYield @ 0x1C00039D4 (CiLogTaskIndexCancelYield.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0003A34 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexYield @ 0x1C0003A94 (CiLogTaskIndexYield.c)
 *     CiLogThreadBuffering @ 0x1C0003B08 (CiLogThreadBuffering.c)
 *     CiLogThreadJoin @ 0x1C0003B88 (CiLogThreadJoin.c)
 *     CiLogThreadLeave @ 0x1C0003CBC (CiLogThreadLeave.c)
 *     CiLogTurboEngaged @ 0x1C0003D48 (CiLogTurboEngaged.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000AF20 (CiCreateTaskIndexClientFromThread.c)
 *     CiSystemThrottleNdis @ 0x1C000B520 (CiSystemThrottleNdis.c)
 *     CiConfigReadDWORD @ 0x1C000D5C0 (CiConfigReadDWORD.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000D640 (CiConfigInitializeFromRegistry.c)
 *     CiConfigQueryValue @ 0x1C000DA90 (CiConfigQueryValue.c)
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
