/*
 * XREFs of ACPIInternalDeviceQueryDeviceRelations @ 0x1C008ED00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C0004B44 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsdqss @ 0x1C0027040 (WPP_RECORDER_SF_qsdqss.c)
 *     ACPIBusIrpQueryTargetRelation @ 0x1C00804B8 (ACPIBusIrpQueryTargetRelation.c)
 */

__int64 __fastcall ACPIInternalDeviceQueryDeviceRelations(PVOID Object, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v3; // bp
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rax
  unsigned int Length; // ebx
  const char *v9; // r14
  __int64 v10; // rsi
  char *IrpText; // rax
  __int64 v12; // rdx
  const char *v13; // r8
  char v14; // r10
  const char *v15; // r11
  unsigned int Status; // ebx
  __int64 v17; // rcx
  char *v18; // rax
  const char *v19; // r8
  int TargetRelation; // eax
  unsigned __int64 v22; // [rsp+98h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v22 = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9 = (const char *)qword_1C0090C20;
  v10 = DeviceExtension;
  if ( Length == 4 )
  {
    TargetRelation = ACPIBusIrpQueryTargetRelation(Object, (char)Irp, (PVOID *)&v22);
    Status = TargetRelation;
    if ( TargetRelation >= 0 )
    {
      Irp->IoStatus.Information = v22;
      Irp->IoStatus.Status = TargetRelation;
      goto LABEL_4;
    }
    if ( TargetRelation != -1073741637 )
    {
      Irp->IoStatus.Status = TargetRelation;
      Irp->IoStatus.Information = 0LL;
      goto LABEL_4;
    }
  }
  else
  {
    IrpText = ACPIDebugGetIrpText(0x400000000000LL, MinorFunction);
    WPP_RECORDER_SF_qsdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      (__int64)v13,
      0xBu,
      (__int64)&WPP_fc25509b988e364002300aed6e2838b0_Traceguids,
      (char)Irp,
      IrpText,
      Length,
      v14,
      v15,
      v13);
  }
  Status = Irp->IoStatus.Status;
LABEL_4:
  IofCompleteRequest(Irp, 0);
  if ( v10 )
  {
    v3 = v10;
    if ( (*(_QWORD *)(v10 + 8) & 0x200000000000LL) != 0 )
    {
      v9 = *(const char **)(v10 + 560);
      v17 = 0x400000000000LL;
    }
  }
  v18 = ACPIDebugGetIrpText(v17, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0xCu,
    (__int64)&WPP_fc25509b988e364002300aed6e2838b0_Traceguids,
    (char)Irp,
    v18,
    Status,
    v3,
    v9,
    v19);
  return Status;
}
