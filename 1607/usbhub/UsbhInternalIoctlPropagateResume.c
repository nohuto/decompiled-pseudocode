/*
 * XREFs of UsbhInternalIoctlPropagateResume @ 0x1C0027504
 * Callers:
 *     UsbhFdoInternalDeviceControl @ 0x1C00274C0 (UsbhFdoInternalDeviceControl.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C0019340 (Usbh_SSH_Event.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhInternalIoctlPropagateResume(PDEVICE_OBJECT DeviceObject, PIRP Irp, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rax
  __int64 v7; // r9

  v6 = FdoExt((__int64)DeviceObject, (__int64)Irp, a3, a4);
  Usbh_SSH_Event(DeviceObject, 8u, (__int64)(v6 + 478), v7);
  Log((__int64)DeviceObject, 32, 1734503506, (__int64)Irp, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      58,
      (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids,
      0);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
