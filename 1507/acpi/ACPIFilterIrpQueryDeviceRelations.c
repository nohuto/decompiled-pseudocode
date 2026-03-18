/*
 * XREFs of ACPIFilterIrpQueryDeviceRelations @ 0x1C0065000
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDetectFilterDevices @ 0x1C000830C (ACPIDetectFilterDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0016BD8 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0035A7C (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C006AC18 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C0079570 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 */

__int64 __fastcall ACPIFilterIrpQueryDeviceRelations(const void *a1, IRP *a2)
{
  char v4; // bp
  __int64 v5; // rdx
  __int64 DeviceExtension; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int Length; // ecx
  unsigned int v9; // ecx
  _IO_STACK_LOCATION *v10; // rax
  _IO_STACK_LOCATION *v11; // rax
  NTSTATUS Status; // edi
  int RemovalRelations; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 Information; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( a2->IoStatus.Status >= 0 )
    Information = a2->IoStatus.Information;
  else
    Information = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    v9 = Length - 1;
    if ( v9 )
    {
      if ( v9 != 2 )
        goto LABEL_6;
      RemovalRelations = ACPIBusAndFilterIrpQueryRemovalRelations(a1, (PVOID *)&Information);
    }
    else
    {
      RemovalRelations = ACPIBusAndFilterIrpQueryEjectRelations(a1, v5, &Information);
    }
  }
  else
  {
    v4 = 1;
    RemovalRelations = ACPIRootIrpQueryBusRelations(a1, v5, &Information);
  }
  Status = RemovalRelations;
  if ( RemovalRelations != -1073741637 )
    a2->IoStatus.Status = RemovalRelations;
  if ( RemovalRelations < 0 )
  {
    if ( RemovalRelations != -1073741637 )
      goto LABEL_13;
  }
  else
  {
    a2->IoStatus.Information = Information;
  }
LABEL_6:
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v10 = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v10[-1].MajorFunction = *(_OWORD *)&v10->MajorFunction;
  *(_OWORD *)&v10[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v10->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&v10[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v10->Parameters.QueryDeviceRelations + 6);
  v10[-1].FileObject = v10->FileObject;
  v10[-1].Control = 0;
  v11 = a2->Tail.Overlay.CurrentStackLocation;
  v11[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v11[-1].Context = &Event;
  v11[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 720), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  if ( Status >= 0 && v4 )
  {
    if ( a2->Flags != 393216 )
      ACPIFilterRemoveNonPresentDevices(DeviceExtension, (_DWORD *)a2->IoStatus.Information);
    ACPIDetectFilterDevices((ULONG_PTR)a1, a2->IoStatus.Information);
  }
LABEL_13:
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
