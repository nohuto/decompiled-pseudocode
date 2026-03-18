/*
 * XREFs of ACPIExtListStartEnum @ 0x1C001EB18
 * Callers:
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C001E3E0 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDuplicateHID @ 0x1C001E47C (ACPIDetectDuplicateHID.c)
 *     ACPIDetectDockDevices @ 0x1C001EB70 (ACPIDetectDockDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001EE60 (ACPIFilterRemoveNonPresentDevices.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C002056C (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C0029A1C (ACPIInitDeleteChildDeviceList.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0043160 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0045508 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDetectEjectDevices @ 0x1C0048368 (ACPIDetectEjectDevices.c)
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
