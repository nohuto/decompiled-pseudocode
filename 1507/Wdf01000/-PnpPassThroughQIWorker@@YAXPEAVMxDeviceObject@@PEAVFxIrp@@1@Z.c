/*
 * XREFs of ?PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z @ 0x1C002F304
 * Callers:
 *     ?PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z @ 0x1C002F254 (-PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C00154B4 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C00154DC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 */

void __fastcall PnpPassThroughQIWorker(MxDeviceObject *Device, FxIrp *Irp, FxIrp *ForwardIrp)
{
  __int64 v4; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  _IO_STACK_LOCATION *v6; // r8
  _DEVICE_OBJECT *m_DeviceObject; // rbx
  _IO_STACK_LOCATION *v8; // rdx
  _IO_STACK_LOCATION *v9; // rcx
  FxCREvent v10; // [rsp+20h] [rbp-28h] BYREF

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
  m_DeviceObject = Device->m_DeviceObject;
  FxCREvent::FxCREvent(&v10, (unsigned __int8)Irp);
  v8 = ForwardIrp->m_Irp->Tail.Overlay.CurrentStackLocation;
  v8[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxIrp::_IrpSynchronousCompletion;
  v8[-1].Context = &v10;
  v8[-1].Control = -32;
  if ( IofCallDriver(m_DeviceObject, ForwardIrp->m_Irp) == 259 )
    FxCREvent::EnterCRAndWaitAndLeave(&v10);
  v9 = ForwardIrp->m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation->Parameters.Create.SecurityContext = *(_OWORD *)&v9[-1].Parameters.Create.SecurityContext;
  *(_OWORD *)&CurrentStackLocation->Parameters.DeviceIoControl.IoControlCode = *(_OWORD *)&v9[-1].Parameters.DeviceIoControl.IoControlCode;
}
