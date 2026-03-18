/*
 * XREFs of ACPIRootIrpQueryInterface @ 0x1C0068FC0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0004180 (ACPIDispatchForwardIrp.c)
 *     AcpiPccEjectInterface @ 0x1C0007108 (AcpiPccEjectInterface.c)
 *     ACPIEjectPnpLocationInterface @ 0x1C0069278 (ACPIEjectPnpLocationInterface.c)
 *     AcpiIrqLibEjectArbiterInterface @ 0x1C00732F4 (AcpiIrqLibEjectArbiterInterface.c)
 *     IrqTranslatorEjectInterface @ 0x1C007336C (IrqTranslatorEjectInterface.c)
 */

__int64 __fastcall ACPIRootIrpQueryInterface(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  GUID *SecurityContext; // rdi
  unsigned int EaLength; // esi
  int v7; // eax
  unsigned int v8; // edi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  if ( (SecurityContext == &GUID_ARBITER_INTERFACE_STANDARD
     || RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) == 16)
    && EaLength == 2 )
  {
    v7 = AcpiIrqLibEjectArbiterInterface(BugCheckParameter3, Irp);
LABEL_10:
    Irp->IoStatus.Status = v7;
    return (unsigned int)ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
  }
  if ( (SecurityContext == &GUID_TRANSLATOR_INTERFACE_STANDARD
     || RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16)
    && EaLength == 2 )
  {
    v7 = IrqTranslatorEjectInterface(BugCheckParameter3, Irp);
    goto LABEL_10;
  }
  if ( SecurityContext != &GUID_PCC_INTERFACE_STANDARD
    && RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_STANDARD, 0x10uLL) != 16 )
  {
    if ( SecurityContext != &GUID_PNP_LOCATION_INTERFACE
      && RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) != 16 )
    {
      return (unsigned int)ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
    }
    v7 = ACPIEjectPnpLocationInterface(BugCheckParameter3, Irp);
    goto LABEL_10;
  }
  v8 = AcpiPccEjectInterface(BugCheckParameter3, (__int64)Irp);
  Irp->IoStatus.Status = v8;
  if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741637 )
  {
    IofCompleteRequest(Irp, 0);
    return v8;
  }
  return (unsigned int)ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
}
