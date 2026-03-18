/*
 * XREFs of PipIsDevNodeDNStarted @ 0x1400998AC
 * Callers:
 *     PipSetDevNodeState @ 0x140099720 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1400DA400 (PipRestoreDevNodeState.c)
 *     PnpCheckForActiveDependencies @ 0x140458A70 (PnpCheckForActiveDependencies.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x140458DB0 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpProcessDependencyRelations @ 0x14049EFE4 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14049F150 (PnpRequestDeviceRemovalWorker.c)
 *     PiDevCfgConfigureDevice @ 0x140511EA0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceStarted @ 0x1405130C4 (PiDevCfgLogDeviceStarted.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x140549F80 (PnpDriverLoadingFailed.c)
 *     PiControlGetDevicePowerData @ 0x1406157B0 (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 772 && v1 <= 781;
}
