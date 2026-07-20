/*
 * XREFs of SmpCreateSecurityDescriptors @ 0x14000AB30
 * Callers:
 *     SmpInit @ 0x14000A460 (SmpInit.c)
 *     SmpConfigureProtectionMode @ 0x14000AB00 (SmpConfigureProtectionMode.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
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
  ULONG v12; // r15d
  struct _ACL *v13; // rsi
  ULONG v14; // edi
  SIZE_T v15; // r14
  struct _ACL *v16; // rdi
  int v17; // eax
  ULONG v18; // edi
  ULONG v19; // edi
  ULONG v20; // esi
  ULONG v21; // esi
  struct _ACL *v22; // rax
  struct _ACL *v23; // rdi
  PSECURITY_DESCRIPTOR v24; // rcx
  ULONG v25; // edi
  ULONG v26; // edi
  ULONG v27; // esi
  ULONG v28; // esi
  struct _ACL *v29; // r14
  ULONG v30; // edi
  struct _ACL *v31; // r15
  ULONG SubAuthority2; // [rsp+20h] [rbp-89h]
  void *SubAuthority3; // [rsp+28h] [rbp-81h]
  PVOID Ace; // [rsp+60h] [rbp-49h] BYREF
  PSID v36; // [rsp+68h] [rbp-41h] BYREF
  PSID Sid; // [rsp+70h] [rbp-39h] BYREF
  PSID v38; // [rsp+78h] [rbp-31h] BYREF
  PSID v39; // [rsp+80h] [rbp-29h] BYREF
  PSID v40; // [rsp+88h] [rbp-21h] BYREF
  PSID BaseAddress; // [rsp+90h] [rbp-19h] BYREF
  PSID v42; // [rsp+98h] [rbp-11h] BYREF
  PSID v43; // [rsp+A0h] [rbp-9h] BYREF
  PSID v44; // [rsp+A8h] [rbp-1h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v45; // [rsp+B0h] [rbp+7h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v46; // [rsp+B8h] [rbp+Fh] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C0h] [rbp+17h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v48; // [rsp+C8h] [rbp+1Fh] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v49; // [rsp+D0h] [rbp+27h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v50; // [rsp+D8h] [rbp+2Fh] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  v1 = 0;
  Sid = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v36 = 0LL;
  v44 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  BaseAddress = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v46.Value = 0;
  *(_WORD *)&v46.Value[4] = 3840;
  *(_DWORD *)v45.Value = 0;
  *(_WORD *)&v45.Value[4] = 1280;
  *(_DWORD *)v49.Value = 0;
  *(_WORD *)&v49.Value[4] = 4096;
  *(_DWORD *)v48.Value = 0;
  *(_WORD *)&v48.Value[4] = 768;
  *(_DWORD *)v50.Value = 0;
  *(_WORD *)&v50.Value[4] = 4864;
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
    goto LABEL_37;
  v3 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &Sid);
  if ( v3 < 0 )
  {
    Sid = 0LL;
    goto LABEL_37;
  }
  v3 = RtlAllocateAndInitializeSid(&v46, 2u, 2u, 1u, 0, 0, 0, 0, 0, 0, &v42);
  if ( v3 < 0 )
  {
    v42 = 0LL;
    goto LABEL_37;
  }
  v3 = RtlAllocateAndInitializeSid(&v46, 2u, 2u, 2u, 0, 0, 0, 0, 0, 0, &v43);
  if ( v3 < 0 )
  {
    v43 = 0LL;
    goto LABEL_37;
  }
  v3 = RtlAllocateAndInitializeSid(&v45, 2u, 0x20u, 0x220u, 0, 0, 0, 0, 0, 0, &v36);
  if ( v3 < 0 )
  {
    v36 = 0LL;
    goto LABEL_37;
  }
  v3 = RtlAllocateAndInitializeSid(&v48, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &v40);
  if ( v3 < 0 )
  {
    v40 = 0LL;
    goto LABEL_37;
  }
  v3 = RtlAllocateAndInitializeSid(&v45, 1u, 0xCu, 0, 0, 0, 0, 0, 0, 0, &v38);
  if ( v3 < 0 )
  {
    v38 = 0LL;
    goto LABEL_37;
  }
  v3 = RtlAllocateAndInitializeSid(&v45, 1u, 0x12u, 0, 0, 0, 0, 0, 0, 0, &v44);
  if ( v3 < 0 )
  {
    v44 = 0LL;
    goto LABEL_37;
  }
  v3 = RtlAllocateAndInitializeSid(&v49, 1u, 0x1000u, 0, 0, 0, 0, 0, 0, 0, &v39);
  if ( v3 < 0 )
  {
    v39 = 0LL;
LABEL_37:
    if ( BaseAddress )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
    goto LABEL_39;
  }
  v3 = RtlAllocateAndInitializeSid(&v50, 2u, 0x200u, 0x2000u, 0, 0, 0, 0, 0, 0, &BaseAddress);
  if ( v3 >= 0 )
  {
    if ( a1 )
    {
      v4 = RtlLengthSid(v44);
      v5 = v4 + RtlLengthSid(v36) + 32;
      Heap = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v5);
      v7 = Heap;
      if ( Heap )
      {
        RtlCreateAcl(Heap, v5, 2u);
        RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, v36);
        RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, v44);
        v3 = RtlSetDaclSecurityDescriptor(SmpApiPortSecurityDescriptor, 1u, v7, 0);
      }
      else
      {
        v3 = -1073741801;
      }
      v8 = RtlLengthSid(v38);
      v9 = RtlLengthSid(v36) + v8;
      v10 = RtlLengthSid(v43) + v9;
      v11 = RtlLengthSid(v42) + v10;
      v12 = RtlLengthSid(Sid) + 68 + v11;
      v13 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v12);
      if ( !v13 )
        v3 = -1073741801;
      v14 = RtlLengthSid(BaseAddress);
      v15 = v14 + RtlLengthSid(v39) + 32;
      v16 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v15);
      if ( v16 )
      {
        if ( v3 >= 0 )
        {
          RtlCreateAcl(v13, v12, 2u);
          RtlAddAccessAllowedAce(v13, 2u, 0xE0000000, Sid);
          RtlAddAccessAllowedAce(v13, 2u, 0xE0000000, v42);
          RtlAddAccessAllowedAce(v13, 2u, 0xE0000000, v43);
          RtlAddAccessAllowedAce(v13, 2u, 0xE0000000, v38);
          RtlAddAccessAllowedAce(v13, 2u, 0x10000000u, v36);
          RtlCreateAcl(v16, v15, 2u);
          LODWORD(SubAuthority3) = 1;
          RtlAddMandatoryAce(v16, 2u, 0, (ULONG)v39, 0x11u, SubAuthority3);
          v17 = 131087;
          if ( !SmpHostSmss )
            v17 = 196623;
          LOBYTE(SubAuthority2) = 20;
          RtlAddProcessTrustLabelAce(v16, 2LL, 0LL, BaseAddress, SubAuthority2, v17);
          RtlSetDaclSecurityDescriptor(SmpKnownDllSecurityDescriptor, 1u, v13, 0);
          v3 = RtlSetSaclSecurityDescriptor(SmpKnownDllSecurityDescriptor, 1u, v16, 0);
        }
      }
      else
      {
        v3 = -1073741801;
      }
    }
    if ( (SmpProtectionMode & 1) != 0 )
    {
      v18 = RtlLengthSid(v38);
      v19 = RtlLengthSid(v36) + v18;
      v20 = 2 * (v19 + RtlLengthSid(Sid)) + 92;
      v21 = RtlLengthSid(v40) + v20;
      v22 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v21);
      v23 = v22;
      if ( v22 )
      {
        if ( v3 >= 0 )
        {
          RtlCreateAcl(v22, v21, 2u);
          RtlAddAccessAllowedAce(v23, 2u, 0xA0000000, Sid);
          RtlAddAccessAllowedAce(v23, 2u, 0xA0000000, v38);
          RtlAddAccessAllowedAce(v23, 2u, 0x10000000u, v36);
          RtlAddAccessAllowedAce(v23, 2u, 0xA0000000, Sid);
          RtlGetAce(v23, 3u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v23, 2u, 0xA0000000, v38);
          RtlGetAce(v23, 4u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v23, 2u, 0x10000000u, v36);
          RtlGetAce(v23, 5u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v23, 2u, 0x10000000u, v40);
          RtlGetAce(v23, 6u, &Ace);
          v24 = SmpPrimarySecurityDescriptor;
          *((_BYTE *)Ace + 1) = 11;
          v3 = RtlSetDaclSecurityDescriptor(v24, 1u, v23, 0);
        }
      }
      else
      {
        v3 = -1073741801;
      }
      v25 = RtlLengthSid(v38);
      v26 = RtlLengthSid(v36) + v25;
      v27 = 2 * (v26 + RtlLengthSid(Sid)) + 92;
      v28 = RtlLengthSid(v40) + v27;
      v29 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v28);
      if ( !v29 )
        v3 = -1073741801;
      v30 = RtlLengthSid(v39) + 20;
      v31 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v30);
      if ( v31 )
      {
        if ( v3 >= 0 )
        {
          RtlCreateAcl(v29, v28, 2u);
          RtlAddAccessAllowedAce(v29, 2u, 0xE0000000, Sid);
          RtlAddAccessAllowedAce(v29, 2u, 0xE0000000, v38);
          RtlAddAccessAllowedAce(v29, 2u, 0x10000000u, v36);
          RtlAddAccessAllowedAce(v29, 2u, 0xE0000000, Sid);
          RtlGetAce(v29, 3u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v29, 2u, 0xE0000000, v38);
          RtlGetAce(v29, 4u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v29, 2u, 0x10000000u, v36);
          RtlGetAce(v29, 5u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v29, 2u, 0x10000000u, v40);
          RtlGetAce(v29, 6u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlCreateAcl(v31, v30, 2u);
          LODWORD(SubAuthority3) = 1;
          RtlAddMandatoryAce(v31, 2u, 0, (ULONG)v39, 0x11u, SubAuthority3);
          RtlSetDaclSecurityDescriptor(SmpLiberalSecurityDescriptor, 1u, v29, 0);
          v3 = RtlSetSaclSecurityDescriptor(SmpLiberalSecurityDescriptor, 1u, v31, 0);
        }
      }
      else
      {
        v3 = -1073741801;
      }
    }
    goto LABEL_37;
  }
  BaseAddress = 0LL;
LABEL_39:
  if ( v39 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v39);
  if ( v40 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v40);
  if ( v36 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v36);
  if ( v42 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v42);
  if ( v43 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v43);
  if ( Sid )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Sid);
  if ( v44 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v44);
  if ( v38 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v38);
  return (unsigned int)v3;
}
