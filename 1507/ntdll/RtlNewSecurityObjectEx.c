/*
 * XREFs of RtlNewSecurityObjectEx @ 0x18004AE90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x18004B1E8 (RtlpNewSecurityObject.c)
 */

NTSTATUS __cdecl RtlNewSecurityObjectEx(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CreatorDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        GUID *ObjectType,
        BOOLEAN IsDirectoryObject,
        ULONG AutoInheritFlags,
        HANDLE Token,
        PGENERIC_MAPPING GenericMapping)
{
  int v9; // [rsp+28h] [rbp-30h]
  GUID *v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = ObjectType;
  LOBYTE(v9) = IsDirectoryObject;
  return RtlpNewSecurityObject(
           (int)ParentDescriptor,
           (int)CreatorDescriptor,
           (int)NewDescriptor,
           (unsigned __int64)&v10 & -(__int64)(ObjectType != 0LL),
           ObjectType != 0LL,
           v9,
           AutoInheritFlags,
           Token,
           (__int64)GenericMapping,
           0LL);
}
