/*
 * XREFs of ?ndisCheckWatchdogTimer@@YAEXZ @ 0x1C005C044
 * Callers:
 *     ndis5InterruptDpc @ 0x1C005C100 (ndis5InterruptDpc.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 */

bool ndisCheckWatchdogTimer(void)
{
  struct _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+20h] [rbp-28h] BYREF

  return KeQueryDpcWatchdogInformation(&WatchdogInformation) >= 0
      && ndisDpcWatchdogLimit
      && WatchdogInformation.DpcWatchdogCount < ndisDpcWatchdogLimit;
}
