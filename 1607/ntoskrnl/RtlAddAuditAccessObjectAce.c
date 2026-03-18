/*
 * XREFs of RtlAddAuditAccessObjectAce @ 0x140684698
 * Callers:
 *     LocalGetAclForString @ 0x1404D6D44 (LocalGetAclForString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlAddAuditAccessObjectAce(
        PACL Acl,
        ULONG Revision,
        ULONG Flags,
        ACCESS_MASK AccessMask,
        GUID *ObjectTypeGuid,
        GUID *InheritedObjectTypeGuid,
        PSID Sid,
        BOOLEAN Success,
        BOOLEAN Failure)
{
  if ( Success )
    Flags |= 0x40u;
  if ( Failure )
    Flags |= 0x80u;
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return RtlpAddKnownObjectAce(Acl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, Sid, 7);
  else
    return RtlpAddKnownAce(Acl, Revision, Flags, AccessMask, (unsigned __int8 *)Sid, 2u);
}
