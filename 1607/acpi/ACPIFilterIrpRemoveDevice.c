/*
 * XREFs of ACPIFilterIrpRemoveDevice @ 0x1C0029820
 * Callers:
 *     ACPIDispatchIrpDepFilterRemoveDevice @ 0x1C004E770 (ACPIDispatchIrpDepFilterRemoveDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C000D7F4 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C000D860 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C0029A1C (ACPIInitDeleteChildDeviceList.c)
 *     EnableDisableRegions @ 0x1C0086E6C (EnableDisableRegions.c)
 *     AcpiDeletePciBusInterface @ 0x1C0090550 (AcpiDeletePciBusInterface.c)
 *     ACPIInitStopDevice @ 0x1C009C360 (ACPIInitStopDevice.c)
 *     IsPciBusExtension @ 0x1C009D3D8 (IsPciBusExtension.c)
 */

__int64 __fastcall ACPIFilterIrpRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // r15
  __int64 DeviceExtension; // rbx
  int v5; // eax
  bool v6; // di
  char v7; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v9; // rax
  NTSTATUS Status; // esi
  __int64 v11; // rax
  const char *v12; // rdx
  const char *v13; // r8
  int v14; // ecx
  __int64 v15; // rdx
  void *v16; // rcx
  unsigned int v17; // ebx
  bool v19; // si
  __int64 v20; // r8
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  ACPIInitDeleteChildDeviceList(DeviceExtension);
  v5 = *(_DWORD *)(DeviceExtension + 320);
  v6 = 0;
  if ( !v5 )
    v6 = *(_DWORD *)(DeviceExtension + 324) == 0;
  v7 = 0;
  if ( v5 == 5 || *(char *)(DeviceExtension + 8) < 0 )
  {
    v7 = 1;
  }
  else if ( !v6 )
  {
    v19 = (*(_DWORD *)(DeviceExtension + 912) & 0x8000LL) != 0;
    if ( (unsigned __int8)IsPciBusExtension(DeviceExtension) || v19 )
    {
      LOBYTE(v20) = v19;
      EnableDisableRegions(*(_QWORD *)(DeviceExtension + 712), 0LL, v20);
    }
  }
  AcpiDeletePciBusInterface(DeviceExtension);
  ACPIInitReferenceDeviceExtension(DeviceExtension);
  if ( *(_DWORD *)(DeviceExtension + 320) != 5 )
    _InterlockedOr64((volatile signed __int64 *)(DeviceExtension + 8), 0x800uLL);
  *(_DWORD *)(DeviceExtension + 320) = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v9 = a2->Tail.Overlay.CurrentStackLocation;
  v9[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v9[-1].Context = &Event;
  v9[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  v11 = *(_QWORD *)(DeviceExtension + 8);
  v12 = (const char *)qword_1C002C340;
  v13 = (const char *)qword_1C002C340;
  if ( (v11 & 0x200000000000LL) != 0 )
  {
    v12 = *(const char **)(DeviceExtension + 560);
    if ( (v11 & 0x400000000000LL) != 0 )
      v13 = *(const char **)(DeviceExtension + 568);
  }
  v14 = 26;
  if ( MinorFunction < 0x1Au )
    v14 = MinorFunction;
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xCu,
    0x16u,
    (__int64)&WPP_83145842ab9239296fde859baf12ff2d_Traceguids,
    (char)a2,
    ACPIDispatchPnpTableNames[v14],
    Status,
    DeviceExtension,
    v12,
    v13);
  if ( Status >= 0 )
  {
    if ( !v7 && !v6 )
    {
      LOBYTE(v15) = 1;
      ACPIInitStopDevice(DeviceExtension, v15);
    }
    v16 = *(void **)(DeviceExtension + 112);
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0);
      *(_QWORD *)(DeviceExtension + 112) = 0LL;
    }
    ACPIInitDereferenceDeviceExtensionUnlocked((volatile signed __int32 *)DeviceExtension);
  }
  v17 = a2->IoStatus.Status;
  IofCompleteRequest(a2, 0);
  return v17;
}
