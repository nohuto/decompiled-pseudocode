/*
 * XREFs of ACPIFilterIrpRemoveDevice @ 0x1C003BAD0
 * Callers:
 *     ACPIDispatchIrpDepFilterRemoveDevice @ 0x1C003B9B0 (ACPIDispatchIrpDepFilterRemoveDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0016A14 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0017E60 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C003C400 (ACPIInitDeleteChildDeviceList.c)
 *     EnableDisableRegions @ 0x1C0066F60 (EnableDisableRegions.c)
 *     ACPIInitStopDevice @ 0x1C007B200 (ACPIInitStopDevice.c)
 *     AcpiDeletePciBusInterface @ 0x1C007C16C (AcpiDeletePciBusInterface.c)
 *     IsPciBusExtension @ 0x1C007C230 (IsPciBusExtension.c)
 */

__int64 __fastcall ACPIFilterIrpRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  int v4; // eax
  bool v5; // di
  char v6; // r14
  bool v7; // si
  __int64 v8; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v10; // rax
  NTSTATUS Status; // eax
  __int64 v12; // rdx
  void *v13; // rcx
  unsigned int v14; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  ACPIInitDeleteChildDeviceList(DeviceExtension);
  v4 = *(_DWORD *)(DeviceExtension + 312);
  v5 = 0;
  if ( !v4 )
    v5 = *(_DWORD *)(DeviceExtension + 316) == 0;
  v6 = 0;
  if ( v4 == 5 || *(char *)DeviceExtension < 0 )
  {
    v6 = 1;
  }
  else if ( !v5 )
  {
    v7 = (*(_DWORD *)(DeviceExtension + 904) & 0x8000LL) != 0;
    if ( (unsigned __int8)IsPciBusExtension(DeviceExtension) || v7 )
    {
      LOBYTE(v8) = v7;
      EnableDisableRegions(*(_QWORD *)(DeviceExtension + 704), 0LL, v8);
    }
  }
  AcpiDeletePciBusInterface(DeviceExtension);
  ACPIInitReferenceDeviceExtension(DeviceExtension);
  if ( *(_DWORD *)(DeviceExtension + 312) != 5 )
    _InterlockedOr64((volatile signed __int64 *)DeviceExtension, 0x800uLL);
  *(_DWORD *)(DeviceExtension + 312) = 0;
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
  if ( Status >= 0 )
  {
    if ( !v6 && !v5 )
    {
      LOBYTE(v12) = 1;
      ACPIInitStopDevice(DeviceExtension, v12);
    }
    v13 = *(void **)(DeviceExtension + 104);
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *(_QWORD *)(DeviceExtension + 104) = 0LL;
    }
    ACPIInitDereferenceDeviceExtensionUnlocked((volatile signed __int32 *)DeviceExtension);
  }
  v14 = a2->IoStatus.Status;
  IofCompleteRequest(a2, 0);
  return v14;
}
