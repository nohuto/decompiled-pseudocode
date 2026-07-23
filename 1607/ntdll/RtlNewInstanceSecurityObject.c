/*
 * XREFs of RtlNewInstanceSecurityObject @ 0x1800D4A30
 * Callers:
 *     <none>
 * Callees:
 *     RtlNewSecurityObject @ 0x1800870C0 (RtlNewSecurityObject.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
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
  ULONG ReturnLength; // [rsp+30h] [rbp-78h] BYREF
  PGENERIC_MAPPING v16; // [rsp+38h] [rbp-70h]
  _QWORD v17[7]; // [rsp+40h] [rbp-68h] BYREF

  v16 = GenericMapping;
  result = NtQueryInformationToken(TokenHandle, 0xAu, v17, 0x38u, &ReturnLength);
  if ( result >= 0 )
  {
    *NewClientTokenModifiedId = (_LUID)v17[6];
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
               v16);
    }
    else
    {
      *NewDescriptor = 0LL;
      return 0;
    }
  }
  return result;
}
