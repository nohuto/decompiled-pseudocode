/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x14011BFC4
 * Callers:
 *     AnFwpProgressAnimationManual @ 0x1406D9008 (AnFwpProgressAnimationManual.c)
 *     LogFwReport @ 0x1406D9AC4 (LogFwReport.c)
 *     AnFwpProgressIndicatorTimer @ 0x1406DB2A8 (AnFwpProgressIndicatorTimer.c)
 *     LogFwStat @ 0x1406DB3E0 (LogFwStat.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LARGE_INTEGER __stdcall BgpFwQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency)
{
  return KeQueryPerformanceCounter(PerformanceFrequency);
}
