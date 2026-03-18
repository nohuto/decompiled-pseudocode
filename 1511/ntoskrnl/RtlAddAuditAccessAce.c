/*
 * XREFs of RtlAddAuditAccessAce @ 0x140644D1C
 * Callers:
 *     SepInitProcessAuditSd @ 0x140134478 (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
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
