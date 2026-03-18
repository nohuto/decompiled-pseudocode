/*
 * XREFs of __security_check_cookie @ 0x1C0002BE0
 * Callers:
 *     CiSchedulerSetTaskIndexMode @ 0x1C00013B0 (CiSchedulerSetTaskIndexMode.c)
 *     CiSchedulerThreadFunction @ 0x1C0001E90 (CiSchedulerThreadFunction.c)
 *     __GSHandlerCheckCommon @ 0x1C0002C38 (__GSHandlerCheckCommon.c)
 *     CiLogSchedulerEvent @ 0x1C0003B38 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C0003C0C (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0003C84 (CiLogSchedulerWakeup.c)
 *     CiLogSetTaskIndexMode @ 0x1C0003CE8 (CiLogSetTaskIndexMode.c)
 *     CiLogTaskIndexCancelYield @ 0x1C0003D5C (CiLogTaskIndexCancelYield.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0003DC0 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C0003E24 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTaskIndexYield @ 0x1C0003E88 (CiLogTaskIndexYield.c)
 *     CiLogThreadBuffering @ 0x1C0003F10 (CiLogThreadBuffering.c)
 *     CiLogThreadJoin @ 0x1C0003F90 (CiLogThreadJoin.c)
 *     CiLogThreadLeave @ 0x1C00040D0 (CiLogThreadLeave.c)
 *     CiLogTurboEngaged @ 0x1C000415C (CiLogTurboEngaged.c)
 *     CiSystemThrottleNdis @ 0x1C000A010 (CiSystemThrottleNdis.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000B000 (CiCreateTaskIndexClientFromThread.c)
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
