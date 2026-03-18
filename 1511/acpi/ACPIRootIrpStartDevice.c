/*
 * XREFs of ACPIRootIrpStartDevice @ 0x1C00870C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartACPI @ 0x1C0086FA4 (ACPIInitStartACPI.c)
 *     RtlDuplicateCmResourceList @ 0x1C00871D8 (RtlDuplicateCmResourceList.c)
 */

__int64 __fastcall ACPIRootIrpStartDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _IO_STACK_LOCATION *v6; // rax
  int Status; // ebx
  __int64 v8; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  _InterlockedOr64((volatile signed __int64 *)DeviceExtension, 0x200uLL);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v6 = a2->Tail.Overlay.CurrentStackLocation;
  v6[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v6[-1].Context = &Event;
  v6[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 720), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  if ( Status >= 0 )
  {
    if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId )
      v8 = RtlDuplicateCmResourceList();
    else
      v8 = 0LL;
    *(_QWORD *)(DeviceExtension + 624) = 0LL;
    *(_QWORD *)(DeviceExtension + 616) = v8;
    Status = ACPIInitStartACPI(a1);
    if ( Status >= 0 )
      *(_DWORD *)(DeviceExtension + 312) = 2;
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
