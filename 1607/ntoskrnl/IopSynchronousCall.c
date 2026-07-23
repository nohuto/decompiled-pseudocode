/*
 * XREFs of IopSynchronousCall @ 0x1404E8B2C
 * Callers:
 *     PnpSendIrp @ 0x140007E4C (PnpSendIrp.c)
 *     PnpIrpDeviceEnumerated @ 0x14010B080 (PnpIrpDeviceEnumerated.c)
 *     IopQueryDeviceState @ 0x1403F01FC (IopQueryDeviceState.c)
 *     IopRemoveDevice @ 0x140484840 (IopRemoveDevice.c)
 *     IopQueryLegacyBusInformation @ 0x1404CFF90 (IopQueryLegacyBusInformation.c)
 *     PnpQueryBusInformation @ 0x14050E634 (PnpQueryBusInformation.c)
 *     PpIrpQueryResourceRequirements @ 0x14050E9BC (PpIrpQueryResourceRequirements.c)
 *     IopQueryDeviceResources @ 0x14050EDDC (IopQueryDeviceResources.c)
 *     PnpIrpQueryID @ 0x1405116FC (PnpIrpQueryID.c)
 *     PnpQueryDeviceText @ 0x140512360 (PnpQueryDeviceText.c)
 *     PpIrpQueryCapabilities @ 0x140512E24 (PpIrpQueryCapabilities.c)
 *     IopQueryResourceHandlerInterface @ 0x140557A7C (IopQueryResourceHandlerInterface.c)
 *     IopQueryDockRemovalInterface @ 0x14064A004 (IopQueryDockRemovalInterface.c)
 *     IopQueryReconfiguration @ 0x14064A100 (IopQueryReconfiguration.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x14002DCF0 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoGetLowerDeviceObject @ 0x1400B1D38 (IoGetLowerDeviceObject.c)
 *     IoGetAttachedDeviceReference @ 0x1400C2790 (IoGetAttachedDeviceReference.c)
 *     IovUtilWatermarkIrp @ 0x1400C3EB4 (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x1400C3FBC (IoAllocateIrp.c)
 */

__int64 __fastcall IopSynchronousCall(struct _DEVICE_OBJECT *a1, __int64 a2, NTSTATUS a3, __int64 a4, _QWORD *a5)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DEVICE_OBJECT *v8; // rbx
  PIRP Irp; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  unsigned int v14; // edi
  PDEVICE_OBJECT LowerDeviceObject; // rdi
  unsigned int v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h]
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  v8 = AttachedDeviceReference;
  if ( (AttachedDeviceReference->Flags & 0x80u) != 0 )
  {
    LowerDeviceObject = IoGetLowerDeviceObject(AttachedDeviceReference);
    if ( !LowerDeviceObject )
    {
      v14 = -1073741436;
      goto LABEL_7;
    }
    ObfDereferenceObject(v8);
    v8 = LowerDeviceObject;
  }
  Irp = IoAllocateIrp(v8->StackSize, 0);
  if ( Irp )
  {
    IovUtilWatermarkIrp();
    v17 = a3;
    Irp->IoStatus.Status = a3;
    v18 = 0LL;
    Irp->IoStatus.Information = 0LL;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v17;
    Irp->UserEvent = &Event;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)Irp);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v11 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a2;
    v12 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v11;
    v13 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v12;
    *(_QWORD *)&v12 = *(_QWORD *)(a2 + 64);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v13;
    CurrentStackLocation[-1].Context = (PVOID)v12;
    v14 = IofCallDriver(v8, Irp);
    if ( v14 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v14 = v17;
    }
    if ( a5 )
      *a5 = v18;
  }
  else
  {
    v14 = -1073741670;
  }
LABEL_7:
  ObfDereferenceObject(v8);
  return v14;
}
