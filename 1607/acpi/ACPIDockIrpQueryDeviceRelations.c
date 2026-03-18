/*
 * XREFs of ACPIDockIrpQueryDeviceRelations @ 0x1C00983E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C0004B44 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsdqss @ 0x1C0027040 (WPP_RECORDER_SF_qsdqss.c)
 *     ACPIBusIrpQueryTargetRelation @ 0x1C00804B8 (ACPIBusIrpQueryTargetRelation.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C00985E0 (ACPIDockIrpQueryEjectRelations.c)
 */

__int64 __fastcall ACPIDockIrpQueryDeviceRelations(PVOID Object, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 DeviceExtension; // rax
  unsigned __int8 MinorFunction; // r12
  const char *v7; // r14
  unsigned int Length; // ebx
  char v9; // bp
  __int64 v10; // rsi
  char *IrpText; // rax
  __int64 v12; // rdx
  const char *v13; // r8
  char v14; // r10
  const char *v15; // r11
  int TargetRelation; // eax
  unsigned int Status; // ebx
  __int64 v18; // rcx
  char *v19; // rax
  const char *v20; // r8
  unsigned __int64 Information; // [rsp+98h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Information = Irp->IoStatus.Information;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  MinorFunction = CurrentStackLocation->MinorFunction;
  v7 = (const char *)qword_1C0090C20;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9 = 0;
  v10 = DeviceExtension;
  switch ( Length )
  {
    case 0u:
      goto LABEL_12;
    case 1u:
      TargetRelation = ACPIDockIrpQueryEjectRelations(Object, Irp, &Information);
      break;
    case 4u:
      TargetRelation = ACPIBusIrpQueryTargetRelation(Object, (char)Irp, (PVOID *)&Information);
      break;
    default:
      IrpText = ACPIDebugGetIrpText(0x400000000000LL, MinorFunction);
      WPP_RECORDER_SF_qsdqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v12,
        (__int64)v13,
        0xFu,
        (__int64)&WPP_aed3312dd8533895486314f7b4c12c79_Traceguids,
        (char)Irp,
        IrpText,
        Length,
        v14,
        v15,
        v13);
LABEL_12:
      Status = Irp->IoStatus.Status;
      goto LABEL_13;
  }
  Status = TargetRelation;
  if ( TargetRelation < 0 )
  {
    if ( TargetRelation == -1073741637 || Information )
      goto LABEL_12;
    Irp->IoStatus.Status = TargetRelation;
    Irp->IoStatus.Information = 0LL;
  }
  else
  {
    Irp->IoStatus.Status = TargetRelation;
    Irp->IoStatus.Information = Information;
  }
LABEL_13:
  IofCompleteRequest(Irp, 0);
  if ( v10 )
  {
    v9 = v10;
    if ( (*(_QWORD *)(v10 + 8) & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v10 + 560);
      v18 = 0x400000000000LL;
    }
  }
  v19 = ACPIDebugGetIrpText(v18, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x10u,
    (__int64)&WPP_aed3312dd8533895486314f7b4c12c79_Traceguids,
    (char)Irp,
    v19,
    Status,
    v9,
    v7,
    v20);
  return Status;
}
