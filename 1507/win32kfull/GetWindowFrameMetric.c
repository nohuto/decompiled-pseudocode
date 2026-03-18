/*
 * XREFs of GetWindowFrameMetric @ 0x1C000E7FC
 * Callers:
 *     GetWindowNCMetrics @ 0x1C0011420 (GetWindowNCMetrics.c)
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 * Callees:
 *     GetAppCompatFlags2WithDPIAware @ 0x1C009418C (GetAppCompatFlags2WithDPIAware.c)
 */

__int64 GetWindowFrameMetric()
{
  unsigned int AppCompatFlags2WithDPIAware; // eax
  __int64 v1; // rcx

  AppCompatFlags2WithDPIAware = GetAppCompatFlags2WithDPIAware();
  return GetWindowFrameMetricInternal(v1, AppCompatFlags2WithDPIAware, 0LL);
}
