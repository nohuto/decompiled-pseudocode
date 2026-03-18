/*
 * XREFs of ?IsValidPlateauDPI@@YA_NH@Z @ 0x1C01E9500
 * Callers:
 *     ?EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z @ 0x1C01E934C (-EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z.c)
 *     ?EnsureSecondaryDpiMetricsCacheNode@@YAPEAUtagDpiSysMetCache@@H@Z @ 0x1C01E9470 (-EnsureSecondaryDpiMetricsCacheNode@@YAPEAUtagDpiSysMetCache@@H@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsValidPlateauDPI(int a1)
{
  char v1; // r9
  _DWORD *v2; // r8

  v1 = 0;
  v2 = &DesktopScaleFactorsArray;
  while ( (96 * *v2 + 50) / 0x64u != a1 )
  {
    if ( (__int64)++v2 >= (__int64)&szN )
      return v1;
  }
  return 1;
}
