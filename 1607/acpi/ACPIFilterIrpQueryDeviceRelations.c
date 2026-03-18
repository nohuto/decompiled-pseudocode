/*
 * XREFs of ACPIFilterIrpQueryDeviceRelations @ 0x1C00806D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C0004B44 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDetectFilterDevices @ 0x1C000D120 (ACPIDetectFilterDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001EE60 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C00461DC (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C00855D0 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C009A004 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 */

__int64 __fastcall ACPIFilterIrpQueryDeviceRelations(ULONG_PTR a1, IRP *a2)
{
  char v4; // r12
  __int64 DeviceExtension; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  unsigned int Length; // ecx
  unsigned int v8; // ecx
  NTSTATUS Status; // edi
  const char *v10; // r15
  char *IrpText; // rax
  const char *v12; // r8
  char v13; // r10
  const char *v14; // r11
  _IO_STACK_LOCATION *v15; // rax
  _IO_STACK_LOCATION *v16; // rax
  NTSTATUS RemovalRelations; // eax
  __int64 v19; // rcx
  char *v20; // rax
  const char *v21; // r8
  char v22; // r10
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 Information; // [rsp+B8h] [rbp+10h] BYREF

  v4 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( a2->IoStatus.Status >= 0 )
    Information = a2->IoStatus.Information;
  else
    Information = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    v8 = Length - 1;
    if ( v8 )
    {
      if ( v8 != 2 )
      {
        Status = -1073741637;
        goto LABEL_7;
      }
      RemovalRelations = ACPIBusAndFilterIrpQueryRemovalRelations(a1, (PVOID *)&Information);
    }
    else
    {
      RemovalRelations = ACPIBusAndFilterIrpQueryEjectRelations(a1, a2, &Information);
    }
  }
  else
  {
    v4 = 1;
    RemovalRelations = ACPIRootIrpQueryBusRelations(a1, a2, &Information);
  }
  Status = RemovalRelations;
  if ( RemovalRelations != -1073741637 )
    a2->IoStatus.Status = RemovalRelations;
LABEL_7:
  v10 = (const char *)qword_1C0090C20;
  IrpText = ACPIDebugGetIrpText(0x400000000000LL, CurrentStackLocation->MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0xDu,
    (__int64)&WPP_83145842ab9239296fde859baf12ff2d_Traceguids,
    (char)a2,
    IrpText,
    Status,
    v13,
    v14,
    v12);
  if ( Status >= 0 )
  {
    a2->IoStatus.Information = Information;
  }
  else if ( Status != -1073741637 )
  {
    goto LABEL_13;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v15 = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v15[-1].MajorFunction = *(_OWORD *)&v15->MajorFunction;
  *(_OWORD *)&v15[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v15->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&v15[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v15->Parameters.QueryDeviceRelations + 6);
  v15[-1].FileObject = v15->FileObject;
  v15[-1].Control = 0;
  v16 = a2->Tail.Overlay.CurrentStackLocation;
  v16[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v16[-1].Context = &Event;
  v16[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  if ( Status >= 0 && v4 )
  {
    if ( a2->Flags != 393216 )
      ACPIFilterRemoveNonPresentDevices(DeviceExtension, (_DWORD *)a2->IoStatus.Information);
    ACPIDetectFilterDevices(a1, a2->IoStatus.Information);
    v19 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v19 & 0x200000000000LL) != 0 )
      v10 = *(const char **)(DeviceExtension + 560);
    v20 = ACPIDebugGetIrpText(v19, CurrentStackLocation->MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xEu,
      (__int64)&WPP_83145842ab9239296fde859baf12ff2d_Traceguids,
      (char)a2,
      v20,
      v22,
      DeviceExtension,
      v10,
      v21);
  }
LABEL_13:
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
