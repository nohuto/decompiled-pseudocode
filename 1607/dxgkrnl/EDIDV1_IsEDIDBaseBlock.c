/*
 * XREFs of EDIDV1_IsEDIDBaseBlock @ 0x1C000A364
 * Callers:
 *     EDIDV1_FillProductIdManufacturerName @ 0x1C000A3FC (EDIDV1_FillProductIdManufacturerName.c)
 *     EDIDV1_ObtainDisplayConfigFriendlyName @ 0x1C000A43C (EDIDV1_ObtainDisplayConfigFriendlyName.c)
 *     EDIDV1_ObtainMonitorUserFriendlyName @ 0x1C000DB08 (EDIDV1_ObtainMonitorUserFriendlyName.c)
 *     EDIDV1_ObtainSupportedMonitorSourceModes @ 0x1C000DBB0 (EDIDV1_ObtainSupportedMonitorSourceModes.c)
 *     ?EDID_V1_CountListedSupportedMonitorSourceModes@@YAJPEBXPEAG11PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@1@Z @ 0x1C000E4A8 (-EDID_V1_CountListedSupportedMonitorSourceModes@@YAJPEBXPEAG11PEAPEBU__EDID_V1_MONDESC_EXTRA_STA.c)
 *     EDIDV1_ObtainMonitorBasicDisplayParams @ 0x1C000E9D0 (EDIDV1_ObtainMonitorBasicDisplayParams.c)
 *     EDIDV1_ObtainMonitorSerialNumber @ 0x1C000EB78 (EDIDV1_ObtainMonitorSerialNumber.c)
 *     EDIDV1_ObtainMonitorManufacturerName @ 0x1C000EC88 (EDIDV1_ObtainMonitorManufacturerName.c)
 *     EDIDV1_ObtainMonitorProductCodeID @ 0x1C000ECEC (EDIDV1_ObtainMonitorProductCodeID.c)
 *     EDIDV1_ObtainMonitorManufactureDate @ 0x1C000ED5C (EDIDV1_ObtainMonitorManufactureDate.c)
 *     EDIDV1_ObtainSupportedMonitorFrequencyRanges @ 0x1C000F81C (EDIDV1_ObtainSupportedMonitorFrequencyRanges.c)
 *     EDIDV1_ObtainMonitorAnalogVideoInputParams @ 0x1C0010A60 (EDIDV1_ObtainMonitorAnalogVideoInputParams.c)
 *     EDIDV1_ObtainMonitorDigitalVideoInputParams @ 0x1C0010B8C (EDIDV1_ObtainMonitorDigitalVideoInputParams.c)
 *     EDIDV1_ObtainMonitorColorCharacteristics @ 0x1C00354F0 (EDIDV1_ObtainMonitorColorCharacteristics.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C00EFE70 (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ @ 0x1C00F0610 (-_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z @ 0x1C00F06A0 (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C00F1D0C (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F1F9C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C00F2778 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C01B48A4 (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     EDID_V1_IsValidEDIDChecksum @ 0x1C000A3A4 (EDID_V1_IsValidEDIDChecksum.c)
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
