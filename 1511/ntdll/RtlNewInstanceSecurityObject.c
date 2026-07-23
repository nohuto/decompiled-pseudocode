/*
 * XREFs of RtlNewInstanceSecurityObject @ 0x1800CCA10
 * Callers:
 *     <none>
 * Callees:
 *     RtlNewSecurityObject @ 0x18005D1A0 (RtlNewSecurityObject.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A54E0 (NtQueryInformationToken.c)
 */

NTSTATUS __cdecl RtlNewInstanceSecurityObject(
        BOOLEAN ParentDescriptorChanged,
        BOOLEAN CreatorDescriptorChanged,
        PLUID OldClientTokenModifiedId,
        PLUID NewClientTokenModifiedId,
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CreatorDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        BOOLEAN IsDirectoryObject,
        HANDLE TokenHandle,
        PGENERIC_MAPPING GenericMapping)
{
  NTSTATUS result; // eax
  ULONG ReturnLength; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v16[7]; // [rsp+40h] [rbp-68h] BYREF

  result = NtQueryInformationToken(TokenHandle, 0xAu, v16, 0x38u, &ReturnLength);
  if ( result >= 0 )
  {
    *NewClientTokenModifiedId = (_LUID)v16[6];
    if ( NewClientTokenModifiedId->LowPart != OldClientTokenModifiedId->LowPart
      || NewClientTokenModifiedId->HighPart != OldClientTokenModifiedId->HighPart
      || ParentDescriptorChanged
      || CreatorDescriptorChanged )
    {
      return RtlNewSecurityObject(
               ParentDescriptor,
               CreatorDescriptor,
               NewDescriptor,
               IsDirectoryObject,
               TokenHandle,
               GenericMapping);
    }
    else
    {
      *NewDescriptor = 0LL;
      return 0;
    }
  }
  return result;
}
