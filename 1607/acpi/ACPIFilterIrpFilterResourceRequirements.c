/*
 * XREFs of ACPIFilterIrpFilterResourceRequirements @ 0x1C00847F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C0004B44 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalInterruptPolarityCacheStorePolarity @ 0x1C000B3A0 (ACPIInternalInterruptPolarityCacheStorePolarity.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001341C (WPP_RECORDER_SF_qLqss.c)
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C00849C4 (PnpBiosUpdateResourceListWithSidebandResources.c)
 */

__int64 __fastcall ACPIFilterIrpFilterResourceRequirements(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _IO_STACK_LOCATION *v6; // rax
  unsigned int Status; // r14d
  const char *v8; // rsi
  void *Information; // r15
  int updated; // eax
  __int64 v11; // rcx
  int v12; // r13d
  char *v13; // rax
  const char *v14; // r8
  char *v16; // rax
  const char *v17; // r8
  const char *v18; // r10
  char *IrpText; // rax
  const char *v20; // r8
  const char *v21; // r10
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // r12
  __int64 v25; // rax
  const char *v26; // rdx
  const char *v27; // rcx
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  PVOID P; // [rsp+B8h] [rbp+10h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v6 = a2->Tail.Overlay.CurrentStackLocation;
  v6[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v6[-1].Context = &Event;
  v6[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  v8 = (const char *)qword_1C0090C20;
  if ( (int)(Status + 0x80000000) < 0 || Status == -1073741637 )
  {
    Information = (void *)a2->IoStatus.Information;
    if ( !Information )
      Information = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    updated = PnpBiosUpdateResourceListWithSidebandResources(a1, Information, &P, DeviceExtension + 112);
    v12 = updated;
    if ( updated != -1073741772 )
    {
      if ( updated >= 0 )
      {
        v22 = *(_QWORD *)(DeviceExtension + 112);
        v23 = v22 + 8;
        v24 = v22 + 8 + 32LL * *(unsigned int *)(v22 + 4);
        while ( 1 )
        {
          if ( v23 >= v24 )
          {
            if ( Information )
              ExFreePoolWithTag(Information, 0);
            Status = v12;
            a2->IoStatus.Information = (unsigned __int64)P;
            goto LABEL_7;
          }
          if ( *(_BYTE *)(v23 + 1) == 2 )
          {
            v12 = ACPIInternalInterruptPolarityCacheStorePolarity(
                    DeviceExtension,
                    *(_DWORD *)(v23 + 12),
                    *(_DWORD *)(v23 + 16));
            if ( v12 < 0 )
              break;
          }
          v23 += 32LL;
        }
        v25 = *(_QWORD *)(DeviceExtension + 8);
        v26 = (const char *)qword_1C0090C20;
        v27 = (const char *)qword_1C0090C20;
        if ( (v25 & 0x200000000000LL) != 0 )
        {
          v26 = *(const char **)(DeviceExtension + 560);
          if ( (v25 & 0x400000000000LL) != 0 )
            v27 = *(const char **)(DeviceExtension + 568);
        }
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x12u,
          (__int64)&WPP_83145842ab9239296fde859baf12ff2d_Traceguids,
          (char)a2,
          v12,
          DeviceExtension,
          v26,
          v27);
        ExFreePoolWithTag(P, 0);
      }
      else
      {
        IrpText = ACPIDebugGetIrpText(v11, 0xDu);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x11u,
          (__int64)&WPP_83145842ab9239296fde859baf12ff2d_Traceguids,
          (char)a2,
          IrpText,
          v12,
          DeviceExtension,
          v21,
          v20);
      }
    }
  }
  else
  {
    v16 = ACPIDebugGetIrpText(0x80000000LL, 0xDu);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0x10u,
      (__int64)&WPP_83145842ab9239296fde859baf12ff2d_Traceguids,
      (char)a2,
      v16,
      Status,
      DeviceExtension,
      v18,
      v17);
  }
LABEL_7:
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
    v8 = *(const char **)(DeviceExtension + 560);
  v13 = ACPIDebugGetIrpText(v11, 0xDu);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x13u,
    (__int64)&WPP_83145842ab9239296fde859baf12ff2d_Traceguids,
    (char)a2,
    v13,
    Status,
    DeviceExtension,
    v8,
    v14);
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return Status;
}
