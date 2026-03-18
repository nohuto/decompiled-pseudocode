/*
 * XREFs of ACPIExtListExitEnumEarly @ 0x1C0018C8C
 * Callers:
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C00167C8 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDuplicateHID @ 0x1C0016864 (ACPIDetectDuplicateHID.c)
 *     ACPIDetectDockDevices @ 0x1C0017930 (ACPIDetectDockDevices.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0034E10 (ACPIDockFindCorrespondingDock.c)
 *     ACPIDetectEjectDevices @ 0x1C00378E8 (ACPIDetectEjectDevices.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIExtListExitEnumEarly(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 48) == 2 )
    KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), *(_BYTE *)(a1 + 24));
}
