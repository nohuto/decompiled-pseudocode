/*
 * XREFs of RtlpNewSecurityObject @ 0x18004B1E8
 * Callers:
 *     RtlNewSecurityObject @ 0x180047E70 (RtlNewSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x180048C90 (RtlNewSecurityObjectWithMultipleInheritance.c)
 *     RtlNewSecurityObjectEx @ 0x18004AE90 (RtlNewSecurityObjectEx.c)
 *     RtlpNewSecurityObject @ 0x18004B1E8 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlpComputeMergedAcl @ 0x1800477C8 (RtlpComputeMergedAcl.c)
 *     RtlSidDominates @ 0x18004A420 (RtlSidDominates.c)
 *     RtlpValidOwnerSubjectContext @ 0x18004A4F8 (RtlpValidOwnerSubjectContext.c)
 *     RtlpApplyAclToObject @ 0x18004A6F4 (RtlpApplyAclToObject.c)
 *     RtlAddMandatoryAce @ 0x18004AD20 (RtlAddMandatoryAce.c)
 *     RtlpNewSecurityObject @ 0x18004B1E8 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl @ 0x18004C62C (RtlpInheritAcl.c)
 *     RtlCreateAcl @ 0x18004CBD0 (RtlCreateAcl.c)
 *     RtlFindAceByType @ 0x18004DA80 (RtlFindAceByType.c)
 *     RtlpCombineAcls @ 0x18004DF20 (RtlpCombineAcls.c)
 *     RtlpGetDefaultsSubjectContext @ 0x18004E35C (RtlpGetDefaultsSubjectContext.c)
 *     RtlCreateSecurityDescriptor @ 0x18004E850 (RtlCreateSecurityDescriptor.c)
 *     RtlpOwnerAcesPresent @ 0x18004E988 (RtlpOwnerAcesPresent.c)
 *     RtlAddProcessTrustLabelAce @ 0x180080B70 (RtlAddProcessTrustLabelAce.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x180093900 (ZwAccessCheck.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtQueryInformationToken @ 0x180093B10 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x180093D20 (NtDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x180094B20 (ZwPrivilegeCheck.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlpCreateServerAcl @ 0x1800CFDE8 (RtlpCreateServerAcl.c)
 *     RtlpValidTrustSubjectContext @ 0x1800D0364 (RtlpValidTrustSubjectContext.c)
 */

NTSTATUS __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        char a6,
        int a7,
        HANDLE TokenHandle,
        GENERIC_MAPPING *a9,
        __int64 a10)
{
  void *v11; // rbx
  void *v12; // rdi
  NTSTATUS result; // eax
  ULONG v14; // eax
  unsigned __int8 v15; // r11
  char v16; // r11
  _BYTE *v17; // rcx
  __int64 v18; // r10
  unsigned __int16 v19; // r8
  __int16 v20; // dx
  __int64 v21; // rax
  _BYTE *v22; // rcx
  unsigned int v23; // r9d
  ULONG v24; // edi
  bool v25; // bl
  __int16 v26; // cx
  unsigned int v27; // eax
  int v28; // r10d
  int v29; // r8d
  int v30; // eax
  int v31; // r9d
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // r8d
  int v35; // eax
  int v36; // ebx
  __int16 v37; // cx
  int v38; // edx
  ACL *v39; // rdi
  unsigned __int16 v40; // dx
  int v41; // eax
  int v42; // r9d
  int v43; // r10d
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // eax
  ACL *v47; // rcx
  char *AceByType; // rbx
  __int64 v49; // r8
  int v50; // r9d
  char *v51; // rdx
  ACCESS_MASK v52; // edi
  ACL *v53; // rcx
  ACCESS_MASK *v54; // rax
  char v55; // cl
  PSID v56; // rdx
  ACL *v57; // rdi
  int v58; // r10d
  __int64 v59; // rcx
  int v60; // eax
  PVOID v61; // rdx
  __int16 v62; // di
  int v63; // r9d
  ACL *v64; // rbx
  __int16 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // eax
  int v69; // edx
  HANDLE v70; // r9
  GENERIC_MAPPING *v71; // rsi
  char *v72; // rdx
  bool v73; // al
  ULONG v74; // esi
  HANDLE v75; // rsi
  char v76; // bl
  unsigned __int8 *v77; // rsi
  int v78; // r9d
  ACCESS_MASK v79; // r9d
  unsigned __int32 v80; // r8d
  __int16 v81; // bx
  unsigned int v82; // esi
  unsigned int v83; // ecx
  _DWORD *Heap; // rax
  _DWORD *v85; // rdx
  char *v86; // rbx
  unsigned __int16 *v87; // rdi
  __int64 v88; // rcx
  __int64 v89; // rdi
  __int64 v90; // rsi
  __int64 v91; // rdi
  int v92; // eax
  char *v93; // rbx
  __int64 v94; // rdi
  PVOID v95; // rsi
  void *v96; // rcx
  void *v97; // rcx
  char *v98; // rax
  PSID v99; // rax
  int v100; // eax
  PACL v101; // rdi
  __int64 AclSize; // rcx
  int v103; // edx
  __int16 v104; // cx
  HANDLE v105; // rdx
  void *v106; // rcx
  _BYTE *v107; // rax
  ACL *v108; // rcx
  _DWORD *v109; // rax
  ACCESS_MASK v110; // edi
  _BYTE *v111; // rax
  bool v112; // zf
  void *v113; // rdi
  int ReturnLength; // [rsp+20h] [rbp-F0h]
  int ReturnLengtha; // [rsp+20h] [rbp-F0h]
  int ReturnLengthb; // [rsp+20h] [rbp-F0h]
  int ReturnLengthc; // [rsp+20h] [rbp-F0h]
  int AccessMask; // [rsp+28h] [rbp-E8h]
  int ServerAcl; // [rsp+90h] [rbp-80h] BYREF
  __int16 v120; // [rsp+94h] [rbp-7Ch] BYREF
  char v121; // [rsp+96h] [rbp-7Ah]
  __int16 v122; // [rsp+97h] [rbp-79h]
  ULONG Index; // [rsp+9Ch] [rbp-74h] BYREF
  BOOLEAN Result; // [rsp+A0h] [rbp-70h] BYREF
  char v125; // [rsp+A1h] [rbp-6Fh]
  int v126; // [rsp+A4h] [rbp-6Ch]
  __int64 v127; // [rsp+A8h] [rbp-68h] BYREF
  PACL Acl; // [rsp+B0h] [rbp-60h]
  char v129; // [rsp+B8h] [rbp-58h] BYREF
  char v130; // [rsp+B9h] [rbp-57h]
  char v131; // [rsp+BAh] [rbp-56h]
  char v132; // [rsp+BBh] [rbp-55h]
  char v133; // [rsp+BCh] [rbp-54h]
  BOOLEAN Dominates[3]; // [rsp+BDh] [rbp-53h] BYREF
  unsigned int v135; // [rsp+C0h] [rbp-50h] BYREF
  NTSTATUS AccessStatus[3]; // [rsp+C4h] [rbp-4Ch] BYREF
  char v137; // [rsp+D0h] [rbp-40h] BYREF
  int v138; // [rsp+D4h] [rbp-3Ch] BYREF
  __int64 v139; // [rsp+D8h] [rbp-38h] BYREF
  HANDLE ClientToken; // [rsp+E0h] [rbp-30h]
  void *v141; // [rsp+E8h] [rbp-28h]
  void *Src; // [rsp+F0h] [rbp-20h] BYREF
  unsigned int v143; // [rsp+F8h] [rbp-18h]
  void *v144; // [rsp+100h] [rbp-10h]
  int v145[2]; // [rsp+108h] [rbp-8h]
  PVOID v146; // [rsp+110h] [rbp+0h] BYREF
  ULONG v147; // [rsp+118h] [rbp+8h] BYREF
  __int64 v148; // [rsp+120h] [rbp+10h]
  __int64 v149; // [rsp+128h] [rbp+18h]
  PGENERIC_MAPPING GenericMapping; // [rsp+130h] [rbp+20h]
  __int64 v151; // [rsp+138h] [rbp+28h]
  PSID Sid2; // [rsp+140h] [rbp+30h]
  int v153; // [rsp+148h] [rbp+38h] BYREF
  int v154; // [rsp+14Ch] [rbp+3Ch]
  ACCESS_MASK GrantedAccess; // [rsp+150h] [rbp+40h] BYREF
  _DWORD *v156; // [rsp+158h] [rbp+48h]
  NTSTATUS v157; // [rsp+160h] [rbp+50h] BYREF
  ULONG Size[3]; // [rsp+164h] [rbp+54h] BYREF
  PVOID HeapHandle; // [rsp+170h] [rbp+60h]
  PVOID v160; // [rsp+178h] [rbp+68h] BYREF
  PVOID v161; // [rsp+180h] [rbp+70h] BYREF
  PVOID v162; // [rsp+188h] [rbp+78h] BYREF
  PSID ProcessTrustLabelSid; // [rsp+190h] [rbp+80h]
  ACCESS_MASK *v164; // [rsp+198h] [rbp+88h]
  PSID Sid1; // [rsp+1A0h] [rbp+90h]
  PVOID v166; // [rsp+1A8h] [rbp+98h] BYREF
  __int64 v167; // [rsp+1B0h] [rbp+A0h]
  PVOID v168; // [rsp+1B8h] [rbp+A8h] BYREF
  PVOID v169; // [rsp+1C0h] [rbp+B0h] BYREF
  PVOID v170; // [rsp+1C8h] [rbp+B8h] BYREF
  PVOID v171; // [rsp+1D0h] [rbp+C0h] BYREF
  PVOID BaseAddress; // [rsp+1D8h] [rbp+C8h]
  HANDLE NewTokenHandle; // [rsp+1E0h] [rbp+D0h] BYREF
  PVOID v174; // [rsp+1E8h] [rbp+D8h]
  PVOID v175; // [rsp+1F0h] [rbp+E0h] BYREF
  ACL *v176; // [rsp+1F8h] [rbp+E8h] BYREF
  __int64 v177; // [rsp+200h] [rbp+F0h]
  ACL *v178; // [rsp+208h] [rbp+F8h]
  _QWORD *v179; // [rsp+210h] [rbp+100h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+218h] [rbp+108h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+248h] [rbp+138h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+270h] [rbp+160h] BYREF
  _DWORD v183[2]; // [rsp+288h] [rbp+178h] BYREF
  __int16 v184; // [rsp+290h] [rbp+180h]
  char TokenInformation[24]; // [rsp+298h] [rbp+188h] BYREF
  unsigned int v186; // [rsp+2B0h] [rbp+1A0h]
  int v187; // [rsp+2B4h] [rbp+1A4h]
  ACL v188; // [rsp+2D0h] [rbp+1C0h] BYREF
  ACL v189; // [rsp+330h] [rbp+220h] BYREF

  GenericMapping = a9;
  v167 = a10;
  v179 = a3;
  v161 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  *(_QWORD *)v145 = a1;
  v178 = &v189;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  *(_QWORD *)&Size[1] = a4;
  ClientToken = TokenHandle;
  v177 = 0LL;
  *(_QWORD *)&AccessStatus[1] = 0LL;
  v146 = 0LL;
  v131 = 0;
  v132 = 0;
  v135 = 0;
  Src = 0LL;
  v162 = 0LL;
  v122 = 0;
  v125 = 0;
  v120 = 0;
  v137 = 0;
  LOBYTE(v139) = 0;
  LOBYTE(v127) = 0;
  LOBYTE(v154) = 0;
  v129 = 0;
  Sid1 = 0LL;
  ProcessTrustLabelSid = 0LL;
  v149 = 0LL;
  v151 = 0LL;
  v148 = 0LL;
  v156 = 0LL;
  v153 = 0;
  v164 = 0LL;
  Sid2 = 0LL;
  v160 = 0LL;
  v176 = 0LL;
  Dominates[0] = 1;
  v166 = 0LL;
  v130 = 0;
  LOBYTE(v143) = 1;
  BaseAddress = 0LL;
  v174 = 0LL;
  v168 = 0LL;
  v175 = 0LL;
  v170 = 0LL;
  v169 = 0LL;
  v171 = 0LL;
  if ( TokenHandle )
  {
    result = NtQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &v147);
    if ( result < 0 )
      return result;
    v143 = v186;
    if ( v186 == 2 && v187 < 1 )
      return -1073741659;
  }
  if ( a2 )
  {
    v133 = 1;
  }
  else
  {
    v133 = 0;
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    a2 = SecurityDescriptor;
  }
  v14 = *((unsigned __int16 *)a2 + 1);
  v15 = v14;
  LOBYTE(v14) = (v14 & 0x40) != 0;
  v16 = v15 >> 7;
  v147 = v14;
  v121 = v16;
  if ( ClientToken || v16 )
  {
    result = RtlpGetDefaultsSubjectContext(
               ClientToken,
               (ULONG)&v168,
               (__int64)&v169,
               (__int64)&v175,
               (__int64)&v170,
               (ULONG)&v171);
    LODWORD(v17) = 0;
    if ( result < 0 )
      return result;
    v11 = *(void **)BaseAddress;
    v12 = *(void **)v174;
    v148 = *(_QWORD *)v168;
    Sid1 = *(PSID *)v175;
    ProcessTrustLabelSid = *(PSID *)v170;
    if ( v169 )
      v149 = *(_QWORD *)v169;
    else
      v149 = 0LL;
    v16 = v121;
    if ( v171 )
    {
      v18 = *(_QWORD *)v171;
      v151 = *(_QWORD *)v171;
    }
    else
    {
      v18 = 0LL;
      v151 = 0LL;
    }
  }
  else
  {
    v18 = 0LL;
    LODWORD(v17) = 0;
  }
  v19 = *((_WORD *)a2 + 1);
  v20 = v19 & 0x8000;
  if ( (v19 & 0x8000u) == 0 )
  {
    v17 = (_BYTE *)*((_QWORD *)a2 + 1);
  }
  else
  {
    if ( !*((_DWORD *)a2 + 1) )
      goto LABEL_168;
    v17 = &a2[*((unsigned int *)a2 + 1)];
  }
  v141 = v17;
  if ( v17 )
  {
    v125 = 1;
LABEL_18:
    v21 = *(_QWORD *)v145;
    goto LABEL_19;
  }
LABEL_168:
  if ( (a7 & 0x20) == 0 )
  {
    v97 = v11;
    if ( v16 )
      v97 = (void *)v149;
    v141 = v97;
    if ( v97 )
      goto LABEL_18;
    v36 = -1073741700;
LABEL_281:
    ServerAcl = v36;
    goto LABEL_282;
  }
  v21 = *(_QWORD *)v145;
  if ( !*(_QWORD *)v145 )
    goto LABEL_280;
  if ( *(__int16 *)(*(_QWORD *)v145 + 2LL) < 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v145 + 4LL) != (_DWORD)v17 )
    {
      v106 = (void *)(*(_QWORD *)v145 + *(unsigned int *)(*(_QWORD *)v145 + 4LL));
      goto LABEL_275;
    }
LABEL_280:
    v36 = -1073741734;
    goto LABEL_281;
  }
  v106 = *(void **)(*(_QWORD *)v145 + 8LL);
LABEL_275:
  v141 = v106;
  v125 = 1;
  if ( !v106 )
    goto LABEL_280;
LABEL_19:
  if ( v20 )
  {
    if ( !*((_DWORD *)a2 + 2) )
      goto LABEL_163;
    v22 = &a2[*((unsigned int *)a2 + 2)];
  }
  else
  {
    v22 = (_BYTE *)*((_QWORD *)a2 + 2);
  }
  v144 = v22;
  if ( !v22 )
  {
LABEL_163:
    if ( (a7 & 0x40) != 0 )
    {
      if ( !v21 )
        goto LABEL_284;
      if ( *(__int16 *)(v21 + 2) >= 0 )
      {
        v96 = *(void **)(v21 + 16);
      }
      else
      {
        if ( !*(_DWORD *)(v21 + 8) )
          goto LABEL_284;
        v96 = (void *)(v21 + *(unsigned int *)(v21 + 8));
      }
    }
    else
    {
      v96 = v12;
      if ( v16 )
        v96 = (void *)v18;
    }
    v144 = v96;
    if ( v96 )
      goto LABEL_23;
LABEL_284:
    v36 = -1073741733;
    ServerAcl = -1073741733;
    goto LABEL_282;
  }
LABEL_23:
  v23 = v19;
  AccessStatus[0] = a7 & 4;
  v24 = a7 & 2;
  Index = v24;
  v25 = v24 != 0;
  v26 = v19 & 0x10;
  v27 = (unsigned __int8)v19;
  v28 = v26 != 0 ? 4 : 0;
  v29 = (v19 >> 1) & 0x1000;
  v30 = (v27 >> 2) & 8;
  v31 = (v23 >> 1) & 0x400;
  if ( v26 == (_WORD)v177 )
    goto LABEL_24;
  if ( !v20 )
  {
    v32 = *((_QWORD *)a2 + 3);
    goto LABEL_25;
  }
  if ( !*((_DWORD *)a2 + 3) )
LABEL_24:
    LODWORD(v32) = 0;
  else
    LODWORD(v32) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
LABEL_25:
  if ( !*(_QWORD *)v145 || (*(_BYTE *)(*(_QWORD *)v145 + 2LL) & 0x10) == 0 )
  {
LABEL_160:
    LODWORD(v33) = 0;
    goto LABEL_30;
  }
  v24 = Index;
  if ( *(__int16 *)(*(_QWORD *)v145 + 2LL) < 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v145 + 12LL) )
    {
      LODWORD(v33) = v145[0] + *(_DWORD *)(*(_QWORD *)v145 + 12LL);
      goto LABEL_30;
    }
    goto LABEL_160;
  }
  v33 = *(_QWORD *)(*(_QWORD *)v145 + 24LL);
LABEL_30:
  v34 = v31 | v29;
  LOBYTE(v31) = a6;
  LOBYTE(ReturnLength) = v25;
  v35 = RtlpInheritAcl(
          v33,
          v32,
          v28 | v30 | (unsigned int)v34,
          v31,
          ReturnLength,
          (a7 & 4) != 0,
          (int)v141,
          (__int64)v144,
          v149,
          v151,
          GenericMapping,
          2,
          *(__int64 *)&Size[1],
          a5,
          (__int64)&AccessStatus[1],
          (__int64)&v120,
          &v138);
  ServerAcl = v35;
  v36 = v35;
  if ( v35 < 0 )
  {
    if ( v35 == -2147483637 )
    {
      v37 = *((_WORD *)a2 + 1);
      v38 = 0x8000;
      if ( v24 )
        v38 = 34816;
      v126 = v38;
      if ( (v37 & 0x30) != 0x30 )
        goto LABEL_35;
      if ( (v37 & 0x10) != 0 )
      {
        if ( (v37 & 0x8000) == 0 )
        {
          v39 = (ACL *)*((_QWORD *)a2 + 3);
          goto LABEL_293;
        }
        if ( *((_DWORD *)a2 + 3) )
        {
          v39 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
LABEL_293:
          *(_QWORD *)&AccessStatus[1] = v39;
          Acl = v39;
          goto LABEL_294;
        }
      }
      v39 = 0LL;
      Acl = 0LL;
      *(_QWORD *)&AccessStatus[1] = 0LL;
LABEL_294:
      LOBYTE(v120) = 1;
      v126 = v37 & 0x2000 | 0x10 | v38;
      goto LABEL_36;
    }
LABEL_282:
    v39 = *(ACL **)&AccessStatus[1];
    goto LABEL_144;
  }
  HIBYTE(v122) = 1;
  v126 = (4 * (v138 & 4)) | (4 * (v138 & 8)) | (2 * (v138 & 0x400)) | (2 * (v138 & 0x1000)) | 0x8010;
LABEL_35:
  v39 = *(ACL **)&AccessStatus[1];
  Acl = *(PACL *)&AccessStatus[1];
LABEL_36:
  v40 = *((_WORD *)a2 + 1);
  v41 = ((unsigned __int8)v40 >> 2) & 8;
  v42 = (v40 >> 1) & 0x400;
  v43 = (v40 & 0x10) != 0 ? 4 : 0;
  if ( (v40 & 0x10) == (_WORD)v177 )
    goto LABEL_37;
  if ( (v40 & 0x8000u) == 0 )
  {
    v44 = *((_QWORD *)a2 + 3);
    goto LABEL_38;
  }
  if ( !*((_DWORD *)a2 + 3) )
LABEL_37:
    LODWORD(v44) = 0;
  else
    LODWORD(v44) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
LABEL_38:
  if ( !*(_QWORD *)v145 || (*(_BYTE *)(*(_QWORD *)v145 + 2LL) & 0x10) == 0 )
  {
LABEL_161:
    LODWORD(v45) = 0;
    goto LABEL_43;
  }
  v39 = Acl;
  if ( *(__int16 *)(*(_QWORD *)v145 + 2LL) < 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v145 + 12LL) )
    {
      LODWORD(v45) = v145[0] + *(_DWORD *)(*(_QWORD *)v145 + 12LL);
      goto LABEL_43;
    }
    goto LABEL_161;
  }
  v45 = *(_QWORD *)(*(_QWORD *)v145 + 24LL);
LABEL_43:
  LOBYTE(v42) = a6;
  LOBYTE(ReturnLengtha) = Index != 0;
  v46 = RtlpInheritAcl(
          v45,
          v44,
          v43 & 0xFFFFEFFF | v41 & 0xFFFFEFFF | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x400,
          v42,
          ReturnLengtha,
          AccessStatus[0] != 0,
          (int)v141,
          (__int64)v144,
          v149,
          v151,
          GenericMapping,
          2,
          *(__int64 *)&Size[1],
          a5,
          (__int64)&v146,
          (__int64)&v137,
          &v153);
  ServerAcl = v46;
  v36 = v46;
  if ( v46 >= 0 )
  {
    v131 = 1;
  }
  else
  {
    if ( v46 != -2147483637 )
      goto LABEL_144;
    if ( (a2[2] & 0x30) != 0x30 )
      goto LABEL_46;
    if ( (a2[2] & 0x10) != 0 )
    {
      if ( (*((_WORD *)a2 + 1) & 0x8000) == 0 )
      {
        v107 = (_BYTE *)*((_QWORD *)a2 + 3);
        goto LABEL_302;
      }
      if ( *((_DWORD *)a2 + 3) )
      {
        v107 = &a2[*((unsigned int *)a2 + 3)];
LABEL_302:
        v146 = v107;
        goto LABEL_46;
      }
    }
    v146 = 0LL;
  }
LABEL_46:
  Index = 0;
  do
  {
    if ( (a2[2] & 0x10) == 0 )
    {
LABEL_48:
      v47 = 0LL;
      goto LABEL_49;
    }
    if ( (*((_WORD *)a2 + 1) & 0x8000) != 0 )
    {
      if ( !*((_DWORD *)a2 + 3) )
        goto LABEL_48;
      v47 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
    }
    else
    {
      v47 = (ACL *)*((_QWORD *)a2 + 3);
    }
LABEL_49:
    AceByType = (char *)RtlFindAceByType(v47, 0x14u, &Index);
    v51 = AceByType + 8;
    if ( !AceByType )
      v51 = 0LL;
    if ( v51 && !(unsigned __int8)RtlpValidTrustSubjectContext(ProcessTrustLabelSid, v51, v49, &ServerAcl) )
    {
      v36 = -1073741790;
      goto LABEL_306;
    }
    ++Index;
  }
  while ( AceByType );
  if ( (a7 & 0x800) == 0 )
  {
LABEL_54:
    v166 = v146;
    goto LABEL_55;
  }
  Index = 0;
  while ( 2 )
  {
    if ( (a2[2] & 0x10) == 0 )
      goto LABEL_312;
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v108 = (ACL *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        v108 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
        goto LABEL_314;
      }
LABEL_312:
      v108 = 0LL;
    }
LABEL_314:
    v109 = RtlFindAceByType(v108, 0x14u, &Index);
    ++Index;
    if ( v109 )
    {
      if ( (*((_BYTE *)v109 + 1) & 8) == 0 )
      {
        v110 = v109[1];
        Index = *((unsigned __int8 *)v109 + 1);
        ProcessTrustLabelSid = v109 + 2;
        if ( !v167 || (v110 & *(_DWORD *)(v167 + 4)) != v110 || v109 == (_DWORD *)-8LL )
        {
          v36 = -1073741811;
          goto LABEL_142;
        }
        goto LABEL_324;
      }
      continue;
    }
    break;
  }
  if ( !ProcessTrustLabelSid )
    goto LABEL_54;
  if ( !v167 )
  {
    v36 = -1073741811;
    goto LABEL_306;
  }
  v110 = *(_DWORD *)(v167 + 4);
  Index = 0;
LABEL_324:
  ServerAcl = RtlCreateAcl(&v188, 0x58u, 2u);
  v36 = ServerAcl;
  if ( ServerAcl < 0 )
    goto LABEL_143;
  ServerAcl = RtlAddProcessTrustLabelAce(&v188, 2u, Index, ProcessTrustLabelSid, 0x14u, v110);
  v36 = ServerAcl;
  if ( ServerAcl < 0 )
    goto LABEL_143;
  ServerAcl = RtlpComputeMergedAcl(
                (int)v146,
                ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 4 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x400 | ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 8u,
                (int)&v188,
                4,
                (__int64)v141,
                (__int64)v144,
                (__int64)GenericMapping,
                2,
                &v166,
                (__int64)&v138);
  v36 = ServerAcl;
  if ( ServerAcl < 0 )
    goto LABEL_143;
  v130 = 1;
LABEL_55:
  v52 = (a7 & 0x100) != 0;
  if ( (a7 & 0x200) != 0 )
    v52 |= 2u;
  if ( (a7 & 0x400) != 0 )
    v52 |= 4u;
  if ( v52 )
  {
    v54 = v164;
    v55 = (char)v164;
    v56 = v164;
  }
  else
  {
    if ( (a2[2] & 0x10) == 0 )
      goto LABEL_61;
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v53 = (ACL *)*((_QWORD *)a2 + 3);
    }
    else if ( *((_DWORD *)a2 + 3) )
    {
      v53 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
    }
    else
    {
LABEL_61:
      v53 = 0LL;
    }
    v54 = (ACCESS_MASK *)RtlFindAceByType(v53, 0x11u, 0LL);
    v164 = v54;
    if ( v54 )
    {
      v55 = *((_BYTE *)v54 + 1);
      v56 = v54 + 2;
      v52 = v54[1];
      Sid2 = v54 + 2;
      HIBYTE(v120) = v55;
      if ( v55 == 8 || (v55 & 0x10) != 0 )
      {
        v54 = 0LL;
        v56 = 0LL;
        v55 = 0;
        v164 = 0LL;
        Sid2 = 0LL;
        v52 = 0;
        HIBYTE(v120) = 0;
      }
    }
    else
    {
      v55 = 0;
      v56 = 0LL;
    }
  }
  if ( (v55 & 8) != 0 && *((_DWORD *)Sid1 + 2) < 0x2000u )
  {
    v36 = -1073740730;
    goto LABEL_142;
  }
  if ( v52 )
  {
LABEL_219:
    if ( v54 )
      goto LABEL_68;
    if ( ClientToken )
    {
      v56 = Sid1;
      Sid2 = Sid1;
      HIBYTE(v120) = 0;
      goto LABEL_68;
    }
    v36 = -1073741700;
LABEL_142:
    ServerAcl = v36;
    goto LABEL_143;
  }
  if ( Sid1 && *((_DWORD *)Sid1 + 2) < 0x2000u )
  {
    v52 = 1;
    goto LABEL_219;
  }
LABEL_68:
  if ( !v56 )
  {
    v57 = 0LL;
    v178 = 0LL;
    goto LABEL_70;
  }
  ServerAcl = RtlCreateAcl(&v189, 0x80u, 2u);
  v36 = ServerAcl;
  if ( ServerAcl < 0 )
    goto LABEL_143;
  ServerAcl = RtlAddMandatoryAce(&v189, 2u, HIBYTE(v120), Sid2, 0x11u, v52);
  v36 = ServerAcl;
  if ( ServerAcl < 0 )
    goto LABEL_143;
  v57 = &v189;
LABEL_70:
  if ( (a7 & 0x700) != 0 )
  {
    v58 = 4;
  }
  else if ( !v164 && v57 )
  {
    v58 = 0;
  }
  else
  {
    v58 = ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 4 | ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 8 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x1400;
  }
  if ( !*(_QWORD *)v145 || (*(_BYTE *)(*(_QWORD *)v145 + 2LL) & 0x10) == 0 )
    goto LABEL_162;
  if ( *(__int16 *)(*(_QWORD *)v145 + 2LL) >= 0 )
  {
    v59 = *(_QWORD *)(*(_QWORD *)v145 + 24LL);
  }
  else
  {
    if ( *(_DWORD *)(*(_QWORD *)v145 + 12LL) )
    {
      LODWORD(v59) = v145[0] + *(_DWORD *)(*(_QWORD *)v145 + 12LL);
      goto LABEL_79;
    }
LABEL_162:
    LODWORD(v59) = 0;
  }
LABEL_79:
  LOBYTE(v50) = a6;
  LOBYTE(ReturnLengthb) = 1;
  v60 = RtlpInheritAcl(
          v59,
          (int)v57,
          v58,
          v50,
          ReturnLengthb,
          0,
          (int)v141,
          (__int64)v144,
          v149,
          v151,
          GenericMapping,
          3,
          *(__int64 *)&Size[1],
          a5,
          (__int64)&v160,
          (__int64)&v139,
          &v138);
  ServerAcl = v60;
  v36 = v60;
  if ( v60 != -2147483637 )
  {
    if ( v60 >= 0 )
    {
      v61 = v160;
      v62 = v138;
      goto LABEL_81;
    }
    goto LABEL_143;
  }
  v61 = v57;
  v62 = 0;
  v138 = 0;
LABEL_81:
  v160 = v61;
  v36 = RtlpCombineAcls(
          (_DWORD)Acl,
          (_DWORD)v61,
          (_DWORD)v146,
          (_DWORD)v146,
          (__int64)v166,
          (__int64)&v176,
          (__int64)&v135);
  ServerAcl = v36;
  v153 = ((v126 & 0x2000) << 17) | v135;
  if ( v160 && v160 != v178 )
    RtlFreeHeap(HeapHandle, 0, v160);
  if ( v36 < 0 )
    goto LABEL_143;
  v64 = v176;
  if ( v176 )
  {
    if ( HIBYTE(v122) && Acl )
      RtlFreeHeap(HeapHandle, 0, Acl);
    Acl = v64;
    *(_QWORD *)&AccessStatus[1] = v64;
    v132 = 1;
    v126 |= (4 * (v62 & 4)) | (4 * (v62 & 8)) | (2 * (v62 & 0x400)) | (2 * (v62 & 0x1000)) | 0x10;
  }
  v39 = Acl;
  Index = a7 & 8;
  if ( (a7 & 8) != 0
    || ((v98 = (char *)RtlFindAceByType(Acl, 0x11u, 0LL)) != 0LL ? (v99 = v98 + 8) : (v99 = Sid2), !v99) )
  {
LABEL_85:
    v65 = *((_WORD *)a2 + 1);
    v135 = a7 & 1;
    if ( (v65 & 4) == 0 )
      goto LABEL_183;
    if ( (v65 & 0x8000) == 0 )
    {
      v66 = *((_QWORD *)a2 + 4);
      goto LABEL_89;
    }
    if ( *((_DWORD *)a2 + 4) )
      LODWORD(v66) = (_DWORD)a2 + *((_DWORD *)a2 + 4);
    else
LABEL_183:
      LODWORD(v66) = 0;
LABEL_89:
    if ( *(_QWORD *)v145 && (*(_BYTE *)(*(_QWORD *)v145 + 2LL) & 4) != 0 )
    {
      if ( (*(_WORD *)(*(_QWORD *)v145 + 2LL) & 0x8000) == 0 )
      {
        v67 = *(_QWORD *)(*(_QWORD *)v145 + 32LL);
LABEL_94:
        LOBYTE(ReturnLengthc) = (a7 & 1) != 0;
        LOBYTE(v63) = a6;
        v68 = RtlpInheritAcl(
                v67,
                v66,
                v65 & 0x140C,
                v63,
                ReturnLengthc,
                AccessStatus[0] != 0,
                (int)v141,
                (__int64)v144,
                v149,
                v151,
                GenericMapping,
                1,
                *(__int64 *)&Size[1],
                a5,
                (__int64)&Src,
                (__int64)&v127,
                &v138);
        ServerAcl = v68;
        v36 = v68;
        if ( v68 >= 0 )
        {
          LOBYTE(v122) = 1;
          v126 |= v138 & 0x1408 | 4;
LABEL_96:
          v69 = 1;
          goto LABEL_97;
        }
        if ( v68 != -2147483637 )
          goto LABEL_143;
        v103 = v126;
        if ( v135 )
        {
          v103 = v126 | 0x400;
          v126 |= 0x400u;
        }
        v104 = *((_WORD *)a2 + 1);
        if ( (v104 & 0xC) != 0xC )
        {
          if ( v148 )
          {
            Src = (void *)v148;
            v126 = v103 | 4;
          }
          goto LABEL_96;
        }
        if ( (v104 & 4) != 0 )
        {
          if ( v104 >= 0 )
          {
            v111 = (_BYTE *)*((_QWORD *)a2 + 4);
            goto LABEL_342;
          }
          if ( *((_DWORD *)a2 + 4) )
          {
            v111 = &a2[*((unsigned int *)a2 + 4)];
LABEL_342:
            Src = v111;
            goto LABEL_343;
          }
        }
        Src = 0LL;
LABEL_343:
        v126 = v104 & 0x1000 | 4 | v103;
        v69 = 1;
        LOBYTE(v127) = 1;
LABEL_97:
        v70 = ClientToken;
        if ( (a7 & 0x1000) != 0 || !v133 || !ClientToken || !*(_QWORD *)v145 )
        {
LABEL_108:
          if ( !Src && v135 )
            v126 |= 0x1000u;
          v73 = !v153 || (v153 & 0xB0) != v153;
          v74 = Index;
          if ( (_BYTE)v120 && !Index && v73 )
          {
            if ( !v70 )
              goto LABEL_334;
            RequiredPrivileges.PrivilegeCount = 1;
            RequiredPrivileges.Control = 1;
            v148 = 8LL;
            RequiredPrivileges.Privilege[0].Luid = (_LUID)8LL;
            RequiredPrivileges.Privilege[0].Attributes = 0;
            ServerAcl = ZwPrivilegeCheck(v70, &RequiredPrivileges, &Result);
            v36 = ServerAcl;
            if ( ServerAcl < 0 )
              goto LABEL_143;
            if ( !Result )
              goto LABEL_353;
          }
          if ( !(_BYTE)v154 )
          {
            v75 = ClientToken;
            goto LABEL_114;
          }
          v112 = v74 == 0;
          v75 = ClientToken;
          if ( !v112 )
          {
LABEL_114:
            if ( v125 && (a7 & 0x10) == 0 )
            {
              if ( !v75 )
                goto LABEL_334;
              v76 = v121;
              v77 = (unsigned __int8 *)v141;
              if ( !RtlpValidOwnerSubjectContext(ClientToken, v141, v121, &v157) )
              {
                v36 = v157;
LABEL_306:
                ServerAcl = v36;
                goto LABEL_144;
              }
            }
            else
            {
              v76 = v121;
              v77 = (unsigned __int8 *)v141;
            }
            if ( (_BYTE)v127 && v76 )
            {
              v113 = Src;
              LOBYTE(v69) = v147;
              ServerAcl = RtlpCreateServerAcl((_DWORD)Src, v69, v149, (unsigned int)&v162, (__int64)&v129);
              v36 = ServerAcl;
              if ( ServerAcl < 0 )
                goto LABEL_143;
              if ( (_BYTE)v122 && v113 )
                RtlFreeHeap(HeapHandle, 0, v113);
              Src = v162;
              v162 = 0LL;
            }
            v78 = 4 * v77[1] + 11;
            Size[0] = 4 * v77[1] + 8;
            v79 = v78 & 0xFFFFFFFC;
            GrantedAccess = v79;
            if ( v144 )
            {
              AccessStatus[0] = 4 * *((unsigned __int8 *)v144 + 1) + 8;
              v80 = (AccessStatus[0] + 3) & 0xFFFFFFFC;
            }
            else
            {
              AccessStatus[0] = 0;
              v80 = 0;
            }
            v81 = v126;
            v135 = v80;
            v147 = v126 & 0x10;
            if ( (v126 & 0x10) != 0 && Acl )
              v82 = (Acl->AclSize + 3) & 0xFFFFFFFC;
            else
              v82 = 0;
            v157 = v126 & 4;
            if ( (v126 & 4) != 0 && Src )
              v83 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
            else
              v83 = 0;
            v143 = v83;
            Heap = RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v79 + v82 + v83 + 20 + v80);
            v156 = Heap;
            v85 = Heap;
            if ( Heap )
            {
              *(_QWORD *)Heap = 0LL;
              *((_QWORD *)Heap + 1) = 0LL;
              Heap[4] = 0;
              *((_WORD *)Heap + 1) |= v81;
              v86 = (char *)(Heap + 5);
              *(_BYTE *)Heap = 1;
              if ( v147 )
              {
                v101 = Acl;
                if ( Acl )
                {
                  memmove(v86, Acl, Acl->AclSize);
                  if ( !HIBYTE(v122) )
                    RtlpApplyAclToObject((__int64)v86, GenericMapping);
                  v85 = v156;
                  v156[3] = (_DWORD)v86 - (_DWORD)v156;
                  AclSize = v101->AclSize;
                  if ( v82 > (unsigned int)AclSize )
                  {
                    memset(&v86[AclSize], 0, v82 - (unsigned int)AclSize);
                    v85 = v156;
                  }
                  v86 += v82;
                }
                else
                {
                  Heap[3] = 0;
                }
              }
              if ( v157 )
              {
                v87 = (unsigned __int16 *)Src;
                if ( Src )
                {
                  memmove(v86, Src, *((unsigned __int16 *)Src + 1));
                  if ( !(_BYTE)v122 )
                    RtlpApplyAclToObject((__int64)v86, GenericMapping);
                  v156[4] = (_DWORD)v86 - (_DWORD)v156;
                  v88 = v87[1];
                  v89 = v143;
                  if ( v143 > (unsigned int)v88 )
                    memset(&v86[v88], 0, v143 - (unsigned int)v88);
                  v86 += v89;
                }
                else
                {
                  v85[4] = 0;
                }
              }
              v90 = Size[0];
              memmove(v86, v141, Size[0]);
              v91 = GrantedAccess;
              if ( GrantedAccess > (unsigned int)v90 )
                memset(&v86[v90], 0, GrantedAccess - (unsigned int)v90);
              v92 = (_DWORD)v86 - (_DWORD)v156;
              v93 = &v86[v91];
              v156[1] = v92;
              if ( v144 )
              {
                v94 = (unsigned int)AccessStatus[0];
                memmove(v93, v144, (unsigned int)AccessStatus[0]);
                if ( v135 > (unsigned int)v94 )
                  memset(&v93[v94], 0, v135 - (unsigned int)v94);
                v156[2] = (_DWORD)v93 - (_DWORD)v156;
              }
              v36 = 0;
            }
            else
            {
              v36 = -1073741801;
            }
            goto LABEL_142;
          }
          if ( !ClientToken )
            goto LABEL_334;
          v148 = 32LL;
          RequiredPrivileges.PrivilegeCount = 1;
          RequiredPrivileges.Control = 1;
          RequiredPrivileges.Privilege[0].Luid = (_LUID)32LL;
          RequiredPrivileges.Privilege[0].Attributes = 0;
          ServerAcl = ZwPrivilegeCheck(ClientToken, &RequiredPrivileges, &Result);
          v36 = ServerAcl;
          if ( ServerAcl >= 0 )
          {
            if ( !Result )
            {
LABEL_353:
              v36 = -1073741727;
              goto LABEL_306;
            }
            goto LABEL_114;
          }
LABEL_143:
          v39 = Acl;
          goto LABEL_144;
        }
        v71 = GenericMapping;
        LOBYTE(AccessMask) = a6;
        GrantedAccess = 0;
        AccessStatus[0] = 0;
        ServerAcl = RtlpNewSecurityObject(
                      v145[0],
                      0,
                      (int)&v161,
                      Size[1],
                      a5,
                      AccessMask,
                      a7 | 1u,
                      ClientToken,
                      (__int64)GenericMapping,
                      v167);
        v36 = ServerAcl;
        if ( ServerAcl < 0 )
          goto LABEL_143;
        if ( (*((_BYTE *)v161 + 2) & 4) == 0 )
          goto LABEL_344;
        if ( *((__int16 *)v161 + 1) >= 0 )
        {
          v72 = (char *)*((_QWORD *)v161 + 4);
          goto LABEL_106;
        }
        if ( *((_DWORD *)v161 + 4) )
          v72 = (char *)v161 + *((unsigned int *)v161 + 4);
        else
LABEL_344:
          v72 = 0LL;
LABEL_106:
        if ( (unsigned __int8)RtlpOwnerAcesPresent(16LL, v72) )
        {
          NewTokenHandle = 0LL;
          Size[0] = 20;
          if ( (_BYTE)v143 != 1 )
            goto LABEL_265;
          v184 = 1;
          v183[1] = 2;
          ObjectAttributes.SecurityQualityOfService = v183;
          v183[0] = 12;
          ObjectAttributes.Length = 48;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          ObjectAttributes.SecurityDescriptor = 0LL;
          ServerAcl = NtDuplicateToken(ClientToken, 8u, &ObjectAttributes, 0, TokenImpersonation, &NewTokenHandle);
          v36 = ServerAcl;
          if ( ServerAcl < 0 )
            goto LABEL_143;
          v105 = NewTokenHandle;
          if ( !NewTokenHandle )
LABEL_265:
            v105 = ClientToken;
          ServerAcl = ZwAccessCheck(v161, v105, 0x40000u, v71, &RequiredPrivileges, Size, &GrantedAccess, AccessStatus);
          v36 = ServerAcl;
          if ( NewTokenHandle )
            NtClose(NewTokenHandle);
          if ( v36 < 0 )
            goto LABEL_143;
          v36 = AccessStatus[0];
          ServerAcl = AccessStatus[0];
          if ( AccessStatus[0] < 0 )
            goto LABEL_143;
        }
        v70 = ClientToken;
        goto LABEL_108;
      }
      if ( *(_DWORD *)(*(_QWORD *)v145 + 16LL) )
      {
        LODWORD(v67) = v145[0] + *(_DWORD *)(*(_QWORD *)v145 + 16LL);
        goto LABEL_94;
      }
    }
    LODWORD(v67) = 0;
    goto LABEL_94;
  }
  if ( !ClientToken )
  {
LABEL_334:
    v36 = -1073741700;
    goto LABEL_306;
  }
  ServerAcl = RtlSidDominates(Sid1, v99, Dominates);
  v36 = ServerAcl;
  if ( ServerAcl >= 0 )
  {
    v100 = (unsigned __int8)v154;
    if ( !Dominates[0] )
      v100 = 1;
    v154 = v100;
    goto LABEL_85;
  }
LABEL_144:
  if ( v161 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v161);
    v39 = *(ACL **)&AccessStatus[1];
    v36 = ServerAcl;
  }
  if ( v129 && v162 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v162);
    v39 = *(ACL **)&AccessStatus[1];
    v36 = ServerAcl;
  }
  v95 = HeapHandle;
  RtlFreeHeap(HeapHandle, 0, BaseAddress);
  RtlFreeHeap(v95, 0, v175);
  RtlFreeHeap(v95, 0, v170);
  RtlFreeHeap(v95, 0, v174);
  RtlFreeHeap(v95, 0, v168);
  if ( v169 )
    RtlFreeHeap(v95, 0, v169);
  if ( v171 )
    RtlFreeHeap(v95, 0, v171);
  if ( (HIBYTE(v122) || v132) && v39 )
    RtlFreeHeap(v95, 0, v39);
  if ( v131 && v146 )
    RtlFreeHeap(v95, 0, v146);
  if ( v166 && v130 )
    RtlFreeHeap(v95, 0, v166);
  if ( (_BYTE)v122 )
  {
    if ( Src )
      RtlFreeHeap(v95, 0, Src);
  }
  *v179 = v156;
  return v36;
}
