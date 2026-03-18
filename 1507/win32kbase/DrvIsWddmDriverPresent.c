/*
 * XREFs of DrvIsWddmDriverPresent @ 0x1C001F080
 * Callers:
 *     DrvQueryDisplayConfig @ 0x1C001E870 (DrvQueryDisplayConfig.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C001E980 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C001EEA0 (DrvDisplayConfigGetDeviceInfo.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00BB2A0 (DrvDisplayConfigSetDeviceInfo.c)
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
