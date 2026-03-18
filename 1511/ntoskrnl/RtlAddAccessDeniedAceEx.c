/*
 * XREFs of RtlAddAccessDeniedAceEx @ 0x14053FF20
 * Callers:
 *     PiAuCreateStandardSecurityObject @ 0x140769FCC (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x140435010 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessDeniedAceEx(PACL Acl, ULONG Revision, ULONG Flags, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, Revision, Flags, AccessMask, (unsigned __int8 *)Sid, 1u);
}
