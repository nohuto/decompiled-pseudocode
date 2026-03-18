/*
 * XREFs of ?FreeDeviceInfoIfSupported@@YAXPEAUDEVICEINFO@@@Z @ 0x1C00AB400
 * Callers:
 *     <none>
 * Callees:
 *     IsFreeDeviceInfoSupported_0 @ 0x1C0002598 (IsFreeDeviceInfoSupported_0.c)
 *     FreeDeviceInfo_0 @ 0x1C00025A0 (FreeDeviceInfo_0.c)
 */

void __fastcall FreeDeviceInfoIfSupported(struct DEVICEINFO *a1)
{
  if ( (int)IsFreeDeviceInfoSupported_0() >= 0 )
    FreeDeviceInfo_0();
}
