/*
 * XREFs of GetResizeBorderWidth @ 0x1C00678DC
 * Callers:
 *     GetWindowNCMetrics @ 0x1C0067650 (GetWindowNCMetrics.c)
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 * Callees:
 *     GetAppCompatFlags2WithDPIAware @ 0x1C0067928 (GetAppCompatFlags2WithDPIAware.c)
 */

__int64 GetResizeBorderWidth()
{
  unsigned int AppCompatFlags2WithDPIAware; // eax
  __int64 v1; // rdx

  AppCompatFlags2WithDPIAware = GetAppCompatFlags2WithDPIAware();
  if ( (AppCompatFlags2WithDPIAware & 0x2000000) != 0 )
    v1 = *(unsigned __int16 *)(gpsi + 8678LL);
  else
    v1 = 96LL;
  return GetResizeBorderWidthInternal(AppCompatFlags2WithDPIAware, v1);
}
