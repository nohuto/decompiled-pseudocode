/*
 * XREFs of StorAllocateContiguousIoResources @ 0x1C000F3D4
 * Callers:
 *     RaWmiPassToMiniPort @ 0x1C004EBFC (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C004F39C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0054040 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorAllocateContiguousIoResources(unsigned int a1, __int64 a2, _QWORD *a3)
{
  return MmAllocateContiguousNodeMemory(a1, a3[549], a3[550], a3[548], 4, 0x80000000);
}
