/*
 * XREFs of ACPIExtListTestElement @ 0x1C00169B8
 * Callers:
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
 *     ACPIInitReferenceDeviceExtension @ 0x1C0016A14 (ACPIInitReferenceDeviceExtension.c)
 */

char __fastcall ACPIExtListTestElement(__int64 a1, char a2)
{
  __int64 v3; // rcx
  __int64 v5; // r9

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 + *(_QWORD *)(a1 + 40) == *(_QWORD *)a1 || !a2 )
  {
    if ( *(_DWORD *)(a1 + 48) )
      KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), *(_BYTE *)(a1 + 24));
    return 0;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 48) == 1 )
    {
      ACPIInitReferenceDeviceExtension(v3);
      KeReleaseSpinLock(*(PKSPIN_LOCK *)(v5 + 16), *(_BYTE *)(v5 + 24));
    }
    return 1;
  }
}
