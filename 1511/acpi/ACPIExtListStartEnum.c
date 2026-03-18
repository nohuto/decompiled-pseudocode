/*
 * XREFs of ACPIExtListStartEnum @ 0x1C00154B0
 * Callers:
 *     ACPIGpeBuildWakeMasks @ 0x1C00153A4 (ACPIGpeBuildWakeMasks.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C00164C0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C00167C8 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDuplicateHID @ 0x1C0016864 (ACPIDetectDuplicateHID.c)
 *     ACPIDetectDockDevices @ 0x1C0017930 (ACPIDetectDockDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C00180E8 (ACPIFilterRemoveNonPresentDevices.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C001892C (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0034E10 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0036438 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDetectEjectDevices @ 0x1C00378E8 (ACPIDetectEjectDevices.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C003C400 (ACPIInitDeleteChildDeviceList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIExtListStartEnum(__int64 a1)
{
  _QWORD **v2; // r8
  __int64 v3; // rdx
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 48) )
    *(_BYTE *)(a1 + 24) = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
  v2 = *(_QWORD ***)a1;
  v3 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 32) = **(_QWORD **)a1 - v3;
  result = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 8) = **v2;
  if ( (_QWORD **)(result + v3) == v2 )
    return 0LL;
  return result;
}
