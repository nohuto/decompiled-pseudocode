/*
 * XREFs of ACPIExtListExitEnumEarly @ 0x1C0018DA8
 * Callers:
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C00157C8 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDuplicateHID @ 0x1C0015864 (ACPIDetectDuplicateHID.c)
 *     ACPIDetectDockDevices @ 0x1C0016AE8 (ACPIDetectDockDevices.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C00340D0 (ACPIDockFindCorrespondingDock.c)
 *     ACPIDetectEjectDevices @ 0x1C0036CF8 (ACPIDetectEjectDevices.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIExtListExitEnumEarly(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 48) == 2 )
    KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), *(_BYTE *)(a1 + 24));
}
