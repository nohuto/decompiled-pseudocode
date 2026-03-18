/*
 * XREFs of LocalGetAclForString @ 0x1406859BC
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x14068530C (LocalConvertStringSDToSD_Rev1.c)
 * Callees:
 *     RtlGetAce @ 0x140003350 (RtlGetAce.c)
 *     RtlLengthSid @ 0x140003E60 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x140144480 (_wcsnicmp.c)
 *     wcstoul @ 0x1401460B0 (wcstoul.c)
 *     wcsncpy_s @ 0x140149E94 (wcsncpy_s.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     RtlAddAce @ 0x1403BDC98 (RtlAddAce.c)
 *     RtlpAddKnownAce @ 0x140435010 (RtlpAddKnownAce.c)
 *     RtlCopySid @ 0x1404793FC (RtlCopySid.c)
 *     RtlNtStatusToDosError @ 0x14049D1D0 (RtlNtStatusToDosError.c)
 *     RtlAddAccessAllowedObjectAce @ 0x140644C64 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x140644CC0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x140644D64 (RtlAddAuditAccessObjectAce.c)
 *     LocalGetAceCount @ 0x14068584C (LocalGetAceCount.c)
 *     LocalGetSDDLDeliminator @ 0x140686834 (LocalGetSDDLDeliminator.c)
 *     LocalGetSidForString @ 0x140686904 (LocalGetSidForString.c)
 *     LookupAccessMaskInTable @ 0x1406870C0 (LookupAccessMaskInTable.c)
 *     LookupAceFlagsInTable @ 0x140687168 (LookupAceFlagsInTable.c)
 *     LookupAceTypeInTable @ 0x140687210 (LookupAceTypeInTable.c)
 *     SddlAddMandatoryAce @ 0x14068757C (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406876D4 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140687828 (SddlAddScopedPolicyIDAce.c)
 *     SddlpAlloc @ 0x140687AFC (SddlpAlloc.c)
 *     SddlpFree @ 0x140687B40 (SddlpFree.c)
 *     SddlpUuidFromString @ 0x140687BE4 (SddlpUuidFromString.c)
 *     LocalGetConditionForString @ 0x1406898FC (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x14068A048 (LocalGetRelativeAttributeForString.c)
 */

__int64 __fastcall LocalGetAclForString(
        wchar_t *Str1,
        char a2,
        const void **a3,
        wchar_t **a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8)
{
  wchar_t **v8; // r15
  const void **v9; // r12
  wchar_t *v11; // r13
  unsigned int AceCount; // r14d
  __int64 v13; // rbx
  size_t v14; // r8
  __int64 result; // rax
  wchar_t *v16; // rax
  wchar_t *v17; // rax
  unsigned int v18; // esi
  _BYTE *v19; // rax
  unsigned int v20; // edi
  _BYTE *v21; // rax
  __int64 v22; // rdx
  __int16 v23; // cx
  _BYTE *v24; // rax
  unsigned __int8 v25; // di
  ACCESS_MASK v26; // r14d
  __int64 v27; // rax
  __int64 v28; // rax
  wchar_t *v29; // rbx
  wchar_t *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  const wchar_t *v34; // rbx
  unsigned int i; // edi
  _WORD *v36; // rcx
  char *v37; // r15
  _WORD *j; // rbx
  int v39; // r13d
  unsigned int ConditionForString; // eax
  int v41; // edi
  int v42; // ebx
  int v43; // ecx
  unsigned int v44; // eax
  unsigned int v45; // edi
  ULONG v46; // esi
  unsigned int v47; // eax
  unsigned __int64 v48; // rcx
  unsigned int v49; // edi
  _WORD *v50; // rax
  __int64 v51; // rdx
  _WORD *v52; // r15
  __int64 v53; // rdx
  int v54; // ebx
  int v55; // ebx
  int v56; // ebx
  int v57; // ebx
  int v58; // eax
  int v59; // r15d
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
  void *v73; // rbx
  __int64 v74; // rdx
  char *v75; // rdi
  ACCESS_MASK v76; // r9d
  ULONG v77; // eax
  unsigned int v78; // ebx
  ULONG v79; // eax
  __int64 v80; // rdx
  _WORD *v81; // r12
  char v82; // al
  unsigned int v83; // ecx
  size_t v84; // rbx
  __int64 v85; // rsi
  __int64 v86; // rdi
  ULONG v87; // eax
  PSID v88; // rdi
  bool v89; // zf
  ULONG v90; // eax
  int ObjectTypeGuid; // [rsp+20h] [rbp-E0h]
  int InheritedObjectTypeGuid; // [rsp+28h] [rbp-D8h]
  int pSid; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v94; // [rsp+50h] [rbp-B0h]
  void *Src; // [rsp+58h] [rbp-A8h] BYREF
  char v96; // [rsp+60h] [rbp-A0h] BYREF
  ACCESS_MASK AccessMask; // [rsp+64h] [rbp-9Ch]
  PSID v98; // [rsp+68h] [rbp-98h]
  char v99; // [rsp+70h] [rbp-90h]
  size_t v100; // [rsp+74h] [rbp-8Ch]
  void *v101; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v102; // [rsp+88h] [rbp-78h] BYREF
  int v103; // [rsp+8Ch] [rbp-74h]
  PSID Sid; // [rsp+90h] [rbp-70h] BYREF
  GUID *v105; // [rsp+98h] [rbp-68h]
  int v106; // [rsp+A0h] [rbp-60h]
  int v107; // [rsp+A4h] [rbp-5Ch]
  GUID *p_Guid; // [rsp+A8h] [rbp-58h]
  size_t Size; // [rsp+B0h] [rbp-50h]
  _WORD *v110; // [rsp+B8h] [rbp-48h] BYREF
  int v111; // [rsp+C0h] [rbp-40h] BYREF
  int v112[2]; // [rsp+C8h] [rbp-38h]
  const void **v113; // [rsp+D0h] [rbp-30h]
  PVOID Ace; // [rsp+D8h] [rbp-28h] BYREF
  wchar_t *EndPtr; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v116; // [rsp+E8h] [rbp-18h]
  wchar_t **v117; // [rsp+F0h] [rbp-10h]
  int v118; // [rsp+F8h] [rbp-8h]
  unsigned __int16 v119; // [rsp+FCh] [rbp-4h]
  GUID Guid; // [rsp+100h] [rbp+0h] BYREF
  GUID v121; // [rsp+110h] [rbp+10h] BYREF
  wchar_t Dst[40]; // [rsp+120h] [rbp+20h] BYREF

  v8 = a4;
  *(_QWORD *)v112 = a5;
  v9 = a3;
  v116 = a6;
  v11 = Str1;
  v117 = a4;
  v113 = a3;
  AceCount = 0;
  v102 = 0;
  v96 = 0;
  v98 = 0LL;
  Sid = 0LL;
  v101 = 0LL;
  v100 = 0LL;
  Src = 0LL;
  Ace = 0LL;
  v118 = 0;
  v119 = 256;
  if ( !Str1 || !a3 || !a4 )
    return 87LL;
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( aNoAccessContro[v14] );
  if ( !wcsnicmp(Str1, L"NO_ACCESS_CONTROL", v14) )
  {
    *v9 = 0LL;
    do
      ++v13;
    while ( aNoAccessContro[v13] );
    *v8 = &v11[v13];
    return AceCount;
  }
  v107 = 2 - (a2 != 0);
  result = LocalGetSDDLDeliminator(v11);
  if ( (_DWORD)result )
    return result;
  v16 = *v8;
  if ( *v8 == v11 )
    return 87LL;
  if ( v16 )
  {
    v17 = v16 - 1;
  }
  else
  {
    do
      ++v13;
    while ( v11[v13] );
    v17 = &v11[v13];
  }
  *v8 = v17;
  AceCount = LocalGetAceCount(v11, v17, &v102);
  if ( AceCount )
    return AceCount;
  v18 = v102;
  if ( !v102 )
  {
    v19 = (_BYTE *)SddlpAlloc(8uLL);
    *v9 = v19;
    if ( v19 )
    {
      *v19 = 2;
      *((_BYTE *)*v9 + 1) = 0;
      *((_WORD *)*v9 + 1) = 8;
      *((_WORD *)*v9 + 2) = 0;
      *((_WORD *)*v9 + 3) = 0;
      return AceCount;
    }
    return 8;
  }
  v20 = 84 * v102 + 8;
  if ( v20 > 0xFFFF )
    v20 = 0xFFFF;
  LODWORD(Size) = v20;
  v21 = (_BYTE *)SddlpAlloc(v20);
  *v9 = v21;
  if ( !v21 )
    return 8;
  *v21 = 2;
  v23 = 8;
  v24 = *v9;
  v103 = 8;
  v106 = 0;
  v24[1] = 0;
  *((_WORD *)*v9 + 1) = v20;
  *((_WORD *)*v9 + 2) = 0;
  *((_WORD *)*v9 + 3) = 0;
  if ( !v18 )
  {
    v73 = Src;
    goto LABEL_224;
  }
  while ( 1 )
  {
    v94 = 0;
    v25 = 0;
    AccessMask = 0;
    v26 = 0;
    p_Guid = 0LL;
    v105 = 0LL;
    while ( *v11 == 32 )
      ++v11;
    if ( *v11 == 40 )
LABEL_30:
      ++v11;
    if ( *v11 == 32 )
      goto LABEL_30;
    v27 = LookupAceTypeInTable(v11);
    if ( !v27 )
    {
      v73 = Src;
      AceCount = 1804;
      goto LABEL_220;
    }
    LOBYTE(v18) = *(_BYTE *)(v27 + 12);
    v28 = *(unsigned int *)(v27 + 8);
    v99 = v18;
    v29 = &v11[v28];
    if ( *v29 != 32 && *v29 != 59 )
      goto LABEL_215;
    v30 = v29 + 1;
    if ( (unsigned __int8)(v18 - 5) <= 3u || (_BYTE)v18 == 11 )
      *(_BYTE *)*v9 = 4;
    while ( *v30 == 32 )
      ++v30;
    while ( v30 != *v8 )
    {
      if ( *v30 == 59 )
      {
LABEL_48:
        ++v30;
        break;
      }
      for ( ; *v30 == 32; ++v30 )
        ;
      v31 = LookupAceFlagsInTable(v30);
      if ( !v31 )
      {
        AceCount = 1004;
        goto LABEL_216;
      }
      v25 |= *(_BYTE *)(v31 + 12);
      v94 = v25;
      v30 += *(unsigned int *)(v31 + 8);
    }
    if ( *v30 == 32 )
      goto LABEL_48;
    while ( *v30 != 59 )
    {
      for ( ; *v30 == 32; ++v30 )
        ;
      v32 = LookupAccessMaskInTable(v30);
      if ( v32 )
      {
        v26 |= *(_DWORD *)(v32 + 12);
        v33 = *(unsigned int *)(v32 + 8);
        AccessMask = v26;
        v30 += v33;
      }
      else
      {
        v26 |= wcstoul(v30, &EndPtr, 0);
        AccessMask = v26;
        if ( EndPtr == v30 )
          goto LABEL_215;
        v30 = EndPtr;
      }
    }
    v34 = v30 + 1;
    for ( i = 0; i < 2; ++i )
    {
      while ( *v34 == 32 )
        ++v34;
      if ( *v34 != 59 )
      {
        if ( (unsigned __int8)(v18 - 5) > 3u && (_BYTE)v18 != 11 )
          goto LABEL_215;
        wcsncpy_s(Dst, 0x25uLL, v34, 0x24uLL);
        Dst[36] = 0;
        if ( i )
        {
          if ( !(unsigned int)SddlpUuidFromString(Dst, &v121) )
            goto LABEL_206;
          v105 = &v121;
        }
        else
        {
          if ( !(unsigned int)SddlpUuidFromString(Dst, &Guid) )
            goto LABEL_206;
          p_Guid = &Guid;
        }
        v34 += 36;
        if ( *v34 != 59 && *v34 != 32 )
        {
LABEL_206:
          AceCount = 1705;
          goto LABEL_216;
        }
      }
      ++v34;
    }
    while ( *v34 == 32 )
      ++v34;
    AceCount = LocalGetSidForString(
                 (_DWORD)v34,
                 (unsigned int)&Sid,
                 (unsigned int)&v110,
                 (unsigned int)&v96,
                 *(__int64 *)v112,
                 InheritedObjectTypeGuid,
                 pSid,
                 a8);
    if ( AceCount )
    {
      v98 = Sid;
      goto LABEL_216;
    }
    v36 = v110;
    if ( !v110 )
    {
      v98 = Sid;
LABEL_215:
      AceCount = 1336;
LABEL_216:
      v73 = Src;
LABEL_221:
      SddlpFree(*v9, v22);
      *v9 = 0LL;
LABEL_225:
      if ( v96 && v98 )
        SddlpFree(v98, v22);
      goto LABEL_228;
    }
    v37 = (char *)Sid;
    v98 = Sid;
    if ( !Sid )
      goto LABEL_215;
    for ( j = v110; *j == 32; ++j )
      ;
    if ( (unsigned __int8)v18 <= 0x12u )
    {
      v22 = 273920LL;
      if ( _bittest((const int *)&v22, v18) )
      {
        if ( *j != 59 )
          goto LABEL_215;
        do
          ++j;
        while ( *j == 32 );
        if ( *j == 40 )
        {
          if ( v101 )
          {
            SddlpFree(v101, 273920LL);
            v101 = 0LL;
          }
          LODWORD(v100) = 0;
          LODWORD(Sid) = 0;
          if ( Src )
          {
            SddlpFree(Src, v22);
            Src = 0LL;
          }
          v39 = 0;
          HIDWORD(v100) = 0;
          v111 = 0;
          if ( (_BYTE)v18 == 18 )
          {
            AceCount = LocalGetRelativeAttributeForString(
                         (_DWORD)j,
                         (unsigned int)&v110,
                         (unsigned int)&Src,
                         (unsigned int)&v111,
                         *(__int64 *)v112,
                         InheritedObjectTypeGuid,
                         pSid,
                         a8);
            if ( AceCount )
              goto LABEL_216;
            v39 = v111;
            v36 = v110;
            HIDWORD(v100) = v111;
            goto LABEL_95;
          }
          pSid = 0;
          InheritedObjectTypeGuid = v116;
          ObjectTypeGuid = v112[0];
          ConditionForString = LocalGetConditionForString(j, &v110, &v101, &Sid);
          v41 = (int)Sid;
          AceCount = ConditionForString;
          v36 = v110;
          LODWORD(v100) = (_DWORD)Sid;
        }
        else
        {
          v41 = v100;
          v36 = j;
          v39 = HIDWORD(v100);
          v110 = j;
        }
        if ( !v41 )
        {
LABEL_95:
          if ( !v39 )
            goto LABEL_215;
        }
        if ( AceCount )
          goto LABEL_216;
      }
    }
    if ( *v36 == 32 )
    {
      do
        ++v36;
      while ( *v36 == 32 );
      v110 = v36;
    }
    if ( *v36 != 41 )
      goto LABEL_215;
    v42 = (unsigned __int8)v18;
    v11 = v36 + 1;
    if ( (unsigned __int8)v18 > 0xDu )
    {
      if ( (unsigned __int8)v18 == 17 )
        goto LABEL_126;
      if ( (unsigned __int8)v18 != 18 )
      {
        if ( (unsigned int)(unsigned __int8)v18 - 19 > 1 )
          goto LABEL_215;
LABEL_126:
        v45 = 12;
        goto LABEL_127;
      }
      v44 = HIDWORD(v100);
      goto LABEL_122;
    }
    if ( (unsigned __int8)v18 == 13 )
      goto LABEL_120;
    if ( (unsigned __int8)v18 <= 3u )
      goto LABEL_126;
    if ( (unsigned __int8)v18 <= 4u )
      goto LABEL_215;
    if ( (unsigned __int8)v18 <= 8u )
    {
      v45 = 16;
      if ( p_Guid )
        v45 = 32;
      if ( v105 )
        v45 += 16;
      goto LABEL_127;
    }
    if ( (unsigned __int8)v18 > 0xAu )
      break;
LABEL_120:
    if ( (unsigned int)v100 > 0xFFFFFFFC )
      goto LABEL_207;
    v44 = (v100 + 3) & 0xFFFFFFFC;
LABEL_122:
    v45 = v44 + 12;
LABEL_114:
    if ( v45 < v44 )
    {
LABEL_115:
      AceCount = 534;
      goto LABEL_216;
    }
LABEL_127:
    v46 = RtlLengthSid(v37) - 4 + v45;
    if ( v46 < v45 )
      goto LABEL_115;
    v47 = v46 + v103;
    v103 = v47;
    if ( v47 < v46 )
      goto LABEL_115;
    v22 = (unsigned int)Size;
    if ( v47 > (unsigned int)Size )
    {
      v48 = v46 * (unsigned __int64)(v102 - v106);
      if ( v48 > 0xFFFFFFFF )
        goto LABEL_115;
      v49 = v48 + Size;
      if ( (int)v48 + (int)Size < (unsigned int)v48 )
        goto LABEL_115;
      v50 = (_WORD *)SddlpAlloc(v49);
      v52 = v50;
      if ( !v50 )
      {
        SddlpFree(*v9, v51);
        v89 = v96 == 1;
        *v9 = 0LL;
        if ( v89 )
        {
          SddlpFree(v98, v22);
          v98 = 0LL;
          v96 = 0;
        }
        AceCount = 8;
        goto LABEL_216;
      }
      memmove(v50, *v9, (unsigned int)Size);
      v52[1] = v49;
      SddlpFree(*v9, v53);
      *v9 = v52;
      v37 = (char *)v98;
      LODWORD(Size) = v49;
    }
    if ( v42 <= 10 )
    {
      if ( v42 < 9 )
      {
        if ( v42 )
        {
          v54 = v42 - 1;
          if ( v54 )
          {
            v55 = v54 - 1;
            if ( v55 )
            {
              v56 = v55 - 3;
              if ( v56 )
              {
                v57 = v56 - 1;
                if ( v57 )
                {
                  if ( v57 != 1 )
                    goto LABEL_211;
                  v58 = RtlAddAuditAccessObjectAce(
                          (PACL)*v9,
                          4u,
                          v94,
                          AccessMask,
                          p_Guid,
                          v105,
                          v37,
                          v94 & 0x40,
                          v94 & 0x80);
                }
                else
                {
                  v58 = RtlAddAccessDeniedObjectAce((PACL)*v9, 4u, v94, AccessMask, p_Guid, v105, v37);
                }
              }
              else
              {
                v58 = RtlAddAccessAllowedObjectAce((PACL)*v9, 4u, v94, AccessMask, p_Guid, v105, v37);
              }
            }
            else
            {
              v60 = v94 & 0x3F;
              if ( (v94 & 0x40) != 0 )
                v60 |= 0x40u;
              if ( (v94 & 0x80u) != 0 )
                v60 |= 0x80u;
              v58 = RtlpAddKnownAce((ACL *)*v9, 2u, v60, AccessMask, (unsigned __int8 *)v37, 2u);
            }
          }
          else
          {
            v58 = RtlpAddKnownAce((ACL *)*v9, 2u, v94, AccessMask, (unsigned __int8 *)v37, 1u);
          }
        }
        else
        {
          v58 = RtlpAddKnownAce((ACL *)*v9, 2u, v94, AccessMask, (unsigned __int8 *)v37, 0);
        }
        goto LABEL_143;
      }
LABEL_177:
      if ( v46 >= 0xFFFF )
        goto LABEL_212;
      v75 = (char *)SddlpAlloc(v46);
      if ( v75 )
      {
        v76 = AccessMask;
        *v75 = v99;
        v75[1] = v94;
        *((_WORD *)v75 + 1) = v46;
        *((_DWORD *)v75 + 1) = v76;
        v77 = RtlLengthSid(v37);
        RtlCopySid(v77, v75 + 8, v37);
        if ( (_DWORD)v100 )
        {
          v78 = v100;
          v79 = RtlLengthSid(v37);
          memmove(&v75[v79 + 8], v101, v78);
        }
        v59 = RtlAddAce((PACL)*v9, 2u, 0xFFFFFFFF, v75, v46);
        SddlpFree(v75, v80);
        goto LABEL_191;
      }
      goto LABEL_175;
    }
    v61 = v42 - 11;
    if ( v61 )
    {
      v62 = v61 - 2;
      if ( !v62 )
        goto LABEL_177;
      v63 = v62 - 4;
      if ( !v63 )
      {
        v58 = SddlAddMandatoryAce((PACL)*v9, ObjectTypeGuid, AccessMask);
LABEL_143:
        v59 = v58;
        goto LABEL_191;
      }
      v64 = v63 - 1;
      if ( v64 )
      {
        v65 = v64 - 1;
        if ( v65 )
        {
          if ( v65 != 1 )
          {
LABEL_211:
            v59 = -1073741811;
LABEL_213:
            v73 = Src;
LABEL_214:
            AceCount = RtlNtStatusToDosError(v59);
LABEL_220:
            if ( AceCount )
              goto LABEL_221;
LABEL_223:
            v23 = v103;
LABEL_224:
            *((_WORD *)*v9 + 1) = v23;
            goto LABEL_225;
          }
          v58 = SddlAddProcessTrustLabelAce((PACL)*v9, ObjectTypeGuid, AccessMask);
        }
        else
        {
          v58 = SddlAddScopedPolicyIDAce((PACL)*v9, v37);
        }
        goto LABEL_143;
      }
      if ( v46 >= 0xFFFF || (v94 & 0xE0) != 0 || AccessMask )
        goto LABEL_212;
      v66 = *(_DWORD *)(v37 + 2) - v118;
      if ( !v66 )
        v66 = *((unsigned __int16 *)v37 + 3) - v119;
      if ( v66 || v37[1] != 1 || *((_DWORD *)v37 + 2) )
      {
LABEL_212:
        v59 = -1073741705;
        goto LABEL_213;
      }
      v67 = SddlpAlloc(v46);
      v68 = v67;
      if ( v67 )
      {
        *(_BYTE *)v67 = v99;
        *(_DWORD *)(v67 + 4) = 0;
        *(_BYTE *)(v67 + 1) = v94;
        *(_WORD *)(v67 + 2) = v46;
        v69 = RtlLengthSid(v37);
        RtlCopySid(v69, (PSID)(v68 + 8), v37);
        if ( HIDWORD(v100) )
        {
          v70 = HIDWORD(v100);
          v71 = RtlLengthSid(v37);
          v72 = v70;
          v73 = Src;
          memmove((void *)(v71 + v68 + 8), Src, v72);
        }
        else
        {
          v73 = Src;
        }
        v59 = RtlAddAce((PACL)*v9, 2u, 0xFFFFFFFF, (PVOID)v68, v46);
        SddlpFree(v68, v74);
        goto LABEL_192;
      }
LABEL_175:
      v59 = -1073741801;
      goto LABEL_191;
    }
    if ( v46 >= 0xFFFF )
      goto LABEL_212;
    v59 = RtlAddAccessAllowedObjectAce((PACL)*v9, 4u, v94, AccessMask, p_Guid, v105, v37);
    if ( v59 < 0 )
      goto LABEL_213;
    v59 = RtlGetAce((PACL)*v9, *((unsigned __int16 *)*v9 + 2) - 1, &Ace);
    if ( v59 < 0 )
      goto LABEL_213;
    v81 = Ace;
    v82 = 9;
    v83 = v100;
    if ( *(_BYTE *)Ace == 5 )
      v82 = 11;
    *(_BYTE *)Ace = v82;
    v81[1] = v46;
    if ( !v83 )
      goto LABEL_190;
    v84 = v83;
    if ( v82 == 11 )
    {
      v85 = 8LL * (*((_DWORD *)v81 + 2) & 1);
      v86 = 4LL * (*((_DWORD *)v81 + 2) & 2);
      v87 = RtlLengthSid(v98);
      memmove((char *)&v81[v85 + 6 + v86] + v87, v101, (unsigned int)v84);
LABEL_190:
      v9 = v113;
LABEL_191:
      v73 = Src;
LABEL_192:
      v88 = v98;
      goto LABEL_193;
    }
    v88 = v98;
    v90 = RtlLengthSid(v98);
    memmove((char *)v81 + v90 + 8, v101, v84);
    v9 = v113;
    v73 = Src;
LABEL_193:
    if ( v59 < 0 )
      goto LABEL_214;
    if ( v96 == 1 )
      SddlpFree(v88, v22);
    v98 = 0LL;
    Sid = 0LL;
    if ( v101 )
    {
      SddlpFree(v101, v22);
      v101 = 0LL;
    }
    v18 = (unsigned int)Src;
    LODWORD(v100) = 0;
    if ( Src )
    {
      SddlpFree(Src, v22);
      Src = 0LL;
    }
    v89 = *v11 == 40;
    HIDWORD(v100) = 0;
    if ( v89 )
      ++v11;
    if ( ++v106 >= v102 )
    {
      v73 = Src;
      goto LABEL_223;
    }
    v8 = v117;
  }
  if ( (unsigned __int8)v18 != 11 )
    goto LABEL_215;
  v43 = 16;
  if ( p_Guid )
    v43 = 32;
  if ( v105 )
    v43 += 16;
  v22 = 4294967292LL;
  if ( (unsigned int)v100 <= 0xFFFFFFFC )
  {
    v44 = (v100 + 3) & 0xFFFFFFFC;
    v45 = v44 + v43;
    goto LABEL_114;
  }
LABEL_207:
  v73 = Src;
  AceCount = 534;
LABEL_228:
  if ( v101 )
    SddlpFree(v101, v22);
  if ( v73 )
    SddlpFree(v73, v22);
  return AceCount;
}
