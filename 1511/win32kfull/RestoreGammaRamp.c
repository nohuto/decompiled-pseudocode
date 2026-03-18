/*
 * XREFs of RestoreGammaRamp @ 0x1C00E3710
 * Callers:
 *     xxxSwitchDesktopWithFade @ 0x1C00E3890 (xxxSwitchDesktopWithFade.c)
 * Callees:
 *     GreSetDeviceGammaRamp @ 0x1C00E3C40 (GreSetDeviceGammaRamp.c)
 */

__int64 __fastcall RestoreGammaRamp(unsigned int *a1)
{
  unsigned int i; // edi
  __int64 v3; // rsi
  HDC v4; // rcx

  for ( i = 0; i < *a1; ++i )
  {
    v3 = 386LL * i;
    v4 = *(HDC *)&a1[v3 + 386];
    if ( v4 )
    {
      GreSetDeviceGammaRamp(v4);
      GreMarkDeletableDC(*(_QWORD *)&a1[v3 + 386]);
      GreDeleteDC(*(_QWORD *)&a1[v3 + 386]);
    }
  }
  return Win32FreePool(a1);
}
