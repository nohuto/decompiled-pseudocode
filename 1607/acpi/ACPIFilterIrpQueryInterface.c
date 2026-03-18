/*
 * XREFs of ACPIFilterIrpQueryInterface @ 0x1C0084F60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C00040B0 (ACPIDispatchForwardIrp.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     ACPIFilterIrpQueryPnpLocationInterface @ 0x1C0084CA0 (ACPIFilterIrpQueryPnpLocationInterface.c)
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C008EBE4 (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 */

__int64 __fastcall ACPIFilterIrpQueryInterface(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v6; // r14
  GUID *SecurityContext; // rbx
  unsigned __int16 v9; // ax
  unsigned int v10; // ebx
  const void *v11; // rdx
  _QWORD *v12; // rsi
  unsigned __int16 v13; // ax
  unsigned __int16 Size; // ax
  unsigned int v15; // ebx
  _QWORD *QuadPart; // rsi

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_ACPI_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    v15 = 88;
    if ( Size <= 0x58u )
      v15 = Size;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(QuadPart, &ACPIInterfaceTable, v15);
    if ( v15 > 0x10 )
      QuadPart[1] = DeviceObject;
    goto LABEL_17;
  }
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    v13 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v10 = 88;
    if ( v13 <= 0x58u )
      v10 = v13;
    v11 = &ACPIInterfaceTable2;
    goto LABEL_15;
  }
  if ( SecurityContext == &GUID_D3COLD_SUPPORT_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) == 16 )
  {
    v9 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v10 = 72;
    if ( v9 <= 0x48u )
      v10 = v9;
    v11 = &D3Interface;
LABEL_15:
    v12 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v12, v11, v10);
    if ( v10 > 0x10 )
      v12[1] = v6;
LABEL_17:
    Irp->IoStatus.Status = 0;
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    return ACPIFilterIrpQueryPnpLocationInterface((ULONG_PTR)DeviceObject, Irp);
  }
  if ( SecurityContext != &GUID_DEVICE_RESET_INTERFACE_STANDARD
    && RtlCompareMemory(SecurityContext, &GUID_DEVICE_RESET_INTERFACE_STANDARD, 0x10uLL) != 16 )
  {
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  return ACPIIrpSetPagableCompletionRoutineAndForward(DeviceObject, Irp, 1, 1, 1);
}
