/*
 * XREFs of UsbhFdoChainIrp @ 0x1C0029C78
 * Callers:
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C00190C0 (UsbhFdoPnp_QueryDeviceRelations.c)
 *     UsbhFdoSystemControl @ 0x1C0023EE0 (UsbhFdoSystemControl.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C00277F4 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoInternalDeviceControl @ 0x1C00278D0 (UsbhFdoInternalDeviceControl.c)
 *     UsbhFdoReturnHubCount @ 0x1C0027CB0 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoDeviceControl @ 0x1C003B480 (UsbhFdoDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoChainIrp(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT *v5; // rax

  v5 = (PDEVICE_OBJECT *)FdoExt(a1, (__int64)a2, a3, a4);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v5[151], a2);
}
