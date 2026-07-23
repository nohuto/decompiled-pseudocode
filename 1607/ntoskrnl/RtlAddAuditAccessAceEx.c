/*
 * XREFs of RtlAddAuditAccessAceEx @ 0x140684758
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlAddAuditAccessAceEx(
        PACL Acl,
        ULONG Revision,
        ULONG Flags,
        ACCESS_MASK AccessMask,
        PSID Sid,
        BOOLEAN Success,
        BOOLEAN Failure)
{
  if ( Success )
    Flags |= 0x40u;
  if ( Failure )
    Flags |= 0x80u;
  return RtlpAddKnownAce(Acl, Revision, Flags, AccessMask, (unsigned __int8 *)Sid, 2u);
}
