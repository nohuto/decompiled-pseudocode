/*
 * XREFs of LocalConvertSDToStringSD_Rev1 @ 0x1406CAFA0
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140235884 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140009844 (RtlGetDaclSecurityDescriptor.c)
 *     swprintf_s @ 0x140151F20 (swprintf_s.c)
 *     wcscpy_s @ 0x140153654 (wcscpy_s.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1403F5EAC (RtlGetSaclSecurityDescriptor.c)
 *     RtlNtStatusToDosError @ 0x1404A6B50 (RtlNtStatusToDosError.c)
 *     SddlpFree @ 0x1404BA0C0 (SddlpFree.c)
 *     SddlpAlloc @ 0x1404BAB78 (SddlpAlloc.c)
 *     RtlGetControlSecurityDescriptor @ 0x1404CCE04 (RtlGetControlSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1404D5328 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140543698 (RtlGetGroupSecurityDescriptor.c)
 *     LocalConvertAclToString @ 0x1406CA4C0 (LocalConvertAclToString.c)
 *     LocalGetStringForControl @ 0x1406CB830 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x1406CB950 (LocalGetStringForSid.c)
 *     SddlFilterSacl @ 0x1406CC398 (SddlFilterSacl.c)
 */

ULONG __fastcall LocalConvertSDToStringSD_Rev1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        char a5,
        wchar_t **a6,
        unsigned int *a7)
{
  int StringForSid; // r13d
  int OwnerSecurityDescriptor; // eax
  unsigned int v10; // esi
  PSID v11; // r15
  PSID v12; // r12
  PACL v13; // rdi
  char v14; // bl
  unsigned int v15; // ebx
  int SaclSecurityDescriptor; // eax
  ACL *v18; // rax
  ULONG v19; // ebx
  void *v20; // r12
  wchar_t *v21; // rbx
  WORD v22; // bx
  char v23; // bl
  BOOLEAN v24; // cl
  void *v25; // rdi
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rax
  _WORD *v29; // r12
  __int64 v30; // rax
  __int64 v31; // rax
  size_t v32; // r14
  wchar_t *v33; // rax
  wchar_t **v34; // r8
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rbx
  wchar_t *v38; // rcx
  size_t v39; // r12
  __int64 v40; // rax
  __int64 v41; // rax
  size_t v42; // r14
  size_t v43; // rdx
  __int64 v44; // rbx
  wchar_t *v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // [rsp+20h] [rbp-91h]
  int v48; // [rsp+38h] [rbp-79h]
  size_t Size; // [rsp+50h] [rbp-61h] BYREF
  _WORD *v50; // [rsp+58h] [rbp-59h] BYREF
  void *v51; // [rsp+60h] [rbp-51h]
  wchar_t *v52; // [rsp+68h] [rbp-49h] BYREF
  _WORD *v53; // [rsp+70h] [rbp-41h] BYREF
  _WORD *v54; // [rsp+78h] [rbp-39h]
  ACL *v55; // [rsp+80h] [rbp-31h]
  PACL Sacl; // [rsp+88h] [rbp-29h] BYREF
  wchar_t *Src; // [rsp+90h] [rbp-21h] BYREF
  PSID Owner; // [rsp+98h] [rbp-19h] BYREF
  PSID Group; // [rsp+A0h] [rbp-11h] BYREF
  PACL Dacl; // [rsp+A8h] [rbp-9h] BYREF
  ULONG OwnerDefaulted; // [rsp+100h] [rbp+4Fh] BYREF
  __int64 SaclPresent; // [rsp+108h] [rbp+57h] BYREF
  BOOLEAN DaclPresent; // [rsp+110h] [rbp+5Fh] BYREF
  WORD Control; // [rsp+118h] [rbp+67h] BYREF

  SaclPresent = a2;
  LODWORD(Size) = 0;
  StringForSid = 0;
  Owner = 0LL;
  OwnerSecurityDescriptor = 0;
  Group = 0LL;
  v10 = 0;
  Dacl = 0LL;
  v11 = 0LL;
  Sacl = 0LL;
  v12 = 0LL;
  v55 = 0LL;
  v13 = 0LL;
  LOBYTE(SaclPresent) = 0;
  DaclPresent = 0;
  v51 = 0LL;
  v54 = 0LL;
  v52 = 0LL;
  Src = 0LL;
  Control = 0;
  v53 = 0LL;
  v50 = 0LL;
  if ( a4 && a6 )
  {
    v14 = a5;
    if ( (a5 & 1) != 0 )
    {
      OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(a4, &Owner, (PBOOLEAN)&OwnerDefaulted);
      if ( OwnerSecurityDescriptor < 0 )
      {
LABEL_19:
        v19 = RtlNtStatusToDosError(OwnerSecurityDescriptor);
        SddlpFree(v55);
        return v19;
      }
      v11 = Owner;
    }
    if ( (v14 & 2) != 0 )
    {
      OwnerSecurityDescriptor = RtlGetGroupSecurityDescriptor(a4, &Group, (PBOOLEAN)&OwnerDefaulted);
      v12 = Group;
    }
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_19;
    if ( (v14 & 4) != 0 )
      OwnerSecurityDescriptor = RtlGetDaclSecurityDescriptor(a4, &DaclPresent, &Dacl, (PBOOLEAN)&OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_19;
    v15 = v14 & 0xF8;
    if ( v15 )
    {
      SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                                 a4,
                                 (PBOOLEAN)&SaclPresent,
                                 &Sacl,
                                 (PBOOLEAN)&OwnerDefaulted);
      if ( SaclSecurityDescriptor < 0 )
        return RtlNtStatusToDosError(SaclSecurityDescriptor);
      v13 = Sacl;
      if ( (_BYTE)SaclPresent )
      {
        if ( Sacl )
        {
          SddlFilterSacl(Sacl, 0LL, &Size, v15);
          v18 = (ACL *)SddlpAlloc((unsigned int)Size);
          v55 = v18;
          if ( !v18 )
          {
            OwnerSecurityDescriptor = -1073741801;
            goto LABEL_19;
          }
          SddlFilterSacl(v13, v18, &Size, v15);
          v13 = v55;
        }
      }
    }
    OwnerSecurityDescriptor = RtlGetControlSecurityDescriptor(a4, &Control, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_19;
    if ( v11 )
    {
      StringForSid = LocalGetStringForSid(v11, v47, 1);
      if ( StringForSid )
        goto LABEL_24;
    }
    if ( v12 )
    {
      StringForSid = LocalGetStringForSid(v12, v47, 1);
      if ( StringForSid )
        goto LABEL_24;
    }
    v22 = Control;
    if ( Control )
    {
      StringForSid = LocalGetStringForControl(Control, 1LL, &v53);
      if ( StringForSid )
        goto LABEL_24;
      StringForSid = LocalGetStringForControl(v22, 2LL, &v50);
      if ( StringForSid )
        goto LABEL_24;
    }
    v23 = SaclPresent;
    if ( (_BYTE)SaclPresent )
    {
      StringForSid = LocalConvertAclToString(
                       (__int64)v13,
                       SaclPresent,
                       0,
                       (void **)&v52,
                       (unsigned int *)&Size,
                       0LL,
                       0LL,
                       v48,
                       1);
      if ( StringForSid )
        goto LABEL_24;
      v10 = Size;
    }
    v24 = DaclPresent;
    if ( !DaclPresent )
    {
LABEL_36:
      v25 = v51;
      v26 = -1LL;
      if ( v51 )
      {
        v27 = -1LL;
        do
          ++v27;
        while ( *((_WORD *)v51 + v27) );
        v10 += 2 * v27 + 4;
      }
      if ( v54 )
      {
        v28 = -1LL;
        do
          ++v28;
        while ( v54[v28] );
        v10 += 2 * v28 + 4;
      }
      v29 = v53;
      if ( v24 )
      {
        v10 += 4;
        if ( v53 )
        {
          v30 = -1LL;
          do
            ++v30;
          while ( v53[v30] );
          v10 += 2 * v30;
        }
      }
      if ( v23 )
      {
        v10 += 4;
        if ( v50 )
        {
          v31 = -1LL;
          do
            ++v31;
          while ( v50[v31] );
          v10 += 2 * v31;
        }
      }
      v32 = v10 + 2LL;
      v33 = (wchar_t *)SddlpAlloc(v32);
      v34 = a6;
      *a6 = v33;
      if ( !v33 )
      {
        v20 = v50;
        StringForSid = 8;
        v21 = v52;
LABEL_84:
        SddlpFree(v25);
        SddlpFree(v54);
        SddlpFree(v21);
        SddlpFree(Src);
        SddlpFree(v20);
        SddlpFree(v53);
        SddlpFree(v55);
        SddlpFree(0LL);
        return StringForSid;
      }
      LODWORD(v35) = 0;
      if ( v51 )
      {
        LODWORD(v47) = 58;
        swprintf_s(v33, v32 >> 1, L"%ws%wc%ws", L"O", v47, v51);
        v34 = a6;
        v35 = -1LL;
        do
          ++v35;
        while ( (*a6)[v35] );
      }
      if ( v54 )
      {
        LODWORD(v47) = 58;
        swprintf_s(&(*v34)[(unsigned int)v35], (v32 >> 1) - (unsigned int)v35, L"%ws%wc%ws", L"G", v47, v54);
        v34 = a6;
        v36 = -1LL;
        do
          ++v36;
        while ( (*a6)[(unsigned int)v35 + v36] );
        LODWORD(v35) = v36 + v35;
      }
      if ( DaclPresent )
      {
        v37 = (unsigned int)v35;
        v38 = &(*v34)[v37];
        if ( v29 )
        {
          v39 = v32 >> 1;
          LODWORD(v47) = 58;
          swprintf_s(v38, (v32 >> 1) - (unsigned int)v35, L"%ws%wc%ws", L"D", v47, v53);
        }
        else
        {
          v39 = v32 >> 1;
          LODWORD(v47) = 58;
          swprintf_s(v38, (v32 >> 1) - (unsigned int)v35, L"%ws%wc", L"D", v47);
        }
        v34 = a6;
        v40 = -1LL;
        do
          ++v40;
        while ( (*a6)[v37 + v40] );
        v35 = (unsigned int)(v40 + v35);
        if ( Src )
        {
          wcscpy_s(&(*a6)[v35], v39 - (unsigned int)v35, Src);
          v34 = a6;
          v41 = -1LL;
          do
            ++v41;
          while ( (*a6)[v35 + v41] );
          LODWORD(v35) = v41 + v35;
        }
      }
      v20 = v50;
      if ( (_BYTE)SaclPresent )
      {
        v42 = v32 >> 1;
        v43 = v42 - (unsigned int)v35;
        v44 = (unsigned int)v35;
        v45 = &(*v34)[v44];
        LODWORD(v47) = 58;
        if ( v50 )
          swprintf_s(v45, v43, L"%ws%wc%ws", L"S", v47, v50);
        else
          swprintf_s(v45, v43, L"%ws%wc", L"S", v47);
        do
          ++v26;
        while ( (*a6)[v44 + v26] );
        v21 = v52;
        v46 = (unsigned int)(v26 + v35);
        if ( v52 )
          wcscpy_s(&(*a6)[v46], v42 - (unsigned int)v46, v52);
      }
      else
      {
        v21 = v52;
      }
      if ( a7 )
        *a7 = v10 >> 1;
LABEL_83:
      v25 = v51;
      goto LABEL_84;
    }
    StringForSid = LocalConvertAclToString(
                     (__int64)Dacl,
                     DaclPresent,
                     1,
                     (void **)&Src,
                     (unsigned int *)&Size,
                     0LL,
                     0LL,
                     v48,
                     1);
    if ( !StringForSid )
    {
      v10 += Size;
      v24 = DaclPresent;
      goto LABEL_36;
    }
LABEL_24:
    v20 = v50;
    v21 = v52;
    goto LABEL_83;
  }
  return 87;
}
