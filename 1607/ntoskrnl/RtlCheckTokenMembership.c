/*
 * XREFs of RtlCheckTokenMembership @ 0x1400852A4
 * Callers:
 *     ExpCheckFullProcessInformationAccess @ 0x14048D0EC (ExpCheckFullProcessInformationAccess.c)
 *     PopValidateContextMembership @ 0x140547E10 (PopValidateContextMembership.c)
 *     PopNetUpdateStandbyRequest @ 0x14057E8BC (PopNetUpdateStandbyRequest.c)
 *     RtlCapabilityCheck @ 0x1406836A4 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x140693BA4 (NtFilterBootOption.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCheckTokenMembership(void *a1, void *a2)
{
  return RtlCheckTokenMembershipEx(a1, a2);
}
