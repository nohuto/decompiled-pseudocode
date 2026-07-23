/*
 * XREFs of RtlCheckTokenMembership @ 0x140086B90
 * Callers:
 *     ExpCheckFullProcessInformationAccess @ 0x14048DB7C (ExpCheckFullProcessInformationAccess.c)
 *     PopValidateContextMembership @ 0x140548350 (PopValidateContextMembership.c)
 *     PopNetUpdateStandbyRequest @ 0x14057ED68 (PopNetUpdateStandbyRequest.c)
 *     RtlCapabilityCheck @ 0x140683788 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x140693C88 (NtFilterBootOption.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}
