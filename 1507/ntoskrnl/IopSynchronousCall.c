/*
 * XREFs of IopSynchronousCall @ 0x1404D457C
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x1400080C4 (PnpGetRelatedTargetDevice.c)
 *     PnpStartDevice @ 0x140026678 (PnpStartDevice.c)
 *     PnpIrpDeviceEnumerated @ 0x14012F948 (PnpIrpDeviceEnumerated.c)
 *     IopQueryDeviceResources @ 0x14045CCC0 (IopQueryDeviceResources.c)
 *     PpIrpQueryResourceRequirements @ 0x14045D5D0 (PpIrpQueryResourceRequirements.c)
 *     IopQueryDeviceState @ 0x140461634 (IopQueryDeviceState.c)
 *     PnpQueryDeviceRelations @ 0x140461830 (PnpQueryDeviceRelations.c)
 *     PpIrpQueryCapabilities @ 0x140461B3C (PpIrpQueryCapabilities.c)
 *     PnpIrpQueryID @ 0x1404D628C (PnpIrpQueryID.c)
 *     PnpQueryDeviceText @ 0x1404D92F0 (PnpQueryDeviceText.c)
 *     IopRemoveDevice @ 0x1405383EC (IopRemoveDevice.c)
 *     PnpQueryBusInformation @ 0x14054E8A4 (PnpQueryBusInformation.c)
 *     IopQueryLegacyBusInformation @ 0x140557F10 (IopQueryLegacyBusInformation.c)
 *     IopQueryResourceHandlerInterface @ 0x14059DC48 (IopQueryResourceHandlerInterface.c)
 *     IopQueryDockRemovalInterface @ 0x140694240 (IopQueryDockRemovalInterface.c)
 *     IopQueryReconfiguration @ 0x140694340 (IopQueryReconfiguration.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IopQueueThreadIrp @ 0x140048420 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReference @ 0x1400CF130 (IoGetAttachedDeviceReference.c)
 *     IovUtilWatermarkIrp @ 0x1400CF684 (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x1400CF78C (IoAllocateIrp.c)
 *     IoGetLowerDeviceObject @ 0x1401306A8 (IoGetLowerDeviceObject.c)
 */

__int64 __fastcall IopSynchronousCall(struct _DEVICE_OBJECT *a1, __int64 a2, NTSTATUS a3, ULONG_PTR a4, ULONG_PTR *a5)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DEVICE_OBJECT *v9; // rbx
  PIRP Irp; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned int v15; // edi
  PDEVICE_OBJECT LowerDeviceObject; // rdi
  unsigned int v18; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR v19; // [rsp+38h] [rbp-30h]
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  v9 = AttachedDeviceReference;
  if ( (AttachedDeviceReference->Flags & 0x80u) != 0 )
  {
    LowerDeviceObject = IoGetLowerDeviceObject(AttachedDeviceReference);
    if ( !LowerDeviceObject )
    {
      v15 = -1073741436;
      goto LABEL_7;
    }
    ObfDereferenceObject(v9);
    v9 = LowerDeviceObject;
  }
  Irp = IoAllocateIrp(v9->StackSize, 0);
  if ( Irp )
  {
    IovUtilWatermarkIrp();
    v18 = a3;
    Irp->IoStatus.Status = a3;
    v19 = a4;
    Irp->IoStatus.Information = a4;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v18;
    Irp->UserEvent = &Event;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)Irp);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v12 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a2;
    v13 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v12;
    v14 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v13;
    *(_QWORD *)&v13 = *(_QWORD *)(a2 + 64);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v14;
    CurrentStackLocation[-1].Context = (PVOID)v13;
    v15 = IofCallDriver(v9, Irp);
    if ( v15 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v15 = v18;
    }
    if ( a5 )
      *a5 = v19;
  }
  else
  {
    v15 = -1073741670;
  }
LABEL_7:
  ObfDereferenceObject(v9);
  return v15;
}
