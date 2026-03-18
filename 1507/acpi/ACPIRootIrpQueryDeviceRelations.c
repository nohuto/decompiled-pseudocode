/*
 * XREFs of ACPIRootIrpQueryDeviceRelations @ 0x1C0072C50
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDetectFilterDevices @ 0x1C000830C (ACPIDetectFilterDevices.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C006AC18 (ACPIRootIrpQueryBusRelations.c)
 */

__int64 __fastcall ACPIRootIrpQueryDeviceRelations(ULONG_PTR a1, IRP *a2)
{
  char v4; // bp
  __int64 v5; // rdx
  __int64 DeviceExtension; // r14
  int BusRelations; // eax
  unsigned int Status; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v10; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 Information; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  Information = a2->IoStatus.Information;
  if ( !a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
  {
    v4 = 1;
    BusRelations = ACPIRootIrpQueryBusRelations(a1, v5, (PVOID *)&Information);
    a2->IoStatus.Status = BusRelations;
    Status = BusRelations;
    if ( BusRelations < 0 )
    {
      a2->IoStatus.Information = 0LL;
      goto LABEL_9;
    }
    a2->IoStatus.Information = Information;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v10 = a2->Tail.Overlay.CurrentStackLocation;
  v10[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v10[-1].Context = &Event;
  v10[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 720), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  if ( ((int)(Status + 0x80000000) < 0 || Status == -1073741637) && v4 == 1 )
    ACPIDetectFilterDevices(a1, a2->IoStatus.Information);
LABEL_9:
  IofCompleteRequest(a2, 0);
  return Status;
}
