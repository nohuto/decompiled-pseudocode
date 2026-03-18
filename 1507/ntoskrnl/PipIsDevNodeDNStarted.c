/*
 * XREFs of PipIsDevNodeDNStarted @ 0x1400CFD80
 * Callers:
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x14011C394 (PipRestoreDevNodeState.c)
 *     PnpCheckForActiveDependencies @ 0x1404E1D24 (PnpCheckForActiveDependencies.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1404E2194 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140534A94 (PnpRequestDeviceRemovalWorker.c)
 *     PnpProcessDependencyRelations @ 0x140535B08 (PnpProcessDependencyRelations.c)
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1405C1A3C (PnpDriverLoadingFailed.c)
 *     PiDevCfgLogDeviceStarted @ 0x140687ACC (PiDevCfgLogDeviceStarted.c)
 *     PiControlGetDevicePowerData @ 0x1406943EC (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 772 && v1 <= 781;
}
