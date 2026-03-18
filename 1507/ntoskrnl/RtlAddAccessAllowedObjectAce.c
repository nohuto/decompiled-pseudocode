/*
 * XREFs of RtlAddAccessAllowedObjectAce @ 0x1406C7CF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownObjectAce @ 0x1406C8180 (RtlpAddKnownObjectAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedObjectAce(
        PACL pAcl,
        ULONG dwAceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        GUID *ObjectTypeGuid,
        GUID *InheritedObjectTypeGuid,
        PSID pSid)
{
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return RtlpAddKnownObjectAce(pAcl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, pSid, 5);
  else
    return RtlpAddKnownAce(pAcl, dwAceRevision, AceFlags, AccessMask, (unsigned __int8 *)pSid, 0);
}
