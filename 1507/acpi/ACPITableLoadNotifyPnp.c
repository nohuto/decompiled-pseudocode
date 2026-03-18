/*
 * XREFs of ACPITableLoadNotifyPnp @ 0x1C0023490
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0018584 (ACPIBuildSpecialSynchronizationRequest.c)
 */

__int64 __fastcall ACPITableLoadNotifyPnp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( (AcpiOverrideAttributes & 0x400) == 0 )
    return ACPIBuildSpecialSynchronizationRequest(a1, (__int64)ACPIBuildIssueInvalidateRelations, a1, a4, 1);
  return result;
}
