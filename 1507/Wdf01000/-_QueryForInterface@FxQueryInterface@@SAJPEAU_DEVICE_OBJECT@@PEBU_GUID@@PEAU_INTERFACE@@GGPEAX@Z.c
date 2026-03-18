/*
 * XREFs of ?_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z @ 0x1C006AB20
 * Callers:
 *     ?QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C005C0E8 (-QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     imp_WdfIoTargetQueryForInterface @ 0x1C0082FB0 (imp_WdfIoTargetQueryForInterface.c)
 * Callees:
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C00154B4 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C00154DC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 */

__int64 __fastcall FxQueryInterface::_QueryForInterface(
        _DEVICE_OBJECT *TopOfStack,
        const _GUID *InterfaceType,
        _INTERFACE *Interface,
        unsigned __int16 Size,
        unsigned __int16 Version,
        _NAMED_PIPE_CREATE_PARAMETERS *InterfaceSpecificData)
{
  PIRP Irp; // rax
  unsigned __int8 v11; // dl
  _IRP *v12; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  _IO_STACK_LOCATION *v14; // rax
  unsigned int Status; // edi
  FxCREvent v17; // [rsp+20h] [rbp-28h] BYREF

  Irp = IoAllocateIrp(TopOfStack->StackSize, 0);
  v12 = Irp;
  if ( Irp )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    Irp->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = InterfaceSpecificData;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)Interface;
    CurrentStackLocation[-1].Parameters.QueryInterface.Size = Size;
    CurrentStackLocation[-1].Parameters.QueryInterface.Version = Version;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)InterfaceType;
    FxCREvent::FxCREvent(&v17, v11);
    v14 = v12->Tail.Overlay.CurrentStackLocation;
    v14[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxIrp::_IrpSynchronousCompletion;
    v14[-1].Context = &v17;
    v14[-1].Control = -32;
    Status = IofCallDriver(TopOfStack, v12);
    if ( Status == 259 )
    {
      FxCREvent::EnterCRAndWaitAndLeave(&v17);
      Status = v12->IoStatus.Status;
    }
    IoFreeIrp(v12);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return Status;
}
