/*
 * XREFs of __security_check_cookie @ 0x1C0002AA0
 * Callers:
 *     CiSchedulerWait @ 0x1C0001630 (CiSchedulerWait.c)
 *     CiSchedulerSetTaskIndexMode @ 0x1C0001E30 (CiSchedulerSetTaskIndexMode.c)
 *     __GSHandlerCheckCommon @ 0x1C0002B00 (__GSHandlerCheckCommon.c)
 *     CiLogSchedulerEvent @ 0x1C00036D0 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C00037A4 (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C000381C (CiLogSchedulerWakeup.c)
 *     CiLogSetTaskIndexMode @ 0x1C0003880 (CiLogSetTaskIndexMode.c)
 *     CiLogTaskIndexCancelYield @ 0x1C00038F4 (CiLogTaskIndexCancelYield.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0003954 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexYield @ 0x1C00039B4 (CiLogTaskIndexYield.c)
 *     CiLogThreadBuffering @ 0x1C0003A28 (CiLogThreadBuffering.c)
 *     CiLogThreadJoin @ 0x1C0003AA8 (CiLogThreadJoin.c)
 *     CiLogThreadLeave @ 0x1C0003BDC (CiLogThreadLeave.c)
 *     CiLogTurboEngaged @ 0x1C0003C68 (CiLogTurboEngaged.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000A2A0 (CiCreateTaskIndexClientFromThread.c)
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
