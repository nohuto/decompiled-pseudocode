/*
 * XREFs of ACPIBusIrpRemoveDevice @ 0x1C0035D00
 * Callers:
 *     ACPIEcRemoveDevice @ 0x1C0039C00 (ACPIEcRemoveDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C00357B8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIFanStopDevice @ 0x1C003B560 (ACPIFanStopDevice.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C003C070 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIInitResetDeviceExtension @ 0x1C003C5AC (ACPIInitResetDeviceExtension.c)
 *     ACPIThermalStopZone @ 0x1C00410C4 (ACPIThermalStopZone.c)
 *     IsPciBus @ 0x1C0069364 (IsPciBus.c)
 *     EnableDisableRegions @ 0x1C0069918 (EnableDisableRegions.c)
 *     ACPIInitStopDevice @ 0x1C007B020 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C007B3FC (EnableDisableIPMIRegions.c)
 *     PcisuppReleasePciInterfaces @ 0x1C007FB38 (PcisuppReleasePciInterfaces.c)
 */

__int64 __fastcall ACPIBusIrpRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  struct _DEVICE_OBJECT *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  bool v10; // si
  __int64 v11; // rdx
  __int64 v12; // r8

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = DeviceExtension;
  if ( (*(_DWORD *)(DeviceExtension + 904) & 0x20000000) != 0 )
  {
    v5 = *(_QWORD *)(DeviceExtension + 736);
    if ( v5 )
    {
      v6 = *(struct _DEVICE_OBJECT **)(v5 + 728);
      if ( v6 )
        IoInvalidateDeviceRelations(v6, BusRelations);
    }
  }
  if ( (AcpiOverrideAttributes & 0x80000) == 0 && (*(_DWORD *)v4 & 0x180) == 0x100LL && !*(_DWORD *)(v4 + 312) )
  {
    *(_DWORD *)(v4 + 312) = 5;
    ACPIBuildSurpriseRemovedExtension(v4);
  }
  v7 = *(_QWORD *)v4;
  if ( (*(_QWORD *)v4 & 0x100LL) != 0 )
  {
    if ( *(_DWORD *)(v4 + 312) == 4 )
    {
      a2->IoStatus.Status = -1073741810;
      IofCompleteRequest(a2, 0);
      return 3221225486LL;
    }
    if ( (v7 & 0x80u) == 0LL )
    {
      v10 = (*(_DWORD *)(v4 + 904) & 0x8000LL) != 0;
      if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v4 + 712)) || v10 )
      {
        LOBYTE(v12) = v10;
        EnableDisableRegions(*(_QWORD *)(v4 + 704), 0LL, v12);
      }
      if ( (*(_DWORD *)v4 & 0x1000LL) != 0 )
        EnableDisableIPMIRegions(*(_QWORD *)(v4 + 704), 0LL);
      if ( (*(_DWORD *)v4 & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(v4);
      }
      else if ( (*(_QWORD *)(v4 + 904) & 0x200000000LL) != 0 )
      {
        ACPIFanStopDevice(v4);
      }
      LOBYTE(v11) = 1;
      ACPIInitStopDevice(v4, v11);
    }
    if ( (*(_DWORD *)v4 & 0x2000000) != 0 )
    {
      if ( _interlockedbittestandreset((volatile signed __int32 *)(v4 + 180), 0) )
      {
        ExFreePoolWithTag(*(PVOID *)(v4 + 184), 0);
        *(_QWORD *)(v4 + 184) = 0LL;
      }
      if ( _interlockedbittestandreset((volatile signed __int32 *)(v4 + 184), 0) )
      {
        ExFreePoolWithTag(*(PVOID *)(v4 + 192), 0);
        *(_QWORD *)(v4 + 192) = 0LL;
      }
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 176), 0, 0) & 1) != 0 )
      {
        KeSetEvent((PRKEVENT)(v4 + 240), 0, 0);
        KeWaitForSingleObject(*(PVOID *)(v4 + 288), Executive, 0, 0, 0LL);
        ObfDereferenceObject(*(PVOID *)(v4 + 288));
      }
    }
    ACPIInitDeleteChildDeviceList(v4);
    *(_DWORD *)(v4 + 312) = 4;
    a2->IoStatus.Status = 0;
    a2->IoStatus.Information = 0LL;
    IofCompleteRequest(a2, 0);
    ACPIInitResetDeviceExtension(v4);
  }
  else
  {
    if ( (v7 & 0x1000) != 0 )
      EnableDisableIPMIRegions(*(_QWORD *)(v4 + 704), 0LL);
    *(_DWORD *)(v4 + 312) = 0;
    ACPIInitDeleteChildDeviceList(v4);
    if ( (*(_DWORD *)v4 & 0x2000000) != 0 )
      PcisuppReleasePciInterfaces(v4);
    if ( (*(_DWORD *)v4 & 0x8000000) != 0 )
    {
      ACPIThermalStopZone(v4);
    }
    else if ( (*(_QWORD *)(v4 + 904) & 0x200000000LL) != 0 )
    {
      ACPIFanStopDevice(v4);
    }
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
    LOBYTE(v8) = 1;
    ACPIInitStopDevice(v4, v8);
  }
  return 0LL;
}
