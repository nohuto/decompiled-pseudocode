/*
 * XREFs of ObpVerifyAccessToBoundaryEntry @ 0x140413138
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     SeAccessCheckWithHint @ 0x1400CABF0 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlIsPackageSid @ 0x1404130F4 (RtlIsPackageSid.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140413954 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x140415C28 (RtlAddAccessAllowedAce.c)
 *     RtlAddMandatoryAce @ 0x1404C90D0 (RtlAddMandatoryAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404D03E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1404D0440 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404D058C (RtlCreateAcl.c)
 */

__int64 __fastcall ObpVerifyAccessToBoundaryEntry(int *a1, __int64 a2)
{
  int v2; // eax
  void *v3; // rbx
  unsigned int v6; // esi
  PSID *v7; // r9
  ULONG v8; // edx
  char PreviousMode; // dl
  _GENERIC_MAPPING *p_GenericMapping; // rax
  PSID *v11; // rdx
  int v12; // eax
  ULONG v13; // edx
  UCHAR v14; // [rsp+20h] [rbp-E0h]
  PSID LabelSid; // [rsp+28h] [rbp-D8h]
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+68h] [rbp-98h] BYREF
  ACL Sacl; // [rsp+90h] [rbp-70h] BYREF
  ACL Acl; // [rsp+F0h] [rbp-10h] BYREF

  v2 = *a1;
  v3 = a1 + 2;
  if ( *a1 == 2 )
  {
    v6 = 0;
    if ( RtlIsPackageSid(a1 + 2) )
    {
      v11 = *(PSID **)(a2 + 32);
      if ( !v11 || RtlEqualSid(v3, *v11) )
      {
        v12 = *(_DWORD *)(a2 + 52);
        if ( (v12 & 1) == 0 )
        {
          *(_DWORD *)(a2 + 52) = v12 | 1;
          return 1LL;
        }
        *(_DWORD *)(a2 + 48) = -1073741811;
      }
      else
      {
        *(_DWORD *)(a2 + 48) = -1073741790;
      }
      return 0LL;
    }
    RtlCreateAcl(&Acl, 0xA0u, 2u);
    RtlAddAccessAllowedAce(&Acl, 2u, 0xF000Fu, v3);
    v7 = *(PSID **)(a2 + 32);
    if ( v7 )
      RtlAddAccessAllowedAce(&Acl, 2u, 0xF000Fu, *v7);
    RtlCreateAcl(&Sacl, 0x54u, 2u);
    LODWORD(LabelSid) = 7;
    RtlAddMandatoryAce(&Sacl, v8, 0, *(_QWORD *)(a2 + 40), v14, LabelSid);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Sacl, 0);
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    p_GenericMapping = &ObpDirectoryObjectType->TypeInfo.GenericMapping;
LABEL_9:
    LOBYTE(v6) = SeAccessCheckWithHint(
                   (__int64)SecurityDescriptor,
                   1,
                   (int *)a2,
                   1,
                   0xF000Fu,
                   0,
                   0LL,
                   (__int64)p_GenericMapping,
                   PreviousMode,
                   &v16,
                   (NTSTATUS *)(a2 + 48)) != 0;
    return v6;
  }
  if ( v2 == 3 )
  {
    RtlCreateAcl(&Sacl, 0x54u, 2u);
    LODWORD(LabelSid) = 7;
    RtlAddMandatoryAce(&Sacl, v13, 0, (ULONG)v3, v14, LabelSid);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Sacl, 0);
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    p_GenericMapping = &ObpDirectoryObjectType->TypeInfo.GenericMapping;
    v6 = 0;
    goto LABEL_9;
  }
  if ( v2 == 1 )
    return 1LL;
  *(_DWORD *)(a2 + 48) = -1073741595;
  return 0LL;
}
