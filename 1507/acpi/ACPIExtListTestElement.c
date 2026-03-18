/*
 * XREFs of ACPIExtListTestElement @ 0x1C00159B8
 * Callers:
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C00157C8 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDuplicateHID @ 0x1C0015864 (ACPIDetectDuplicateHID.c)
 *     ACPIDetectDockDevices @ 0x1C0016AE8 (ACPIDetectDockDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0016BD8 (ACPIFilterRemoveNonPresentDevices.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0018924 (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C00340D0 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C00357B8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDetectEjectDevices @ 0x1C0036CF8 (ACPIDetectEjectDevices.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C003C070 (ACPIInitDeleteChildDeviceList.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIExtListTestElement(__int64 a1, char a2)
{
  __int64 v2; // r9

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 + *(_QWORD *)(a1 + 40) == *(_QWORD *)a1 || !a2 )
  {
    if ( *(_DWORD *)(a1 + 48) )
      KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), *(_BYTE *)(a1 + 24));
    return 0;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 48) == 1 )
    {
      if ( *(_DWORD *)(v2 + 676) )
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 676));
      KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), *(_BYTE *)(a1 + 24));
    }
    return 1;
  }
}
