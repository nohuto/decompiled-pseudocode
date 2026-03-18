/*
 * XREFs of EDIDV1_IsEDIDBaseBlock @ 0x1C00086F8
 * Callers:
 *     EDIDV1_FillProductIdManufacturerName @ 0x1C00089B8 (EDIDV1_FillProductIdManufacturerName.c)
 *     EDIDV1_ObtainDisplayConfigFriendlyName @ 0x1C0008A84 (EDIDV1_ObtainDisplayConfigFriendlyName.c)
 *     EDIDV1_ObtainMonitorSerialNumber @ 0x1C0008BBC (EDIDV1_ObtainMonitorSerialNumber.c)
 *     EDIDV1_ObtainMonitorManufacturerName @ 0x1C000A7A4 (EDIDV1_ObtainMonitorManufacturerName.c)
 *     EDIDV1_ObtainMonitorProductCodeID @ 0x1C000A808 (EDIDV1_ObtainMonitorProductCodeID.c)
 *     EDIDV1_ObtainMonitorManufactureDate @ 0x1C000A878 (EDIDV1_ObtainMonitorManufactureDate.c)
 *     EDIDV1_ObtainMonitorUserFriendlyName @ 0x1C000AA60 (EDIDV1_ObtainMonitorUserFriendlyName.c)
 *     EDIDV1_ObtainSupportedMonitorSourceModes @ 0x1C000B958 (EDIDV1_ObtainSupportedMonitorSourceModes.c)
 *     ?EDID_V1_CountListedSupportedMonitorSourceModes@@YAJPEBXPEAG11PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@1@Z @ 0x1C000C250 (-EDID_V1_CountListedSupportedMonitorSourceModes@@YAJPEBXPEAG11PEAPEBU__EDID_V1_MONDESC_EXTRA_STA.c)
 *     EDIDV1_ObtainMonitorBasicDisplayParams @ 0x1C000C778 (EDIDV1_ObtainMonitorBasicDisplayParams.c)
 *     EDIDV1_ObtainSupportedMonitorFrequencyRanges @ 0x1C000D644 (EDIDV1_ObtainSupportedMonitorFrequencyRanges.c)
 *     EDIDV1_ObtainMonitorAnalogVideoInputParams @ 0x1C000F3FC (EDIDV1_ObtainMonitorAnalogVideoInputParams.c)
 *     EDIDV1_ObtainMonitorDigitalVideoInputParams @ 0x1C000F5A0 (EDIDV1_ObtainMonitorDigitalVideoInputParams.c)
 *     EDIDV1_ObtainMonitorColorCharacteristics @ 0x1C002CDC0 (EDIDV1_ObtainMonitorColorCharacteristics.c)
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z @ 0x1C0097EDC (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C00982C4 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C00C82F0 (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C00C9BCC (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00C9E5C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
 *     MonitorIsPortraitFirstMonitor @ 0x1C00DDB00 (MonitorIsPortraitFirstMonitor.c)
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C018659C (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     EDID_V1_IsValidEDIDChecksum @ 0x1C0008738 (EDID_V1_IsValidEDIDChecksum.c)
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
