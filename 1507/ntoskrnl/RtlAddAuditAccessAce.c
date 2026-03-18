/*
 * XREFs of RtlAddAuditAccessAce @ 0x1406C7DA8
 * Callers:
 *     SepInitProcessAuditSd @ 0x14015EE30 (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlAddAuditAccessAce(
        PACL Acl,
        ULONG Revision,
        ACCESS_MASK AccessMask,
        PSID Sid,
        BOOLEAN Success,
        BOOLEAN Failure)
{
  return RtlpAddKnownAce(Acl, 2u, 192, AccessMask, (unsigned __int8 *)SeWorldSid, 2u);
}
