/*
 * XREFs of RtlNewSecurityObject @ 0x180047E70
 * Callers:
 *     RtlCreateUserSecurityObject @ 0x1800C2F60 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x1800C2FE0 (RtlNewInstanceSecurityObject.c)
 * Callees:
 *     RtlpNewSecurityObject @ 0x18004B1E8 (RtlpNewSecurityObject.c)
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
