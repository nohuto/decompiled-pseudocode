/*
 * XREFs of ACPIRootIrpStartDevice @ 0x1C00A9840
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00107C8 (WPP_RECORDER_SF_qqss.c)
 *     ACPIInitStartACPI @ 0x1C00A9A78 (ACPIInitStartACPI.c)
 *     RtlDuplicateCmResourceList @ 0x1C00A9BB4 (RtlDuplicateCmResourceList.c)
 */

__int64 __fastcall ACPIRootIrpStartDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  const char *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rbx
  const char *v8; // r8
  const char *v9; // rcx
  __int64 v10; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v12; // rax
  NTSTATUS Status; // edi
  _IO_STACK_LOCATION *v14; // rax
  unsigned __int8 MinorFunction; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rdx
  int v19; // ecx
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = (const char *)qword_1C00A9CD0;
  LOBYTE(v6) = 0;
  v7 = DeviceExtension;
  v8 = (const char *)qword_1C00A9CD0;
  v9 = (const char *)qword_1C00A9CD0;
  if ( DeviceExtension )
  {
    v6 = DeviceExtension;
    v10 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v6 + 560);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v6 + 568);
    }
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x19u,
    (__int64)&WPP_5441e56d220835a776220f48a79793ac_Traceguids,
    (char)a2,
    v6,
    v8,
    v9);
  _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x200uLL);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v12 = a2->Tail.Overlay.CurrentStackLocation;
  v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v12[-1].Context = &Event;
  v12[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 728), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  v14 = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = v14->MinorFunction;
  if ( Status >= 0 )
  {
    v16 = v14->Parameters.WMI.ProviderId ? RtlDuplicateCmResourceList() : 0LL;
    *(_QWORD *)(v7 + 632) = 0LL;
    *(_QWORD *)(v7 + 624) = v16;
    Status = ACPIInitStartACPI(a1);
    if ( Status >= 0 )
      *(_DWORD *)(v7 + 320) = 2;
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  v17 = *(_QWORD *)(v7 + 8);
  v18 = (const char *)qword_1C00A9CD0;
  if ( (v17 & 0x200000000000LL) != 0 )
  {
    v5 = *(const char **)(v7 + 560);
    if ( (v17 & 0x400000000000LL) != 0 )
      v18 = *(const char **)(v7 + 568);
  }
  v19 = 26;
  if ( MinorFunction < 0x1Au )
    v19 = MinorFunction;
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x1Au,
    (__int64)&WPP_5441e56d220835a776220f48a79793ac_Traceguids,
    (char)a2,
    ACPIDispatchPnpTableNames[v19],
    Status,
    v7,
    v5,
    v18);
  return (unsigned int)Status;
}
