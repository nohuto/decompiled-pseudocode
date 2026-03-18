/*
 * XREFs of ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C0070C24
 * Callers:
 *     ACPIFilterIrpQueryInterface @ 0x1C006ECA0 (ACPIFilterIrpQueryInterface.c)
 *     ACPIFilterIrpQueryPnpDeviceState @ 0x1C0070BD0 (ACPIFilterIrpQueryPnpDeviceState.c)
 *     ACPIFilterIrpQueryCapabilities @ 0x1C0070C00 (ACPIFilterIrpQueryCapabilities.c)
 *     ACPIFilterIrpQueryId @ 0x1C0072AA0 (ACPIFilterIrpQueryId.c)
 *     ACPIFilterIrpEject @ 0x1C007ADE0 (ACPIFilterIrpEject.c)
 *     ACPIFilterIrpSetLock @ 0x1C007AF10 (ACPIFilterIrpSetLock.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIIrpSetPagableCompletionRoutineAndForward(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7)
{
  __int64 DeviceExtension; // rbp
  _QWORD *PoolWithTag; // rbx
  PIO_WORKITEM WorkItem; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v14; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x49706341u);
  if ( PoolWithTag )
  {
    WorkItem = IoAllocateWorkItem(DeviceObject);
    if ( WorkItem )
    {
      PoolWithTag[5] = 0LL;
      *((_BYTE *)PoolWithTag + 24) = a5;
      *((_BYTE *)PoolWithTag + 25) = a6;
      *((_BYTE *)PoolWithTag + 26) = a7;
      PoolWithTag[2] = a3;
      *PoolWithTag = DeviceObject;
      *((_BYTE *)PoolWithTag + 27) = 0;
      PoolWithTag[1] = Irp;
      PoolWithTag[4] = WorkItem;
      _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 672));
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                             + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      v14 = Irp->Tail.Overlay.CurrentStackLocation;
      v14[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIIrpGenericFilterCompletionHandler;
      v14[-1].Context = PoolWithTag;
      v14[-1].Control = -32;
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 720), Irp);
      return 259LL;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  Irp->IoStatus.Status = -1073741670;
  IofCompleteRequest(Irp, 0);
  return 3221225626LL;
}
