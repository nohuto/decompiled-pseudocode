/*
 * XREFs of RtlNewSecurityObject @ 0x18005D1A0
 * Callers:
 *     RtlCreateUserSecurityObject @ 0x1800CC600 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x1800CCA10 (RtlNewInstanceSecurityObject.c)
 * Callees:
 *     RtlpNewSecurityObject @ 0x18005E688 (RtlpNewSecurityObject.c)
 */

NTSTATUS __cdecl RtlNewSecurityObject(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CreatorDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        BOOLEAN IsDirectoryObject,
        HANDLE Token,
        PGENERIC_MAPPING GenericMapping)
{
  int v7; // [rsp+28h] [rbp-30h]

  LOBYTE(v7) = IsDirectoryObject;
  return RtlpNewSecurityObject(
           (int)ParentDescriptor,
           (int)CreatorDescriptor,
           (int)NewDescriptor,
           0,
           0,
           v7,
           0,
           Token,
           (__int64)GenericMapping,
           0LL);
}
