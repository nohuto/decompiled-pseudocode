/*
 * XREFs of DrvIsWddmDriverPresent @ 0x1C004C9D8
 * Callers:
 *     DrvQueryDisplayConfig @ 0x1C004C1B0 (DrvQueryDisplayConfig.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C004C2C0 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C004C750 (DrvDisplayConfigGetDeviceInfo.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00BCAD0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 DrvIsWddmDriverPresent()
{
  wchar_t *i; // rcx

  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    if ( (*((_DWORD *)i + 40) & 0x800000) != 0 )
      return 1LL;
  }
  return 0LL;
}
