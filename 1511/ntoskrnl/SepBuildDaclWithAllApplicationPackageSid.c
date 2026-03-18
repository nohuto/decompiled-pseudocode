/*
 * XREFs of SepBuildDaclWithAllApplicationPackageSid @ 0x1406552F4
 * Callers:
 *     SepBuildObjectSecurityDescriptor @ 0x140655498 (SepBuildObjectSecurityDescriptor.c)
 * Callees:
 *     RtlGetAce @ 0x140003350 (RtlGetAce.c)
 *     RtlLengthSid @ 0x140003E60 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlAddAce @ 0x1403BDC98 (RtlAddAce.c)
 *     RtlQueryInformationAcl @ 0x1404211B0 (RtlQueryInformationAcl.c)
 *     RtlpAddKnownAce @ 0x140435010 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 */

NTSTATUS __fastcall SepBuildDaclWithAllApplicationPackageSid(PACL Acl, char a2, ACL **a3)
{
  NTSTATUS result; // eax
  ULONG v7; // eax
  int v8; // r15d
  ULONG v9; // edi
  ACL *PoolWithTag; // rax
  ACL *v11; // rsi
  unsigned int v12; // ebx
  int Ace; // edi
  int v14; // ebp
  ULONG AclRevision[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE Information[4]; // [rsp+38h] [rbp-50h] BYREF
  int v17; // [rsp+3Ch] [rbp-4Ch]

  result = RtlQueryInformationAcl(Acl, Information, 0xCu, AclSizeInformation);
  if ( result >= 0 )
  {
    result = RtlQueryInformationAcl(Acl, AclRevision, 4u, AclRevisionInformation);
    if ( result >= 0 )
    {
      v7 = RtlLengthSid(SeAllAppPackagesSid);
      v8 = v17;
      v9 = v17 + 2 * (v7 + 8);
      PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v9, 0x64536553u);
      v11 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v9);
        v12 = AclRevision[0];
        Ace = RtlCreateAcl(v11, v9, AclRevision[0]);
        if ( Ace < 0 )
          goto LABEL_13;
        v14 = 0;
        if ( a2 )
          v14 = 16;
        Ace = RtlpAddKnownAce(v11, v12, v14 | 3u, 131097, (unsigned __int8 *)SeAllAppPackagesSid, 0);
        if ( Ace < 0
          || (Ace = RtlpAddKnownAce(v11, v12, v14 | 0xAu, 0x80000000, (unsigned __int8 *)SeAllAppPackagesSid, 0), Ace < 0)
          || (Ace = RtlGetAce(Acl, 0, (PVOID *)AclRevision), Ace < 0)
          || (Ace = RtlAddAce(v11, v12, 2u, *(PVOID *)AclRevision, v8 - 8), Ace < 0) )
        {
LABEL_13:
          ExFreePoolWithTag(v11, 0);
        }
        else
        {
          *a3 = v11;
        }
        return Ace;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
