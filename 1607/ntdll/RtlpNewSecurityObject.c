/*
 * XREFs of RtlpNewSecurityObject @ 0x180044AC8
 * Callers:
 *     RtlpNewSecurityObject @ 0x180044AC8 (RtlpNewSecurityObject.c)
 *     RtlNewSecurityObjectEx @ 0x18007CDD0 (RtlNewSecurityObjectEx.c)
 *     RtlNewSecurityObject @ 0x1800870C0 (RtlNewSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x18008FC00 (RtlNewSecurityObjectWithMultipleInheritance.c)
 * Callees:
 *     RtlpApplyAclToObject @ 0x1800040B4 (RtlpApplyAclToObject.c)
 *     RtlSidDominates @ 0x180004160 (RtlSidDominates.c)
 *     RtlpValidOwnerSubjectContext @ 0x180004234 (RtlpValidOwnerSubjectContext.c)
 *     RtlpCombineAcls @ 0x1800061A8 (RtlpCombineAcls.c)
 *     RtlpOwnerAcesPresent @ 0x18000D498 (RtlpOwnerAcesPresent.c)
 *     RtlCreateSecurityDescriptor @ 0x180010EC0 (RtlCreateSecurityDescriptor.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x1800409F0 (RtlCreateAcl.c)
 *     RtlpInheritAcl @ 0x18004157C (RtlpInheritAcl.c)
 *     RtlpNewSecurityObject @ 0x180044AC8 (RtlpNewSecurityObject.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpGetDefaultsSubjectContext @ 0x18006B004 (RtlpGetDefaultsSubjectContext.c)
 *     RtlAddMandatoryAce @ 0x18006B4B0 (RtlAddMandatoryAce.c)
 *     RtlFindAceByType @ 0x18007A430 (RtlFindAceByType.c)
 *     RtlAddProcessTrustLabelAce @ 0x18008D740 (RtlAddProcessTrustLabelAce.c)
 *     RtlpComputeMergedAcl @ 0x18008FC58 (RtlpComputeMergedAcl.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A6420 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x1800A6C60 (NtDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x1800A8910 (ZwPrivilegeCheck.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpCreateServerAcl @ 0x1800E0DCC (RtlpCreateServerAcl.c)
 *     RtlpValidTrustSubjectContext @ 0x1800E1348 (RtlpValidTrustSubjectContext.c)
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
  char v25; // bl
  __int16 v26; // cx
  unsigned int v27; // eax
  int v28; // r10d
  int v29; // r8d
  int v30; // eax
  int v31; // r9d
  unsigned __int8 *v32; // rdx
  _BYTE *v33; // rcx
  int v34; // eax
  int v35; // ebx
  __int16 v36; // cx
  int v37; // edx
  _BYTE *v38; // rdi
  __int16 v39; // dx
  int v40; // eax
  unsigned __int8 *v41; // rdx
  _BYTE *v42; // rcx
  int v43; // eax
  ACL *v44; // rcx
  char *AceByType; // rbx
  __int64 v46; // r8
  char *v47; // rdx
  ACCESS_MASK v48; // edi
  ACL *v49; // rcx
  ACCESS_MASK *v50; // rax
  char v51; // cl
  PSID v52; // rdx
  ACL *v53; // rdi
  int v54; // r10d
  _BYTE *v55; // rcx
  int v56; // eax
  PVOID v57; // rdx
  __int16 v58; // di
  ACL *v59; // rbx
  __int16 v60; // r8
  unsigned __int8 *v61; // rdx
  _BYTE *v62; // rcx
  int v63; // eax
  int v64; // edx
  void *v65; // r9
  GENERIC_MAPPING *v66; // rsi
  char *v67; // rdx
  bool v68; // al
  ULONG v69; // esi
  void *v70; // rsi
  char v71; // bl
  unsigned __int8 *v72; // rsi
  int v73; // r9d
  ACCESS_MASK v74; // r9d
  unsigned __int32 v75; // r8d
  __int16 v76; // bx
  unsigned int v77; // esi
  unsigned int v78; // ecx
  _DWORD *Heap; // rax
  _DWORD *v80; // rdx
  char *v81; // rbx
  unsigned __int16 *v82; // rdi
  __int64 v83; // rcx
  __int64 v84; // rdi
  __int64 v85; // rsi
  __int64 v86; // rdi
  int v87; // eax
  char *v88; // rbx
  __int64 v89; // rdi
  PVOID v90; // rsi
  void *v91; // rcx
  void *v92; // rcx
  char *v93; // rax
  PSID v94; // rax
  int v95; // eax
  __int64 v96; // rdi
  __int64 v97; // rcx
  int v98; // edx
  __int16 v99; // cx
  HANDLE v100; // rdx
  void *v101; // rcx
  _BYTE *v102; // rax
  ACL *v103; // rcx
  _DWORD *v104; // rax
  ACCESS_MASK v105; // edi
  _BYTE *v106; // rax
  bool v107; // zf
  void *v108; // rdi
  int AccessMask; // [rsp+28h] [rbp-E8h]
  NTSTATUS ServerAcl; // [rsp+90h] [rbp-80h] BYREF
  __int16 v111; // [rsp+94h] [rbp-7Ch] BYREF
  char v112; // [rsp+96h] [rbp-7Ah]
  __int16 v113; // [rsp+97h] [rbp-79h]
  ULONG Index; // [rsp+9Ch] [rbp-74h] BYREF
  BOOLEAN Result; // [rsp+A0h] [rbp-70h] BYREF
  char v116; // [rsp+A1h] [rbp-6Fh]
  _WORD v117[7]; // [rsp+A2h] [rbp-6Eh] BYREF
  BOOLEAN Dominates; // [rsp+B0h] [rbp-60h] BYREF
  char v119; // [rsp+B1h] [rbp-5Fh] BYREF
  char v120; // [rsp+B2h] [rbp-5Eh]
  char v121; // [rsp+B3h] [rbp-5Dh]
  char v122; // [rsp+B4h] [rbp-5Ch]
  char v123; // [rsp+B5h] [rbp-5Bh]
  unsigned int v124; // [rsp+B8h] [rbp-58h] BYREF
  NTSTATUS AccessStatus[3]; // [rsp+BCh] [rbp-54h] BYREF
  _WORD v126[2]; // [rsp+C8h] [rbp-48h] BYREF
  int v127; // [rsp+CCh] [rbp-44h] BYREF
  void *v128; // [rsp+D0h] [rbp-40h]
  void *v129; // [rsp+D8h] [rbp-38h]
  void *Src; // [rsp+E0h] [rbp-30h] BYREF
  unsigned int v131; // [rsp+E8h] [rbp-28h]
  void *v132; // [rsp+F0h] [rbp-20h]
  int v133[2]; // [rsp+F8h] [rbp-18h]
  PVOID v134; // [rsp+100h] [rbp-10h] BYREF
  ULONG ReturnLength; // [rsp+108h] [rbp-8h] BYREF
  __int64 v136; // [rsp+110h] [rbp+0h]
  PGENERIC_MAPPING GenericMapping; // [rsp+118h] [rbp+8h]
  __int64 v138; // [rsp+120h] [rbp+10h]
  int Size; // [rsp+128h] [rbp+18h] BYREF
  NTSTATUS Size_4; // [rsp+12Ch] [rbp+1Ch] BYREF
  int v141; // [rsp+130h] [rbp+20h]
  unsigned int v142; // [rsp+134h] [rbp+24h] BYREF
  PSID Sid2; // [rsp+138h] [rbp+28h]
  __int64 v144; // [rsp+140h] [rbp+30h]
  _DWORD *v145; // [rsp+148h] [rbp+38h]
  ACCESS_MASK GrantedAccess; // [rsp+150h] [rbp+40h] BYREF
  __int64 v147; // [rsp+158h] [rbp+48h]
  PVOID v148; // [rsp+160h] [rbp+50h] BYREF
  PVOID v149; // [rsp+168h] [rbp+58h] BYREF
  PVOID HeapHandle; // [rsp+170h] [rbp+60h]
  PVOID v151; // [rsp+178h] [rbp+68h] BYREF
  PSID ProcessTrustLabelSid; // [rsp+180h] [rbp+70h]
  ACCESS_MASK *v153; // [rsp+188h] [rbp+78h]
  PSID Sid1; // [rsp+190h] [rbp+80h]
  PVOID v155; // [rsp+198h] [rbp+88h] BYREF
  __int64 v156; // [rsp+1A0h] [rbp+90h]
  HANDLE NewTokenHandle; // [rsp+1A8h] [rbp+98h] BYREF
  PVOID BaseAddress; // [rsp+1B0h] [rbp+A0h]
  PVOID v159; // [rsp+1B8h] [rbp+A8h] BYREF
  PVOID v160; // [rsp+1C0h] [rbp+B0h] BYREF
  PVOID v161; // [rsp+1C8h] [rbp+B8h]
  PVOID v162; // [rsp+1D0h] [rbp+C0h] BYREF
  PVOID v163; // [rsp+1D8h] [rbp+C8h] BYREF
  PVOID v164; // [rsp+1E0h] [rbp+D0h] BYREF
  __int64 v165; // [rsp+1E8h] [rbp+D8h]
  ACL *v166; // [rsp+1F0h] [rbp+E0h]
  ACL *v167; // [rsp+1F8h] [rbp+E8h] BYREF
  _QWORD *v168; // [rsp+200h] [rbp+F0h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+208h] [rbp+F8h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+238h] [rbp+128h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+260h] [rbp+150h] BYREF
  _DWORD v172[2]; // [rsp+278h] [rbp+168h] BYREF
  __int16 v173; // [rsp+280h] [rbp+170h]
  char TokenInformation[24]; // [rsp+288h] [rbp+178h] BYREF
  unsigned int v175; // [rsp+2A0h] [rbp+190h]
  int v176; // [rsp+2A4h] [rbp+194h]
  ACL v177; // [rsp+2C0h] [rbp+1B0h] BYREF
  ACL v178; // [rsp+320h] [rbp+210h] BYREF

  GenericMapping = a9;
  v156 = a10;
  v168 = a3;
  v148 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  *(_QWORD *)v133 = a1;
  v166 = &v178;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  v147 = a4;
  v128 = TokenHandle;
  v165 = 0LL;
  *(_QWORD *)&AccessStatus[1] = 0LL;
  v134 = 0LL;
  v113 = 0;
  v121 = 0;
  v120 = 0;
  v124 = 0;
  Src = 0LL;
  v149 = 0LL;
  v116 = 0;
  v111 = 0;
  v126[0] = 0;
  LOBYTE(v117[0]) = 0;
  LOBYTE(v141) = 0;
  v119 = 0;
  Sid1 = 0LL;
  ProcessTrustLabelSid = 0LL;
  v136 = 0LL;
  v144 = 0LL;
  v138 = 0LL;
  v145 = 0LL;
  v142 = 0;
  v153 = 0LL;
  Sid2 = 0LL;
  v151 = 0LL;
  v167 = 0LL;
  Dominates = 1;
  v155 = 0LL;
  v122 = 0;
  LOBYTE(v131) = 1;
  BaseAddress = 0LL;
  v161 = 0LL;
  v162 = 0LL;
  v159 = 0LL;
  v160 = 0LL;
  v163 = 0LL;
  v164 = 0LL;
  if ( TokenHandle )
  {
    result = NtQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &ReturnLength);
    if ( result < 0 )
      return result;
    v131 = v175;
    if ( v175 == 2 && v176 < 1 )
      return -1073741659;
  }
  if ( a2 )
  {
    v123 = 1;
  }
  else
  {
    v123 = 0;
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    a2 = SecurityDescriptor;
  }
  v14 = *((unsigned __int16 *)a2 + 1);
  v15 = v14;
  LOBYTE(v14) = (v14 & 0x40) != 0;
  v16 = v15 >> 7;
  ReturnLength = v14;
  v112 = v16;
  if ( v128 || v16 )
  {
    result = RtlpGetDefaultsSubjectContext(
               v128,
               (ULONG)&v162,
               (__int64)&v163,
               (__int64)&v159,
               (__int64)&v160,
               (ULONG)&v164);
    LODWORD(v17) = 0;
    if ( result < 0 )
      return result;
    v11 = *(void **)BaseAddress;
    v12 = *(void **)v161;
    v138 = *(_QWORD *)v162;
    Sid1 = *(PSID *)v159;
    ProcessTrustLabelSid = *(PSID *)v160;
    if ( v163 )
      v136 = *(_QWORD *)v163;
    else
      v136 = 0LL;
    v16 = v112;
    if ( v164 )
    {
      v18 = *(_QWORD *)v164;
      v144 = *(_QWORD *)v164;
    }
    else
    {
      v18 = 0LL;
      v144 = 0LL;
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
      goto LABEL_164;
    v17 = &a2[*((unsigned int *)a2 + 1)];
  }
  v129 = v17;
  if ( v17 )
  {
    v116 = 1;
LABEL_17:
    v21 = *(_QWORD *)v133;
    goto LABEL_18;
  }
LABEL_164:
  if ( (a7 & 0x20) == 0 )
  {
    v92 = v11;
    if ( v16 )
      v92 = (void *)v136;
    v129 = v92;
    if ( v92 )
      goto LABEL_17;
    v35 = -1073741700;
LABEL_281:
    ServerAcl = v35;
    goto LABEL_282;
  }
  v21 = *(_QWORD *)v133;
  if ( !*(_QWORD *)v133 )
    goto LABEL_280;
  if ( *(__int16 *)(*(_QWORD *)v133 + 2LL) < 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v133 + 4LL) != (_DWORD)v17 )
    {
      v101 = (void *)(*(_QWORD *)v133 + *(unsigned int *)(*(_QWORD *)v133 + 4LL));
      goto LABEL_276;
    }
LABEL_280:
    v35 = -1073741734;
    goto LABEL_281;
  }
  v101 = *(void **)(*(_QWORD *)v133 + 8LL);
LABEL_276:
  v129 = v101;
  v116 = 1;
  if ( !v101 )
    goto LABEL_280;
LABEL_18:
  if ( v20 )
  {
    if ( !*((_DWORD *)a2 + 2) )
      goto LABEL_159;
    v22 = &a2[*((unsigned int *)a2 + 2)];
  }
  else
  {
    v22 = (_BYTE *)*((_QWORD *)a2 + 2);
  }
  v132 = v22;
  if ( !v22 )
  {
LABEL_159:
    if ( (a7 & 0x40) != 0 )
    {
      if ( !v21 )
        goto LABEL_284;
      if ( *(__int16 *)(v21 + 2) >= 0 )
      {
        v91 = *(void **)(v21 + 16);
      }
      else
      {
        if ( !*(_DWORD *)(v21 + 8) )
          goto LABEL_284;
        v91 = (void *)(v21 + *(unsigned int *)(v21 + 8));
      }
    }
    else
    {
      v91 = v12;
      if ( v16 )
        v91 = (void *)v18;
    }
    v132 = v91;
    if ( v91 )
      goto LABEL_22;
LABEL_284:
    v35 = -1073741733;
    ServerAcl = -1073741733;
    goto LABEL_282;
  }
LABEL_22:
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
  if ( v26 == (_WORD)v165 )
    goto LABEL_23;
  if ( !v20 )
  {
    v32 = (unsigned __int8 *)*((_QWORD *)a2 + 3);
    goto LABEL_24;
  }
  if ( !*((_DWORD *)a2 + 3) )
LABEL_23:
    v32 = 0LL;
  else
    v32 = &a2[*((unsigned int *)a2 + 3)];
LABEL_24:
  if ( !*(_QWORD *)v133 || (*(_BYTE *)(*(_QWORD *)v133 + 2LL) & 0x10) == 0 )
  {
LABEL_173:
    v33 = 0LL;
    goto LABEL_29;
  }
  v24 = Index;
  if ( *(__int16 *)(*(_QWORD *)v133 + 2LL) < 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v133 + 12LL) )
    {
      v33 = (_BYTE *)(*(_QWORD *)v133 + *(unsigned int *)(*(_QWORD *)v133 + 12LL));
      goto LABEL_29;
    }
    goto LABEL_173;
  }
  v33 = *(_BYTE **)(*(_QWORD *)v133 + 24LL);
LABEL_29:
  v34 = RtlpInheritAcl(
          v33,
          v32,
          v28 | v30 | v31 | (unsigned int)v29,
          a6,
          v25,
          (a7 & 4) != 0,
          (__int64)v129,
          (__int64)v132,
          v136,
          v144,
          GenericMapping,
          2,
          v147,
          a5,
          (PVOID *)&AccessStatus[1],
          &v111,
          &v127);
  ServerAcl = v34;
  v35 = v34;
  if ( v34 < 0 )
  {
    if ( v34 == -2147483637 )
    {
      v36 = *((_WORD *)a2 + 1);
      v37 = 0x8000;
      if ( v24 )
        v37 = 34816;
      *(_DWORD *)&v117[1] = v37;
      if ( (v36 & 0x30) != 0x30 )
        goto LABEL_34;
      if ( (v36 & 0x10) != 0 )
      {
        if ( (v36 & 0x8000) == 0 )
        {
          v38 = (_BYTE *)*((_QWORD *)a2 + 3);
          goto LABEL_293;
        }
        if ( *((_DWORD *)a2 + 3) )
        {
          v38 = &a2[*((unsigned int *)a2 + 3)];
LABEL_293:
          *(_QWORD *)&AccessStatus[1] = v38;
          *(_QWORD *)&v117[3] = v38;
          goto LABEL_294;
        }
      }
      v38 = 0LL;
      *(_QWORD *)&v117[3] = 0LL;
      *(_QWORD *)&AccessStatus[1] = 0LL;
LABEL_294:
      LOBYTE(v111) = 1;
      *(_DWORD *)&v117[1] = v36 & 0x2000 | 0x10 | v37;
      goto LABEL_35;
    }
LABEL_282:
    v38 = *(_BYTE **)&AccessStatus[1];
    goto LABEL_143;
  }
  LOBYTE(v113) = 1;
  *(_DWORD *)&v117[1] = (4 * (v127 & 4)) | (4 * (v127 & 8)) | (2 * (v127 & 0x400)) | (2 * (v127 & 0x1000)) | 0x8010;
LABEL_34:
  v38 = *(_BYTE **)&AccessStatus[1];
  *(_QWORD *)&v117[3] = *(_QWORD *)&AccessStatus[1];
LABEL_35:
  v39 = *((_WORD *)a2 + 1);
  v40 = ((unsigned __int8)v39 >> 2) & 8;
  if ( (v39 & 0x10) == (_WORD)v165 )
    goto LABEL_36;
  if ( v39 >= 0 )
  {
    v41 = (unsigned __int8 *)*((_QWORD *)a2 + 3);
    goto LABEL_37;
  }
  if ( !*((_DWORD *)a2 + 3) )
LABEL_36:
    v41 = 0LL;
  else
    v41 = &a2[*((unsigned int *)a2 + 3)];
LABEL_37:
  if ( !*(_QWORD *)v133 || (*(_BYTE *)(*(_QWORD *)v133 + 2LL) & 0x10) == 0 )
  {
LABEL_174:
    v42 = 0LL;
    goto LABEL_42;
  }
  v38 = *(_BYTE **)&v117[3];
  if ( *(__int16 *)(*(_QWORD *)v133 + 2LL) < 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v133 + 12LL) )
    {
      v42 = (_BYTE *)(*(_QWORD *)v133 + *(unsigned int *)(*(_QWORD *)v133 + 12LL));
      goto LABEL_42;
    }
    goto LABEL_174;
  }
  v42 = *(_BYTE **)(*(_QWORD *)v133 + 24LL);
LABEL_42:
  v43 = RtlpInheritAcl(
          v42,
          v41,
          ((*((_WORD *)a2 + 1) & 0x10) != 0 ? 4 : 0) | v40 & 0xFFFFEFFF | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x400,
          a6,
          Index != 0,
          AccessStatus[0] != 0,
          (__int64)v129,
          (__int64)v132,
          v136,
          v144,
          GenericMapping,
          2,
          v147,
          a5,
          &v134,
          v126,
          (int *)&v142);
  ServerAcl = v43;
  v35 = v43;
  if ( v43 >= 0 )
  {
    v121 = 1;
  }
  else
  {
    if ( v43 != -2147483637 )
      goto LABEL_143;
    if ( (a2[2] & 0x30) != 0x30 )
      goto LABEL_45;
    if ( (a2[2] & 0x10) != 0 )
    {
      if ( (*((_WORD *)a2 + 1) & 0x8000) == 0 )
      {
        v102 = (_BYTE *)*((_QWORD *)a2 + 3);
        goto LABEL_302;
      }
      if ( *((_DWORD *)a2 + 3) )
      {
        v102 = &a2[*((unsigned int *)a2 + 3)];
LABEL_302:
        v134 = v102;
        goto LABEL_45;
      }
    }
    v134 = 0LL;
  }
LABEL_45:
  Index = 0;
  do
  {
    if ( (a2[2] & 0x10) == 0 )
    {
LABEL_47:
      v44 = 0LL;
      goto LABEL_48;
    }
    if ( (*((_WORD *)a2 + 1) & 0x8000) != 0 )
    {
      if ( !*((_DWORD *)a2 + 3) )
        goto LABEL_47;
      v44 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
    }
    else
    {
      v44 = (ACL *)*((_QWORD *)a2 + 3);
    }
LABEL_48:
    AceByType = (char *)RtlFindAceByType(v44, 0x14u, &Index);
    v47 = AceByType + 8;
    if ( !AceByType )
      v47 = 0LL;
    if ( v47 && !(unsigned __int8)RtlpValidTrustSubjectContext(ProcessTrustLabelSid, v47, v46, &ServerAcl) )
    {
      v35 = -1073741790;
      goto LABEL_306;
    }
    ++Index;
  }
  while ( AceByType );
  if ( (a7 & 0x800) == 0 )
  {
LABEL_53:
    v155 = v134;
    goto LABEL_54;
  }
  Index = 0;
  while ( 2 )
  {
    if ( (a2[2] & 0x10) == 0 )
      goto LABEL_312;
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v103 = (ACL *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        v103 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
        goto LABEL_314;
      }
LABEL_312:
      v103 = 0LL;
    }
LABEL_314:
    v104 = RtlFindAceByType(v103, 0x14u, &Index);
    ++Index;
    if ( v104 )
    {
      if ( (*((_BYTE *)v104 + 1) & 8) == 0 )
      {
        v105 = v104[1];
        Index = *((unsigned __int8 *)v104 + 1);
        ProcessTrustLabelSid = v104 + 2;
        if ( !v156 || (v105 & *(_DWORD *)(v156 + 4)) != v105 || v104 == (_DWORD *)-8LL )
        {
          v35 = -1073741811;
          goto LABEL_141;
        }
        goto LABEL_324;
      }
      continue;
    }
    break;
  }
  if ( !ProcessTrustLabelSid )
    goto LABEL_53;
  if ( !v156 )
  {
    v35 = -1073741811;
    goto LABEL_306;
  }
  v105 = *(_DWORD *)(v156 + 4);
  Index = 0;
LABEL_324:
  ServerAcl = RtlCreateAcl(&v177, 0x58u, 2u);
  v35 = ServerAcl;
  if ( ServerAcl < 0 )
    goto LABEL_142;
  ServerAcl = RtlAddProcessTrustLabelAce(&v177, 2u, Index, ProcessTrustLabelSid, 0x14u, v105);
  v35 = ServerAcl;
  if ( ServerAcl < 0 )
    goto LABEL_142;
  ServerAcl = RtlpComputeMergedAcl(
                (int)v134,
                ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 4 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x400 | ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 8u,
                (int)&v177,
                4,
                (__int64)v129,
                (__int64)v132,
                (__int64)GenericMapping,
                2,
                (__int64)&v155,
                (__int64)&v127);
  v35 = ServerAcl;
  if ( ServerAcl < 0 )
    goto LABEL_142;
  v122 = 1;
LABEL_54:
  v48 = (a7 & 0x100) != 0;
  if ( (a7 & 0x200) != 0 )
    v48 |= 2u;
  if ( (a7 & 0x400) != 0 )
    v48 |= 4u;
  if ( v48 )
  {
    v50 = v153;
    v51 = (char)v153;
    v52 = v153;
  }
  else
  {
    if ( (a2[2] & 0x10) == 0 )
      goto LABEL_60;
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v49 = (ACL *)*((_QWORD *)a2 + 3);
    }
    else if ( *((_DWORD *)a2 + 3) )
    {
      v49 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
    }
    else
    {
LABEL_60:
      v49 = 0LL;
    }
    v50 = (ACCESS_MASK *)RtlFindAceByType(v49, 0x11u, 0LL);
    v153 = v50;
    if ( v50 )
    {
      v51 = *((_BYTE *)v50 + 1);
      v52 = v50 + 2;
      v48 = v50[1];
      Sid2 = v50 + 2;
      HIBYTE(v111) = v51;
      if ( v51 == 8 || (v51 & 0x10) != 0 )
      {
        v50 = 0LL;
        v52 = 0LL;
        v51 = 0;
        v153 = 0LL;
        Sid2 = 0LL;
        v48 = 0;
        HIBYTE(v111) = 0;
      }
    }
    else
    {
      v51 = 0;
      v52 = 0LL;
    }
  }
  if ( (v51 & 8) != 0 && *((_DWORD *)Sid1 + 2) < 0x2000u )
  {
    v35 = -1073740730;
    goto LABEL_141;
  }
  if ( v48 )
  {
LABEL_212:
    if ( v50 )
      goto LABEL_67;
    if ( v128 )
    {
      v52 = Sid1;
      Sid2 = Sid1;
      HIBYTE(v111) = 0;
      goto LABEL_67;
    }
    v35 = -1073741700;
LABEL_141:
    ServerAcl = v35;
    goto LABEL_142;
  }
  if ( Sid1 && *((_DWORD *)Sid1 + 2) < 0x2000u )
  {
    v48 = 1;
    goto LABEL_212;
  }
LABEL_67:
  if ( !v52 )
  {
    v53 = 0LL;
    v166 = 0LL;
    goto LABEL_69;
  }
  ServerAcl = RtlCreateAcl(&v178, 0x80u, 2u);
  v35 = ServerAcl;
  if ( ServerAcl < 0 )
    goto LABEL_142;
  ServerAcl = RtlAddMandatoryAce(&v178, 2u, HIBYTE(v111), Sid2, 0x11u, v48);
  v35 = ServerAcl;
  if ( ServerAcl < 0 )
    goto LABEL_142;
  v53 = &v178;
LABEL_69:
  if ( (a7 & 0x700) != 0 )
  {
    v54 = 4;
  }
  else if ( !v153 && v53 )
  {
    v54 = 0;
  }
  else
  {
    v54 = ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 4 | ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 8 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x1400;
  }
  if ( !*(_QWORD *)v133 || (*(_BYTE *)(*(_QWORD *)v133 + 2LL) & 0x10) == 0 )
    goto LABEL_175;
  if ( *(__int16 *)(*(_QWORD *)v133 + 2LL) >= 0 )
  {
    v55 = *(_BYTE **)(*(_QWORD *)v133 + 24LL);
  }
  else
  {
    if ( *(_DWORD *)(*(_QWORD *)v133 + 12LL) )
    {
      v55 = (_BYTE *)(*(_QWORD *)v133 + *(unsigned int *)(*(_QWORD *)v133 + 12LL));
      goto LABEL_78;
    }
LABEL_175:
    v55 = 0LL;
  }
LABEL_78:
  v56 = RtlpInheritAcl(
          v55,
          (unsigned __int8 *)v53,
          v54,
          a6,
          1,
          0,
          (__int64)v129,
          (__int64)v132,
          v136,
          v144,
          GenericMapping,
          3,
          v147,
          a5,
          &v151,
          (_BYTE *)v126 + 1,
          &v127);
  ServerAcl = v56;
  v35 = v56;
  if ( v56 != -2147483637 )
  {
    if ( v56 >= 0 )
    {
      v57 = v151;
      v58 = v127;
      goto LABEL_80;
    }
    goto LABEL_142;
  }
  v57 = v53;
  v58 = 0;
  v127 = 0;
LABEL_80:
  v151 = v57;
  v35 = RtlpCombineAcls(
          *(unsigned __int8 **)&v117[3],
          (unsigned __int8 *)v57,
          (unsigned __int8 *)v134,
          (unsigned __int8 *)v134,
          (unsigned __int8 *)v155,
          &v167,
          &v124);
  ServerAcl = v35;
  v142 = ((v117[1] & 0x2000) << 17) | v124;
  if ( v151 && v151 != v166 )
    RtlFreeHeap(HeapHandle, 0, v151);
  if ( v35 < 0 )
    goto LABEL_142;
  v59 = v167;
  if ( v167 )
  {
    if ( (_BYTE)v113 && *(_QWORD *)&v117[3] )
      RtlFreeHeap(HeapHandle, 0, *(PVOID *)&v117[3]);
    *(_QWORD *)&v117[3] = v59;
    *(_QWORD *)&AccessStatus[1] = v59;
    v120 = 1;
    *(_DWORD *)&v117[1] |= (4 * (v58 & 4)) | (4 * (v58 & 8)) | (2 * (v58 & 0x400)) | (2 * (v58 & 0x1000)) | 0x10;
  }
  v38 = *(_BYTE **)&v117[3];
  Index = a7 & 8;
  if ( (a7 & 8) != 0
    || ((v93 = (char *)RtlFindAceByType(*(PACL *)&v117[3], 0x11u, 0LL)) != 0LL ? (v94 = v93 + 8) : (v94 = Sid2), !v94) )
  {
LABEL_84:
    v60 = *((_WORD *)a2 + 1);
    v124 = a7 & 1;
    if ( (v60 & 4) == 0 )
      goto LABEL_184;
    if ( (v60 & 0x8000) == 0 )
    {
      v61 = (unsigned __int8 *)*((_QWORD *)a2 + 4);
      goto LABEL_88;
    }
    if ( *((_DWORD *)a2 + 4) )
      v61 = &a2[*((unsigned int *)a2 + 4)];
    else
LABEL_184:
      v61 = 0LL;
LABEL_88:
    if ( *(_QWORD *)v133 && (*(_BYTE *)(*(_QWORD *)v133 + 2LL) & 4) != 0 )
    {
      if ( (*(_WORD *)(*(_QWORD *)v133 + 2LL) & 0x8000) == 0 )
      {
        v62 = *(_BYTE **)(*(_QWORD *)v133 + 32LL);
LABEL_93:
        v63 = RtlpInheritAcl(
                v62,
                v61,
                v60 & 0x140C,
                a6,
                (a7 & 1) != 0,
                AccessStatus[0] != 0,
                (__int64)v129,
                (__int64)v132,
                v136,
                v144,
                GenericMapping,
                1,
                v147,
                a5,
                &Src,
                v117,
                &v127);
        ServerAcl = v63;
        v35 = v63;
        if ( v63 >= 0 )
        {
          HIBYTE(v113) = 1;
          *(_DWORD *)&v117[1] |= v127 & 0x1408 | 4;
LABEL_95:
          v64 = 1;
          goto LABEL_96;
        }
        if ( v63 != -2147483637 )
          goto LABEL_142;
        v98 = *(_DWORD *)&v117[1];
        if ( v124 )
        {
          v98 = *(_DWORD *)&v117[1] | 0x400;
          *(_DWORD *)&v117[1] |= 0x400u;
        }
        v99 = *((_WORD *)a2 + 1);
        if ( (v99 & 0xC) != 0xC )
        {
          if ( v138 )
          {
            Src = (void *)v138;
            *(_DWORD *)&v117[1] = v98 | 4;
          }
          goto LABEL_95;
        }
        if ( (v99 & 4) != 0 )
        {
          if ( v99 >= 0 )
          {
            v106 = (_BYTE *)*((_QWORD *)a2 + 4);
            goto LABEL_342;
          }
          if ( *((_DWORD *)a2 + 4) )
          {
            v106 = &a2[*((unsigned int *)a2 + 4)];
LABEL_342:
            Src = v106;
            goto LABEL_343;
          }
        }
        Src = 0LL;
LABEL_343:
        *(_DWORD *)&v117[1] = v99 & 0x1000 | 4 | v98;
        v64 = 1;
        LOBYTE(v117[0]) = 1;
LABEL_96:
        v65 = v128;
        if ( (a7 & 0x1000) != 0 || !v123 || !v128 || !*(_QWORD *)v133 )
        {
LABEL_107:
          if ( !Src && v124 )
            *(_DWORD *)&v117[1] |= 0x1000u;
          v68 = !v142 || (v142 & 0xB0) != v142;
          v69 = Index;
          if ( (_BYTE)v111 && !Index && v68 )
          {
            if ( !v65 )
              goto LABEL_334;
            RequiredPrivileges.PrivilegeCount = 1;
            RequiredPrivileges.Control = 1;
            v138 = 8LL;
            RequiredPrivileges.Privilege[0].Luid = (_LUID)8LL;
            RequiredPrivileges.Privilege[0].Attributes = 0;
            ServerAcl = ZwPrivilegeCheck(v65, &RequiredPrivileges, &Result);
            v35 = ServerAcl;
            if ( ServerAcl < 0 )
              goto LABEL_142;
            if ( !Result )
              goto LABEL_353;
          }
          if ( !(_BYTE)v141 )
          {
            v70 = v128;
            goto LABEL_113;
          }
          v107 = v69 == 0;
          v70 = v128;
          if ( !v107 )
          {
LABEL_113:
            if ( v116 && (a7 & 0x10) == 0 )
            {
              if ( !v70 )
                goto LABEL_334;
              v71 = v112;
              v72 = (unsigned __int8 *)v129;
              if ( !RtlpValidOwnerSubjectContext(v128, v129, v112, &Size_4) )
              {
                v35 = Size_4;
LABEL_306:
                ServerAcl = v35;
                goto LABEL_143;
              }
            }
            else
            {
              v71 = v112;
              v72 = (unsigned __int8 *)v129;
            }
            if ( LOBYTE(v117[0]) && v71 )
            {
              v108 = Src;
              LOBYTE(v64) = ReturnLength;
              ServerAcl = RtlpCreateServerAcl((_DWORD)Src, v64, v136, (unsigned int)&v149, (__int64)&v119);
              v35 = ServerAcl;
              if ( ServerAcl < 0 )
                goto LABEL_142;
              if ( HIBYTE(v113) && v108 )
                RtlFreeHeap(HeapHandle, 0, v108);
              Src = v149;
              v149 = 0LL;
            }
            v73 = 4 * v72[1] + 11;
            Size = 4 * v72[1] + 8;
            v74 = v73 & 0xFFFFFFFC;
            GrantedAccess = v74;
            if ( v132 )
            {
              AccessStatus[0] = 4 * *((unsigned __int8 *)v132 + 1) + 8;
              v75 = (AccessStatus[0] + 3) & 0xFFFFFFFC;
            }
            else
            {
              AccessStatus[0] = 0;
              v75 = 0;
            }
            v76 = v117[1];
            v124 = v75;
            ReturnLength = v117[1] & 0x10;
            if ( (v117[1] & 0x10) != 0 && *(_QWORD *)&v117[3] )
              v77 = (*(unsigned __int16 *)(*(_QWORD *)&v117[3] + 2LL) + 3) & 0xFFFFFFFC;
            else
              v77 = 0;
            Size_4 = v117[1] & 4;
            if ( (v117[1] & 4) != 0 && Src )
              v78 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
            else
              v78 = 0;
            v131 = v78;
            Heap = RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v75 + v78 + v77 + v74 + 20);
            v145 = Heap;
            v80 = Heap;
            if ( Heap )
            {
              *(_QWORD *)Heap = 0LL;
              *((_QWORD *)Heap + 1) = 0LL;
              Heap[4] = 0;
              *((_WORD *)Heap + 1) |= v76;
              v81 = (char *)(Heap + 5);
              *(_BYTE *)Heap = 1;
              if ( ReturnLength )
              {
                v96 = *(_QWORD *)&v117[3];
                if ( *(_QWORD *)&v117[3] )
                {
                  memmove(v81, *(const void **)&v117[3], *(unsigned __int16 *)(*(_QWORD *)&v117[3] + 2LL));
                  if ( !(_BYTE)v113 )
                    RtlpApplyAclToObject((__int64)v81, GenericMapping);
                  v80 = v145;
                  v145[3] = (_DWORD)v81 - (_DWORD)v145;
                  v97 = *(unsigned __int16 *)(v96 + 2);
                  if ( v77 > (unsigned int)v97 )
                  {
                    memset(&v81[v97], 0, v77 - (unsigned int)v97);
                    v80 = v145;
                  }
                  v81 += v77;
                }
                else
                {
                  Heap[3] = 0;
                }
              }
              if ( Size_4 )
              {
                v82 = (unsigned __int16 *)Src;
                if ( Src )
                {
                  memmove(v81, Src, *((unsigned __int16 *)Src + 1));
                  if ( !HIBYTE(v113) )
                    RtlpApplyAclToObject((__int64)v81, GenericMapping);
                  v145[4] = (_DWORD)v81 - (_DWORD)v145;
                  v83 = v82[1];
                  v84 = v131;
                  if ( v131 > (unsigned int)v83 )
                    memset(&v81[v83], 0, v131 - (unsigned int)v83);
                  v81 += v84;
                }
                else
                {
                  v80[4] = 0;
                }
              }
              v85 = (unsigned int)Size;
              memmove(v81, v129, (unsigned int)Size);
              v86 = GrantedAccess;
              if ( GrantedAccess > (unsigned int)v85 )
                memset(&v81[v85], 0, GrantedAccess - (unsigned int)v85);
              v87 = (_DWORD)v81 - (_DWORD)v145;
              v88 = &v81[v86];
              v145[1] = v87;
              if ( v132 )
              {
                v89 = (unsigned int)AccessStatus[0];
                memmove(v88, v132, (unsigned int)AccessStatus[0]);
                if ( v124 > (unsigned int)v89 )
                  memset(&v88[v89], 0, v124 - (unsigned int)v89);
                v145[2] = (_DWORD)v88 - (_DWORD)v145;
              }
              v35 = 0;
            }
            else
            {
              v35 = -1073741801;
            }
            goto LABEL_141;
          }
          if ( !v128 )
            goto LABEL_334;
          v138 = 32LL;
          RequiredPrivileges.PrivilegeCount = 1;
          RequiredPrivileges.Control = 1;
          RequiredPrivileges.Privilege[0].Luid = (_LUID)32LL;
          RequiredPrivileges.Privilege[0].Attributes = 0;
          ServerAcl = ZwPrivilegeCheck(v128, &RequiredPrivileges, &Result);
          v35 = ServerAcl;
          if ( ServerAcl >= 0 )
          {
            if ( !Result )
            {
LABEL_353:
              v35 = -1073741727;
              goto LABEL_306;
            }
            goto LABEL_113;
          }
LABEL_142:
          v38 = *(_BYTE **)&v117[3];
          goto LABEL_143;
        }
        v66 = GenericMapping;
        LOBYTE(AccessMask) = a6;
        GrantedAccess = 0;
        AccessStatus[0] = 0;
        ServerAcl = RtlpNewSecurityObject(
                      v133[0],
                      0,
                      (int)&v148,
                      v147,
                      a5,
                      AccessMask,
                      a7 | 1u,
                      v128,
                      (__int64)GenericMapping,
                      v156);
        v35 = ServerAcl;
        if ( ServerAcl < 0 )
          goto LABEL_142;
        if ( (*((_BYTE *)v148 + 2) & 4) == 0 )
          goto LABEL_344;
        if ( *((__int16 *)v148 + 1) >= 0 )
        {
          v67 = (char *)*((_QWORD *)v148 + 4);
          goto LABEL_105;
        }
        if ( *((_DWORD *)v148 + 4) )
          v67 = (char *)v148 + *((unsigned int *)v148 + 4);
        else
LABEL_344:
          v67 = 0LL;
LABEL_105:
        if ( RtlpOwnerAcesPresent(0x10u, (__int64)v67) )
        {
          NewTokenHandle = 0LL;
          Size = 20;
          if ( (_BYTE)v131 != 1 )
            goto LABEL_266;
          v173 = 1;
          v172[1] = 2;
          ObjectAttributes.SecurityQualityOfService = v172;
          v172[0] = 12;
          ObjectAttributes.Length = 48;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          ObjectAttributes.SecurityDescriptor = 0LL;
          ServerAcl = NtDuplicateToken(v128, 8u, &ObjectAttributes, 0, TokenImpersonation, &NewTokenHandle);
          v35 = ServerAcl;
          if ( ServerAcl < 0 )
            goto LABEL_142;
          v100 = NewTokenHandle;
          if ( !NewTokenHandle )
LABEL_266:
            v100 = v128;
          ServerAcl = ZwAccessCheck(
                        v148,
                        v100,
                        0x40000u,
                        v66,
                        &RequiredPrivileges,
                        (PULONG)&Size,
                        &GrantedAccess,
                        AccessStatus);
          v35 = ServerAcl;
          if ( NewTokenHandle )
            NtClose(NewTokenHandle);
          if ( v35 < 0 )
            goto LABEL_142;
          v35 = AccessStatus[0];
          ServerAcl = AccessStatus[0];
          if ( AccessStatus[0] < 0 )
            goto LABEL_142;
        }
        v65 = v128;
        goto LABEL_107;
      }
      if ( *(_DWORD *)(*(_QWORD *)v133 + 16LL) )
      {
        v62 = (_BYTE *)(*(_QWORD *)v133 + *(unsigned int *)(*(_QWORD *)v133 + 16LL));
        goto LABEL_93;
      }
    }
    v62 = 0LL;
    goto LABEL_93;
  }
  if ( !v128 )
  {
LABEL_334:
    v35 = -1073741700;
    goto LABEL_306;
  }
  ServerAcl = RtlSidDominates(Sid1, v94, &Dominates);
  v35 = ServerAcl;
  if ( ServerAcl >= 0 )
  {
    v95 = (unsigned __int8)v141;
    if ( !Dominates )
      v95 = 1;
    v141 = v95;
    goto LABEL_84;
  }
LABEL_143:
  if ( v148 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v148);
    v38 = *(_BYTE **)&AccessStatus[1];
    v35 = ServerAcl;
  }
  if ( v119 && v149 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v149);
    v38 = *(_BYTE **)&AccessStatus[1];
    v35 = ServerAcl;
  }
  v90 = HeapHandle;
  RtlFreeHeap(HeapHandle, 0, BaseAddress);
  RtlFreeHeap(v90, 0, v159);
  RtlFreeHeap(v90, 0, v160);
  RtlFreeHeap(v90, 0, v161);
  RtlFreeHeap(v90, 0, v162);
  if ( v163 )
    RtlFreeHeap(v90, 0, v163);
  if ( v164 )
    RtlFreeHeap(v90, 0, v164);
  if ( (v120 || (_BYTE)v113) && v38 )
    RtlFreeHeap(v90, 0, v38);
  if ( v121 && v134 )
    RtlFreeHeap(v90, 0, v134);
  if ( v155 && v122 )
    RtlFreeHeap(v90, 0, v155);
  if ( HIBYTE(v113) )
  {
    if ( Src )
      RtlFreeHeap(v90, 0, Src);
  }
  *v168 = v145;
  return v35;
}
