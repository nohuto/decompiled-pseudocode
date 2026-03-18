/*
 * XREFs of WmipSendWmiIrp @ 0x1404D735C
 * Callers:
 *     WmipDisableCollectionForRemovedGuid @ 0x1404A9688 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipSendEnableDisableRequest @ 0x1404A9BE0 (WmipSendEnableDisableRequest.c)
 *     WmipQueryAllData @ 0x1404D1CC0 (WmipQueryAllData.c)
 *     WmipQuerySetExecuteSI @ 0x14057AD90 (WmipQuerySetExecuteSI.c)
 *     WmipRegisterOrUpdateDS @ 0x14057B564 (WmipRegisterOrUpdateDS.c)
 *     WmipEnableCollectionForNewGuid @ 0x14057D87C (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessLegacyEtwCallback @ 0x1405C6978 (WmipProcessLegacyEtwCallback.c)
 *     WmipDereferenceEvent @ 0x1406E0434 (WmipDereferenceEvent.c)
 * Callees:
 *     IoFreeIrp @ 0x14004BC70 (IoFreeIrp.c)
 *     IoAllocateIrp @ 0x1400CF78C (IoAllocateIrp.c)
 *     WmipForwardWmiIrp @ 0x1404D215C (WmipForwardWmiIrp.c)
 */

__int64 __fastcall WmipSendWmiIrp(
        UCHAR a1,
        unsigned int a2,
        UNICODE_STRING *a3,
        unsigned int a4,
        __int64 a5,
        _OWORD *a6)
{
  PIRP Irp; // rax
  PIRP v11; // rbx
  unsigned int v12; // edi

  while ( 1 )
  {
    Irp = IoAllocateIrp(WmipServiceDeviceObject->StackSize + 1, 0);
    v11 = Irp;
    if ( !Irp )
      break;
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)a5;
    v12 = WmipForwardWmiIrp(Irp, a1, a2, a3, a4, a5);
    *a6 = *(_OWORD *)&v11->IoStatus.Status;
    IoFreeIrp(v11);
    if ( v12 != -1073741160 )
      return v12;
  }
  return 3221225626LL;
}
