/*
 * XREFs of IopSynchronousCall @ 0x140505B9C
 * Callers:
 *     PnpSendIrp @ 0x1400082D8 (PnpSendIrp.c)
 *     PnpIrpDeviceEnumerated @ 0x1400B4A94 (PnpIrpDeviceEnumerated.c)
 *     IopQueryDeviceState @ 0x1403F1338 (IopQueryDeviceState.c)
 *     PpIrpQueryCapabilities @ 0x140486BB0 (PpIrpQueryCapabilities.c)
 *     PnpIrpQueryID @ 0x140488F88 (PnpIrpQueryID.c)
 *     PnpQueryDeviceText @ 0x140489BE0 (PnpQueryDeviceText.c)
 *     IopRemoveDevice @ 0x1404C6038 (IopRemoveDevice.c)
 *     IopQueryDeviceResources @ 0x1404C89E8 (IopQueryDeviceResources.c)
 *     PpIrpQueryResourceRequirements @ 0x1404C9260 (PpIrpQueryResourceRequirements.c)
 *     PnpQueryBusInformation @ 0x1404E8ED8 (PnpQueryBusInformation.c)
 *     IopQueryLegacyBusInformation @ 0x1404EDEC4 (IopQueryLegacyBusInformation.c)
 *     IopQueryResourceHandlerInterface @ 0x14055753C (IopQueryResourceHandlerInterface.c)
 *     IopQueryDockRemovalInterface @ 0x140649F20 (IopQueryDockRemovalInterface.c)
 *     IopQueryReconfiguration @ 0x14064A01C (IopQueryReconfiguration.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002E060 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x14002E170 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IoGetLowerDeviceObject @ 0x1400B3EB8 (IoGetLowerDeviceObject.c)
 *     IoGetAttachedDeviceReference @ 0x1400C48F0 (IoGetAttachedDeviceReference.c)
 *     IovUtilWatermarkIrp @ 0x1400C6014 (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x1400C611C (IoAllocateIrp.c)
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
