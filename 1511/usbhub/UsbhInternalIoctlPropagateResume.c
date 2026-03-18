/*
 * XREFs of UsbhInternalIoctlPropagateResume @ 0x1C0026AF4
 * Callers:
 *     UsbhFdoInternalDeviceControl @ 0x1C0026AB0 (UsbhFdoInternalDeviceControl.c)
 * Callees:
 *     Usbh_SSH_Event @ 0x1C0010030 (Usbh_SSH_Event.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhInternalIoctlPropagateResume(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rax
  __int64 v7; // r9

  v6 = FdoExt(a1, (__int64)a2, a3, a4);
  Usbh_SSH_Event(a1, 8u, (__int64)(v6 + 478), v7);
  Log(a1, 32, 1734503506, (__int64)a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      58,
      (__int64)&WPP_3ea9b81ba734f165b64302e7a733234f_Traceguids,
      0);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
