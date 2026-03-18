/*
 * XREFs of ?FreeDeviceInfoIfSupported@@YAXPEAUDEVICEINFO@@@Z @ 0x1C00AF920
 * Callers:
 *     <none>
 * Callees:
 *     IsFreeDeviceInfoSupported_0 @ 0x1C00025C8 (IsFreeDeviceInfoSupported_0.c)
 *     FreeDeviceInfo_0 @ 0x1C00025D0 (FreeDeviceInfo_0.c)
 */

void __fastcall FreeDeviceInfoIfSupported(struct DEVICEINFO *a1)
{
  if ( (int)IsFreeDeviceInfoSupported_0() >= 0 )
    FreeDeviceInfo_0();
}
