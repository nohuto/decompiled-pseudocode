/*
 * XREFs of UsbhFdoChainIrp @ 0x1C0028C38
 * Callers:
 *     UsbhFdoReturnRootHubPdo @ 0x1C001EF60 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnHubCount @ 0x1C001F03C (UsbhFdoReturnHubCount.c)
 *     UsbhFdoSystemControl @ 0x1C0023DC0 (UsbhFdoSystemControl.c)
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C0024E10 (UsbhFdoPnp_QueryDeviceRelations.c)
 *     UsbhFdoInternalDeviceControl @ 0x1C0026AB0 (UsbhFdoInternalDeviceControl.c)
 *     UsbhFdoDeviceControl @ 0x1C003B630 (UsbhFdoDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoChainIrp(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT *v5; // rax

  v5 = (PDEVICE_OBJECT *)FdoExt(a1, (__int64)a2, a3, a4);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v5[151], a2);
}
