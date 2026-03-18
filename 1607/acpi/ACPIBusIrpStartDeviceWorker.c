/*
 * XREFs of ACPIBusIrpStartDeviceWorker @ 0x1C0090230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C0004B44 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalEvaluateOST @ 0x1C004FE38 (ACPIInternalEvaluateOST.c)
 *     EnableDisableRegions @ 0x1C0086E6C (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C0086F70 (IsNsobjPciBus.c)
 *     EnableDisableIPMIRegions @ 0x1C009C834 (EnableDisableIPMIRegions.c)
 */

__int64 __fastcall ACPIBusIrpStartDeviceWorker(__int64 a1)
{
  __int64 DeviceExtension; // rax
  __int64 v3; // rdx
  IRP *v4; // rsi
  __int64 v5; // rdi
  int Status; // ebp
  unsigned __int8 MinorFunction; // r14
  char v8; // bl
  __int64 v9; // rcx
  char *IrpText; // rax
  const char *v11; // r8
  const char *v12; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v4 = *(IRP **)(a1 + 40);
  v5 = DeviceExtension;
  Status = v4->IoStatus.Status;
  MinorFunction = v4->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( Status >= 0 )
  {
    v8 = (*(_DWORD *)(DeviceExtension + 912) & 0x8000LL) != 0;
    if ( IsNsobjPciBus(*(_QWORD *)(DeviceExtension + 712)) || v8 )
      EnableDisableRegions(*(__int64 **)(v5 + 712), 1, v8);
    if ( (*(_DWORD *)(v5 + 8) & 0x1000LL) != 0 )
    {
      LOBYTE(v3) = 1;
      EnableDisableIPMIRegions(*(_QWORD *)(v5 + 712), v3);
    }
  }
  if ( (*(_QWORD *)(v5 + 8) & 0x2000000000LL) != 0 && Status < 0 )
    ACPIInternalEvaluateOST(v5, v3, 163);
  v4->IoStatus.Information = 0LL;
  v4->IoStatus.Status = Status;
  IofCompleteRequest(v4, 0);
  v9 = 0x200000000000LL;
  if ( (*(_QWORD *)(v5 + 8) & 0x200000000000LL) != 0 )
    v9 = 0x400000000000LL;
  IrpText = ACPIDebugGetIrpText(v9, MinorFunction);
  return WPP_RECORDER_SF_qsLqss(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           4u,
           5u,
           0x3Cu,
           (__int64)&WPP_f1ea6fabc66d31ba7ef65020ec90bb72_Traceguids,
           (char)v4,
           IrpText,
           Status,
           v5,
           v11,
           v12);
}
