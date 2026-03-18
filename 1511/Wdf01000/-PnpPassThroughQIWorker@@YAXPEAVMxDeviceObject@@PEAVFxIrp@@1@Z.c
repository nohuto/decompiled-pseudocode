/*
 * XREFs of ?PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z @ 0x1C008A5C4
 * Callers:
 *     ?PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z @ 0x1C008926C (-PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0025CE0 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

void __fastcall PnpPassThroughQIWorker(MxDeviceObject *Device, FxIrp *Irp, FxIrp *ForwardIrp)
{
  __int64 v4; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  _IO_STACK_LOCATION *v6; // r10
  _IO_STACK_LOCATION *v7; // rcx

  v4 = 0LL;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  ForwardIrp->m_Irp->IoStatus.Status = -1073741637;
  v6 = ForwardIrp->m_Irp->Tail.Overlay.CurrentStackLocation;
  do
  {
    *(&v6[-1].MajorFunction + v4) = *(&Irp->m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction + v4);
    ++v4;
  }
  while ( v4 < 2 );
  *(_OWORD *)&v6[-1].Parameters.Create.SecurityContext = *(_OWORD *)&CurrentStackLocation->Parameters.Create.SecurityContext;
  *(_OWORD *)&v6[-1].Parameters.DeviceIoControl.IoControlCode = *(_OWORD *)&CurrentStackLocation->Parameters.DeviceIoControl.IoControlCode;
  ForwardIrp->m_Irp->IoStatus.Information = Irp->m_Irp->IoStatus.Information;
  FxIrp::SendIrpSynchronously(ForwardIrp, Device->m_DeviceObject);
  v7 = ForwardIrp->m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation->Parameters.Create.SecurityContext = *(_OWORD *)&v7[-1].Parameters.Create.SecurityContext;
  *(_OWORD *)&CurrentStackLocation->Parameters.DeviceIoControl.IoControlCode = *(_OWORD *)&v7[-1].Parameters.DeviceIoControl.IoControlCode;
}
