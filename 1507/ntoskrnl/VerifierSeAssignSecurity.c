/*
 * XREFs of VerifierSeAssignSecurity @ 0x14074250C
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
