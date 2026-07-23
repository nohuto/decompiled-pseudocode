/*
 * XREFs of RtlAddAuditAccessAceEx @ 0x18008CF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlAddAuditAccessAceEx(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PSID Sid,
        BOOLEAN AuditSuccess,
        BOOLEAN AuditFailure)
{
  if ( AuditSuccess )
    AceFlags |= 0x40u;
  if ( AuditFailure )
    AceFlags |= 0x80u;
  return RtlpAddKnownAce(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 2);
}
