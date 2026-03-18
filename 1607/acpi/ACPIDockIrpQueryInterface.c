/*
 * XREFs of ACPIDockIrpQueryInterface @ 0x1C0098AC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C0004B44 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     ACPIDockIntfReference @ 0x1C0097DB0 (ACPIDockIntfReference.c)
 */

__int64 __fastcall ACPIDockIrpQueryInterface(PVOID Object, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 DeviceExtension; // rax
  GUID *SecurityContext; // rcx
  unsigned __int8 MinorFunction; // r12
  char v8; // si
  unsigned int Status; // edi
  __int64 v10; // rbx
  unsigned __int16 Size; // di
  __int64 v12; // rcx
  char *IrpText; // rax
  const char *v14; // r8
  const char *v15; // r10
  _WORD Src[4]; // [rsp+60h] [rbp-48h] BYREF
  PVOID v18; // [rsp+68h] [rbp-40h]
  char (__fastcall *v19)(PVOID); // [rsp+70h] [rbp-38h]
  LONG_PTR (__fastcall *v20)(void *); // [rsp+78h] [rbp-30h]
  __int64 (__fastcall *v21)(ULONG_PTR, int); // [rsp+80h] [rbp-28h]
  __int64 (__fastcall *v22)(ULONG_PTR); // [rsp+88h] [rbp-20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v8 = 0;
  Status = Irp->IoStatus.Status;
  v10 = DeviceExtension;
  if ( SecurityContext == &GUID_DOCK_INTERFACE || RtlCompareMemory(SecurityContext, &GUID_DOCK_INTERFACE, 0x10uLL) == 16 )
  {
    Size = 48;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x30u )
      Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    Src[0] = Size;
    Src[1] = 1;
    v18 = Object;
    v19 = ACPIDockIntfReference;
    v20 = ACPIDockIntfDereference;
    v21 = ACPIDockIntfSetMode;
    v22 = ACPIDockIntfUpdateDeparture;
    ACPIDockIntfReference(Object);
    memmove(CurrentStackLocation->Parameters.SetFile.FileObject, Src, Size);
    Status = 0;
    Irp->IoStatus.Status = 0;
  }
  IofCompleteRequest(Irp, 0);
  if ( v10 )
  {
    v12 = 0x200000000000LL;
    v8 = v10;
    if ( (*(_QWORD *)(v10 + 8) & 0x200000000000LL) != 0 )
      v12 = 0x400000000000LL;
  }
  IrpText = ACPIDebugGetIrpText(v12, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x17u,
    (__int64)&WPP_aed3312dd8533895486314f7b4c12c79_Traceguids,
    (char)Irp,
    IrpText,
    Status,
    v8,
    v14,
    v15);
  return Status;
}
