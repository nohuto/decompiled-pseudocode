/*
 * XREFs of SeAssignSecurityEx @ 0x1404BE6A4
 * Callers:
 *     ObpAssignSecurity @ 0x14041E8D0 (ObpAssignSecurity.c)
 * Callees:
 *     SeAssignSecurityEx2 @ 0x140012B10 (SeAssignSecurityEx2.c)
 */

NTSTATUS __stdcall SeAssignSecurityEx(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR ExplicitDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        GUID *ObjectType,
        BOOLEAN IsDirectoryObject,
        ULONG AutoInheritFlags,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PGENERIC_MAPPING GenericMapping,
        POOL_TYPE PoolType)
{
  return SeAssignSecurityEx2(
           (int)ParentDescriptor,
           (int)ExplicitDescriptor,
           (int)NewDescriptor,
           (__int64)ObjectType,
           IsDirectoryObject,
           AutoInheritFlags,
           0LL,
           (__int64)SubjectContext,
           (__int64)GenericMapping);
}
