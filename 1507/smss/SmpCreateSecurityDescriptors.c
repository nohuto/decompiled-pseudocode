/*
 * XREFs of SmpCreateSecurityDescriptors @ 0x140001250
 * Callers:
 *     SmpConfigureProtectionMode @ 0x140001220 (SmpConfigureProtectionMode.c)
 *     SmpInit @ 0x140001F90 (SmpInit.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpCreateSecurityDescriptors(char a1)
{
  char v1; // si
  NTSTATUS v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // edi
  struct _ACL *Heap; // rax
  struct _ACL *v7; // rbx
  ULONG v8; // r15d
  ULONG v9; // r15d
  ULONG v10; // r15d
  ULONG v11; // r15d
  struct _ACL *v12; // rsi
  ULONG v13; // edi
  SIZE_T v14; // r14
  struct _ACL *v15; // rdi
  ULONG v16; // edi
  ULONG v17; // edi
  ULONG v18; // esi
  ULONG v19; // esi
  struct _ACL *v20; // rax
  struct _ACL *v21; // rdi
  PSECURITY_DESCRIPTOR v22; // rcx
  ULONG v23; // edi
  ULONG v24; // edi
  ULONG v25; // esi
  ULONG v26; // esi
  struct _ACL *v27; // r14
  ULONG v28; // edi
  struct _ACL *v29; // r15
  ULONG SubAuthority2; // [rsp+20h] [rbp-79h]
  void *SubAuthority3; // [rsp+28h] [rbp-71h]
  PVOID Ace; // [rsp+60h] [rbp-39h] BYREF
  PSID v34; // [rsp+68h] [rbp-31h] BYREF
  PSID Sid; // [rsp+70h] [rbp-29h] BYREF
  PSID v36; // [rsp+78h] [rbp-21h] BYREF
  PSID v37; // [rsp+80h] [rbp-19h] BYREF
  PSID v38; // [rsp+88h] [rbp-11h] BYREF
  PSID v39; // [rsp+90h] [rbp-9h] BYREF
  PSID v40; // [rsp+98h] [rbp-1h] BYREF
  PSID BaseAddress; // [rsp+A0h] [rbp+7h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v42; // [rsp+A8h] [rbp+Fh] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v43; // [rsp+B0h] [rbp+17h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v44; // [rsp+B8h] [rbp+1Fh] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v45; // [rsp+C0h] [rbp+27h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v46; // [rsp+C8h] [rbp+2Fh] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+D0h] [rbp+37h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  v1 = 0;
  Sid = 0LL;
  v40 = 0LL;
  v34 = 0LL;
  v39 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  BaseAddress = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v43.Value = 0;
  *(_WORD *)&v43.Value[4] = 3840;
  *(_DWORD *)v42.Value = 0;
  *(_WORD *)&v42.Value[4] = 1280;
  *(_DWORD *)v46.Value = 0;
  *(_WORD *)&v46.Value[4] = 4096;
  *(_DWORD *)v44.Value = 0;
  *(_WORD *)&v44.Value[4] = 768;
  *(_DWORD *)v45.Value = 0;
  *(_WORD *)&v45.Value[4] = 4864;
  if ( a1 )
  {
    SmpPrimarySecurityDescriptor = &SmpPrimarySDBody;
    RtlCreateSecurityDescriptor(&SmpPrimarySDBody, 1u);
    RtlSetDaclSecurityDescriptor(SmpPrimarySecurityDescriptor, 1u, 0LL, 0);
    SmpLiberalSecurityDescriptor = &SmpLiberalSDBody;
    RtlCreateSecurityDescriptor(&SmpLiberalSDBody, 1u);
    RtlSetDaclSecurityDescriptor(SmpLiberalSecurityDescriptor, 1u, 0LL, 0);
    SmpKnownDllSecurityDescriptor = &SmpKnownDllSDBody;
    RtlCreateSecurityDescriptor(&SmpKnownDllSDBody, 1u);
    RtlSetDaclSecurityDescriptor(SmpKnownDllSecurityDescriptor, 1u, 0LL, 0);
    SmpApiPortSecurityDescriptor = &SmpApiPortSDBody;
    RtlCreateSecurityDescriptor(&SmpApiPortSDBody, 1u);
    RtlSetDaclSecurityDescriptor(SmpApiPortSecurityDescriptor, 1u, 0LL, 0);
  }
  if ( (SmpProtectionMode & 1) != 0 )
    v1 = 1;
  if ( !a1 && !v1 )
    return 0LL;
  v3 = 0;
  if ( !a1 && !v1 )
    goto LABEL_34;
  v3 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &Sid);
  if ( v3 < 0 )
  {
    Sid = 0LL;
    goto LABEL_34;
  }
  v3 = RtlAllocateAndInitializeSid(&v43, 2u, 2u, 1u, 0, 0, 0, 0, 0, 0, &v40);
  if ( v3 < 0 )
  {
    v40 = 0LL;
    goto LABEL_34;
  }
  v3 = RtlAllocateAndInitializeSid(&v42, 2u, 0x20u, 0x220u, 0, 0, 0, 0, 0, 0, &v34);
  if ( v3 < 0 )
  {
    v34 = 0LL;
    goto LABEL_34;
  }
  v3 = RtlAllocateAndInitializeSid(&v44, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &v38);
  if ( v3 < 0 )
  {
    v38 = 0LL;
    goto LABEL_34;
  }
  v3 = RtlAllocateAndInitializeSid(&v42, 1u, 0xCu, 0, 0, 0, 0, 0, 0, 0, &v36);
  if ( v3 < 0 )
  {
    v36 = 0LL;
    goto LABEL_34;
  }
  v3 = RtlAllocateAndInitializeSid(&v42, 1u, 0x12u, 0, 0, 0, 0, 0, 0, 0, &v39);
  if ( v3 < 0 )
  {
    v39 = 0LL;
    goto LABEL_34;
  }
  v3 = RtlAllocateAndInitializeSid(&v46, 1u, 0x1000u, 0, 0, 0, 0, 0, 0, 0, &v37);
  if ( v3 < 0 )
  {
    v37 = 0LL;
LABEL_34:
    if ( BaseAddress )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
    goto LABEL_36;
  }
  v3 = RtlAllocateAndInitializeSid(&v45, 2u, 0x200u, 0x2000u, 0, 0, 0, 0, 0, 0, &BaseAddress);
  if ( v3 >= 0 )
  {
    if ( a1 )
    {
      v4 = RtlLengthSid(v39);
      v5 = v4 + RtlLengthSid(v34) + 32;
      Heap = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v5);
      v7 = Heap;
      if ( Heap )
      {
        RtlCreateAcl(Heap, v5, 2u);
        RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, v34);
        RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, v39);
        v3 = RtlSetDaclSecurityDescriptor(SmpApiPortSecurityDescriptor, 1u, v7, 0);
      }
      else
      {
        v3 = -1073741801;
      }
      v8 = RtlLengthSid(v36);
      v9 = RtlLengthSid(v34) + v8;
      v10 = RtlLengthSid(v40) + v9;
      v11 = RtlLengthSid(Sid) + 56 + v10;
      v12 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v11);
      if ( !v12 )
        v3 = -1073741801;
      v13 = RtlLengthSid(BaseAddress);
      v14 = v13 + RtlLengthSid(v37) + 32;
      v15 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v14);
      if ( v15 )
      {
        if ( v3 >= 0 )
        {
          RtlCreateAcl(v12, v11, 2u);
          RtlAddAccessAllowedAce(v12, 2u, 0xE0000000, Sid);
          RtlAddAccessAllowedAce(v12, 2u, 0xE0000000, v40);
          RtlAddAccessAllowedAce(v12, 2u, 0xE0000000, v36);
          RtlAddAccessAllowedAce(v12, 2u, 0x10000000u, v34);
          RtlCreateAcl(v15, v14, 2u);
          LODWORD(SubAuthority3) = 1;
          RtlAddMandatoryAce(v15, 2u, 0, (ULONG)v37, 0x11u, SubAuthority3);
          LOBYTE(SubAuthority2) = 20;
          RtlAddProcessTrustLabelAce(v15, 2LL, 0LL, BaseAddress, SubAuthority2, 131087);
          RtlSetDaclSecurityDescriptor(SmpKnownDllSecurityDescriptor, 1u, v12, 0);
          v3 = RtlSetSaclSecurityDescriptor(SmpKnownDllSecurityDescriptor, 1u, v15, 0);
        }
      }
      else
      {
        v3 = -1073741801;
      }
    }
    if ( (SmpProtectionMode & 1) != 0 )
    {
      v16 = RtlLengthSid(v36);
      v17 = RtlLengthSid(v34) + v16;
      v18 = 2 * (v17 + RtlLengthSid(Sid)) + 92;
      v19 = RtlLengthSid(v38) + v18;
      v20 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v19);
      v21 = v20;
      if ( v20 )
      {
        if ( v3 >= 0 )
        {
          RtlCreateAcl(v20, v19, 2u);
          RtlAddAccessAllowedAce(v21, 2u, 0xA0000000, Sid);
          RtlAddAccessAllowedAce(v21, 2u, 0xA0000000, v36);
          RtlAddAccessAllowedAce(v21, 2u, 0x10000000u, v34);
          RtlAddAccessAllowedAce(v21, 2u, 0xA0000000, Sid);
          RtlGetAce(v21, 3u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v21, 2u, 0xA0000000, v36);
          RtlGetAce(v21, 4u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v21, 2u, 0x10000000u, v34);
          RtlGetAce(v21, 5u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v21, 2u, 0x10000000u, v38);
          RtlGetAce(v21, 6u, &Ace);
          v22 = SmpPrimarySecurityDescriptor;
          *((_BYTE *)Ace + 1) = 11;
          v3 = RtlSetDaclSecurityDescriptor(v22, 1u, v21, 0);
        }
      }
      else
      {
        v3 = -1073741801;
      }
      v23 = RtlLengthSid(v36);
      v24 = RtlLengthSid(v34) + v23;
      v25 = 2 * (v24 + RtlLengthSid(Sid)) + 92;
      v26 = RtlLengthSid(v38) + v25;
      v27 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v26);
      if ( !v27 )
        v3 = -1073741801;
      v28 = RtlLengthSid(v37) + 20;
      v29 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v28);
      if ( v29 )
      {
        if ( v3 >= 0 )
        {
          RtlCreateAcl(v27, v26, 2u);
          RtlAddAccessAllowedAce(v27, 2u, 0xE0000000, Sid);
          RtlAddAccessAllowedAce(v27, 2u, 0xE0000000, v36);
          RtlAddAccessAllowedAce(v27, 2u, 0x10000000u, v34);
          RtlAddAccessAllowedAce(v27, 2u, 0xE0000000, Sid);
          RtlGetAce(v27, 3u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v27, 2u, 0xE0000000, v36);
          RtlGetAce(v27, 4u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v27, 2u, 0x10000000u, v34);
          RtlGetAce(v27, 5u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v27, 2u, 0x10000000u, v38);
          RtlGetAce(v27, 6u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlCreateAcl(v29, v28, 2u);
          LODWORD(SubAuthority3) = 1;
          RtlAddMandatoryAce(v29, 2u, 0, (ULONG)v37, 0x11u, SubAuthority3);
          RtlSetDaclSecurityDescriptor(SmpLiberalSecurityDescriptor, 1u, v27, 0);
          v3 = RtlSetSaclSecurityDescriptor(SmpLiberalSecurityDescriptor, 1u, v29, 0);
        }
      }
      else
      {
        v3 = -1073741801;
      }
    }
    goto LABEL_34;
  }
  BaseAddress = 0LL;
LABEL_36:
  if ( v37 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v37);
  if ( v38 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v38);
  if ( v34 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v34);
  if ( v40 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v40);
  if ( Sid )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Sid);
  if ( v39 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v39);
  if ( v36 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v36);
  return (unsigned int)v3;
}
