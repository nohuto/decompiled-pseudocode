/*
 * XREFs of ACPIRootIrpQueryInterface @ 0x1C0084D80
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C00040B0 (ACPIDispatchForwardIrp.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C0004B44 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     AcpiPccEjectInterface @ 0x1C000ADB4 (AcpiPccEjectInterface.c)
 *     AcpiIrqLibEjectArbiterInterface @ 0x1C0083AE0 (AcpiIrqLibEjectArbiterInterface.c)
 *     IrqTranslatorEjectInterface @ 0x1C0083B58 (IrqTranslatorEjectInterface.c)
 *     ACPIEjectPnpLocationInterface @ 0x1C00850F8 (ACPIEjectPnpLocationInterface.c)
 */

__int64 __fastcall ACPIRootIrpQueryInterface(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v5; // r15
  __int64 DeviceExtension; // rax
  __int64 v7; // rcx
  unsigned __int8 MinorFunction; // r12
  unsigned int EaLength; // ebp
  __int64 v10; // rsi
  GUID *SecurityContext; // rbx
  __int64 v12; // rcx
  int v13; // eax
  char *IrpText; // rax
  const char *v15; // r8
  const char *v16; // r10
  char v17; // r11
  unsigned int Status; // ebx
  int v20; // eax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = 1;
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  MinorFunction = CurrentStackLocation->MinorFunction;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  v10 = DeviceExtension;
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( (SecurityContext == &GUID_ARBITER_INTERFACE_STANDARD
     || RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) == 16)
    && EaLength == 2 )
  {
    v13 = AcpiIrqLibEjectArbiterInterface(v7, (__int64)Irp);
    goto LABEL_10;
  }
  if ( (SecurityContext == &GUID_TRANSLATOR_INTERFACE_STANDARD
     || RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16)
    && EaLength == 2 )
  {
    v13 = IrqTranslatorEjectInterface(v7, (__int64)Irp);
    goto LABEL_10;
  }
  if ( SecurityContext == &GUID_PCC_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    v20 = AcpiPccEjectInterface(BugCheckParameter3, (__int64)Irp);
    Irp->IoStatus.Status = v20;
    v12 = v20 + 0x80000000;
    if ( (int)v12 >= 0 && v20 != -1073741637 )
      v5 = 0;
  }
  else if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
         || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    v13 = ACPIEjectPnpLocationInterface(BugCheckParameter3, Irp);
LABEL_10:
    Irp->IoStatus.Status = v13;
  }
  if ( v10 )
  {
    v12 = 0x200000000000LL;
    if ( (*(_QWORD *)(v10 + 8) & 0x200000000000LL) != 0 )
      v12 = 0x400000000000LL;
  }
  IrpText = ACPIDebugGetIrpText(v12, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x14u,
    (__int64)&WPP_5441e56d220835a776220f48a79793ac_Traceguids,
    (char)Irp,
    IrpText,
    Irp->IoStatus.Status,
    v17,
    v15,
    v16);
  if ( v5 )
  {
    return (unsigned int)ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
  }
  else
  {
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
  }
  return Status;
}
