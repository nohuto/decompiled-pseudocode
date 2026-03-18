/*
 * XREFs of UsbhIoctlGetNodeConnectionInfoEx @ 0x1C00490D4
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003B630 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionInfoEx(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // r10d

  v2 = a2;
  v3 = a1;
  Log(a1, 32, 1768898104, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v4 )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      v4 + 2,
      v4 + 47,
      (__int64)&WPP_3ea9b81ba734f165b64302e7a733234f_Traceguids);
  return UsbhIoctlGetNodeConnectionInfoExApi(v3, v2);
}
