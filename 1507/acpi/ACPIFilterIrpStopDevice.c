/*
 * XREFs of ACPIFilterIrpStopDevice @ 0x1C007AD60
 * Callers:
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C007AE50 (ACPIFilterIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     EnableDisableRegions @ 0x1C0069918 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C0069A1C (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIFilterIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rdi
  unsigned int v5; // ebx
  char v6; // bl
  __int64 v7; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v9; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = DeviceExtension;
  if ( *(_DWORD *)(DeviceExtension + 312) == 1 )
  {
    v6 = (*(_DWORD *)(DeviceExtension + 904) & 0x8000LL) != 0;
    v7 = ACPIInternalGetDeviceExtension(*(_QWORD *)(DeviceExtension + 712));
    if ( IsNsobjPciBus(*(_QWORD *)(v7 + 704)) || v6 )
      EnableDisableRegions(*(_QWORD *)(v4 + 704), 0, v6);
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                           + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v9 = a2->Tail.Overlay.CurrentStackLocation;
    v9[-1].Context = 0LL;
    v9[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIFilterIrpStopDeviceCompletion;
    v9[-1].Control = -32;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 672));
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 720), a2);
  }
  else
  {
    v5 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    IofCompleteRequest(a2, 0);
  }
  return v5;
}
