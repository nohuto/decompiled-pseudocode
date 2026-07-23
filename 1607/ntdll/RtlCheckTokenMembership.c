/*
 * XREFs of RtlCheckTokenMembership @ 0x180088E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}
