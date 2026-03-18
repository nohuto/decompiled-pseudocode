/*
 * XREFs of ?FreeDeviceInfoIfSupported@@YAXPEAUDEVICEINFO@@@Z @ 0x1C00B9600
 * Callers:
 *     <none>
 * Callees:
 *     IsFreeDeviceInfoSupported_0 @ 0x1C0002568 (IsFreeDeviceInfoSupported_0.c)
 *     FreeDeviceInfo_0 @ 0x1C0002570 (FreeDeviceInfo_0.c)
 */

void __fastcall FreeDeviceInfoIfSupported(struct DEVICEINFO *a1)
{
  if ( (int)IsFreeDeviceInfoSupported_0() >= 0 )
    FreeDeviceInfo_0();
}
