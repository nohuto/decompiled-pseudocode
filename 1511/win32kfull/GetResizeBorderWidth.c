/*
 * XREFs of GetResizeBorderWidth @ 0x1C0101F40
 * Callers:
 *     GetWindowNCMetrics @ 0x1C007396C (GetWindowNCMetrics.c)
 *     xxxDrawCaptionBar @ 0x1C00CAFD0 (xxxDrawCaptionBar.c)
 * Callees:
 *     GetAppCompatFlags2WithDPIAware @ 0x1C0070F8C (GetAppCompatFlags2WithDPIAware.c)
 */

__int64 GetResizeBorderWidth()
{
  int AppCompatFlags2WithDPIAware; // eax

  AppCompatFlags2WithDPIAware = GetAppCompatFlags2WithDPIAware();
  return GetResizeBorderWidthInternal(AppCompatFlags2WithDPIAware, 0LL);
}
