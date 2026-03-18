/*
 * XREFs of ACPIFilterIrpStopDevice @ 0x1C009BFA0
 * Callers:
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C009C120 (ACPIFilterIrpSurpriseRemoval.c)
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C0004B44 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     EnableDisableRegions @ 0x1C0086E6C (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C0086F70 (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIFilterIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rbx
  unsigned int v5; // edi
  char v6; // di
  __int64 v7; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v9; // rax
  __int64 v10; // rcx
  char *IrpText; // rax
  unsigned __int8 v12; // dl
  const char *v13; // r8
  const char *v14; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = DeviceExtension;
  if ( *(_DWORD *)(DeviceExtension + 320) == 1 )
  {
    v6 = (*(_DWORD *)(DeviceExtension + 912) & 0x8000LL) != 0;
    v7 = ACPIInternalGetDeviceExtension(*(_QWORD *)(DeviceExtension + 720));
    if ( IsNsobjPciBus(*(_QWORD *)(v7 + 712)) || v6 )
      EnableDisableRegions(*(__int64 **)(v4 + 712), 0, v6);
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
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 680));
    v5 = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 728), a2);
  }
  else
  {
    v5 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    IofCompleteRequest(a2, 0);
  }
  v10 = 0x200000000000LL;
  if ( (*(_QWORD *)(v4 + 8) & 0x200000000000LL) != 0 )
    v10 = 0x400000000000LL;
  IrpText = ACPIDebugGetIrpText(v10, 4u);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v12,
    5u,
    0x1Bu,
    (__int64)&WPP_83145842ab9239296fde859baf12ff2d_Traceguids,
    (char)a2,
    IrpText,
    v5,
    v4,
    v13,
    v14);
  return v5;
}
