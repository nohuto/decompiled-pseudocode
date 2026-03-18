/*
 * XREFs of ACPIBusIrpSurpriseRemoval @ 0x1C00360D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C00357B8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIFanStopDevice @ 0x1C003B560 (ACPIFanStopDevice.c)
 *     ACPIInternalIsReportedMissing @ 0x1C003CA08 (ACPIInternalIsReportedMissing.c)
 *     ACPIThermalStopZone @ 0x1C00410C4 (ACPIThermalStopZone.c)
 *     IsPciBus @ 0x1C0069364 (IsPciBus.c)
 *     EnableDisableRegions @ 0x1C0069918 (EnableDisableRegions.c)
 *     ACPIInitStopDevice @ 0x1C007B020 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C007B3FC (EnableDisableIPMIRegions.c)
 */

__int64 __fastcall ACPIBusIrpSurpriseRemoval(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v8; // rax
  struct _DEVICE_OBJECT *v9; // rcx
  bool v10; // bp
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = DeviceExtension;
  if ( *(_DWORD *)(DeviceExtension + 312) == 4 )
  {
    v5 = -1073741810;
LABEL_26:
    a2->IoStatus.Status = v5;
    IofCompleteRequest(a2, 0);
    return v5;
  }
  v5 = 0;
  if ( (unsigned __int8)ACPIInternalIsReportedMissing(DeviceExtension) )
  {
    if ( (*(_DWORD *)(v4 + 904) & 0x20000000) != 0 )
    {
      v8 = *(_QWORD *)(v4 + 736);
      if ( v8 )
      {
        v9 = *(struct _DEVICE_OBJECT **)(v8 + 728);
        if ( v9 )
          IoInvalidateDeviceRelations(v9, BusRelations);
      }
    }
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
    v13 = *(_DWORD *)(v4 + 904);
    *(_DWORD *)(v4 + 312) = 5;
    if ( (*(_QWORD *)&v13 & 0x800000LL) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFF7FFuLL);
    else
      _InterlockedOr64((volatile signed __int64 *)v4, 0x800uLL);
    LOBYTE(v11) = 1;
    ACPIInitStopDevice(v4, v11);
    ACPIBuildSurpriseRemovedExtension(v4);
    a2->IoStatus.Information = 0LL;
    goto LABEL_26;
  }
  if ( (*(_DWORD *)v4 & 0x8000000) != 0 )
  {
    ACPIThermalStopZone(v4);
  }
  else if ( (*(_QWORD *)(v4 + 904) & 0x200000000LL) != 0 )
  {
    ACPIFanStopDevice(v4);
  }
  *(_DWORD *)(v4 + 312) = 0;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  LOBYTE(v6) = 1;
  ACPIInitStopDevice(v4, v6);
  return 0LL;
}
