/*
 * XREFs of ACPIBusIrpQueryInterface @ 0x1C000B550
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     AcpiPccEjectInterface @ 0x1C000ADB4 (AcpiPccEjectInterface.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     AcpiDeviceResetInterface @ 0x1C004BB60 (AcpiDeviceResetInterface.c)
 *     AcpiFanEjectInterface @ 0x1C004E700 (AcpiFanEjectInterface.c)
 *     AcpiPccGetInterfaceInformation @ 0x1C005259C (AcpiPccGetInterfaceInformation.c)
 *     PciBusEjectInterface @ 0x1C0083E60 (PciBusEjectInterface.c)
 *     TranslateEjectInterface @ 0x1C0084078 (TranslateEjectInterface.c)
 *     ACPICacheCoherencyInterface @ 0x1C0084398 (ACPICacheCoherencyInterface.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1C0084574 (ACPIBusReenumerateSelfInterface.c)
 *     ACPIEjectPnpLocationInterface @ 0x1C00850F8 (ACPIEjectPnpLocationInterface.c)
 *     IsPciBus @ 0x1C00851E4 (IsPciBus.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C0086D08 (ACPIInternalSendSynchronousIrp.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C00909EC (AcpiEjectBusNumberTranslator.c)
 *     AcpiArblibEjectInterface @ 0x1C00998A8 (AcpiArblibEjectInterface.c)
 *     ACPIEjectPartitionUnitInterface @ 0x1C009CA08 (ACPIEjectPartitionUnitInterface.c)
 */

__int64 __fastcall ACPIBusIrpQueryInterface(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 DeviceExtension; // rax
  GUID *SecurityContext; // rbx
  unsigned int EaLength; // r15d
  __int64 v8; // rbp
  int InterfaceInformation; // eax
  unsigned int Status; // ebx
  unsigned __int16 v12; // ax
  unsigned int v13; // ebx
  const void *v14; // rdx
  _QWORD *v15; // rsi
  unsigned __int16 Size; // ax
  unsigned int v17; // ebx
  _QWORD *QuadPart; // rbp
  __int64 v19; // rax
  struct _DEVICE_OBJECT *v20; // rcx
  unsigned __int16 v21; // ax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  v8 = DeviceExtension;
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_ACPI_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    v17 = 88;
    if ( Size <= 0x58u )
      v17 = Size;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(QuadPart, &ACPIInterfaceTable, v17);
    if ( v17 > 0x10 )
      QuadPart[1] = a1;
    goto LABEL_48;
  }
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    v21 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v13 = 88;
    if ( v21 <= 0x58u )
      v13 = v21;
    v14 = &ACPIInterfaceTable2;
LABEL_46:
    v15 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v15, v14, v13);
    if ( v13 > 0x10 )
      v15[1] = v8;
LABEL_48:
    Status = 0;
    goto LABEL_30;
  }
  if ( SecurityContext == &GUID_TRANSLATOR_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    if ( ((EaLength - 1) & 0xFFFFFFF9) != 0 || EaLength == 5 )
    {
      if ( EaLength != 6 || !(unsigned __int8)IsPciBus(a1) || (AcpiOverrideAttributes & 0x1000) != 0 )
        goto LABEL_35;
      InterfaceInformation = AcpiEjectBusNumberTranslator(a1, a2);
    }
    else
    {
      if ( !(unsigned __int8)IsPciBus(a1) )
        goto LABEL_35;
      InterfaceInformation = TranslateEjectInterface(a1, a2);
    }
  }
  else
  {
    if ( SecurityContext != &GUID_PCI_BUS_INTERFACE_STANDARD
      && RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD, 0x10uLL) != 16
      && SecurityContext != &GUID_PCI_BUS_INTERFACE_STANDARD2
      && RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD2, 0x10uLL) != 16 )
    {
      if ( SecurityContext == &GUID_BUS_INTERFACE_STANDARD
        || RtlCompareMemory(SecurityContext, &GUID_BUS_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        a2->IoStatus.Status = -1073741127;
        v19 = *(_QWORD *)(v8 + 744);
        if ( v19 )
        {
          v20 = *(struct _DEVICE_OBJECT **)(v19 + 720);
          if ( v20 )
          {
            if ( v19 == RootDeviceExtension )
              CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)a1;
            a2->IoStatus.Status = ACPIInternalSendSynchronousIrp(v20);
          }
        }
        goto LABEL_35;
      }
      if ( SecurityContext == &GUID_ARBITER_INTERFACE_STANDARD
        || RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        if ( (*(_QWORD *)(v8 + 8) & 0x2000000000LL) == 0 || !*(_BYTE *)(v8 + 184) )
          goto LABEL_35;
        InterfaceInformation = AcpiArblibEjectInterface(a1, a2);
      }
      else if ( SecurityContext == &GUID_PARTITION_UNIT_INTERFACE_STANDARD
             || RtlCompareMemory(SecurityContext, &GUID_PARTITION_UNIT_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        if ( (*(_QWORD *)(v8 + 8) & 0x2000000000LL) == 0 )
          goto LABEL_35;
        InterfaceInformation = ACPIEjectPartitionUnitInterface(a1, a2);
      }
      else if ( SecurityContext == &GUID_PCC_INTERFACE_STANDARD
             || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        InterfaceInformation = AcpiPccEjectInterface(a1, (__int64)a2);
      }
      else
      {
        if ( SecurityContext != &GUID_PCC_INTERFACE_INTERNAL
          && RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_INTERNAL, 0x10uLL) != 16 )
        {
          if ( SecurityContext != &GUID_D3COLD_SUPPORT_INTERFACE
            && RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) != 16 )
          {
            if ( SecurityContext == &GUID_THERMAL_COOLING_INTERFACE
              || RtlCompareMemory(SecurityContext, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) == 16 )
            {
              if ( (*(_QWORD *)(v8 + 912) & 0x200000000LL) == 0 )
                goto LABEL_35;
              InterfaceInformation = AcpiFanEjectInterface(a1, a2);
            }
            else if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
                   || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
            {
              InterfaceInformation = ACPIEjectPnpLocationInterface(a1, a2);
            }
            else if ( SecurityContext == &GUID_DMA_CACHE_COHERENCY_INTERFACE
                   || RtlCompareMemory(SecurityContext, &GUID_DMA_CACHE_COHERENCY_INTERFACE, 0x10uLL) == 16 )
            {
              InterfaceInformation = ACPICacheCoherencyInterface(v8, CurrentStackLocation);
            }
            else if ( SecurityContext == &GUID_DEVICE_RESET_INTERFACE_STANDARD
                   || RtlCompareMemory(SecurityContext, &GUID_DEVICE_RESET_INTERFACE_STANDARD, 0x10uLL) == 16 )
            {
              InterfaceInformation = AcpiDeviceResetInterface(a1, a2, 0LL, 0LL);
            }
            else
            {
              if ( SecurityContext != &GUID_REENUMERATE_SELF_INTERFACE_STANDARD
                && RtlCompareMemory(SecurityContext, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD, 0x10uLL) != 16 )
              {
                goto LABEL_35;
              }
              InterfaceInformation = ACPIBusReenumerateSelfInterface(a1, CurrentStackLocation);
            }
            goto LABEL_28;
          }
          v12 = CurrentStackLocation->Parameters.QueryInterface.Size;
          v13 = 72;
          if ( v12 <= 0x48u )
            v13 = v12;
          v14 = &D3Interface;
          goto LABEL_46;
        }
        if ( (*(_QWORD *)(v8 + 8) & 0x1000000000LL) == 0 )
          goto LABEL_35;
        InterfaceInformation = AcpiPccGetInterfaceInformation(a1, a2);
      }
LABEL_28:
      a2->IoStatus.Status = InterfaceInformation;
      goto LABEL_29;
    }
    if ( !(unsigned __int8)IsPciBus(a1) )
      goto LABEL_35;
    InterfaceInformation = PciBusEjectInterface(a1, a2);
  }
LABEL_29:
  Status = InterfaceInformation;
  if ( InterfaceInformation == -1073741637 )
  {
LABEL_35:
    Status = a2->IoStatus.Status;
    goto LABEL_31;
  }
LABEL_30:
  a2->IoStatus.Status = Status;
LABEL_31:
  IofCompleteRequest(a2, 0);
  return Status;
}
