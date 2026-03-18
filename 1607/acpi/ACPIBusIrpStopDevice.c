/*
 * XREFs of ACPIBusIrpStopDevice @ 0x1C009A600
 * Callers:
 *     ACPIEcStopDevice @ 0x1C004D010 (ACPIEcStopDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C0004B44 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C002ACE4 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIFanStopDevice @ 0x1C004E6A8 (ACPIFanStopDevice.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C0054DB8 (EnableDisableRegionSpacesForDevice.c)
 *     ACPIThermalStopZone @ 0x1C0057348 (ACPIThermalStopZone.c)
 *     EnableDisableRegions @ 0x1C0086E6C (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C0086F70 (IsNsobjPciBus.c)
 *     ACPIInitStopDevice @ 0x1C009C360 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C009C834 (EnableDisableIPMIRegions.c)
 */

__int64 __fastcall ACPIBusIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // bp
  __int64 DeviceExtension; // rbx
  int v5; // eax
  char v6; // di
  __int64 v7; // rax
  __int64 v8; // rcx
  char *IrpText; // rax
  const char *v10; // r8
  const char *v11; // r10

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_DWORD *)(DeviceExtension + 320);
  if ( v5 != 1 )
  {
    if ( v5 == 3 && (*(_DWORD *)(DeviceExtension + 620) & 0x300) != 0 )
      EnableDisableRegionSpacesForDevice(DeviceExtension, 0);
    *(_DWORD *)(DeviceExtension + 320) = *(_DWORD *)(DeviceExtension + 324);
  }
  ACPIThermalReleaseCoolingInterfaces(DeviceExtension);
  v6 = (*(_DWORD *)(DeviceExtension + 912) & 0x8000LL) != 0;
  v7 = ACPIInternalGetDeviceExtension(*(_QWORD *)(DeviceExtension + 720));
  if ( IsNsobjPciBus(*(_QWORD *)(v7 + 712)) || v6 )
    EnableDisableRegions(*(__int64 **)(DeviceExtension + 712), 0, v6);
  if ( (*(_DWORD *)(DeviceExtension + 8) & 0x1000LL) != 0 )
    EnableDisableIPMIRegions(*(_QWORD *)(DeviceExtension + 712), 0LL);
  if ( (*(_DWORD *)(DeviceExtension + 8) & 0x8000000) != 0 )
  {
    ACPIThermalStopZone(DeviceExtension);
  }
  else if ( (*(_QWORD *)(DeviceExtension + 912) & 0x200000000LL) != 0 )
  {
    ACPIFanStopDevice(DeviceExtension);
  }
  *(_DWORD *)(DeviceExtension + 320) = 0;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  ACPIInitStopDevice(DeviceExtension, 0LL);
  v8 = 0x200000000000LL;
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
    v8 = 0x400000000000LL;
  IrpText = ACPIDebugGetIrpText(v8, MinorFunction);
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x3Du,
    (__int64)&WPP_f1ea6fabc66d31ba7ef65020ec90bb72_Traceguids,
    (char)a2,
    IrpText,
    0,
    DeviceExtension,
    v10,
    v11);
  return 0LL;
}
