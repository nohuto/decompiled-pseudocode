/*
 * XREFs of ACPIBuildProcessPowerResourceFailure @ 0x1C0044A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIBuildProcessPowerResourceFailure(PSLIST_ENTRY ListEntry)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)&ListEntry[2].Next + 1);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 16), 0xFFFFFFFFFFFFFFFCuLL);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return ACPIBuildProcessGenericComplete(ListEntry);
}
