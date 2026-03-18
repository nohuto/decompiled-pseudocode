/*
 * XREFs of GetWindowFrameMetric @ 0x1C00CC204
 * Callers:
 *     GetWindowNCMetrics @ 0x1C007396C (GetWindowNCMetrics.c)
 *     xxxDrawCaptionBar @ 0x1C00CAFD0 (xxxDrawCaptionBar.c)
 * Callees:
 *     GetAppCompatFlags2WithDPIAware @ 0x1C0070F8C (GetAppCompatFlags2WithDPIAware.c)
 */

__int64 GetWindowFrameMetric()
{
  int AppCompatFlags2WithDPIAware; // eax
  __int64 v1; // rcx

  AppCompatFlags2WithDPIAware = GetAppCompatFlags2WithDPIAware();
  return GetWindowFrameMetricInternal(v1, AppCompatFlags2WithDPIAware, 0);
}
