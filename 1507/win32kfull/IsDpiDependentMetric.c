/*
 * XREFs of IsDpiDependentMetric @ 0x1C00953D8
 * Callers:
 *     RealGetDpiSystemMetrics @ 0x1C0093138 (RealGetDpiSystemMetrics.c)
 *     ScaleSystemMetricForDPI @ 0x1C0094864 (ScaleSystemMetricForDPI.c)
 *     GetSystemMetricsForWindow @ 0x1C0095290 (GetSystemMetricsForWindow.c)
 *     NtUserGetDpiSystemMetrics @ 0x1C00C6F00 (NtUserGetDpiSystemMetrics.c)
 *     ?ScaleSystemMetricForDPIWithoutCache@@YAHHH@Z @ 0x1C01E917C (-ScaleSystemMetricForDPIWithoutCache@@YAHHH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDpiDependentMetric(int a1)
{
  if ( a1 > 39 )
    return a1 >= 49 && (a1 <= 55 || a1 > 70 && (a1 == 92 || a1 <= 72));
  return a1 >= 38 || a1 >= 2 && (a1 <= 4 || a1 > 8 && (a1 <= 15 || a1 > 19 && (a1 <= 21 || a1 > 29 && a1 <= 33)));
}
