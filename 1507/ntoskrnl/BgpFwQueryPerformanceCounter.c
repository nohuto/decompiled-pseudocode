/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x140150248
 * Callers:
 *     AnFwpProgressAnimationManual @ 0x14075C1F8 (AnFwpProgressAnimationManual.c)
 *     LogFwReport @ 0x14075CB0C (LogFwReport.c)
 *     AnFwpProgressIndicatorTimer @ 0x14075E2F0 (AnFwpProgressIndicatorTimer.c)
 *     LogFwStat @ 0x14075E428 (LogFwStat.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LARGE_INTEGER __stdcall BgpFwQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency)
{
  return KeQueryPerformanceCounter(PerformanceFrequency);
}
