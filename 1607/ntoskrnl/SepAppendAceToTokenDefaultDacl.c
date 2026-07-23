/*
 * XREFs of SepAppendAceToTokenDefaultDacl @ 0x140080840
 * Callers:
 *     NtCreateLowBoxToken @ 0x14047AAA8 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlFindAceBySid @ 0x14000BC80 (RtlFindAceBySid.c)
 *     RtlGetAce @ 0x14000BDCC (RtlGetAce.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlQueryInformationAcl @ 0x140405ECC (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x140406208 (RtlAddAce.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     SepAppendDefaultDacl @ 0x140479D44 (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x140479DA0 (SepFreeDefaultDacl.c)
 *     SepExpandDynamic @ 0x140479DE4 (SepExpandDynamic.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 */

__int64 __fastcall SepAppendAceToTokenDefaultDacl(__int64 a1, __int64 a2)
{
  ACL *v2; // rbp
  ACL *v3; // rsi
  int AclSize; // ebx
  NTSTATUS InformationAcl; // edi
  ULONG v8; // r15d
  ACL *PoolWithTag; // rax
  ULONG v10; // ebx
  ULONG Information; // [rsp+30h] [rbp-58h] BYREF
  PVOID Ace; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v14[4]; // [rsp+40h] [rbp-48h] BYREF
  int v15; // [rsp+44h] [rbp-44h]

  v2 = *(ACL **)(a1 + 184);
  v3 = 0LL;
  Ace = 0LL;
  if ( !v2 )
  {
    InformationAcl = 0;
LABEL_12:
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    return (unsigned int)InformationAcl;
  }
  if ( RtlFindAceBySid((__int64)v2, (_WORD *)a2, 0LL) )
    return 0;
  AclSize = v2->AclSize;
  InformationAcl = RtlQueryInformationAcl(v2, &Information, 4u, AclRevisionInformation);
  if ( InformationAcl >= 0 )
  {
    InformationAcl = RtlQueryInformationAcl(v2, v14, 0xCu, AclSizeInformation);
    if ( InformationAcl >= 0 )
    {
      v8 = (AclSize + 4 * *(unsigned __int8 *)(a2 + 1) + 19) & 0xFFFFFFFC;
      PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v8, 0x63416553u);
      v3 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      v10 = Information;
      InformationAcl = RtlCreateAcl(PoolWithTag, v8, Information);
      if ( InformationAcl >= 0 )
      {
        InformationAcl = RtlGetAce(v2, 0, &Ace);
        if ( InformationAcl >= 0 )
        {
          InformationAcl = RtlAddAce(v3, v10, 0, Ace, v15 - 8);
          if ( InformationAcl >= 0 )
          {
            InformationAcl = RtlAddAccessAllowedAce(v3, v10, 0x10000000u, (PSID)a2);
            if ( InformationAcl >= 0 )
            {
              InformationAcl = SepExpandDynamic(
                                 a1,
                                 (v8 + 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 11) & 0xFFFFFFFC);
              if ( InformationAcl >= 0 )
              {
                SepFreeDefaultDacl(a1);
                SepAppendDefaultDacl(a1, v3);
              }
            }
          }
        }
      }
      goto LABEL_12;
    }
  }
  return (unsigned int)InformationAcl;
}
