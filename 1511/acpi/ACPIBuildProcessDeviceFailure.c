/*
 * XREFs of ACPIBuildProcessDeviceFailure @ 0x1C0035C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIBuildProcessDeviceFailure(__int64 a1)
{
  _InterlockedOr64(*(volatile signed __int64 **)(a1 + 40), 0x2000000000000uLL);
  return ACPIBuildProcessGenericComplete((PSLIST_ENTRY)a1);
}
