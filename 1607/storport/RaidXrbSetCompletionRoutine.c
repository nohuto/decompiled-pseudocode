/*
 * XREFs of RaidXrbSetCompletionRoutine @ 0x1C0009FE4
 * Callers:
 *     RaWmiPassToMiniPort @ 0x1C005B544 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C005B9CC (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C005F2E0 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidXrbSetCompletionRoutine(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 656) = a2;
}
