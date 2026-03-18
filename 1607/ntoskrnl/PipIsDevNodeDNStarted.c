/*
 * XREFs of PipIsDevNodeDNStarted @ 0x1400097B8
 * Callers:
 *     PipSetDevNodeState @ 0x14000962C (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x14009E68C (PipRestoreDevNodeState.c)
 *     PnpCheckForActiveDependencies @ 0x1403F4858 (PnpCheckForActiveDependencies.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1403F4B68 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpProcessDependencyRelations @ 0x1404C4960 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1404C4ACC (PnpRequestDeviceRemovalWorker.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x14057F858 (PnpDriverLoadingFailed.c)
 *     PiDevCfgConfigureDevice @ 0x140633214 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceStarted @ 0x14063A21C (PiDevCfgLogDeviceStarted.c)
 *     PiControlGetDevicePowerData @ 0x14064A204 (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 772 && v1 <= 781;
}
