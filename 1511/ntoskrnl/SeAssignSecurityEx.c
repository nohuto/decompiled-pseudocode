/*
 * XREFs of SeAssignSecurityEx @ 0x1404B2D64
 * Callers:
 *     ObpAssignSecurity @ 0x14046E22C (ObpAssignSecurity.c)
 *     VerifierSeAssignSecurityEx @ 0x1406C0CD4 (VerifierSeAssignSecurityEx.c)
 * Callees:
 *     SeAssignSecurityEx2 @ 0x14007E030 (SeAssignSecurityEx2.c)
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
