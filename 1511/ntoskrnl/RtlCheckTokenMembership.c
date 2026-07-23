/*
 * XREFs of RtlCheckTokenMembership @ 0x140003E6C
 * Callers:
 *     ExpCheckFullProcessInformationAccess @ 0x1403BF500 (ExpCheckFullProcessInformationAccess.c)
 *     PopValidateContextMembership @ 0x14050CEF0 (PopValidateContextMembership.c)
 *     RtlCapabilityCheck @ 0x140646790 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x1406545E8 (NtFilterBootOption.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}
