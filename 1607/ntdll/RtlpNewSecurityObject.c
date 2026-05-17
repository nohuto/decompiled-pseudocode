/*
 * XREFs of RtlpNewSecurityObject @ 0x180044AD8
 * Callers:
 *     RtlpNewSecurityObject @ 0x180044AD8 (RtlpNewSecurityObject.c)
 *     RtlNewSecurityObjectEx @ 0x18007CDE0 (RtlNewSecurityObjectEx.c)
 *     RtlNewSecurityObject @ 0x1800870D0 (RtlNewSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x18008FC10 (RtlNewSecurityObjectWithMultipleInheritance.c)
 * Callees:
 *     RtlpApplyAclToObject @ 0x1800040B4 (RtlpApplyAclToObject.c)
 *     RtlSidDominates @ 0x180004160 (RtlSidDominates.c)
 *     RtlpValidOwnerSubjectContext @ 0x180004234 (RtlpValidOwnerSubjectContext.c)
 *     RtlpCombineAcls @ 0x1800061B8 (RtlpCombineAcls.c)
 *     RtlpOwnerAcesPresent @ 0x18000D4A8 (RtlpOwnerAcesPresent.c)
 *     RtlCreateSecurityDescriptor @ 0x180010ED0 (RtlCreateSecurityDescriptor.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x180040A00 (RtlCreateAcl.c)
 *     RtlpInheritAcl @ 0x18004158C (RtlpInheritAcl.c)
 *     RtlpNewSecurityObject @ 0x180044AD8 (RtlpNewSecurityObject.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpGetDefaultsSubjectContext @ 0x18006B014 (RtlpGetDefaultsSubjectContext.c)
 *     RtlAddMandatoryAce @ 0x18006B4C0 (RtlAddMandatoryAce.c)
 *     RtlFindAceByType @ 0x18007A440 (RtlFindAceByType.c)
 *     RtlAddProcessTrustLabelAce @ 0x18008D750 (RtlAddProcessTrustLabelAce.c)
 *     RtlpComputeMergedAcl @ 0x18008FC68 (RtlpComputeMergedAcl.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A6420 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x1800A6C60 (NtDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x1800A8910 (ZwPrivilegeCheck.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpCreateServerAcl @ 0x1800E0D0C (RtlpCreateServerAcl.c)
 *     RtlpValidTrustSubjectContext @ 0x1800E1288 (RtlpValidTrustSubjectContext.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        char a6,
        int a7,
        void *a8,
        __int64 a9,
        __int64 a10)
{
  void *v11; // rbx
  void *v12; // rdi
  int v13; // edx
  __int64 result; // rax
  int v15; // eax
  unsigned __int8 v16; // r11
  char v17; // r11
  _BYTE *v18; // rcx
  __int64 v19; // r10
  unsigned __int16 v20; // r8
  __int16 v21; // dx
  __int64 v22; // rax
  _BYTE *v23; // rcx
  unsigned int v24; // r9d
  int v25; // edi
  char v26; // bl
  __int16 v27; // cx
  unsigned int v28; // eax
  int v29; // r10d
  int v30; // r8d
  int v31; // eax
  int v32; // r9d
  unsigned __int8 *v33; // rdx
  _BYTE *v34; // rcx
  int v35; // eax
  int v36; // ebx
  __int16 v37; // cx
  int v38; // edx
  _BYTE *v39; // rdi
  __int16 v40; // dx
  int v41; // eax
  unsigned __int8 *v42; // rdx
  _BYTE *v43; // rcx
  int v44; // eax
  _BYTE *v45; // rcx
  __int64 AceByType; // rbx
  __int64 v47; // r8
  __int64 v48; // rdx
  int v49; // edi
  _BYTE *v50; // rcx
  __int64 v51; // rax
  unsigned __int8 v52; // cl
  __int64 v53; // rdx
  unsigned __int8 *v54; // rdi
  int v55; // r10d
  _BYTE *v56; // rcx
  int v57; // eax
  unsigned __int8 *v58; // rdx
  __int16 v59; // di
  void *v60; // rbx
  __int16 v61; // r8
  unsigned __int8 *v62; // rdx
  _BYTE *v63; // rcx
  int v64; // eax
  int v65; // edx
  void *v66; // r9
  __int64 v67; // rsi
  __int64 v68; // r8
  __int64 v69; // rdx
  bool v70; // al
  int v71; // esi
  void *v72; // rsi
  char v73; // bl
  unsigned __int8 *v74; // rsi
  int v75; // r9d
  unsigned int v76; // r9d
  unsigned int v77; // r8d
  __int16 v78; // bx
  unsigned int v79; // esi
  unsigned int v80; // ecx
  __int64 Heap; // rax
  _DWORD *v82; // rdx
  char *v83; // rbx
  unsigned __int16 *v84; // rdi
  __int64 v85; // rcx
  __int64 v86; // rdi
  __int64 v87; // rsi
  __int64 v88; // rdi
  int v89; // eax
  char *v90; // rbx
  __int64 v91; // rdi
  void *v92; // rsi
  void *v93; // rcx
  void *v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rax
  int v97; // eax
  unsigned __int16 *v98; // rdi
  __int64 v99; // rcx
  int v100; // edx
  __int16 v101; // cx
  HANDLE v102; // rdx
  void *v103; // rcx
  unsigned __int8 *v104; // rax
  _BYTE *v105; // rcx
  __int64 v106; // rax
  int v107; // edi
  _BYTE *v108; // rax
  bool v109; // zf
  void *v110; // rdi
  int Acl; // [rsp+90h] [rbp-80h] BYREF
  char v112; // [rsp+94h] [rbp-7Ch] BYREF
  unsigned __int8 v113; // [rsp+95h] [rbp-7Bh]
  char v114; // [rsp+96h] [rbp-7Ah]
  char v115; // [rsp+97h] [rbp-79h]
  char v116; // [rsp+98h] [rbp-78h]
  int v117; // [rsp+9Ch] [rbp-74h] BYREF
  char v118; // [rsp+A0h] [rbp-70h] BYREF
  char v119; // [rsp+A1h] [rbp-6Fh]
  char v120[2]; // [rsp+A2h] [rbp-6Eh] BYREF
  int v121; // [rsp+A4h] [rbp-6Ch]
  void *v122; // [rsp+A8h] [rbp-68h]
  char v123; // [rsp+B0h] [rbp-60h] BYREF
  char v124; // [rsp+B1h] [rbp-5Fh] BYREF
  char v125; // [rsp+B2h] [rbp-5Eh]
  char v126; // [rsp+B3h] [rbp-5Dh]
  char v127; // [rsp+B4h] [rbp-5Ch]
  char v128; // [rsp+B5h] [rbp-5Bh]
  unsigned int v129; // [rsp+B8h] [rbp-58h] BYREF
  _DWORD v130[3]; // [rsp+BCh] [rbp-54h] BYREF
  char v131; // [rsp+C8h] [rbp-48h] BYREF
  char v132[3]; // [rsp+C9h] [rbp-47h] BYREF
  int v133; // [rsp+CCh] [rbp-44h] BYREF
  void *v134; // [rsp+D0h] [rbp-40h]
  void *v135; // [rsp+D8h] [rbp-38h]
  void *Src; // [rsp+E0h] [rbp-30h] BYREF
  unsigned int v137; // [rsp+E8h] [rbp-28h]
  void *v138; // [rsp+F0h] [rbp-20h]
  __int64 v139; // [rsp+F8h] [rbp-18h]
  unsigned __int8 *v140; // [rsp+100h] [rbp-10h] BYREF
  int v141; // [rsp+108h] [rbp-8h]
  void *v142; // [rsp+110h] [rbp+0h]
  __int64 v143; // [rsp+118h] [rbp+8h]
  __int64 v144; // [rsp+120h] [rbp+10h]
  unsigned int Size; // [rsp+128h] [rbp+18h] BYREF
  int Size_4; // [rsp+12Ch] [rbp+1Ch] BYREF
  int v147; // [rsp+130h] [rbp+20h]
  unsigned int v148; // [rsp+134h] [rbp+24h] BYREF
  __int64 v149; // [rsp+138h] [rbp+28h]
  __int64 v150; // [rsp+140h] [rbp+30h]
  _DWORD *v151; // [rsp+148h] [rbp+38h]
  unsigned int v152; // [rsp+150h] [rbp+40h] BYREF
  __int64 v153; // [rsp+158h] [rbp+48h]
  __int64 v154; // [rsp+160h] [rbp+50h] BYREF
  void *v155; // [rsp+168h] [rbp+58h] BYREF
  void *ProcessHeap; // [rsp+170h] [rbp+60h]
  unsigned __int8 *v157; // [rsp+178h] [rbp+68h] BYREF
  __int64 v158; // [rsp+180h] [rbp+70h]
  __int64 v159; // [rsp+188h] [rbp+78h]
  __int64 v160; // [rsp+190h] [rbp+80h]
  unsigned __int8 *v161; // [rsp+198h] [rbp+88h] BYREF
  __int64 v162; // [rsp+1A0h] [rbp+90h]
  HANDLE Handle; // [rsp+1A8h] [rbp+98h]
  void **v164; // [rsp+1B0h] [rbp+A0h] BYREF
  __int64 *v165; // [rsp+1B8h] [rbp+A8h] BYREF
  __int64 *v166; // [rsp+1C0h] [rbp+B0h] BYREF
  void **v167; // [rsp+1C8h] [rbp+B8h] BYREF
  __int64 *v168; // [rsp+1D0h] [rbp+C0h] BYREF
  __int64 *v169; // [rsp+1D8h] [rbp+C8h] BYREF
  __int64 *v170; // [rsp+1E0h] [rbp+D0h] BYREF
  __int64 v171; // [rsp+1E8h] [rbp+D8h]
  unsigned __int8 *v172; // [rsp+1F0h] [rbp+E0h]
  void *v173; // [rsp+1F8h] [rbp+E8h] BYREF
  _QWORD *v174; // [rsp+200h] [rbp+F0h]
  int v175; // [rsp+208h] [rbp+F8h] BYREF
  __int64 v176; // [rsp+210h] [rbp+100h]
  __int64 v177; // [rsp+218h] [rbp+108h]
  int v178; // [rsp+220h] [rbp+110h]
  __int64 v179; // [rsp+228h] [rbp+118h]
  _DWORD *v180; // [rsp+230h] [rbp+120h]
  _BYTE v181[40]; // [rsp+238h] [rbp+128h] BYREF
  int v182; // [rsp+260h] [rbp+150h] BYREF
  int v183; // [rsp+264h] [rbp+154h]
  __int64 v184; // [rsp+268h] [rbp+158h]
  int v185; // [rsp+270h] [rbp+160h]
  _DWORD v186[2]; // [rsp+278h] [rbp+168h] BYREF
  __int16 v187; // [rsp+280h] [rbp+170h]
  char v188[24]; // [rsp+288h] [rbp+178h] BYREF
  unsigned int v189; // [rsp+2A0h] [rbp+190h]
  int v190; // [rsp+2A4h] [rbp+194h]
  _BYTE v191[96]; // [rsp+2C0h] [rbp+1B0h] BYREF
  _BYTE v192[128]; // [rsp+320h] [rbp+210h] BYREF

  v143 = a9;
  v162 = a10;
  v174 = a3;
  v154 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v139 = a1;
  v172 = v192;
  v13 = 1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v153 = a4;
  v134 = a8;
  v171 = 0LL;
  *(_QWORD *)&v130[1] = 0LL;
  v140 = 0LL;
  v115 = 0;
  v126 = 0;
  v125 = 0;
  v129 = 0;
  Src = 0LL;
  v155 = 0LL;
  v116 = 0;
  v119 = 0;
  v112 = 0;
  v131 = 0;
  v132[0] = 0;
  v120[0] = 0;
  LOBYTE(v147) = 0;
  v124 = 0;
  v160 = 0LL;
  v158 = 0LL;
  v142 = 0LL;
  v150 = 0LL;
  v144 = 0LL;
  v151 = 0LL;
  v148 = 0;
  v159 = 0LL;
  v149 = 0LL;
  v157 = 0LL;
  v173 = 0LL;
  v113 = 0;
  v123 = 1;
  v161 = 0LL;
  v127 = 0;
  LOBYTE(v137) = 1;
  v164 = 0LL;
  v167 = 0LL;
  v168 = 0LL;
  v165 = 0LL;
  v166 = 0LL;
  v169 = 0LL;
  v170 = 0LL;
  if ( a8 )
  {
    result = NtQueryInformationToken(a8, 10LL, v188);
    if ( (int)result < 0 )
      return result;
    v137 = v189;
    v13 = 1;
    if ( v189 == 2 && v190 < 1 )
      return 3221225637LL;
  }
  if ( a2 )
  {
    v128 = 1;
  }
  else
  {
    v128 = 0;
    RtlCreateSecurityDescriptor(v181, 1);
    a2 = v181;
    v13 = 1;
  }
  v15 = *((unsigned __int16 *)a2 + 1);
  v16 = v15;
  LOBYTE(v15) = (v15 & 0x40) != 0;
  v17 = v16 >> 7;
  v141 = v15;
  v114 = v17;
  if ( v134 || v17 )
  {
    LOBYTE(v13) = v17;
    result = RtlpGetDefaultsSubjectContext(
               (_DWORD)v134,
               v13,
               (unsigned int)&v164,
               (unsigned int)&v167,
               (__int64)&v168,
               (__int64)&v169,
               (__int64)&v165,
               (__int64)&v166,
               (__int64)&v170);
    LODWORD(v18) = 0;
    if ( (int)result < 0 )
      return result;
    v11 = *v164;
    v12 = *v167;
    v144 = *v168;
    v160 = *v165;
    v158 = *v166;
    if ( v169 )
      v142 = (void *)*v169;
    else
      v142 = 0LL;
    v17 = v114;
    if ( v170 )
    {
      v19 = *v170;
      v150 = *v170;
    }
    else
    {
      v19 = 0LL;
      v150 = 0LL;
    }
  }
  else
  {
    v19 = 0LL;
    LODWORD(v18) = 0;
  }
  v20 = *((_WORD *)a2 + 1);
  v21 = v20 & 0x8000;
  if ( (v20 & 0x8000u) == 0 )
  {
    v18 = (_BYTE *)*((_QWORD *)a2 + 1);
  }
  else
  {
    if ( !*((_DWORD *)a2 + 1) )
      goto LABEL_164;
    v18 = &a2[*((unsigned int *)a2 + 1)];
  }
  v135 = v18;
  if ( v18 )
  {
    v119 = 1;
LABEL_17:
    v22 = v139;
    goto LABEL_18;
  }
LABEL_164:
  if ( (a7 & 0x20) == 0 )
  {
    v94 = v11;
    if ( v17 )
      v94 = v142;
    v135 = v94;
    if ( v94 )
      goto LABEL_17;
    v36 = -1073741700;
LABEL_281:
    Acl = v36;
    goto LABEL_282;
  }
  v22 = v139;
  if ( !v139 )
    goto LABEL_280;
  if ( *(__int16 *)(v139 + 2) < 0 )
  {
    if ( *(_DWORD *)(v139 + 4) != (_DWORD)v18 )
    {
      v103 = (void *)(v139 + *(unsigned int *)(v139 + 4));
      goto LABEL_276;
    }
LABEL_280:
    v36 = -1073741734;
    goto LABEL_281;
  }
  v103 = *(void **)(v139 + 8);
LABEL_276:
  v135 = v103;
  v119 = 1;
  if ( !v103 )
    goto LABEL_280;
LABEL_18:
  if ( v21 )
  {
    if ( !*((_DWORD *)a2 + 2) )
      goto LABEL_159;
    v23 = &a2[*((unsigned int *)a2 + 2)];
  }
  else
  {
    v23 = (_BYTE *)*((_QWORD *)a2 + 2);
  }
  v138 = v23;
  if ( !v23 )
  {
LABEL_159:
    if ( (a7 & 0x40) != 0 )
    {
      if ( !v22 )
        goto LABEL_284;
      if ( *(__int16 *)(v22 + 2) >= 0 )
      {
        v93 = *(void **)(v22 + 16);
      }
      else
      {
        if ( !*(_DWORD *)(v22 + 8) )
          goto LABEL_284;
        v93 = (void *)(v22 + *(unsigned int *)(v22 + 8));
      }
    }
    else
    {
      v93 = v12;
      if ( v17 )
        v93 = (void *)v19;
    }
    v138 = v93;
    if ( v93 )
      goto LABEL_22;
LABEL_284:
    v36 = -1073741733;
    Acl = -1073741733;
    goto LABEL_282;
  }
LABEL_22:
  v24 = v20;
  v130[0] = a7 & 4;
  v25 = a7 & 2;
  v117 = v25;
  v26 = v25 != 0;
  v27 = v20 & 0x10;
  v28 = (unsigned __int8)v20;
  v29 = v27 != 0 ? 4 : 0;
  v30 = (v20 >> 1) & 0x1000;
  v31 = (v28 >> 2) & 8;
  v32 = (v24 >> 1) & 0x400;
  if ( v27 == (_WORD)v171 )
    goto LABEL_23;
  if ( !v21 )
  {
    v33 = (unsigned __int8 *)*((_QWORD *)a2 + 3);
    goto LABEL_24;
  }
  if ( !*((_DWORD *)a2 + 3) )
LABEL_23:
    v33 = 0LL;
  else
    v33 = &a2[*((unsigned int *)a2 + 3)];
LABEL_24:
  if ( !v139 || (*(_BYTE *)(v139 + 2) & 0x10) == 0 )
  {
LABEL_173:
    v34 = 0LL;
    goto LABEL_29;
  }
  v25 = v117;
  if ( *(__int16 *)(v139 + 2) < 0 )
  {
    if ( *(_DWORD *)(v139 + 12) )
    {
      v34 = (_BYTE *)(v139 + *(unsigned int *)(v139 + 12));
      goto LABEL_29;
    }
    goto LABEL_173;
  }
  v34 = *(_BYTE **)(v139 + 24);
LABEL_29:
  v35 = RtlpInheritAcl(
          v34,
          v33,
          v29 | v31 | v32 | (unsigned int)v30,
          a6,
          v26,
          (a7 & 4) != 0,
          (__int64)v135,
          (__int64)v138,
          (__int64)v142,
          v150,
          v143,
          2,
          v153,
          a5,
          (__int64 *)&v130[1],
          &v112,
          &v133);
  Acl = v35;
  v36 = v35;
  if ( v35 < 0 )
  {
    if ( v35 == -2147483637 )
    {
      v37 = *((_WORD *)a2 + 1);
      v38 = 0x8000;
      if ( v25 )
        v38 = 34816;
      v121 = v38;
      if ( (v37 & 0x30) != 0x30 )
        goto LABEL_34;
      if ( (v37 & 0x10) != 0 )
      {
        if ( (v37 & 0x8000) == 0 )
        {
          v39 = (_BYTE *)*((_QWORD *)a2 + 3);
          goto LABEL_293;
        }
        if ( *((_DWORD *)a2 + 3) )
        {
          v39 = &a2[*((unsigned int *)a2 + 3)];
LABEL_293:
          *(_QWORD *)&v130[1] = v39;
          v122 = v39;
          goto LABEL_294;
        }
      }
      v39 = 0LL;
      v122 = 0LL;
      *(_QWORD *)&v130[1] = 0LL;
LABEL_294:
      v112 = 1;
      v121 = v37 & 0x2000 | 0x10 | v38;
      goto LABEL_35;
    }
LABEL_282:
    v39 = *(_BYTE **)&v130[1];
    goto LABEL_143;
  }
  v115 = 1;
  v121 = (4 * (v133 & 4)) | (4 * (v133 & 8)) | (2 * (v133 & 0x400)) | (2 * (v133 & 0x1000)) | 0x8010;
LABEL_34:
  v39 = *(_BYTE **)&v130[1];
  v122 = *(void **)&v130[1];
LABEL_35:
  v40 = *((_WORD *)a2 + 1);
  v41 = ((unsigned __int8)v40 >> 2) & 8;
  if ( (v40 & 0x10) == (_WORD)v171 )
    goto LABEL_36;
  if ( v40 >= 0 )
  {
    v42 = (unsigned __int8 *)*((_QWORD *)a2 + 3);
    goto LABEL_37;
  }
  if ( !*((_DWORD *)a2 + 3) )
LABEL_36:
    v42 = 0LL;
  else
    v42 = &a2[*((unsigned int *)a2 + 3)];
LABEL_37:
  if ( !v139 || (*(_BYTE *)(v139 + 2) & 0x10) == 0 )
  {
LABEL_174:
    v43 = 0LL;
    goto LABEL_42;
  }
  v39 = v122;
  if ( *(__int16 *)(v139 + 2) < 0 )
  {
    if ( *(_DWORD *)(v139 + 12) )
    {
      v43 = (_BYTE *)(v139 + *(unsigned int *)(v139 + 12));
      goto LABEL_42;
    }
    goto LABEL_174;
  }
  v43 = *(_BYTE **)(v139 + 24);
LABEL_42:
  v44 = RtlpInheritAcl(
          v43,
          v42,
          ((*((_WORD *)a2 + 1) & 0x10) != 0 ? 4 : 0) | v41 & 0xFFFFEFFF | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x400,
          a6,
          v117 != 0,
          v130[0] != 0,
          (__int64)v135,
          (__int64)v138,
          (__int64)v142,
          v150,
          v143,
          2,
          v153,
          a5,
          (__int64 *)&v140,
          &v131,
          (int *)&v148);
  Acl = v44;
  v36 = v44;
  if ( v44 >= 0 )
  {
    v126 = 1;
  }
  else
  {
    if ( v44 != -2147483637 )
      goto LABEL_143;
    if ( (a2[2] & 0x30) != 0x30 )
      goto LABEL_45;
    if ( (a2[2] & 0x10) != 0 )
    {
      if ( (*((_WORD *)a2 + 1) & 0x8000) == 0 )
      {
        v104 = (unsigned __int8 *)*((_QWORD *)a2 + 3);
        goto LABEL_302;
      }
      if ( *((_DWORD *)a2 + 3) )
      {
        v104 = &a2[*((unsigned int *)a2 + 3)];
LABEL_302:
        v140 = v104;
        goto LABEL_45;
      }
    }
    v140 = 0LL;
  }
LABEL_45:
  v117 = 0;
  do
  {
    if ( (a2[2] & 0x10) == 0 )
    {
LABEL_47:
      v45 = 0LL;
      goto LABEL_48;
    }
    if ( (*((_WORD *)a2 + 1) & 0x8000) != 0 )
    {
      if ( !*((_DWORD *)a2 + 3) )
        goto LABEL_47;
      v45 = &a2[*((unsigned int *)a2 + 3)];
    }
    else
    {
      v45 = (_BYTE *)*((_QWORD *)a2 + 3);
    }
LABEL_48:
    AceByType = RtlFindAceByType(v45, 20LL, &v117);
    v48 = AceByType + 8;
    if ( !AceByType )
      v48 = 0LL;
    if ( v48 && !(unsigned __int8)RtlpValidTrustSubjectContext(v158, v48, v47, &Acl) )
    {
      v36 = -1073741790;
      goto LABEL_306;
    }
    ++v117;
  }
  while ( AceByType );
  if ( (a7 & 0x800) == 0 )
  {
LABEL_53:
    v161 = v140;
    goto LABEL_54;
  }
  v117 = 0;
  while ( 2 )
  {
    if ( (a2[2] & 0x10) == 0 )
      goto LABEL_312;
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v105 = (_BYTE *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        v105 = &a2[*((unsigned int *)a2 + 3)];
        goto LABEL_314;
      }
LABEL_312:
      v105 = 0LL;
    }
LABEL_314:
    v106 = RtlFindAceByType(v105, 20LL, &v117);
    ++v117;
    if ( v106 )
    {
      if ( (*(_BYTE *)(v106 + 1) & 8) == 0 )
      {
        v107 = *(_DWORD *)(v106 + 4);
        v117 = *(unsigned __int8 *)(v106 + 1);
        v158 = v106 + 8;
        if ( !v162 || (v107 & *(_DWORD *)(v162 + 4)) != v107 || v106 == -8 )
        {
          v36 = -1073741811;
          goto LABEL_141;
        }
        goto LABEL_324;
      }
      continue;
    }
    break;
  }
  if ( !v158 )
    goto LABEL_53;
  if ( !v162 )
  {
    v36 = -1073741811;
    goto LABEL_306;
  }
  v107 = *(_DWORD *)(v162 + 4);
  v117 = 0;
LABEL_324:
  Acl = RtlCreateAcl((__int64)v191, 0x58u, 2);
  v36 = Acl;
  if ( Acl < 0 )
    goto LABEL_142;
  Acl = RtlAddProcessTrustLabelAce((unsigned int)v191, 2, v117, v158, 20, v107);
  v36 = Acl;
  if ( Acl < 0 )
    goto LABEL_142;
  Acl = RtlpComputeMergedAcl(
          (_DWORD)v140,
          ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 4 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x400 | ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 8u,
          (unsigned int)v191,
          4,
          (__int64)v135,
          (__int64)v138,
          v143,
          2,
          (__int64)&v161,
          (__int64)&v133);
  v36 = Acl;
  if ( Acl < 0 )
    goto LABEL_142;
  v127 = 1;
LABEL_54:
  v49 = (a7 & 0x100) != 0;
  if ( (a7 & 0x200) != 0 )
    v49 |= 2u;
  if ( (a7 & 0x400) != 0 )
    v49 |= 4u;
  if ( v49 )
  {
    v51 = v159;
    v52 = v159;
    v53 = v159;
  }
  else
  {
    if ( (a2[2] & 0x10) == 0 )
      goto LABEL_60;
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v50 = (_BYTE *)*((_QWORD *)a2 + 3);
    }
    else if ( *((_DWORD *)a2 + 3) )
    {
      v50 = &a2[*((unsigned int *)a2 + 3)];
    }
    else
    {
LABEL_60:
      v50 = 0LL;
    }
    v51 = RtlFindAceByType(v50, 17LL, 0LL);
    v159 = v51;
    if ( v51 )
    {
      v52 = *(_BYTE *)(v51 + 1);
      v53 = v51 + 8;
      v49 = *(_DWORD *)(v51 + 4);
      v149 = v51 + 8;
      v113 = v52;
      if ( v52 == 8 || (v52 & 0x10) != 0 )
      {
        v51 = 0LL;
        v53 = 0LL;
        v52 = 0;
        v159 = 0LL;
        v149 = 0LL;
        v49 = 0;
        v113 = 0;
      }
    }
    else
    {
      v52 = 0;
      v53 = 0LL;
    }
  }
  if ( (v52 & 8) != 0 && *(_DWORD *)(v160 + 8) < 0x2000u )
  {
    v36 = -1073740730;
    goto LABEL_141;
  }
  if ( v49 )
  {
LABEL_212:
    if ( v51 )
      goto LABEL_67;
    if ( v134 )
    {
      v53 = v160;
      v149 = v160;
      v113 = 0;
      goto LABEL_67;
    }
    v36 = -1073741700;
LABEL_141:
    Acl = v36;
    goto LABEL_142;
  }
  if ( v160 && *(_DWORD *)(v160 + 8) < 0x2000u )
  {
    v49 = 1;
    goto LABEL_212;
  }
LABEL_67:
  if ( !v53 )
  {
    v54 = 0LL;
    v172 = 0LL;
    goto LABEL_69;
  }
  Acl = RtlCreateAcl((__int64)v192, 0x80u, 2);
  v36 = Acl;
  if ( Acl < 0 )
    goto LABEL_142;
  Acl = RtlAddMandatoryAce((unsigned int)v192, 2, v113, v149, 17, v49);
  v36 = Acl;
  if ( Acl < 0 )
    goto LABEL_142;
  v54 = v192;
LABEL_69:
  if ( (a7 & 0x700) != 0 )
  {
    v55 = 4;
  }
  else if ( !v159 && v54 )
  {
    v55 = 0;
  }
  else
  {
    v55 = ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 4 | ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 8 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x1400;
  }
  if ( !v139 || (*(_BYTE *)(v139 + 2) & 0x10) == 0 )
    goto LABEL_175;
  if ( *(__int16 *)(v139 + 2) >= 0 )
  {
    v56 = *(_BYTE **)(v139 + 24);
  }
  else
  {
    if ( *(_DWORD *)(v139 + 12) )
    {
      v56 = (_BYTE *)(v139 + *(unsigned int *)(v139 + 12));
      goto LABEL_78;
    }
LABEL_175:
    v56 = 0LL;
  }
LABEL_78:
  v57 = RtlpInheritAcl(
          v56,
          v54,
          v55,
          a6,
          1,
          0,
          (__int64)v135,
          (__int64)v138,
          (__int64)v142,
          v150,
          v143,
          3,
          v153,
          a5,
          (__int64 *)&v157,
          v132,
          &v133);
  Acl = v57;
  v36 = v57;
  if ( v57 != -2147483637 )
  {
    if ( v57 >= 0 )
    {
      v58 = v157;
      v59 = v133;
      goto LABEL_80;
    }
    goto LABEL_142;
  }
  v58 = v54;
  v59 = 0;
  v133 = 0;
LABEL_80:
  v157 = v58;
  v36 = RtlpCombineAcls((unsigned __int8 *)v122, v58, v140, v140, v161, (__int64 *)&v173, &v129);
  Acl = v36;
  v148 = ((v121 & 0x2000) << 17) | v129;
  if ( v157 && v157 != v172 )
    RtlFreeHeap(ProcessHeap, 0LL, v157);
  if ( v36 < 0 )
    goto LABEL_142;
  v60 = v173;
  if ( v173 )
  {
    if ( v115 && v122 )
      RtlFreeHeap(ProcessHeap, 0LL, v122);
    v122 = v60;
    *(_QWORD *)&v130[1] = v60;
    v125 = 1;
    v121 |= (4 * (v59 & 4)) | (4 * (v59 & 8)) | (2 * (v59 & 0x400)) | (2 * (v59 & 0x1000)) | 0x10;
  }
  v39 = v122;
  v117 = a7 & 8;
  if ( (a7 & 8) != 0 || ((v95 = RtlFindAceByType(v122, 17LL, 0LL)) != 0 ? (v96 = v95 + 8) : (v96 = v149), !v96) )
  {
LABEL_84:
    v61 = *((_WORD *)a2 + 1);
    v129 = a7 & 1;
    if ( (v61 & 4) == 0 )
      goto LABEL_184;
    if ( (v61 & 0x8000) == 0 )
    {
      v62 = (unsigned __int8 *)*((_QWORD *)a2 + 4);
      goto LABEL_88;
    }
    if ( *((_DWORD *)a2 + 4) )
      v62 = &a2[*((unsigned int *)a2 + 4)];
    else
LABEL_184:
      v62 = 0LL;
LABEL_88:
    if ( v139 && (*(_BYTE *)(v139 + 2) & 4) != 0 )
    {
      if ( (*(_WORD *)(v139 + 2) & 0x8000) == 0 )
      {
        v63 = *(_BYTE **)(v139 + 32);
LABEL_93:
        v64 = RtlpInheritAcl(
                v63,
                v62,
                v61 & 0x140C,
                a6,
                (a7 & 1) != 0,
                v130[0] != 0,
                (__int64)v135,
                (__int64)v138,
                (__int64)v142,
                v150,
                v143,
                1,
                v153,
                a5,
                (__int64 *)&Src,
                v120,
                &v133);
        Acl = v64;
        v36 = v64;
        if ( v64 >= 0 )
        {
          v116 = 1;
          v121 |= v133 & 0x1408 | 4;
LABEL_95:
          v65 = 1;
          goto LABEL_96;
        }
        if ( v64 != -2147483637 )
          goto LABEL_142;
        v100 = v121;
        if ( v129 )
        {
          v100 = v121 | 0x400;
          v121 |= 0x400u;
        }
        v101 = *((_WORD *)a2 + 1);
        if ( (v101 & 0xC) != 0xC )
        {
          if ( v144 )
          {
            Src = (void *)v144;
            v121 = v100 | 4;
          }
          goto LABEL_95;
        }
        if ( (v101 & 4) != 0 )
        {
          if ( v101 >= 0 )
          {
            v108 = (_BYTE *)*((_QWORD *)a2 + 4);
            goto LABEL_342;
          }
          if ( *((_DWORD *)a2 + 4) )
          {
            v108 = &a2[*((unsigned int *)a2 + 4)];
LABEL_342:
            Src = v108;
            goto LABEL_343;
          }
        }
        Src = 0LL;
LABEL_343:
        v121 = v101 & 0x1000 | 4 | v100;
        v65 = 1;
        v120[0] = 1;
LABEL_96:
        v66 = v134;
        if ( (a7 & 0x1000) != 0 || !v128 || !v134 || !v139 )
        {
LABEL_107:
          if ( !Src && v129 )
            v121 |= 0x1000u;
          v70 = !v148 || (v148 & 0xB0) != v148;
          v71 = v117;
          if ( v112 && !v117 && v70 )
          {
            if ( !v66 )
              goto LABEL_334;
            v182 = 1;
            v183 = 1;
            v144 = 8LL;
            v184 = 8LL;
            v185 = 0;
            Acl = ZwPrivilegeCheck(v66, &v182, &v118);
            v36 = Acl;
            if ( Acl < 0 )
              goto LABEL_142;
            if ( !v118 )
              goto LABEL_353;
          }
          if ( !(_BYTE)v147 )
          {
            v72 = v134;
            goto LABEL_113;
          }
          v109 = v71 == 0;
          v72 = v134;
          if ( !v109 )
          {
LABEL_113:
            if ( v119 && (a7 & 0x10) == 0 )
            {
              if ( !v72 )
                goto LABEL_334;
              v73 = v114;
              v74 = (unsigned __int8 *)v135;
              if ( !RtlpValidOwnerSubjectContext(v134, (__int64)v135, v114, &Size_4) )
              {
                v36 = Size_4;
LABEL_306:
                Acl = v36;
                goto LABEL_143;
              }
            }
            else
            {
              v73 = v114;
              v74 = (unsigned __int8 *)v135;
            }
            if ( v120[0] && v73 )
            {
              v110 = Src;
              LOBYTE(v65) = v141;
              Acl = RtlpCreateServerAcl((_DWORD)Src, v65, (_DWORD)v142, (unsigned int)&v155, (__int64)&v124);
              v36 = Acl;
              if ( Acl < 0 )
                goto LABEL_142;
              if ( v116 && v110 )
                RtlFreeHeap(ProcessHeap, 0LL, v110);
              Src = v155;
              v155 = 0LL;
            }
            v75 = 4 * v74[1] + 11;
            Size = 4 * v74[1] + 8;
            v76 = v75 & 0xFFFFFFFC;
            v152 = v76;
            if ( v138 )
            {
              v130[0] = 4 * *((unsigned __int8 *)v138 + 1) + 8;
              v77 = (v130[0] + 3) & 0xFFFFFFFC;
            }
            else
            {
              v130[0] = 0;
              v77 = 0;
            }
            v78 = v121;
            v129 = v77;
            v141 = v121 & 0x10;
            if ( (v121 & 0x10) != 0 && v122 )
              v79 = (*((unsigned __int16 *)v122 + 1) + 3) & 0xFFFFFFFC;
            else
              v79 = 0;
            Size_4 = v121 & 4;
            if ( (v121 & 4) != 0 && Src )
              v80 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
            else
              v80 = 0;
            v137 = v80;
            Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, v77 + v80 + v79 + v76 + 20);
            v151 = (_DWORD *)Heap;
            v82 = (_DWORD *)Heap;
            if ( Heap )
            {
              *(_QWORD *)Heap = 0LL;
              *(_QWORD *)(Heap + 8) = 0LL;
              *(_DWORD *)(Heap + 16) = 0;
              *(_WORD *)(Heap + 2) |= v78;
              v83 = (char *)(Heap + 20);
              *(_BYTE *)Heap = 1;
              if ( v141 )
              {
                v98 = (unsigned __int16 *)v122;
                if ( v122 )
                {
                  memmove(v83, v122, *((unsigned __int16 *)v122 + 1));
                  if ( !v115 )
                    RtlpApplyAclToObject((__int64)v83, v143);
                  v82 = v151;
                  v151[3] = (_DWORD)v83 - (_DWORD)v151;
                  v99 = v98[1];
                  if ( v79 > (unsigned int)v99 )
                  {
                    memset(&v83[v99], 0, v79 - (unsigned int)v99);
                    v82 = v151;
                  }
                  v83 += v79;
                }
                else
                {
                  *(_DWORD *)(Heap + 12) = 0;
                }
              }
              if ( Size_4 )
              {
                v84 = (unsigned __int16 *)Src;
                if ( Src )
                {
                  memmove(v83, Src, *((unsigned __int16 *)Src + 1));
                  if ( !v116 )
                    RtlpApplyAclToObject((__int64)v83, v143);
                  v151[4] = (_DWORD)v83 - (_DWORD)v151;
                  v85 = v84[1];
                  v86 = v137;
                  if ( v137 > (unsigned int)v85 )
                    memset(&v83[v85], 0, v137 - (unsigned int)v85);
                  v83 += v86;
                }
                else
                {
                  v82[4] = 0;
                }
              }
              v87 = Size;
              memmove(v83, v135, Size);
              v88 = v152;
              if ( v152 > (unsigned int)v87 )
                memset(&v83[v87], 0, v152 - (unsigned int)v87);
              v89 = (_DWORD)v83 - (_DWORD)v151;
              v90 = &v83[v88];
              v151[1] = v89;
              if ( v138 )
              {
                v91 = v130[0];
                memmove(v90, v138, v130[0]);
                if ( v129 > (unsigned int)v91 )
                  memset(&v90[v91], 0, v129 - (unsigned int)v91);
                v151[2] = (_DWORD)v90 - (_DWORD)v151;
              }
              v36 = 0;
            }
            else
            {
              v36 = -1073741801;
            }
            goto LABEL_141;
          }
          if ( !v134 )
            goto LABEL_334;
          v144 = 32LL;
          v182 = 1;
          v183 = 1;
          v184 = 32LL;
          v185 = 0;
          Acl = ZwPrivilegeCheck(v134, &v182, &v118);
          v36 = Acl;
          if ( Acl >= 0 )
          {
            if ( !v118 )
            {
LABEL_353:
              v36 = -1073741727;
              goto LABEL_306;
            }
            goto LABEL_113;
          }
LABEL_142:
          v39 = v122;
          goto LABEL_143;
        }
        v67 = v143;
        v152 = 0;
        v130[0] = 0;
        Acl = RtlpNewSecurityObject(v139, 0, (unsigned int)&v154, v153, a5, a6, a7 | 1u, (__int64)v134, v143, v162);
        v36 = Acl;
        if ( Acl < 0 )
          goto LABEL_142;
        if ( (*(_BYTE *)(v154 + 2) & 4) == 0 )
          goto LABEL_344;
        if ( *(__int16 *)(v154 + 2) >= 0 )
        {
          v69 = *(_QWORD *)(v154 + 32);
          goto LABEL_105;
        }
        if ( *(_DWORD *)(v154 + 16) )
          v69 = v154 + *(unsigned int *)(v154 + 16);
        else
LABEL_344:
          v69 = 0LL;
LABEL_105:
        if ( RtlpOwnerAcesPresent(0x10u, v69, v68) )
        {
          Handle = 0LL;
          Size = 20;
          if ( (_BYTE)v137 != 1 )
            goto LABEL_266;
          v187 = 1;
          v186[1] = 2;
          v180 = v186;
          v186[0] = 12;
          v175 = 48;
          v176 = 0LL;
          v178 = 0;
          v177 = 0LL;
          v179 = 0LL;
          Acl = NtDuplicateToken(v134, 8LL, &v175);
          v36 = Acl;
          if ( Acl < 0 )
            goto LABEL_142;
          v102 = Handle;
          if ( !Handle )
LABEL_266:
            v102 = v134;
          Acl = ZwAccessCheck(v154, v102, 0x40000LL, v67, &v182, &Size, &v152, v130);
          v36 = Acl;
          if ( Handle )
            NtClose(Handle);
          if ( v36 < 0 )
            goto LABEL_142;
          v36 = v130[0];
          Acl = v130[0];
          if ( v130[0] < 0 )
            goto LABEL_142;
        }
        v66 = v134;
        goto LABEL_107;
      }
      if ( *(_DWORD *)(v139 + 16) )
      {
        v63 = (_BYTE *)(v139 + *(unsigned int *)(v139 + 16));
        goto LABEL_93;
      }
    }
    v63 = 0LL;
    goto LABEL_93;
  }
  if ( !v134 )
  {
LABEL_334:
    v36 = -1073741700;
    goto LABEL_306;
  }
  Acl = RtlSidDominates(v160, v96, &v123);
  v36 = Acl;
  if ( Acl >= 0 )
  {
    v97 = (unsigned __int8)v147;
    if ( !v123 )
      v97 = 1;
    v147 = v97;
    goto LABEL_84;
  }
LABEL_143:
  if ( v154 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v154);
    v39 = *(_BYTE **)&v130[1];
    v36 = Acl;
  }
  if ( v124 && v155 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v155);
    v39 = *(_BYTE **)&v130[1];
    v36 = Acl;
  }
  v92 = ProcessHeap;
  RtlFreeHeap(ProcessHeap, 0LL, v164);
  RtlFreeHeap(v92, 0LL, v165);
  RtlFreeHeap(v92, 0LL, v166);
  RtlFreeHeap(v92, 0LL, v167);
  RtlFreeHeap(v92, 0LL, v168);
  if ( v169 )
    RtlFreeHeap(v92, 0LL, v169);
  if ( v170 )
    RtlFreeHeap(v92, 0LL, v170);
  if ( (v125 || v115) && v39 )
    RtlFreeHeap(v92, 0LL, v39);
  if ( v126 && v140 )
    RtlFreeHeap(v92, 0LL, v140);
  if ( v161 && v127 )
    RtlFreeHeap(v92, 0LL, v161);
  if ( v116 )
  {
    if ( Src )
      RtlFreeHeap(v92, 0LL, Src);
  }
  *v174 = v151;
  return (unsigned int)v36;
}
