/*
 * XREFs of PnpDeviceObjectToDeviceInstance @ 0x14051230C
 * Callers:
 *     PipProcessStartPhase3 @ 0x140488964 (PipProcessStartPhase3.c)
 *     PiQueryRemovableDeviceOverride @ 0x14050D9CC (PiQueryRemovableDeviceOverride.c)
 *     PiCreateDriverSwDevices @ 0x14050FA08 (PiCreateDriverSwDevices.c)
 *     PnpSaveDeviceCapabilities @ 0x14051208C (PnpSaveDeviceCapabilities.c)
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x14062A61C (PiGetDeviceRegistryProperty.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
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
