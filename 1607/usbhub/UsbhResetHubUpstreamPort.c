/*
 * XREFs of UsbhResetHubUpstreamPort @ 0x1C0047048
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0003190 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0020110 (UsbhSyncSendInternalIoctl.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhResetHubUpstreamPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNICODE_STRING *v5; // r9
  NTSTATUS v6; // eax
  unsigned int v7; // r10d

  FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_358ef723348832925fa562e6167d1570_Traceguids);
  Log(a1, 8, 1381192766, 0LL, 0LL);
  v6 = UsbhSyncSendInternalIoctl(a1, 0x220007u, 0LL, v5);
  Log(a1, 8, 1381192764, v6, 0LL);
  return v7;
}
