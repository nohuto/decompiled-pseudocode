/*
 * XREFs of ?_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z @ 0x1C0062BB0
 * Callers:
 *     ?QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C0055638 (-QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     imp_WdfIoTargetQueryForInterface @ 0x1C0075040 (imp_WdfIoTargetQueryForInterface.c)
 * Callees:
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0025CE0 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ??1FxAutoIrp@@QEAA@XZ @ 0x1C0057454 (--1FxAutoIrp@@QEAA@XZ.c)
 */

__int64 __fastcall FxQueryInterface::_QueryForInterface(
        _DEVICE_OBJECT *TopOfStack,
        const _GUID *InterfaceType,
        _INTERFACE *Interface,
        unsigned __int16 Size,
        unsigned __int16 Version,
        _NAMED_PIPE_CREATE_PARAMETERS *InterfaceSpecificData)
{
  PIRP v10; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r10
  unsigned int v12; // ebx
  FxAutoIrp irp; // [rsp+30h] [rbp+8h] BYREF

  v10 = IoAllocateIrp(TopOfStack->StackSize, 0);
  if ( v10 )
  {
    CurrentStackLocation = v10->Tail.Overlay.CurrentStackLocation;
    v10->IoStatus.Status = -1073741637;
    irp.m_Irp = v10;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = InterfaceSpecificData;
    CurrentStackLocation[-1].Parameters.QueryInterface.Version = Version;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)Interface;
    CurrentStackLocation[-1].Parameters.QueryInterface.Size = Size;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)InterfaceType;
    v12 = FxIrp::SendIrpSynchronously(&irp, TopOfStack);
    FxAutoIrp::~FxAutoIrp(&irp);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v12;
}
