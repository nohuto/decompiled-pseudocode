/*
 * XREFs of DrvIsWddmDriverPresent @ 0x1C004A46C
 * Callers:
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0049DA0 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C0049E20 (DrvQueryDisplayConfig.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C004A240 (DrvDisplayConfigGetDeviceInfo.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00C87A0 (DrvDisplayConfigSetDeviceInfo.c)
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
