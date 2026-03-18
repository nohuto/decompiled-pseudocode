/*
 * XREFs of ACPIBusIrpRemoveDevice @ 0x1C0046610
 * Callers:
 *     ACPIEcRemoveDevice @ 0x1C004CBF0 (ACPIEcRemoveDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C0029A1C (ACPIInitDeleteChildDeviceList.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0045508 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIFanStopDevice @ 0x1C004E6A8 (ACPIFanStopDevice.c)
 *     ACPIInitResetDeviceExtension @ 0x1C004FB94 (ACPIInitResetDeviceExtension.c)
 *     ACPIThermalStopZone @ 0x1C0057348 (ACPIThermalStopZone.c)
 *     IsPciBus @ 0x1C00851E4 (IsPciBus.c)
 *     EnableDisableRegions @ 0x1C0086E6C (EnableDisableRegions.c)
 *     ACPIInitStopDevice @ 0x1C009C360 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C009C834 (EnableDisableIPMIRegions.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00A17EC (PcisuppReleasePciInterfaces.c)
 */

__int64 __fastcall ACPIBusIrpRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // bp
  __int64 DeviceExtension; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  struct _DEVICE_OBJECT *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  bool v11; // si
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  const char *v15; // rdx
  const char *v16; // r8
  int v17; // ecx

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension;
  if ( (*(_DWORD *)(DeviceExtension + 912) & 0x20000000) != 0 )
  {
    v6 = *(_QWORD *)(DeviceExtension + 744);
    if ( v6 )
    {
      v7 = *(struct _DEVICE_OBJECT **)(v6 + 736);
      if ( v7 )
        IoInvalidateDeviceRelations(v7, BusRelations);
    }
  }
  if ( (((*(_DWORD *)(v5 + 8) & 0x180) == 256LL) & !_bittest(&AcpiOverrideAttributes, 0x13u)) != 0
    && !*(_DWORD *)(v5 + 320) )
  {
    *(_DWORD *)(v5 + 320) = 5;
    ACPIBuildSurpriseRemovedExtension(v5);
  }
  v8 = *(_QWORD *)(v5 + 8);
  if ( (v8 & 0x100) != 0 )
  {
    if ( *(_DWORD *)(v5 + 320) == 4 )
    {
      a2->IoStatus.Status = -1073741810;
      IofCompleteRequest(a2, 0);
      return 3221225486LL;
    }
    if ( (v8 & 0x80u) == 0LL )
    {
      v11 = (*(_DWORD *)(v5 + 912) & 0x8000LL) != 0;
      if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v5 + 720)) || v11 )
      {
        LOBYTE(v13) = v11;
        EnableDisableRegions(*(_QWORD *)(v5 + 712), 0LL, v13);
      }
      if ( (*(_DWORD *)(v5 + 8) & 0x1000LL) != 0 )
        EnableDisableIPMIRegions(*(_QWORD *)(v5 + 712), 0LL);
      if ( (*(_DWORD *)(v5 + 8) & 0x8000000) != 0 )
      {
        ACPIThermalStopZone(v5);
      }
      else if ( (*(_QWORD *)(v5 + 912) & 0x200000000LL) != 0 )
      {
        ACPIFanStopDevice(v5);
      }
      LOBYTE(v12) = 1;
      ACPIInitStopDevice(v5, v12);
    }
    if ( (*(_DWORD *)(v5 + 8) & 0x2000000) != 0 )
    {
      if ( _interlockedbittestandreset((volatile signed __int32 *)(v5 + 188), 0) )
      {
        ExFreePoolWithTag(*(PVOID *)(v5 + 192), 0);
        *(_QWORD *)(v5 + 192) = 0LL;
      }
      if ( _interlockedbittestandreset((volatile signed __int32 *)(v5 + 192), 0) )
      {
        ExFreePoolWithTag(*(PVOID *)(v5 + 200), 0);
        *(_QWORD *)(v5 + 200) = 0LL;
      }
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 184), 0, 0) & 1) != 0 )
      {
        KeSetEvent((PRKEVENT)(v5 + 248), 0, 0);
        KeWaitForSingleObject(*(PVOID *)(v5 + 296), Executive, 0, 0, 0LL);
        ObfDereferenceObject(*(PVOID *)(v5 + 296));
      }
    }
    ACPIInitDeleteChildDeviceList(v5);
    *(_DWORD *)(v5 + 320) = 4;
    a2->IoStatus.Status = 0;
    a2->IoStatus.Information = 0LL;
    IofCompleteRequest(a2, 0);
    v14 = *(_QWORD *)(v5 + 8);
    v15 = (const char *)qword_1C002C340;
    v16 = (const char *)qword_1C002C340;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v15 = *(const char **)(v5 + 560);
      if ( (v14 & 0x400000000000LL) != 0 )
        v16 = *(const char **)(v5 + 568);
    }
    v17 = 26;
    if ( MinorFunction < 0x1Au )
      v17 = MinorFunction;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xCu,
      0x38u,
      (__int64)&WPP_f1ea6fabc66d31ba7ef65020ec90bb72_Traceguids,
      (char)a2,
      ACPIDispatchPnpTableNames[v17],
      0,
      v5,
      v15,
      v16);
    ACPIInitResetDeviceExtension(v5);
  }
  else
  {
    if ( (v8 & 0x1000) != 0 )
      EnableDisableIPMIRegions(*(_QWORD *)(v5 + 712), 0LL);
    *(_DWORD *)(v5 + 320) = 0;
    ACPIInitDeleteChildDeviceList(v5);
    if ( (*(_DWORD *)(v5 + 8) & 0x2000000) != 0 )
      PcisuppReleasePciInterfaces(v5);
    if ( (*(_DWORD *)(v5 + 8) & 0x8000000) != 0 )
    {
      ACPIThermalStopZone(v5);
    }
    else if ( (*(_QWORD *)(v5 + 912) & 0x200000000LL) != 0 )
    {
      ACPIFanStopDevice(v5);
    }
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
    LOBYTE(v9) = 1;
    ACPIInitStopDevice(v5, v9);
  }
  return 0LL;
}
