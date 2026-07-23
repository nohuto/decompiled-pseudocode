/*
 * XREFs of RtlNewSecurityObjectWithMultipleInheritance @ 0x180048C90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x18004B1E8 (RtlpNewSecurityObject.c)
 */

NTSTATUS __cdecl RtlNewSecurityObjectWithMultipleInheritance(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CreatorDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        GUID **ObjectType,
        ULONG GuidCount,
        BOOLEAN IsDirectoryObject,
        ULONG AutoInheritFlags,
        HANDLE Token,
        PGENERIC_MAPPING GenericMapping)
{
  int v10; // [rsp+28h] [rbp-30h]

  LOBYTE(v10) = IsDirectoryObject;
  return RtlpNewSecurityObject(
           (int)ParentDescriptor,
           (int)CreatorDescriptor,
           (int)NewDescriptor,
           (int)ObjectType,
           GuidCount,
           v10,
           AutoInheritFlags,
           Token,
           (__int64)GenericMapping,
           0LL);
}
