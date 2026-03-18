/*
 * XREFs of ACPIFilterIrpDeviceUsageNotification @ 0x1C0071FF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 */

NTSTATUS __fastcall ACPIFilterIrpDeviceUsageNotification(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v5; // r8
  _IO_STACK_LOCATION *v6; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = DeviceExtension;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v6 = a2->Tail.Overlay.CurrentStackLocation;
  v6[-1].Context = 0LL;
  v6[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIFilterIrpDeviceUsageNotificationCompletion;
  v6[-1].Control = -32;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 672));
  return IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 720), a2);
}
