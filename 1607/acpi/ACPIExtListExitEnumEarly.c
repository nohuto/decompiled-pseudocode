/*
 * XREFs of ACPIExtListExitEnumEarly @ 0x1C0020908
 * Callers:
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C001E3E0 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDuplicateHID @ 0x1C001E47C (ACPIDetectDuplicateHID.c)
 *     ACPIDetectDockDevices @ 0x1C001EB70 (ACPIDetectDockDevices.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0043160 (ACPIDockFindCorrespondingDock.c)
 *     ACPIDetectEjectDevices @ 0x1C0048368 (ACPIDetectEjectDevices.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIExtListExitEnumEarly(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 48) == 2 )
    KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), *(_BYTE *)(a1 + 24));
}
