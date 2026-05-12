/*
 * XREFs of StorAllocateContiguousIoResources @ 0x1C0016D24
 * Callers:
 *     RaWmiPassToMiniPort @ 0x1C005B544 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C005B9CC (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C005F2E0 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorAllocateContiguousIoResources(unsigned int a1, __int64 a2, _QWORD *a3)
{
  return MmAllocateContiguousNodeMemory(a1, a3[549], a3[550], a3[548], 4, 0x80000000);
}
