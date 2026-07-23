/*
 * XREFs of RtlCheckTokenMembership @ 0x1400083B0
 * Callers:
 *     ExpCheckFullProcessInformationAccess @ 0x140413094 (ExpCheckFullProcessInformationAccess.c)
 *     PopValidateContextMembership @ 0x1405842DC (PopValidateContextMembership.c)
 *     RtlCapabilityCheck @ 0x1406C97D8 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x1406D6460 (NtFilterBootOption.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}
