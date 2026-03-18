/*
 * XREFs of PnpDeviceObjectToDeviceInstance @ 0x1404D8C10
 * Callers:
 *     PipProcessStartPhase3 @ 0x14045ED7C (PipProcessStartPhase3.c)
 *     PiCreateDriverSwDevices @ 0x140461354 (PiCreateDriverSwDevices.c)
 *     PnpSaveDeviceCapabilities @ 0x1404D8990 (PnpSaveDeviceCapabilities.c)
 *     PiQueryRemovableDeviceOverride @ 0x140540D3C (PiQueryRemovableDeviceOverride.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x14067B0F8 (PiGetDeviceRegistryProperty.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall PnpDeviceObjectToDeviceInstance(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( v4 && (v5 = *(_QWORD *)(v4 + 48)) != 0 )
    return CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v5, 0x10u, 0, a3, 0, a2, 0LL);
  else
    return 3221225488LL;
}
