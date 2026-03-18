/*
 * XREFs of IsDpiDependentMetric @ 0x1C00721FC
 * Callers:
 *     RealGetDpiSystemMetrics @ 0x1C006F5CC (RealGetDpiSystemMetrics.c)
 *     ScaleSystemMetricForDPI @ 0x1C0071688 (ScaleSystemMetricForDPI.c)
 *     GetSystemMetricsForWindow @ 0x1C00720B4 (GetSystemMetricsForWindow.c)
 *     NtUserGetDpiSystemMetrics @ 0x1C00D9C10 (NtUserGetDpiSystemMetrics.c)
 *     ?ScaleSystemMetricForDPIWithoutCache@@YAHHH@Z @ 0x1C01E9798 (-ScaleSystemMetricForDPIWithoutCache@@YAHHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDpiDependentMetric(int a1)
{
  if ( a1 > 39 )
  {
    if ( a1 < 49 || a1 > 55 && (a1 <= 70 || a1 != 92 && a1 > 72) )
      return 0LL;
  }
  else if ( a1 < 38 && (a1 < 2 || a1 > 4 && (a1 <= 8 || a1 > 15 && (a1 <= 19 || a1 > 21 && (a1 <= 29 || a1 > 33)))) )
  {
    return 0LL;
  }
  return 1LL;
}
