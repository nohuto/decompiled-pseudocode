/*
 * XREFs of RtlAddAccessAllowedAceEx @ 0x180070FC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x180020084 (RtlpAddKnownAce.c)
 */

NTSTATUS __cdecl RtlAddAccessAllowedAceEx(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PSID Sid)
{
  return RtlpAddKnownAce(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 0);
}
