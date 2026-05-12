/*
 * XREFs of RaidFreeSrb @ 0x1C00118A4
 * Callers:
 *     RaWmiPassToMiniPort @ 0x1C00529B0 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00530FC (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0057F80 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidFreeSrb(void *a1)
{
  ExFreePoolWithTag(a1, 0x72536152u);
}
