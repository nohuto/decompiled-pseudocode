/*
 * XREFs of IopSynchronousCall @ 0x1403D2C78
 * Callers:
 *     PnpSendIrp @ 0x14001ACF4 (PnpSendIrp.c)
 *     PnpIrpDeviceEnumerated @ 0x1401076E8 (PnpIrpDeviceEnumerated.c)
 *     IopRemoveDevice @ 0x1404A0FEC (IopRemoveDevice.c)
 *     IopQueryLegacyBusInformation @ 0x1404E720C (IopQueryLegacyBusInformation.c)
 *     IopQueryDeviceState @ 0x1404ECD38 (IopQueryDeviceState.c)
 *     PnpIrpQueryID @ 0x1404EE3FC (PnpIrpQueryID.c)
 *     PnpQueryDeviceText @ 0x1404EE83C (PnpQueryDeviceText.c)
 *     IopQueryDeviceResources @ 0x1404EF3B0 (IopQueryDeviceResources.c)
 *     PpIrpQueryResourceRequirements @ 0x1404EFE04 (PpIrpQueryResourceRequirements.c)
 *     PnpQueryBusInformation @ 0x1404EFE74 (PnpQueryBusInformation.c)
 *     PpIrpQueryCapabilities @ 0x1404F10C0 (PpIrpQueryCapabilities.c)
 *     IopQueryResourceHandlerInterface @ 0x14052B310 (IopQueryResourceHandlerInterface.c)
 *     IopQueryDockRemovalInterface @ 0x1406154C8 (IopQueryDockRemovalInterface.c)
 *     IopQueryReconfiguration @ 0x1406155C8 (IopQueryReconfiguration.c)
 * Callees:
 *     IovUtilWatermarkIrp @ 0x14001AE3C (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x14001AF44 (IoAllocateIrp.c)
 *     IoGetAttachedDeviceReference @ 0x14001B010 (IoGetAttachedDeviceReference.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IoGetLowerDeviceObject @ 0x1400F2898 (IoGetLowerDeviceObject.c)
 */

__int64 __fastcall IopSynchronousCall(struct _DEVICE_OBJECT *a1, __int64 a2, NTSTATUS a3, ULONG_PTR a4, ULONG_PTR *a5)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DEVICE_OBJECT *v9; // rbx
  PIRP Irp; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  unsigned int v17; // edi
  PDEVICE_OBJECT LowerDeviceObject; // rdi
  unsigned int v20; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR v21; // [rsp+38h] [rbp-30h]
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  v9 = AttachedDeviceReference;
  if ( (AttachedDeviceReference->Flags & 0x80u) != 0 )
  {
    LowerDeviceObject = IoGetLowerDeviceObject(AttachedDeviceReference);
    if ( !LowerDeviceObject )
    {
      v17 = -1073741436;
      goto LABEL_7;
    }
    ObfDereferenceObject(v9);
    v9 = LowerDeviceObject;
  }
  Irp = IoAllocateIrp(v9->StackSize, 0);
  if ( Irp )
  {
    IovUtilWatermarkIrp();
    v20 = a3;
    Irp->IoStatus.Status = a3;
    v21 = a4;
    Irp->IoStatus.Information = a4;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v20;
    Irp->UserEvent = &Event;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)Irp, v11, v12);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v14 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a2;
    v15 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v14;
    v16 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v15;
    *(_QWORD *)&v15 = *(_QWORD *)(a2 + 64);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v16;
    CurrentStackLocation[-1].Context = (PVOID)v15;
    v17 = IofCallDriver(v9, Irp);
    if ( v17 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v17 = v20;
    }
    if ( a5 )
      *a5 = v21;
  }
  else
  {
    v17 = -1073741670;
  }
LABEL_7:
  ObfDereferenceObject(v9);
  return v17;
}
