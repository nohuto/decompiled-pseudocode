/*
 * XREFs of UsbhIoctlGetNodeConnectionInfo @ 0x1C0049454
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003BA50 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionInfo(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // r10d

  v2 = a2;
  v3 = a1;
  Log(a1, 32, 1768898103, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v4 )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      v4 + 2,
      v4 + 46,
      (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids);
  return UsbhIoctlGetNodeConnectionInfoExApi(v3, v2);
}
