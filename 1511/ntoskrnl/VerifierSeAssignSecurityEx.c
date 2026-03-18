/*
 * XREFs of VerifierSeAssignSecurityEx @ 0x1406C0CD4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierSeAssignSecurityEx(
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
  return pXdvSeAssignSecurityEx(
           ParentDescriptor,
           ExplicitDescriptor,
           NewDescriptor,
           ObjectType,
           IsDirectoryObject,
           AutoInheritFlags,
           SubjectContext,
           GenericMapping,
           PoolType);
}
