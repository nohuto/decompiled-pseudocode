/*
 * XREFs of RtlAddAccessAllowedAce @ 0x1800149A0
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000DDE0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180011030 (RtlCheckTokenMembershipEx.c)
 *     RtlDefaultNpAcl @ 0x18008B240 (RtlDefaultNpAcl.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x180014CD4 (RtlpAddKnownAce.c)
 */

NTSTATUS __cdecl RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, Sid, 0);
}
