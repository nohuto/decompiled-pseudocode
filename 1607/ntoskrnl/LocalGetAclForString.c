/*
 * XREFs of LocalGetAclForString @ 0x1404BA348
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x1404B9DFC (LocalConvertStringSDToSD_Rev1.c)
 * Callees:
 *     RtlGetAce @ 0x14000BDCC (RtlGetAce.c)
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     wcstoul @ 0x14014FA4C (wcstoul.c)
 *     wcsncpy_s @ 0x1401537E4 (wcsncpy_s.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlAddAce @ 0x140406208 (RtlAddAce.c)
 *     RtlCopySid @ 0x14041154C (RtlCopySid.c)
 *     RtlpAddKnownAce @ 0x1404206C0 (RtlpAddKnownAce.c)
 *     RtlNtStatusToDosError @ 0x1404A6B50 (RtlNtStatusToDosError.c)
 *     SddlpFree @ 0x1404BA0C0 (SddlpFree.c)
 *     LocalGetSidForString @ 0x1404BA830 (LocalGetSidForString.c)
 *     LookupAccessMaskInTable @ 0x1404BAA38 (LookupAccessMaskInTable.c)
 *     LookupAceTypeInTable @ 0x1404BAAD4 (LookupAceTypeInTable.c)
 *     SddlpAlloc @ 0x1404BAB78 (SddlpAlloc.c)
 *     LocalGetSDDLDeliminator @ 0x1404BABBC (LocalGetSDDLDeliminator.c)
 *     LocalGetAceCount @ 0x1404BAC20 (LocalGetAceCount.c)
 *     RtlAddAccessAllowedObjectAce @ 0x14068467C (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1406846D8 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x14068477C (RtlAddAuditAccessObjectAce.c)
 *     LookupAceFlagsInTable @ 0x1406CBEF0 (LookupAceFlagsInTable.c)
 *     SddlAddMandatoryAce @ 0x1406CBF98 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406CC0F0 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1406CC240 (SddlAddScopedPolicyIDAce.c)
 *     SddlpUuidFromString @ 0x1406CC59C (SddlpUuidFromString.c)
 *     LocalGetConditionForString @ 0x1406CE274 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1406CE9C4 (LocalGetRelativeAttributeForString.c)
 */

__int64 __fastcall LocalGetAclForString(
        wchar_t *Str,
        char a2,
        void **a3,
        wchar_t **a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8)
{
  wchar_t **v8; // r15
  void **v9; // r12
  wchar_t *v11; // r13
  ULONG AceCount; // r14d
  __int64 result; // rax
  wchar_t *v14; // rax
  __int64 v15; // rax
  wchar_t *v16; // rax
  void *v17; // rsi
  unsigned int v18; // edi
  _BYTE *v19; // rax
  __int16 v20; // cx
  _BYTE *v21; // rax
  unsigned __int8 v22; // di
  ACCESS_MASK v23; // r14d
  __int64 v24; // rax
  __int64 v25; // rax
  wchar_t *v26; // rbx
  wchar_t *v27; // rbx
  const wchar_t *v28; // rbx
  unsigned int i; // edi
  _WORD *v30; // rcx
  char *v31; // r15
  _WORD *j; // rbx
  int v33; // edx
  int v34; // ebx
  unsigned int v35; // edi
  ULONG v36; // esi
  ULONG v37; // eax
  int v38; // eax
  int v39; // r15d
  void *v40; // rbx
  PSID v41; // rdi
  bool v42; // zf
  __int64 v43; // rax
  _BYTE *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // r13d
  ULONG ConditionForString; // eax
  int v49; // edi
  int v50; // ecx
  unsigned int v51; // eax
  unsigned __int64 v52; // rcx
  unsigned int v53; // edi
  _WORD *v54; // rax
  _WORD *v55; // r15
  int v56; // ebx
  int v57; // ebx
  int v58; // ebx
  int v59; // ebx
  int v60; // r8d
  int v61; // ebx
  int v62; // ebx
  int v63; // ebx
  int v64; // ebx
  int v65; // ebx
  int v66; // ecx
  __int64 v67; // rax
  __int64 v68; // rdi
  ULONG v69; // eax
  unsigned int v70; // ebx
  ULONG v71; // eax
  size_t v72; // r8
  char *v73; // rdi
  ACCESS_MASK v74; // r9d
  ULONG v75; // eax
  unsigned int v76; // ebx
  ULONG v77; // eax
  _WORD *v78; // r12
  char v79; // al
  unsigned int v80; // ecx
  size_t v81; // rbx
  __int64 v82; // rsi
  __int64 v83; // rdi
  __int64 v84; // rax
  ULONG v85; // eax
  int ObjectTypeGuid; // [rsp+20h] [rbp-E0h]
  int InheritedObjectTypeGuid; // [rsp+28h] [rbp-D8h]
  int pSid; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v89; // [rsp+50h] [rbp-B0h]
  void *Src; // [rsp+58h] [rbp-A8h] BYREF
  char v91; // [rsp+60h] [rbp-A0h] BYREF
  ACCESS_MASK AccessMask; // [rsp+64h] [rbp-9Ch]
  PSID v93; // [rsp+68h] [rbp-98h]
  char v94; // [rsp+70h] [rbp-90h]
  void *v95; // [rsp+78h] [rbp-88h] BYREF
  size_t v96; // [rsp+80h] [rbp-80h]
  unsigned int v97; // [rsp+88h] [rbp-78h] BYREF
  int v98; // [rsp+8Ch] [rbp-74h]
  PSID Sid; // [rsp+90h] [rbp-70h] BYREF
  int v100; // [rsp+98h] [rbp-68h]
  unsigned int Size; // [rsp+9Ch] [rbp-64h]
  int Size_4; // [rsp+A0h] [rbp-60h]
  _WORD *v103; // [rsp+A8h] [rbp-58h] BYREF
  GUID *v104; // [rsp+B0h] [rbp-50h]
  GUID *p_Guid; // [rsp+B8h] [rbp-48h]
  int v106; // [rsp+C0h] [rbp-40h] BYREF
  int v107[2]; // [rsp+C8h] [rbp-38h]
  void **v108; // [rsp+D0h] [rbp-30h]
  wchar_t *EndPtr; // [rsp+D8h] [rbp-28h] BYREF
  PVOID Ace; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v111; // [rsp+E8h] [rbp-18h]
  wchar_t **v112; // [rsp+F0h] [rbp-10h]
  int v113; // [rsp+F8h] [rbp-8h]
  unsigned __int16 v114; // [rsp+FCh] [rbp-4h]
  GUID Guid; // [rsp+100h] [rbp+0h] BYREF
  GUID v116; // [rsp+110h] [rbp+10h] BYREF
  wchar_t Dst[40]; // [rsp+120h] [rbp+20h] BYREF

  *(_QWORD *)v107 = a5;
  v8 = a4;
  v9 = a3;
  v111 = a6;
  v112 = a4;
  v108 = a3;
  v11 = Str;
  v97 = 0;
  AceCount = 0;
  v91 = 0;
  v93 = 0LL;
  Sid = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  Src = 0LL;
  Ace = 0LL;
  v113 = 0;
  v114 = 256;
  if ( !Str || !a3 || !a4 )
    return 87LL;
  if ( !wcsnicmp(Str, L"NO_ACCESS_CONTROL", 0x11uLL) )
  {
    *v9 = 0LL;
    *v8 = v11 + 17;
    return AceCount;
  }
  v100 = 2 - (a2 != 0);
  result = LocalGetSDDLDeliminator(v11);
  if ( (_DWORD)result )
    return result;
  v14 = *v8;
  if ( *v8 == v11 )
    return 87LL;
  if ( v14 )
  {
    v16 = v14 - 1;
  }
  else
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v11[v15] );
    v16 = &v11[v15];
  }
  *v8 = v16;
  AceCount = LocalGetAceCount(v11, v16, &v97);
  if ( AceCount )
    return AceCount;
  LODWORD(v17) = v97;
  if ( !v97 )
  {
    v44 = (_BYTE *)SddlpAlloc(8uLL);
    *v9 = v44;
    if ( v44 )
    {
      *v44 = 2;
      *((_BYTE *)*v9 + 1) = 0;
      *((_WORD *)*v9 + 1) = 8;
      *((_WORD *)*v9 + 2) = 0;
      *((_WORD *)*v9 + 3) = 0;
      return AceCount;
    }
    return 8;
  }
  v18 = 84 * v97 + 8;
  if ( v18 > 0xFFFF )
    v18 = 0xFFFF;
  Size = v18;
  v19 = (_BYTE *)SddlpAlloc(v18);
  *v9 = v19;
  if ( !v19 )
    return 8;
  *v19 = 2;
  v20 = 8;
  v21 = *v9;
  v98 = 8;
  Size_4 = 0;
  v21[1] = 0;
  *((_WORD *)*v9 + 1) = v18;
  *((_WORD *)*v9 + 2) = 0;
  *((_WORD *)*v9 + 3) = 0;
  if ( !(_DWORD)v17 )
  {
    v40 = Src;
    goto LABEL_72;
  }
  while ( 1 )
  {
    v89 = 0;
    v22 = 0;
    AccessMask = 0;
    v23 = 0;
    p_Guid = 0LL;
    v104 = 0LL;
    while ( *v11 == 32 )
      ++v11;
    if ( *v11 == 40 )
LABEL_20:
      ++v11;
    if ( *v11 == 32 )
      goto LABEL_20;
    v24 = LookupAceTypeInTable(v11);
    if ( !v24 )
    {
      v40 = Src;
      AceCount = 1804;
      goto LABEL_228;
    }
    LOBYTE(v17) = *(_BYTE *)(v24 + 12);
    v25 = *(unsigned int *)(v24 + 8);
    v94 = (char)v17;
    v26 = &v11[v25];
    if ( *v26 != 59 && *v26 != 32 )
      goto LABEL_224;
    v27 = v26 + 1;
    if ( (unsigned __int8)((_BYTE)v17 - 5) <= 3u || (_BYTE)v17 == 11 )
      *(_BYTE *)*v9 = 4;
    while ( *v27 == 32 )
      ++v27;
    while ( v27 != *v8 )
    {
      if ( *v27 == 59 )
      {
LABEL_29:
        ++v27;
        break;
      }
      for ( ; *v27 == 32; ++v27 )
        ;
      v45 = LookupAceFlagsInTable(v27);
      if ( !v45 )
      {
        AceCount = 1004;
        goto LABEL_226;
      }
      v22 |= *(_BYTE *)(v45 + 12);
      v89 = v22;
      v27 += *(unsigned int *)(v45 + 8);
    }
    if ( *v27 == 32 )
      goto LABEL_29;
    while ( *v27 != 59 )
    {
      for ( ; *v27 == 32; ++v27 )
        ;
      v43 = LookupAccessMaskInTable(v27);
      if ( v43 )
      {
        v23 |= *(_DWORD *)(v43 + 12);
        v46 = *(unsigned int *)(v43 + 8);
        AccessMask = v23;
        v27 += v46;
      }
      else
      {
        v23 |= wcstoul(v27, &EndPtr, 0);
        AccessMask = v23;
        if ( EndPtr == v27 )
          goto LABEL_224;
        v27 = EndPtr;
      }
    }
    v28 = v27 + 1;
    for ( i = 0; i < 2; ++i )
    {
      while ( *v28 == 32 )
        ++v28;
      if ( *v28 != 59 )
      {
        if ( (unsigned __int8)((_BYTE)v17 - 5) > 3u && (_BYTE)v17 != 11 )
          goto LABEL_224;
        wcsncpy_s(Dst, 0x25uLL, v28, 0x24uLL);
        Dst[36] = 0;
        if ( i )
        {
          if ( !(unsigned int)SddlpUuidFromString(Dst, &v116) )
            goto LABEL_112;
          v104 = &v116;
        }
        else
        {
          if ( !(unsigned int)SddlpUuidFromString(Dst, &Guid) )
            goto LABEL_112;
          p_Guid = &Guid;
        }
        v28 += 36;
        if ( *v28 != 59 && *v28 != 32 )
        {
LABEL_112:
          AceCount = 1705;
          goto LABEL_226;
        }
      }
      ++v28;
    }
    while ( *v28 == 32 )
      ++v28;
    AceCount = LocalGetSidForString(
                 (_DWORD)v28,
                 (unsigned int)&Sid,
                 (unsigned int)&v103,
                 (unsigned int)&v91,
                 *(__int64 *)v107,
                 InheritedObjectTypeGuid,
                 pSid,
                 a8);
    if ( AceCount )
    {
      v93 = Sid;
      goto LABEL_226;
    }
    v30 = v103;
    if ( !v103 )
      break;
    v31 = (char *)Sid;
    v93 = Sid;
    if ( !Sid )
      goto LABEL_224;
    for ( j = v103; *j == 32; ++j )
      ;
    if ( (unsigned __int8)v17 > 0x12u )
      goto LABEL_43;
    v33 = 273920;
    if ( !_bittest(&v33, (unsigned int)v17) )
      goto LABEL_43;
    if ( *j != 59 )
      goto LABEL_224;
    do
      ++j;
    while ( *j == 32 );
    if ( *j != 40 )
    {
      v49 = v96;
      v30 = j;
      v47 = HIDWORD(v96);
      v103 = j;
LABEL_128:
      if ( v49 )
        goto LABEL_130;
      goto LABEL_129;
    }
    if ( v95 )
    {
      SddlpFree(v95);
      v95 = 0LL;
    }
    LODWORD(v96) = 0;
    LODWORD(Sid) = 0;
    if ( Src )
    {
      SddlpFree(Src);
      Src = 0LL;
    }
    v47 = 0;
    HIDWORD(v96) = 0;
    v106 = 0;
    if ( (_BYTE)v17 != 18 )
    {
      pSid = 0;
      InheritedObjectTypeGuid = v111;
      ObjectTypeGuid = v107[0];
      ConditionForString = LocalGetConditionForString(j, &v103, &v95, &Sid);
      v49 = (int)Sid;
      AceCount = ConditionForString;
      v30 = v103;
      LODWORD(v96) = (_DWORD)Sid;
      goto LABEL_128;
    }
    AceCount = LocalGetRelativeAttributeForString(
                 (_DWORD)j,
                 (unsigned int)&v103,
                 (unsigned int)&Src,
                 (unsigned int)&v106,
                 *(__int64 *)v107,
                 InheritedObjectTypeGuid,
                 pSid,
                 a8);
    if ( AceCount )
      goto LABEL_226;
    v47 = v106;
    v30 = v103;
    HIDWORD(v96) = v106;
LABEL_129:
    if ( !v47 )
      goto LABEL_224;
LABEL_130:
    if ( AceCount )
      goto LABEL_226;
LABEL_43:
    if ( *v30 == 32 )
    {
      do
        ++v30;
      while ( *v30 == 32 );
      v103 = v30;
    }
    if ( *v30 != 41 )
      goto LABEL_224;
    v34 = (unsigned __int8)v17;
    v11 = v30 + 1;
    if ( (unsigned __int8)v17 > 0xDu )
    {
      if ( (unsigned __int8)v17 == 17 )
        goto LABEL_48;
      if ( (unsigned __int8)v17 != 18 )
      {
        if ( (unsigned int)(unsigned __int8)v17 - 19 > 1 )
          goto LABEL_224;
LABEL_48:
        v35 = 12;
        goto LABEL_49;
      }
      v51 = HIDWORD(v96);
    }
    else
    {
      if ( (unsigned __int8)v17 != 13 )
      {
        if ( (unsigned __int8)v17 <= 3u )
          goto LABEL_48;
        if ( (unsigned __int8)v17 <= 4u )
          goto LABEL_224;
        if ( (unsigned __int8)v17 <= 8u )
        {
          v35 = 16;
          if ( p_Guid )
            v35 = 32;
          if ( v104 )
            v35 += 16;
          goto LABEL_49;
        }
        if ( (unsigned __int8)v17 > 0xAu )
        {
          if ( (unsigned __int8)v17 != 11 )
            goto LABEL_224;
          v50 = 16;
          if ( p_Guid )
            v50 = 32;
          if ( v104 )
            v50 += 16;
          if ( (unsigned int)v96 > 0xFFFFFFFC )
          {
LABEL_153:
            v40 = Src;
            AceCount = 534;
            goto LABEL_74;
          }
          v51 = (v96 + 3) & 0xFFFFFFFC;
          v35 = v51 + v50;
          goto LABEL_146;
        }
      }
      if ( (unsigned int)v96 > 0xFFFFFFFC )
        goto LABEL_153;
      v51 = (v96 + 3) & 0xFFFFFFFC;
    }
    v35 = v51 + 12;
LABEL_146:
    if ( v35 < v51 )
      goto LABEL_147;
LABEL_49:
    v36 = RtlLengthSid(v31) - 4 + v35;
    if ( v36 < v35 || (v37 = v36 + v98, v98 = v37, v37 < v36) )
    {
LABEL_147:
      AceCount = 534;
      goto LABEL_226;
    }
    if ( v37 > Size )
    {
      v52 = v36 * (unsigned __int64)(v97 - Size_4);
      if ( v52 > 0xFFFFFFFF )
        goto LABEL_147;
      v53 = v52 + Size;
      if ( (unsigned int)v52 + Size < (unsigned int)v52 )
        goto LABEL_147;
      v54 = (_WORD *)SddlpAlloc(v53);
      v55 = v54;
      if ( !v54 )
      {
        SddlpFree(*v9);
        v42 = v91 == 1;
        *v9 = 0LL;
        if ( v42 )
        {
          SddlpFree(v93);
          v93 = 0LL;
          v91 = 0;
        }
        AceCount = 8;
        goto LABEL_226;
      }
      memmove(v54, *v9, Size);
      v55[1] = v53;
      SddlpFree(*v9);
      *v9 = v55;
      v31 = (char *)v93;
      Size = v53;
    }
    if ( v34 <= 10 )
    {
      if ( v34 < 9 )
      {
        if ( v34 )
        {
          v56 = v34 - 1;
          if ( v56 )
          {
            v57 = v56 - 1;
            if ( v57 )
            {
              v58 = v57 - 3;
              if ( v58 )
              {
                v59 = v58 - 1;
                if ( v59 )
                {
                  if ( v59 != 1 )
                    goto LABEL_219;
                  v38 = RtlAddAuditAccessObjectAce(
                          (PACL)*v9,
                          4u,
                          v89,
                          AccessMask,
                          p_Guid,
                          v104,
                          v31,
                          v89 & 0x40,
                          v89 & 0x80);
                }
                else
                {
                  v38 = RtlAddAccessDeniedObjectAce((PACL)*v9, 4u, v89, AccessMask, p_Guid, v104, v31);
                }
              }
              else
              {
                v38 = RtlAddAccessAllowedObjectAce((PACL)*v9, 4u, v89, AccessMask, p_Guid, v104, v31);
              }
            }
            else
            {
              v60 = v89 & 0x3F;
              if ( (v89 & 0x40) != 0 )
                v60 |= 0x40u;
              if ( (v89 & 0x80u) != 0 )
                v60 |= 0x80u;
              v38 = RtlpAddKnownAce((ACL *)*v9, 2u, v60, AccessMask, (unsigned __int8 *)v31, 2u);
            }
          }
          else
          {
            v38 = RtlpAddKnownAce((ACL *)*v9, 2u, v89, AccessMask, (unsigned __int8 *)v31, 1u);
          }
        }
        else
        {
          v38 = RtlpAddKnownAce((ACL *)*v9, 2u, v89, AccessMask, (unsigned __int8 *)v31, 0);
        }
        goto LABEL_56;
      }
      goto LABEL_200;
    }
    v61 = v34 - 11;
    if ( v61 )
    {
      v62 = v61 - 2;
      if ( !v62 )
      {
LABEL_200:
        if ( v36 >= 0xFFFF )
          goto LABEL_220;
        v73 = (char *)SddlpAlloc(v36);
        if ( v73 )
        {
          v74 = AccessMask;
          *v73 = v94;
          v73[1] = v89;
          *((_WORD *)v73 + 1) = v36;
          *((_DWORD *)v73 + 1) = v74;
          v75 = RtlLengthSid(v31);
          RtlCopySid(v75, v73 + 8, v31);
          if ( (_DWORD)v96 )
          {
            v76 = v96;
            v77 = RtlLengthSid(v31);
            memmove(&v73[v77 + 8], v95, v76);
          }
          v39 = RtlAddAce((PACL)*v9, 2u, 0xFFFFFFFF, v73, v36);
          SddlpFree(v73);
          goto LABEL_57;
        }
        goto LABEL_198;
      }
      v63 = v62 - 4;
      if ( !v63 )
      {
        v38 = SddlAddMandatoryAce((PACL)*v9, ObjectTypeGuid, AccessMask);
        goto LABEL_56;
      }
      v64 = v63 - 1;
      if ( v64 )
      {
        v65 = v64 - 1;
        if ( !v65 )
        {
          v38 = SddlAddScopedPolicyIDAce((PACL)*v9, v31);
          goto LABEL_56;
        }
        if ( v65 == 1 )
        {
          v38 = SddlAddProcessTrustLabelAce((PACL)*v9, ObjectTypeGuid, AccessMask);
LABEL_56:
          v39 = v38;
LABEL_57:
          v40 = Src;
LABEL_58:
          v17 = v95;
LABEL_59:
          v41 = v93;
          goto LABEL_60;
        }
LABEL_219:
        v39 = -1073741811;
      }
      else
      {
        if ( v36 < 0xFFFF && (v89 & 0xE0) == 0 && !AccessMask )
        {
          v66 = *(_DWORD *)(v31 + 2) - v113;
          if ( !v66 )
            v66 = *((unsigned __int16 *)v31 + 3) - v114;
          if ( !v66 && v31[1] == 1 && !*((_DWORD *)v31 + 2) )
          {
            v67 = SddlpAlloc(v36);
            v68 = v67;
            if ( v67 )
            {
              *(_BYTE *)v67 = v94;
              *(_DWORD *)(v67 + 4) = 0;
              *(_BYTE *)(v67 + 1) = v89;
              *(_WORD *)(v67 + 2) = v36;
              v69 = RtlLengthSid(v31);
              RtlCopySid(v69, (PSID)(v68 + 8), v31);
              if ( HIDWORD(v96) )
              {
                v70 = HIDWORD(v96);
                v71 = RtlLengthSid(v31);
                v72 = v70;
                v40 = Src;
                memmove((void *)(v71 + v68 + 8), Src, v72);
              }
              else
              {
                v40 = Src;
              }
              v39 = RtlAddAce((PACL)*v9, 2u, 0xFFFFFFFF, (PVOID)v68, v36);
              SddlpFree((void *)v68);
              goto LABEL_58;
            }
LABEL_198:
            v39 = -1073741801;
            goto LABEL_57;
          }
        }
LABEL_220:
        v39 = -1073741705;
      }
LABEL_221:
      v40 = Src;
LABEL_222:
      AceCount = RtlNtStatusToDosError(v39);
LABEL_228:
      if ( AceCount )
        goto LABEL_229;
LABEL_71:
      v20 = v98;
LABEL_72:
      *((_WORD *)*v9 + 1) = v20;
      goto LABEL_73;
    }
    if ( v36 >= 0xFFFF )
      goto LABEL_220;
    v39 = RtlAddAccessAllowedObjectAce((PACL)*v9, 4u, v89, AccessMask, p_Guid, v104, v31);
    if ( v39 < 0 )
      goto LABEL_221;
    v39 = RtlGetAce((PACL)*v9, *((unsigned __int16 *)*v9 + 2) - 1, &Ace);
    if ( v39 < 0 )
      goto LABEL_221;
    v78 = Ace;
    v79 = 9;
    v80 = v96;
    if ( *(_BYTE *)Ace == 5 )
      v79 = 11;
    *(_BYTE *)Ace = v79;
    v78[1] = v36;
    if ( !v80 )
    {
      v9 = v108;
      goto LABEL_57;
    }
    v81 = v80;
    if ( v79 == 11 )
    {
      v82 = 16LL * (*((_DWORD *)v78 + 2) & 1);
      v83 = 8LL * (*((_DWORD *)v78 + 2) & 2);
      v84 = v82 + v83 + RtlLengthSid(v93);
      v17 = v95;
      memmove((char *)v78 + v84 + 12, v95, (unsigned int)v81);
      v9 = v108;
      v40 = Src;
      goto LABEL_59;
    }
    v41 = v93;
    v85 = RtlLengthSid(v93);
    v17 = v95;
    memmove((char *)v78 + v85 + 8, v95, v81);
    v9 = v108;
    v40 = Src;
LABEL_60:
    if ( v39 < 0 )
      goto LABEL_222;
    if ( v91 == 1 )
      SddlpFree(v41);
    v93 = 0LL;
    Sid = 0LL;
    if ( v17 )
    {
      SddlpFree(v17);
      v95 = 0LL;
    }
    LODWORD(v96) = 0;
    if ( Src )
    {
      SddlpFree(Src);
      Src = 0LL;
    }
    v42 = *v11 == 40;
    HIDWORD(v96) = 0;
    if ( v42 )
      ++v11;
    if ( ++Size_4 >= v97 )
    {
      v40 = Src;
      goto LABEL_71;
    }
    v8 = v112;
  }
  v93 = Sid;
LABEL_224:
  AceCount = 1336;
LABEL_226:
  v40 = Src;
LABEL_229:
  SddlpFree(*v9);
  *v9 = 0LL;
LABEL_73:
  if ( v91 && v93 )
    SddlpFree(v93);
LABEL_74:
  if ( v95 )
    SddlpFree(v95);
  if ( v40 )
    SddlpFree(v40);
  return AceCount;
}
