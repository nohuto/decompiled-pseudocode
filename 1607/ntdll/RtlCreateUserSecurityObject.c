/*
 * XREFs of RtlCreateUserSecurityObject @ 0x1800D49B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlNewSecurityObject @ 0x1800870C0 (RtlNewSecurityObject.c)
 *     RtlCreateAndSetSD @ 0x18008C7F0 (RtlCreateAndSetSD.c)
 */

NTSTATUS __cdecl RtlCreateUserSecurityObject(
        PRTL_ACE_DATA AceData,
        ULONG AceCount,
        PSID OwnerSid,
        PSID GroupSid,
        BOOLEAN IsDirectoryObject,
        PGENERIC_MAPPING GenericMapping,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor)
{
  void *ProcessHeap; // rdi
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  PSECURITY_DESCRIPTOR CreatorDescriptor; // [rsp+30h] [rbp-18h] BYREF

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  result = RtlCreateAndSetSD(AceData, AceCount, OwnerSid, GroupSid, &CreatorDescriptor);
  if ( result >= 0 )
  {
    v9 = RtlNewSecurityObject(
           0LL,
           CreatorDescriptor,
           NewSecurityDescriptor,
           IsDirectoryObject,
           (HANDLE)0xFFFFFFFFFFFFFFFCLL,
           GenericMapping);
    RtlFreeHeap(ProcessHeap, 0, CreatorDescriptor);
    return v9;
  }
  return result;
}
