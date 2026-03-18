/*
 * XREFs of ?IsLegacyDevice@@YAHGG@Z @ 0x1C0079288
 * Callers:
 *     FreeHidProcessRequest @ 0x1C00783D4 (FreeHidProcessRequest.c)
 *     _RegisterRawInputDevices @ 0x1C0078618 (_RegisterRawInputDevices.c)
 *     ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@H@Z @ 0x1C007878C (-HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@H@Z.c)
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C0078D88 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsLegacyDevice(__int16 a1, __int16 a2)
{
  unsigned int v2; // r9d

  v2 = 0;
  if ( a1 == 1 && (a2 == 6 || a2 == 2) )
    return 1;
  return v2;
}
