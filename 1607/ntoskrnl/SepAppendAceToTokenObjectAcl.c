/*
 * XREFs of SepAppendAceToTokenObjectAcl @ 0x140405960
 * Callers:
 *     NtDuplicateToken @ 0x140411590 (NtDuplicateToken.c)
 *     SeSubProcessToken @ 0x14046D918 (SeSubProcessToken.c)
 *     NtCreateLowBoxToken @ 0x14047AAA8 (NtCreateLowBoxToken.c)
 *     NtFilterToken @ 0x14047BC68 (NtFilterToken.c)
 *     SeCopyClientToken @ 0x1404B0584 (SeCopyClientToken.c)
 *     SepAppendAdminAceToTokenAcl @ 0x1404D33E4 (SepAppendAdminAceToTokenAcl.c)
 *     SeFilterToken @ 0x14068D030 (SeFilterToken.c)
 * Callees:
 *     RtlFindAceBySid @ 0x14000BC80 (RtlFindAceBySid.c)
 *     RtlGetAce @ 0x14000BDCC (RtlGetAce.c)
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObpGetObjectSecurity @ 0x140405BA0 (ObpGetObjectSecurity.c)
 *     RtlQueryInformationAcl @ 0x140405ECC (RtlQueryInformationAcl.c)
 *     ObSetSecurityObjectByPointer @ 0x140406184 (ObSetSecurityObjectByPointer.c)
 *     RtlAddAce @ 0x140406208 (RtlAddAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     ObReleaseObjectSecurity @ 0x14041F568 (ObReleaseObjectSecurity.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x1404206C0 (RtlpAddKnownAce.c)
 */

__int64 __fastcall SepAppendAceToTokenObjectAcl(__int64 a1, int a2, _WORD *a3)
{
  __int64 result; // rax
  PSECURITY_DESCRIPTOR v6; // rsi
  NTSTATUS InformationAcl; // ebp
  __int16 v8; // ax
  __int64 v9; // rax
  ACL *v10; // rdi
  ULONG v11; // eax
  int v12; // r13d
  ULONG v13; // ebp
  ACL *PoolWithTag; // rax
  ACL *v15; // r14
  ULONG v16; // ebx
  BOOLEAN v17[8]; // [rsp+30h] [rbp-98h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+38h] [rbp-90h] BYREF
  int v19; // [rsp+40h] [rbp-88h]
  PVOID Ace; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v21[40]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE Information[4]; // [rsp+78h] [rbp-50h] BYREF
  int v23; // [rsp+7Ch] [rbp-4Ch]

  v19 = a2;
  SecurityDescriptor = 0LL;
  v17[0] = 0;
  Ace = 0LL;
  result = ObpGetObjectSecurity(a1, &SecurityDescriptor, v17, 0LL);
  v6 = SecurityDescriptor;
  InformationAcl = result;
  if ( (int)result >= 0 )
  {
    if ( !SecurityDescriptor )
      return result;
    v8 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v8 & 4) != 0 )
    {
      if ( (v8 & 0x8000) == 0 )
      {
        v10 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
        goto LABEL_7;
      }
      v9 = *((unsigned int *)SecurityDescriptor + 4);
      if ( (_DWORD)v9 )
      {
        v10 = (ACL *)((char *)SecurityDescriptor + v9);
LABEL_7:
        if ( v10 )
        {
          if ( !RtlFindAceBySid((__int64)v10, a3, 0LL) )
          {
            InformationAcl = RtlQueryInformationAcl(v10, Information, 0xCu, AclSizeInformation);
            if ( InformationAcl >= 0 )
            {
              InformationAcl = RtlQueryInformationAcl(v10, &SecurityDescriptor, 4u, AclRevisionInformation);
              if ( InformationAcl >= 0 )
              {
                v11 = RtlLengthSid(a3);
                v12 = v23;
                v13 = (v11 + v23 + 11) & 0xFFFFFFFC;
                PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v13, 0x63416553u);
                v15 = PoolWithTag;
                if ( PoolWithTag )
                {
                  v16 = (unsigned int)SecurityDescriptor;
                  InformationAcl = RtlCreateAcl(PoolWithTag, v13, (ULONG)SecurityDescriptor);
                  if ( InformationAcl >= 0 )
                  {
                    InformationAcl = RtlGetAce(v10, 0, &Ace);
                    if ( InformationAcl >= 0 )
                    {
                      InformationAcl = RtlAddAce(v15, v16, 0, Ace, v12 - 8);
                      if ( InformationAcl >= 0 )
                      {
                        InformationAcl = RtlpAddKnownAce((int)v15, v16, 0, v19, a3, 0);
                        if ( InformationAcl >= 0 )
                        {
                          InformationAcl = RtlCreateSecurityDescriptor(v21, 1u);
                          if ( InformationAcl >= 0 )
                          {
                            InformationAcl = RtlSetDaclSecurityDescriptor(v21, 1u, v15, 0);
                            if ( InformationAcl >= 0 )
                              InformationAcl = ObSetSecurityObjectByPointer(a1, 4LL);
                          }
                        }
                      }
                    }
                  }
                  ExFreePoolWithTag(v15, 0);
                }
                else
                {
                  InformationAcl = -1073741670;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v6 )
    ObReleaseObjectSecurity(v6, v17[0]);
  return (unsigned int)InformationAcl;
}
