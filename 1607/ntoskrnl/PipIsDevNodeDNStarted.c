/*
 * XREFs of PipIsDevNodeDNStarted @ 0x14000932C
 * Callers:
 *     PipSetDevNodeState @ 0x1400091A0 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x140084EBC (PipRestoreDevNodeState.c)
 *     PnpCheckForActiveDependencies @ 0x1403F371C (PnpCheckForActiveDependencies.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1403F3A2C (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpProcessDependencyRelations @ 0x140486338 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1404864A4 (PnpRequestDeviceRemovalWorker.c)
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x14057FD04 (PnpDriverLoadingFailed.c)
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceStarted @ 0x14063A2D0 (PiDevCfgLogDeviceStarted.c)
 *     PiControlGetDevicePowerData @ 0x14064A2E8 (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 772 && v1 <= 781;
}
