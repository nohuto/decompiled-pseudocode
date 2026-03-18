/*
 * XREFs of VerifierSeAssignSecurity @ 0x1406C0CCC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierSeAssignSecurity(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR ExplicitDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        BOOLEAN IsDirectoryObject,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PGENERIC_MAPPING GenericMapping,
        POOL_TYPE PoolType)
{
  return pXdvSeAssignSecurity(
           ParentDescriptor,
           ExplicitDescriptor,
           NewDescriptor,
           IsDirectoryObject,
           SubjectContext,
           GenericMapping,
           PoolType);
}
