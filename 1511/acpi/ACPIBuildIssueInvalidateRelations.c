/*
 * XREFs of ACPIBuildIssueInvalidateRelations @ 0x1C0020390
 * Callers:
 *     ACPITableUnloadCallBack @ 0x1C0040840 (ACPITableUnloadCallBack.c)
 * Callees:
 *     ACPIBuildIssueInvalidateRelationsWorker @ 0x1C00203C4 (ACPIBuildIssueInvalidateRelationsWorker.c)
 */

void __fastcall ACPIBuildIssueInvalidateRelations(__int64 a1, __int64 a2)
{
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  ACPIBuildIssueInvalidateRelationsWorker(a2);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
}
