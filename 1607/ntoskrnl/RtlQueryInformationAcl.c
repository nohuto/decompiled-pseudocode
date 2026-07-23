/*
 * XREFs of RtlQueryInformationAcl @ 0x140405ECC
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140080840 (SepAppendAceToTokenDefaultDacl.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140405960 (SepAppendAceToTokenObjectAcl.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x140694A10 (SepBuildDaclWithAllApplicationPackageSid.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x14041F930 (RtlFirstFreeAce.c)
 */

NTSTATUS __stdcall RtlQueryInformationAcl(
        PACL Acl,
        PVOID Information,
        ULONG InformationLength,
        ACL_INFORMATION_CLASS InformationClass)
{
  UCHAR AclRevision; // cl
  __int32 v7; // r9d
  PACE v8; // rcx
  int v9; // ecx
  PACE Ace; // [rsp+30h] [rbp+8h] BYREF

  AclRevision = Acl->AclRevision;
  if ( (unsigned __int8)(AclRevision - 2) <= 2u )
  {
    v7 = InformationClass - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return -1073741821;
      if ( InformationLength >= 0xC )
      {
        if ( RtlFirstFreeAce(Acl, &Ace) )
        {
          v8 = Ace;
          *(_DWORD *)Information = Acl->AceCount;
          if ( v8 )
          {
            v9 = (_DWORD)v8 - (_DWORD)Acl;
            *((_DWORD *)Information + 1) = v9;
            *((_DWORD *)Information + 2) = Acl->AclSize - v9;
          }
          else
          {
            *(_QWORD *)((char *)Information + 4) = Acl->AclSize;
          }
          return 0;
        }
        return -1073741811;
      }
    }
    else if ( InformationLength >= 4 )
    {
      *(_DWORD *)Information = AclRevision;
      return 0;
    }
    return -1073741789;
  }
  return -1073741811;
}
