/*
 * XREFs of RaidFreeSrb @ 0x1C0016D18
 * Callers:
 *     RaWmiPassToMiniPort @ 0x1C005B544 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C005B9CC (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C005F2E0 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidFreeSrb(void *a1)
{
  ExFreePoolWithTag(a1, 0x72536152u);
}
