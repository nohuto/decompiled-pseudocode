/*
 * XREFs of EDIDV1_IsEDIDBaseBlock @ 0x1C000148C
 * Callers:
 *     EDIDV1_ObtainDisplayConfigFriendlyName @ 0x1C0001314 (EDIDV1_ObtainDisplayConfigFriendlyName.c)
 *     EDIDV1_FillProductIdManufacturerName @ 0x1C000144C (EDIDV1_FillProductIdManufacturerName.c)
 *     EDIDV1_ObtainMonitorUserFriendlyName @ 0x1C000D228 (EDIDV1_ObtainMonitorUserFriendlyName.c)
 *     EDIDV1_ObtainMonitorSerialNumber @ 0x1C000E918 (EDIDV1_ObtainMonitorSerialNumber.c)
 *     EDIDV1_ObtainMonitorProductCodeID @ 0x1C000E9E8 (EDIDV1_ObtainMonitorProductCodeID.c)
 *     EDIDV1_ObtainMonitorManufacturerName @ 0x1C000EA58 (EDIDV1_ObtainMonitorManufacturerName.c)
 *     EDIDV1_ObtainSupportedMonitorFrequencyRanges @ 0x1C000EABC (EDIDV1_ObtainSupportedMonitorFrequencyRanges.c)
 *     EDIDV1_ObtainSupportedMonitorSourceModes @ 0x1C000EBBC (EDIDV1_ObtainSupportedMonitorSourceModes.c)
 *     ?EDID_V1_CountListedSupportedMonitorSourceModes@@YAJPEBXPEAG11PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@1@Z @ 0x1C000F4B4 (-EDID_V1_CountListedSupportedMonitorSourceModes@@YAJPEBXPEAG11PEAPEBU__EDID_V1_MONDESC_EXTRA_STA.c)
 *     EDIDV1_ObtainMonitorBasicDisplayParams @ 0x1C000FA20 (EDIDV1_ObtainMonitorBasicDisplayParams.c)
 *     EDIDV1_ObtainMonitorManufactureDate @ 0x1C000FACC (EDIDV1_ObtainMonitorManufactureDate.c)
 *     EDIDV1_ObtainMonitorAnalogVideoInputParams @ 0x1C001032C (EDIDV1_ObtainMonitorAnalogVideoInputParams.c)
 *     EDIDV1_ObtainMonitorDigitalVideoInputParams @ 0x1C0010460 (EDIDV1_ObtainMonitorDigitalVideoInputParams.c)
 *     EDIDV1_ObtainMonitorColorCharacteristics @ 0x1C002C7FC (EDIDV1_ObtainMonitorColorCharacteristics.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C00DF830 (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ @ 0x1C00DF918 (-_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z @ 0x1C00E0060 (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C00E166C (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00E18FC (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C00E1F1C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C018ADAC (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     EDID_V1_IsValidEDIDChecksum @ 0x1C00014CC (EDID_V1_IsValidEDIDChecksum.c)
 */

__int64 __fastcall EDIDV1_IsEDIDBaseBlock(_QWORD *a1)
{
  unsigned int v1; // edx

  if ( !a1 )
    return 3221225485LL;
  if ( *a1 != 0xFFFFFFFFFFFF00LL )
    return 3223126018LL;
  if ( !(unsigned __int8)EDID_V1_IsValidEDIDChecksum(a1, 0LL) )
    return (unsigned int)-1071841277;
  return v1;
}
