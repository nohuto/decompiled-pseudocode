/*
 * XREFs of RtlCheckSandboxedToken @ 0x1800D4640
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateAndInitializeSid @ 0x18000B9F0 (RtlAllocateAndInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x18000BB00 (RtlLengthRequiredSid.c)
 *     RtlCreateSecurityDescriptor @ 0x180010EC0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180010F00 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180010F60 (RtlSetGroupSecurityDescriptor.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x1800409F0 (RtlCreateAcl.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlAddMandatoryAce @ 0x18006B4B0 (RtlAddMandatoryAce.c)
 *     RtlFreeSid @ 0x18007A490 (RtlFreeSid.c)
 *     RtlSetSaclSecurityDescriptor @ 0x18007D730 (RtlSetSaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A6420 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 *     NtOpenThreadToken @ 0x1800A68A0 (NtOpenThreadToken.c)
 *     NtDuplicateToken @ 0x1800A6C60 (NtDuplicateToken.c)
 *     NtOpenProcessToken @ 0x1800A8730 (NtOpenProcessToken.c)
 */

NTSTATUS __cdecl RtlCheckSandboxedToken(HANDLE TokenHandle, PBOOLEAN IsSandboxed)
{
  HANDLE v3; // rsi
  int v4; // ebx
  NTSTATUS v5; // eax
  ULONG v6; // ebx
  ACL *Heap; // rax
  ACL *v8; // r14
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+60h] [rbp-A0h] BYREF
  _SID_IDENTIFIER_AUTHORITY v11; // [rsp+68h] [rbp-98h] BYREF
  HANDLE TokenHandlea; // [rsp+70h] [rbp-90h] BYREF
  PSID Owner; // [rsp+78h] [rbp-88h] BYREF
  int TokenInformation; // [rsp+80h] [rbp-80h] BYREF
  ULONG PrivilegeSetLength; // [rsp+84h] [rbp-7Ch] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp-78h] BYREF
  PSID Sid; // [rsp+90h] [rbp-70h] BYREF
  HANDLE ExistingTokenHandle; // [rsp+98h] [rbp-68h] BYREF
  ULONG ReturnLength; // [rsp+A0h] [rbp-60h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+A4h] [rbp-5Ch] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v23[2]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v24; // [rsp+108h] [rbp+8h]
  _PRIVILEGE_SET PrivilegeSet; // [rsp+110h] [rbp+10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 4096;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v11.Value = 0;
  v3 = TokenHandle;
  *(_WORD *)&v11.Value[4] = 1280;
  v4 = 0;
  TokenHandlea = 0LL;
  *IsSandboxed = 0;
  Owner = 0LL;
  Sid = 0LL;
  if ( TokenHandle )
  {
    TokenHandlea = TokenHandle;
  }
  else
  {
    v5 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 0, &TokenHandlea);
    TokenHandle = TokenHandlea;
    v4 = v5;
  }
  if ( !TokenHandle )
  {
    if ( v4 == -1073741700 )
    {
      v4 = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, &ExistingTokenHandle);
      if ( v4 < 0 )
        return v4;
      ObjectAttributes.SecurityQualityOfService = v23;
      ObjectAttributes.Length = 48;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      ObjectAttributes.SecurityDescriptor = 0LL;
      v23[0] = 12;
      v23[1] = 2;
      v24 = 1;
      v4 = NtDuplicateToken(ExistingTokenHandle, 0xCu, &ObjectAttributes, 0, TokenImpersonation, &TokenHandlea);
      NtClose(ExistingTokenHandle);
    }
    if ( v4 < 0 )
      return v4;
    goto LABEL_12;
  }
  v4 = NtQueryInformationToken(TokenHandle, 9u, &TokenInformation, 4u, &ReturnLength);
  if ( v4 >= 0 )
  {
    if ( TokenInformation < 2 )
    {
      v4 = -1073741659;
      goto LABEL_22;
    }
LABEL_12:
    v6 = RtlLengthRequiredSid(1u) + 20;
    Heap = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v6);
    v8 = Heap;
    if ( Heap )
    {
      RtlCreateAcl(Heap, v6, 2u);
      v4 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x2000u, 0, 0, 0, 0, 0, 0, 0, &Sid);
      if ( v4 >= 0 )
      {
        v4 = RtlAllocateAndInitializeSid(&v11, 1u, 0x12u, 0, 0, 0, 0, 0, 0, 0, &Owner);
        if ( v4 >= 0 )
        {
          RtlAddMandatoryAce(v8, 2u, 0, Sid, 0x11u, 2u);
          RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
          RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, v8, 0);
          RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 0);
          RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, 0);
          PrivilegeSetLength = 56;
          v4 = ZwAccessCheck(
                 SecurityDescriptor,
                 TokenHandlea,
                 0x20000u,
                 (PGENERIC_MAPPING)&RtlpRestrictedMapping,
                 &PrivilegeSet,
                 &PrivilegeSetLength,
                 &GrantedAccess,
                 &AccessStatus);
          if ( v4 >= 0 )
            *IsSandboxed = AccessStatus < 0;
        }
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
      if ( Sid )
        RtlFreeSid(Sid);
      if ( Owner )
        RtlFreeSid(Owner);
    }
    else
    {
      v4 = -1073741801;
    }
  }
LABEL_22:
  if ( !v3 && TokenHandlea )
    NtClose(TokenHandlea);
  return v4;
}
