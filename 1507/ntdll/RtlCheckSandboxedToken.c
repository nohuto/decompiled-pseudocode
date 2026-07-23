/*
 * XREFs of RtlCheckSandboxedToken @ 0x1800C2BF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlAddMandatoryAce @ 0x18004AD20 (RtlAddMandatoryAce.c)
 *     RtlCreateAcl @ 0x18004CBD0 (RtlCreateAcl.c)
 *     RtlSetGroupSecurityDescriptor @ 0x18004E790 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x18004E7F0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x18004E850 (RtlCreateSecurityDescriptor.c)
 *     RtlAllocateAndInitializeSid @ 0x18004F230 (RtlAllocateAndInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x18004F340 (RtlLengthRequiredSid.c)
 *     RtlFreeSid @ 0x18006DD20 (RtlFreeSid.c)
 *     RtlSetSaclSecurityDescriptor @ 0x18006EC70 (RtlSetSaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x180093900 (ZwAccessCheck.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtQueryInformationToken @ 0x180093B10 (NtQueryInformationToken.c)
 *     NtOpenThreadToken @ 0x180093B40 (NtOpenThreadToken.c)
 *     NtDuplicateToken @ 0x180093D20 (NtDuplicateToken.c)
 *     NtOpenProcessToken @ 0x180094A40 (NtOpenProcessToken.c)
 */

NTSTATUS __cdecl RtlCheckSandboxedToken(HANDLE TokenHandle, PBOOLEAN IsSandboxed)
{
  int v4; // ebx
  HANDLE v5; // rax
  NTSTATUS result; // eax
  ULONG v7; // ebx
  ACL *Heap; // rax
  ACL *v9; // r14
  _SID_IDENTIFIER_AUTHORITY v10; // [rsp+60h] [rbp-A0h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+68h] [rbp-98h] BYREF
  HANDLE TokenHandlea; // [rsp+70h] [rbp-90h] BYREF
  PSID Owner; // [rsp+78h] [rbp-88h] BYREF
  PSID Sid; // [rsp+80h] [rbp-80h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp-78h] BYREF
  int TokenInformation; // [rsp+8Ch] [rbp-74h] BYREF
  ULONG PrivilegeSetLength; // [rsp+90h] [rbp-70h] BYREF
  HANDLE ExistingTokenHandle; // [rsp+98h] [rbp-68h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+A0h] [rbp-60h] BYREF
  ULONG ReturnLength; // [rsp+A4h] [rbp-5Ch] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v23[2]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v24; // [rsp+108h] [rbp+8h]
  _PRIVILEGE_SET PrivilegeSet; // [rsp+110h] [rbp+10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 4096;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v10.Value = 0;
  *(_WORD *)&v10.Value[4] = 1280;
  v4 = 0;
  TokenHandlea = 0LL;
  *IsSandboxed = 0;
  if ( TokenHandle )
  {
    v5 = TokenHandle;
    TokenHandlea = TokenHandle;
  }
  else
  {
    v4 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 0, &TokenHandlea);
    v5 = TokenHandlea;
  }
  if ( v5 )
  {
    result = NtQueryInformationToken(TokenHandle, 9u, &TokenInformation, 4u, &ReturnLength);
    if ( result < 0 )
      return result;
    if ( TokenInformation < 2 )
      return -1073741659;
  }
  else
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
  }
  Sid = 0LL;
  Owner = 0LL;
  v7 = RtlLengthRequiredSid(1u) + 20;
  Heap = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v7);
  v9 = Heap;
  if ( !Heap )
    return -1073741801;
  RtlCreateAcl(Heap, v7, 2u);
  v4 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x2000u, 0, 0, 0, 0, 0, 0, 0, &Sid);
  if ( v4 >= 0 )
  {
    v4 = RtlAllocateAndInitializeSid(&v10, 1u, 0x12u, 0, 0, 0, 0, 0, 0, 0, &Owner);
    if ( v4 >= 0 )
    {
      RtlAddMandatoryAce(v9, 2u, 0, Sid, 0x11u, 2u);
      RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
      RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0);
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
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  if ( Sid )
    RtlFreeSid(Sid);
  if ( Owner )
    RtlFreeSid(Owner);
  if ( !TokenHandle )
  {
    if ( TokenHandlea )
      NtClose(TokenHandlea);
  }
  return v4;
}
