/*
 * XREFs of ACPIBuildIssueInvalidateRelations @ 0x1C0026C80
 * Callers:
 *     ACPITableUnloadCallBack @ 0x1C0056DA0 (ACPITableUnloadCallBack.c)
 * Callees:
 *     ACPIBuildIssueInvalidateRelationsWorker @ 0x1C0026CB4 (ACPIBuildIssueInvalidateRelationsWorker.c)
 */

void __fastcall ACPIBuildIssueInvalidateRelations(__int64 a1, __int64 a2)
{
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  ACPIBuildIssueInvalidateRelationsWorker(a2);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
}
