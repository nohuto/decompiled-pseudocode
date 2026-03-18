/*
 * XREFs of WmipSendWmiIrp @ 0x1405496D8
 * Callers:
 *     WmipQueryAllData @ 0x140504C98 (WmipQueryAllData.c)
 *     WmipQuerySetExecuteSI @ 0x14052A4BC (WmipQuerySetExecuteSI.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140532344 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipRegisterOrUpdateDS @ 0x140536E20 (WmipRegisterOrUpdateDS.c)
 *     WmipEnableCollectionForNewGuid @ 0x1405378E8 (WmipEnableCollectionForNewGuid.c)
 *     WmipSendEnableDisableRequest @ 0x140549834 (WmipSendEnableDisableRequest.c)
 *     WmipProcessLegacyEtwCallback @ 0x140575050 (WmipProcessLegacyEtwCallback.c)
 *     WmipDereferenceEvent @ 0x14069DE08 (WmipDereferenceEvent.c)
 * Callees:
 *     IoFreeIrp @ 0x140055DD0 (IoFreeIrp.c)
 *     IoAllocateIrp @ 0x1400C611C (IoAllocateIrp.c)
 *     WmipForwardWmiIrp @ 0x14050514C (WmipForwardWmiIrp.c)
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
