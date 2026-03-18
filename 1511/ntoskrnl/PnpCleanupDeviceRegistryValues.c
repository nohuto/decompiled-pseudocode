/*
 * XREFs of PnpCleanupDeviceRegistryValues @ 0x1404A078C
 * Callers:
 *     PnpUnlinkDeviceRemovalRelations @ 0x14049FD44 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1404F0FA8 (PiBuildDeviceNodeInstancePath.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140543AF4 (IoReportRootDevice.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140090710 (RtlDeleteElementGenericTableAvl.c)
 *     PpDeviceRegistration @ 0x1403B91E8 (PpDeviceRegistration.c)
 */

__int64 __fastcall PnpCleanupDeviceRegistryValues(__int64 a1)
{
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = 0LL;
  Buffer[1] = a1;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  RtlDeleteElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  return PpDeviceRegistration(a1, 0LL, 0LL, 1);
}
