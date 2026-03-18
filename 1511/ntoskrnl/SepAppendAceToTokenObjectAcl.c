/*
 * XREFs of SepAppendAceToTokenObjectAcl @ 0x140420AE0
 * Callers:
 *     NtCreateLowBoxToken @ 0x1403C0A6C (NtCreateLowBoxToken.c)
 *     SeSubProcessToken @ 0x14044C430 (SeSubProcessToken.c)
 *     NtDuplicateToken @ 0x140478460 (NtDuplicateToken.c)
 *     SeCopyClientToken @ 0x140479434 (SeCopyClientToken.c)
 *     NtFilterToken @ 0x1404BD130 (NtFilterToken.c)
 *     SepAppendAdminAceToTokenAcl @ 0x1404C5FA8 (SepAppendAdminAceToTokenAcl.c)
 *     SeFilterToken @ 0x14064D7C8 (SeFilterToken.c)
 * Callees:
 *     RtlGetAce @ 0x140003350 (RtlGetAce.c)
 *     RtlLengthSid @ 0x140003E60 (RtlLengthSid.c)
 *     RtlFindAceBySid @ 0x140079E80 (RtlFindAceBySid.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlAddAce @ 0x1403BDC98 (RtlAddAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x140420D30 (ObDereferenceSecurityDescriptor.c)
 *     ObpGetObjectSecurity @ 0x140420EA0 (ObpGetObjectSecurity.c)
 *     RtlQueryInformationAcl @ 0x1404211B0 (RtlQueryInformationAcl.c)
 *     RtlpAddKnownAce @ 0x140435010 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     ObSetSecurityObjectByPointer @ 0x1404953DC (ObSetSecurityObjectByPointer.c)
 */

__int64 __fastcall SepAppendAceToTokenObjectAcl(__int64 a1, int a2, _WORD *a3)
{
  __int64 result; // rax
  void *v6; // rsi
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
  _BYTE v17[8]; // [rsp+30h] [rbp-98h] BYREF
  ULONG AclRevision[2]; // [rsp+38h] [rbp-90h] BYREF
  int v19; // [rsp+40h] [rbp-88h]
  PVOID Ace; // [rsp+48h] [rbp-80h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE Information[4]; // [rsp+78h] [rbp-50h] BYREF
  int v23; // [rsp+7Ch] [rbp-4Ch]

  v19 = a2;
  *(_QWORD *)AclRevision = 0LL;
  v17[0] = 0;
  Ace = 0LL;
  result = ObpGetObjectSecurity(a1, AclRevision, v17, 0LL);
  v6 = *(void **)AclRevision;
  InformationAcl = result;
  if ( (int)result >= 0 )
  {
    if ( !*(_QWORD *)AclRevision )
      return result;
    v8 = *(_WORD *)(*(_QWORD *)AclRevision + 2LL);
    if ( (v8 & 4) != 0 )
    {
      if ( (v8 & 0x8000) == 0 )
      {
        v10 = *(ACL **)(*(_QWORD *)AclRevision + 32LL);
        goto LABEL_7;
      }
      v9 = *(unsigned int *)(*(_QWORD *)AclRevision + 16LL);
      if ( (_DWORD)v9 )
      {
        v10 = (ACL *)(*(_QWORD *)AclRevision + v9);
LABEL_7:
        if ( v10 )
        {
          if ( !RtlFindAceBySid((__int64)v10, a3, 0LL) )
          {
            InformationAcl = RtlQueryInformationAcl(v10, Information, 0xCu, AclSizeInformation);
            if ( InformationAcl >= 0 )
            {
              InformationAcl = RtlQueryInformationAcl(v10, AclRevision, 4u, AclRevisionInformation);
              if ( InformationAcl >= 0 )
              {
                v11 = RtlLengthSid(a3);
                v12 = v23;
                v13 = (v11 + v23 + 11) & 0xFFFFFFFC;
                PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v13, 0x63416553u);
                v15 = PoolWithTag;
                if ( PoolWithTag )
                {
                  v16 = AclRevision[0];
                  InformationAcl = RtlCreateAcl(PoolWithTag, v13, AclRevision[0]);
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
                          InformationAcl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                          if ( InformationAcl >= 0 )
                          {
                            InformationAcl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v15, 0);
                            if ( InformationAcl >= 0 )
                              InformationAcl = ObSetSecurityObjectByPointer(a1, 4LL, SecurityDescriptor);
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
  {
    if ( v17[0] )
      ExFreePoolWithTag(v6, 0);
    else
      ObDereferenceSecurityDescriptor(v6, 1LL);
  }
  return (unsigned int)InformationAcl;
}
