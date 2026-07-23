/*
 * XREFs of RtlAddAuditAccessAce @ 0x18008D4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlAddAuditAccessAce(
        PACL Acl,
        ULONG AceRevision,
        ACCESS_MASK AccessMask,
        PSID Sid,
        BOOLEAN AuditSuccess,
        BOOLEAN AuditFailure)
{
  int v7; // r8d

  v7 = 0;
  if ( AuditSuccess )
    v7 = 64;
  if ( AuditFailure )
    v7 |= 0x80u;
  return RtlpAddKnownAce(Acl, AceRevision, v7, AccessMask, (unsigned __int8 *)Sid, 2);
}
