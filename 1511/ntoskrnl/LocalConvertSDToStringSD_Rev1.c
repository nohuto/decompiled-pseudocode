/*
 * XREFs of LocalConvertSDToStringSD_Rev1 @ 0x140684C48
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x14021B6F0 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x14001B408 (RtlGetDaclSecurityDescriptor.c)
 *     swprintf_s @ 0x1401485D0 (swprintf_s.c)
 *     wcscpy_s @ 0x140149D04 (wcscpy_s.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1403E2B08 (RtlGetSaclSecurityDescriptor.c)
 *     RtlNtStatusToDosError @ 0x14049D1D0 (RtlNtStatusToDosError.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1404A9920 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetControlSecurityDescriptor @ 0x1404BF950 (RtlGetControlSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x14053FF40 (RtlGetGroupSecurityDescriptor.c)
 *     LocalConvertAclToString @ 0x140684128 (LocalConvertAclToString.c)
 *     LocalGetStringForControl @ 0x140686A00 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x140686B20 (LocalGetStringForSid.c)
 *     SddlFilterSacl @ 0x140687984 (SddlFilterSacl.c)
 *     SddlpAlloc @ 0x140687AFC (SddlpAlloc.c)
 *     SddlpFree @ 0x140687B40 (SddlpFree.c)
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
  unsigned int v10; // r15d
  PSID v11; // r14
  PSID v12; // r12
  PACL v13; // rdi
  char v14; // bl
  unsigned int v15; // ebx
  int SaclSecurityDescriptor; // eax
  __int64 v18; // rax
  ULONG v19; // ebx
  __int64 v20; // rdx
  wchar_t *v21; // rdx
  __int64 v22; // r12
  wchar_t *v23; // rbx
  WORD v24; // bx
  char v25; // bl
  BOOLEAN v26; // dl
  __int64 v27; // rdi
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  size_t v38; // rsi
  wchar_t *v39; // rax
  wchar_t **v40; // r8
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rbx
  wchar_t *v44; // rcx
  size_t v45; // r12
  __int64 v46; // rax
  __int64 v47; // rax
  size_t v48; // rsi
  size_t v49; // rdx
  __int64 v50; // rbx
  wchar_t *v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // [rsp+20h] [rbp-91h]
  int v61; // [rsp+38h] [rbp-79h]
  size_t Size; // [rsp+50h] [rbp-61h] BYREF
  __int64 v63; // [rsp+58h] [rbp-59h]
  __int64 v64; // [rsp+60h] [rbp-51h] BYREF
  wchar_t *v65; // [rsp+68h] [rbp-49h] BYREF
  __int64 v66; // [rsp+70h] [rbp-41h] BYREF
  __int64 v67; // [rsp+78h] [rbp-39h]
  ACL *v68; // [rsp+80h] [rbp-31h]
  wchar_t *Src; // [rsp+88h] [rbp-29h] BYREF
  PACL Sacl; // [rsp+90h] [rbp-21h] BYREF
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
  v68 = 0LL;
  v13 = 0LL;
  LOBYTE(SaclPresent) = 0;
  DaclPresent = 0;
  v63 = 0LL;
  v67 = 0LL;
  v65 = 0LL;
  Src = 0LL;
  Control = 0;
  v66 = 0LL;
  v64 = 0LL;
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
        SddlpFree(v68, v20);
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
          v18 = SddlpAlloc((unsigned int)Size);
          v68 = (ACL *)v18;
          if ( !v18 )
          {
            OwnerSecurityDescriptor = -1073741801;
            goto LABEL_19;
          }
          SddlFilterSacl(v13, v18, &Size, v15);
          v13 = v68;
        }
      }
    }
    OwnerSecurityDescriptor = RtlGetControlSecurityDescriptor(a4, &Control, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_19;
    if ( v11 )
    {
      StringForSid = LocalGetStringForSid(v11, v60, 1);
      if ( StringForSid )
        goto LABEL_24;
    }
    if ( v12 )
    {
      StringForSid = LocalGetStringForSid(v12, v60, 1);
      if ( StringForSid )
        goto LABEL_24;
    }
    v24 = Control;
    if ( Control )
    {
      StringForSid = LocalGetStringForControl(Control, 1LL, &v66);
      if ( StringForSid )
        goto LABEL_24;
      StringForSid = LocalGetStringForControl(v24, 2LL, &v64);
      if ( StringForSid )
        goto LABEL_24;
    }
    v25 = SaclPresent;
    if ( (_BYTE)SaclPresent )
    {
      StringForSid = LocalConvertAclToString(
                       (__int64)v13,
                       SaclPresent,
                       0,
                       (__int64 *)&v65,
                       (unsigned int *)&Size,
                       0LL,
                       0LL,
                       v61,
                       1);
      if ( StringForSid )
        goto LABEL_24;
      v10 = Size;
    }
    v26 = DaclPresent;
    if ( !DaclPresent )
    {
LABEL_36:
      v27 = v63;
      v28 = -1LL;
      if ( v63 )
      {
        v29 = -1LL;
        do
          ++v29;
        while ( *(_WORD *)(v63 + 2 * v29) );
        v30 = -1LL;
        do
          ++v30;
        while ( aO[v30] );
        v10 += 2 * (v30 + v29) + 2;
      }
      if ( v67 )
      {
        v31 = -1LL;
        do
          ++v31;
        while ( *(_WORD *)(v67 + 2 * v31) );
        v32 = -1LL;
        do
          ++v32;
        while ( aG[v32] );
        v10 += 2 * (v32 + v31) + 2;
      }
      if ( v26 )
      {
        v33 = -1LL;
        do
          ++v33;
        while ( aD[v33] );
        v34 = v66;
        v10 += 2 * v33 + 2;
        if ( v66 )
        {
          v35 = -1LL;
          do
            ++v35;
          while ( *(_WORD *)(v66 + 2 * v35) );
          v10 += 2 * v35;
        }
      }
      else
      {
        v34 = v66;
      }
      if ( v25 )
      {
        v36 = -1LL;
        do
          ++v36;
        while ( aS_3[v36] );
        v10 += 2 * v36 + 2;
        if ( v64 )
        {
          v37 = -1LL;
          do
            ++v37;
          while ( *(_WORD *)(v64 + 2 * v37) );
          v10 += 2 * v37;
        }
      }
      v38 = v10 + 2LL;
      v39 = (wchar_t *)SddlpAlloc(v38);
      v40 = a6;
      *a6 = v39;
      if ( !v39 )
      {
        v22 = v64;
        StringForSid = 8;
        v23 = v65;
LABEL_94:
        SddlpFree(v27, v21);
        SddlpFree(v67, v53);
        SddlpFree(v23, v54);
        SddlpFree(Src, v55);
        SddlpFree(v22, v56);
        SddlpFree(v66, v57);
        SddlpFree(v68, v58);
        SddlpFree(0LL, v59);
        return StringForSid;
      }
      LODWORD(v41) = 0;
      if ( v63 )
      {
        LODWORD(v60) = 58;
        swprintf_s(v39, v38 >> 1, L"%ws%wc%ws", L"O", v60, v63);
        v40 = a6;
        v41 = -1LL;
        do
          ++v41;
        while ( (*a6)[v41] );
      }
      if ( v67 )
      {
        LODWORD(v60) = 58;
        swprintf_s(&(*v40)[(unsigned int)v41], (v38 >> 1) - (unsigned int)v41, L"%ws%wc%ws", L"G", v60, v67);
        v40 = a6;
        v42 = -1LL;
        do
          ++v42;
        while ( (*a6)[(unsigned int)v41 + v42] );
        LODWORD(v41) = v42 + v41;
      }
      if ( DaclPresent )
      {
        v43 = (unsigned int)v41;
        v44 = &(*v40)[v43];
        if ( v34 )
        {
          v45 = v38 >> 1;
          LODWORD(v60) = 58;
          swprintf_s(v44, (v38 >> 1) - (unsigned int)v41, L"%ws%wc%ws", L"D", v60, v66);
        }
        else
        {
          v45 = v38 >> 1;
          LODWORD(v60) = 58;
          swprintf_s(v44, (v38 >> 1) - (unsigned int)v41, L"%ws%wc", L"D", v60);
        }
        v40 = a6;
        v46 = -1LL;
        v21 = *a6;
        do
          ++v46;
        while ( (*a6)[v43 + v46] );
        v41 = (unsigned int)(v46 + v41);
        if ( Src )
        {
          wcscpy_s(&v21[v41], v45 - (unsigned int)v41, Src);
          v40 = a6;
          v47 = -1LL;
          do
            ++v47;
          while ( (*a6)[v41 + v47] );
          LODWORD(v41) = v47 + v41;
        }
      }
      v22 = v64;
      if ( (_BYTE)SaclPresent )
      {
        v48 = v38 >> 1;
        v49 = v48 - (unsigned int)v41;
        v50 = (unsigned int)v41;
        v51 = &(*v40)[v50];
        LODWORD(v60) = 58;
        if ( v64 )
          swprintf_s(v51, v49, L"%ws%wc%ws", L"S", v60, v64);
        else
          swprintf_s(v51, v49, L"%ws%wc", L"S", v60);
        v21 = 0LL;
        do
          ++v28;
        while ( (*a6)[v50 + v28] );
        v23 = v65;
        v52 = (unsigned int)(v28 + v41);
        if ( v65 )
          wcscpy_s(&(*a6)[v52], v48 - (unsigned int)v52, v65);
      }
      else
      {
        v23 = v65;
      }
      if ( a7 )
        *a7 = v10 >> 1;
LABEL_93:
      v27 = v63;
      goto LABEL_94;
    }
    StringForSid = LocalConvertAclToString(
                     (__int64)Dacl,
                     DaclPresent,
                     1,
                     (__int64 *)&Src,
                     (unsigned int *)&Size,
                     0LL,
                     0LL,
                     v61,
                     1);
    if ( !StringForSid )
    {
      v10 += Size;
      v26 = DaclPresent;
      goto LABEL_36;
    }
LABEL_24:
    v22 = v64;
    v23 = v65;
    goto LABEL_93;
  }
  return 87;
}
