/*
 * XREFs of GetWindowFrameMetric @ 0x1C0067910
 * Callers:
 *     GetWindowNCMetrics @ 0x1C0067650 (GetWindowNCMetrics.c)
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 * Callees:
 *     GetAppCompatFlags2WithDPIAware @ 0x1C0067928 (GetAppCompatFlags2WithDPIAware.c)
 */

__int64 GetWindowFrameMetric()
{
  unsigned int AppCompatFlags2WithDPIAware; // eax
  __int64 v1; // rcx

  AppCompatFlags2WithDPIAware = GetAppCompatFlags2WithDPIAware();
  return GetWindowFrameMetricInternal(v1, AppCompatFlags2WithDPIAware, 0LL);
}
