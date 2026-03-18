/*
 * XREFs of GetResizeBorderWidth @ 0x1C000E7E4
 * Callers:
 *     GetWindowNCMetrics @ 0x1C0011420 (GetWindowNCMetrics.c)
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 * Callees:
 *     GetAppCompatFlags2WithDPIAware @ 0x1C009418C (GetAppCompatFlags2WithDPIAware.c)
 */

__int64 GetResizeBorderWidth()
{
  unsigned int AppCompatFlags2WithDPIAware; // eax

  AppCompatFlags2WithDPIAware = GetAppCompatFlags2WithDPIAware();
  return GetResizeBorderWidthInternal(AppCompatFlags2WithDPIAware, 0LL);
}
