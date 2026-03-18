/*
 * XREFs of RtlAddAccessAllowedAceEx @ 0x1404C54E8
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140001854 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140769C5C (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140769FCC (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x140435010 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAceEx(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PSID Sid)
{
  return RtlpAddKnownAce(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 0);
}
