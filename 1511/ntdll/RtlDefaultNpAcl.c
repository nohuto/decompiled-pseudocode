/*
 * XREFs of RtlDefaultNpAcl @ 0x1800CC680
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetAppContainerParent @ 0x180003C10 (RtlGetAppContainerParent.c)
 *     RtlAddAccessAllowedAce @ 0x1800191F0 (RtlAddAccessAllowedAce.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x180060370 (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x180062030 (RtlInitializeSid.c)
 *     RtlGetAppContainerSidType @ 0x1800622C0 (RtlGetAppContainerSidType.c)
 *     RtlLengthRequiredSid @ 0x180062ED0 (RtlLengthRequiredSid.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A54E0 (NtQueryInformationToken.c)
 */

NTSTATUS __cdecl RtlDefaultNpAcl(PACL *Acl)
{
  PVOID v2; // rdi
  void *ProcessHeap; // rcx
  PVOID Heap; // r14
  int AppContainerParent; // ebx
  ULONG v6; // ebx
  ULONG v7; // r8d
  ULONG v8; // ebx
  ACL *v9; // rax
  ACL *v10; // rcx
  ACL *v11; // rcx
  ACL *v12; // rcx
  ACL *v13; // rcx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+30h] [rbp-40h] BYREF
  _SID_IDENTIFIER_AUTHORITY v16; // [rsp+38h] [rbp-38h] BYREF
  int TokenInformation; // [rsp+40h] [rbp-30h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+44h] [rbp-2Ch] BYREF
  PSID AppContainerSidParent; // [rsp+48h] [rbp-28h] BYREF
  ULONG ReturnLength; // [rsp+50h] [rbp-20h] BYREF
  _BYTE Sid[8]; // [rsp+58h] [rbp-18h] BYREF
  int v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+64h] [rbp-Ch]

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *Acl = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v2 = 0LL;
  *(_DWORD *)v16.Value = 0;
  *(_WORD *)&v16.Value[4] = 256;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  AppContainerSidParent = 0LL;
  AppContainerSidType = NotAppContainerSidType;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x4CuLL);
  if ( Heap )
  {
    AppContainerParent = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 4u, Heap, 0x4Cu, &ReturnLength);
    if ( AppContainerParent < 0 )
      goto LABEL_27;
    TokenInformation = 0;
    if ( NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 0x1Du, &TokenInformation, 4u, &ReturnLength) < 0
      || !TokenInformation )
    {
      goto LABEL_12;
    }
    v2 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x4CuLL);
    if ( !v2 )
    {
      AppContainerParent = -1073741801;
      goto LABEL_27;
    }
    AppContainerParent = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 0x1Fu, v2, 0x4Cu, &ReturnLength);
    if ( AppContainerParent >= 0 )
    {
      AppContainerParent = RtlGetAppContainerSidType(*(PSID *)v2, &AppContainerSidType);
      if ( AppContainerParent >= 0 )
      {
        if ( AppContainerSidType != ChildAppContainerSidType
          || (AppContainerParent = RtlGetAppContainerParent(*(PSID *)v2, &AppContainerSidParent), AppContainerParent >= 0) )
        {
LABEL_12:
          v6 = RtlLengthRequiredSid(1u);
          v7 = RtlLengthRequiredSid(2u) + 3 * v6;
          if ( v2 )
            v7 += 4 * *(unsigned __int8 *)(*(_QWORD *)v2 + 1LL) + 16;
          if ( AppContainerSidParent )
            v7 += 4 * *((unsigned __int8 *)AppContainerSidParent + 1) + 16;
          v8 = v7 + 4 * (*(unsigned __int8 *)(*(_QWORD *)Heap + 1LL) + 14);
          v9 = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
          *Acl = v9;
          if ( v9 )
          {
            RtlCreateAcl(v9, v8, 2u);
            RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
            v10 = *Acl;
            v22 = 18;
            RtlAddAccessAllowedAce(v10, 2u, 0x10000000u, Sid);
            RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
            v11 = *Acl;
            v22 = 32;
            v23 = 544;
            RtlAddAccessAllowedAce(v11, 2u, 0x10000000u, Sid);
            if ( v2 )
              RtlAddAccessAllowedAce(*Acl, 2u, 0x10000000u, *(PSID *)v2);
            if ( AppContainerSidParent )
              RtlAddAccessAllowedAce(*Acl, 2u, 0x10000000u, AppContainerSidParent);
            RtlAddAccessAllowedAce(*Acl, 2u, 0x10000000u, *(PSID *)Heap);
            RtlInitializeSid(Sid, &v16, 1u);
            v12 = *Acl;
            v22 = 0;
            RtlAddAccessAllowedAce(v12, 2u, 0x80000000, Sid);
            RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
            v13 = *Acl;
            v22 = 7;
            RtlAddAccessAllowedAce(v13, 2u, 0x80000000, Sid);
            AppContainerParent = 0;
          }
          else
          {
            AppContainerParent = -1073741801;
          }
        }
      }
    }
    if ( v2 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    if ( AppContainerSidParent )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AppContainerSidParent);
LABEL_27:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( AppContainerParent >= 0 )
      return AppContainerParent;
    goto LABEL_28;
  }
  AppContainerParent = -1073741801;
LABEL_28:
  if ( *Acl )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *Acl);
    *Acl = 0LL;
  }
  return AppContainerParent;
}
