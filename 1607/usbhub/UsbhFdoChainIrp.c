/*
 * XREFs of UsbhFdoChainIrp @ 0x1C00292F8
 * Callers:
 *     UsbhFdoReturnHubCount @ 0x1C0006F8C (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C0007028 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C001A1A0 (UsbhFdoPnp_QueryDeviceRelations.c)
 *     UsbhFdoSystemControl @ 0x1C0024780 (UsbhFdoSystemControl.c)
 *     UsbhFdoInternalDeviceControl @ 0x1C00274C0 (UsbhFdoInternalDeviceControl.c)
 *     UsbhFdoDeviceControl @ 0x1C003BA50 (UsbhFdoDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoChainIrp(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT *v5; // rax

  v5 = (PDEVICE_OBJECT *)FdoExt(a1, (__int64)a2, a3, a4);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v5[151], a2);
}
