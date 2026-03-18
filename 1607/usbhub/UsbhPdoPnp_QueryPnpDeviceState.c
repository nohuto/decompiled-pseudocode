/*
 * XREFs of UsbhPdoPnp_QueryPnpDeviceState @ 0x1C0027BA0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0055058 (UsbhPdo_ReportPnPFailureProblem.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryPnpDeviceState(PDEVICE_OBJECT DeviceObject, PIRP Irp, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rsi
  unsigned int Status; // ebx
  int v8; // eax

  v6 = PdoExt((__int64)DeviceObject, (__int64)Irp, a3, a4);
  Status = 0;
  v8 = v6[283];
  if ( v8 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        15,
        (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids,
        v8);
    if ( v6[699] )
      UsbhPdo_ReportPnPFailureProblem(DeviceObject);
    Irp->IoStatus.Information |= (unsigned int)v6[283];
    Irp->IoStatus.Status = 0;
  }
  else
  {
    Status = Irp->IoStatus.Status;
  }
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
