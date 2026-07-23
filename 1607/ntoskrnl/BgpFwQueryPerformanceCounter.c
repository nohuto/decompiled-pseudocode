/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x14012775C
 * Callers:
 *     AnFwpProgressAnimationManual @ 0x1407253F8 (AnFwpProgressAnimationManual.c)
 *     LogFwReport @ 0x1407259A0 (LogFwReport.c)
 *     AnFwpProgressIndicatorTimer @ 0x1407271D8 (AnFwpProgressIndicatorTimer.c)
 *     LogFwStat @ 0x140727310 (LogFwStat.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LARGE_INTEGER __stdcall BgpFwQueryPerformanceCounter(PLARGE_INTEGER PerformanceFrequency)
{
  return KeQueryPerformanceCounter(PerformanceFrequency);
}
