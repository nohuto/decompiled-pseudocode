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
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // r8d
  int v36; // eax
  int v37; // ebx
  __int16 v38; // cx
  int v39; // edx
  _BYTE *v40; // rdi
  unsigned __int16 v41; // dx
  int v42; // eax
  int v43; // r9d
  int v44; // r10d
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // eax
  _BYTE *v48; // rcx
  __int64 AceByType; // rbx
  __int64 v50; // r8
  int v51; // r9d
  __int64 v52; // rdx
  int v53; // edi
  _BYTE *v54; // rcx
  __int64 v55; // rax
  unsigned __int8 v56; // cl
  __int64 v57; // rdx
  _BYTE *v58; // rdi
  int v59; // r10d
  __int64 v60; // rcx
  int v61; // eax
  unsigned __int64 v62; // rdx
  __int16 v63; // di
  int v64; // r9d
  void *v65; // rbx
  __int16 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rcx
  int v69; // eax
  int v70; // edx
  void *v71; // r9
  __int64 v72; // rsi
  __int64 v73; // rdx
  bool v74; // al
  int v75; // esi
  void *v76; // rsi
  char v77; // bl
  unsigned __int8 *v78; // rsi
  int v79; // r9d
  unsigned int v80; // r9d
  unsigned int v81; // r8d
  __int16 v82; // bx
  unsigned int v83; // esi
  unsigned int v84; // ecx
  __int64 Heap; // rax
  _DWORD *v86; // rdx
  char *v87; // rbx
  unsigned __int16 *v88; // rdi
  __int64 v89; // rcx
  __int64 v90; // rdi
  __int64 v91; // rsi
  __int64 v92; // rdi
  int v93; // eax
  char *v94; // rbx
  __int64 v95; // rdi
  __int64 v96; // rsi
  void *v97; // rcx
  void *v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // eax
  unsigned __int16 *v102; // rdi
  __int64 v103; // rcx
  int v104; // edx
  __int16 v105; // cx
  HANDLE v106; // rdx
  void *v107; // rcx
  unsigned __int64 v108; // rax
  _BYTE *v109; // rcx
  __int64 v110; // rax
  int v111; // edi
  _BYTE *v112; // rax
  bool v113; // zf
  void *v114; // rdi
  int Acl; // [rsp+90h] [rbp-80h] BYREF
  char v116; // [rsp+94h] [rbp-7Ch] BYREF
  unsigned __int8 v117; // [rsp+95h] [rbp-7Bh]
  char v118; // [rsp+96h] [rbp-7Ah]
  char v119; // [rsp+97h] [rbp-79h]
  char v120; // [rsp+98h] [rbp-78h]
  int v121; // [rsp+9Ch] [rbp-74h] BYREF
  char v122; // [rsp+A0h] [rbp-70h] BYREF
  char v123; // [rsp+A1h] [rbp-6Fh]
  int v124; // [rsp+A4h] [rbp-6Ch]
  char v125[8]; // [rsp+A8h] [rbp-68h] BYREF
  void *v126; // [rsp+B0h] [rbp-60h]
  char v127; // [rsp+B8h] [rbp-58h] BYREF
  char v128; // [rsp+B9h] [rbp-57h]
  char v129; // [rsp+BAh] [rbp-56h]
  char v130; // [rsp+BBh] [rbp-55h]
  char v131; // [rsp+BCh] [rbp-54h]
  char v132[3]; // [rsp+BDh] [rbp-53h] BYREF
  unsigned int v133; // [rsp+C0h] [rbp-50h] BYREF
  _DWORD v134[3]; // [rsp+C4h] [rbp-4Ch] BYREF
  char v135[4]; // [rsp+D0h] [rbp-40h] BYREF
  int v136; // [rsp+D4h] [rbp-3Ch] BYREF
  char v137[8]; // [rsp+D8h] [rbp-38h] BYREF
  void *v138; // [rsp+E0h] [rbp-30h]
  void *v139; // [rsp+E8h] [rbp-28h]
  void *Src; // [rsp+F0h] [rbp-20h] BYREF
  unsigned int v141; // [rsp+F8h] [rbp-18h]
  void *v142; // [rsp+100h] [rbp-10h]
  __int64 v143; // [rsp+108h] [rbp-8h]
  unsigned __int64 v144; // [rsp+110h] [rbp+0h] BYREF
  int v145; // [rsp+118h] [rbp+8h]
  __int64 v146; // [rsp+120h] [rbp+10h]
  void *v147; // [rsp+128h] [rbp+18h]
  __int64 v148; // [rsp+130h] [rbp+20h]
  __int64 v149; // [rsp+138h] [rbp+28h]
  __int64 v150; // [rsp+140h] [rbp+30h]
  int v151; // [rsp+148h] [rbp+38h] BYREF
  int v152; // [rsp+14Ch] [rbp+3Ch]
  unsigned int v153; // [rsp+150h] [rbp+40h] BYREF
  _DWORD *v154; // [rsp+158h] [rbp+48h]
  int v155; // [rsp+160h] [rbp+50h] BYREF
  _DWORD Size[3]; // [rsp+164h] [rbp+54h] BYREF
  void *ProcessHeap; // [rsp+170h] [rbp+60h]
  _BYTE *v158; // [rsp+178h] [rbp+68h] BYREF
  unsigned __int64 v159; // [rsp+180h] [rbp+70h] BYREF
  void *v160; // [rsp+188h] [rbp+78h] BYREF
  __int64 v161; // [rsp+190h] [rbp+80h]
  __int64 v162; // [rsp+198h] [rbp+88h]
  __int64 v163; // [rsp+1A0h] [rbp+90h]
  unsigned __int64 v164; // [rsp+1A8h] [rbp+98h] BYREF
  __int64 v165; // [rsp+1B0h] [rbp+A0h]
  __int64 *v166; // [rsp+1B8h] [rbp+A8h] BYREF
  __int64 *v167; // [rsp+1C0h] [rbp+B0h] BYREF
  __int64 *v168; // [rsp+1C8h] [rbp+B8h] BYREF
  __int64 *v169; // [rsp+1D0h] [rbp+C0h] BYREF
  void **v170; // [rsp+1D8h] [rbp+C8h] BYREF
  HANDLE Handle; // [rsp+1E0h] [rbp+D0h]
  void **v172; // [rsp+1E8h] [rbp+D8h] BYREF
  __int64 *v173; // [rsp+1F0h] [rbp+E0h] BYREF
  void *v174; // [rsp+1F8h] [rbp+E8h] BYREF
  __int64 v175; // [rsp+200h] [rbp+F0h]
  _BYTE *v176; // [rsp+208h] [rbp+F8h]
  _QWORD *v177; // [rsp+210h] [rbp+100h]
  int v178; // [rsp+218h] [rbp+108h] BYREF
  __int64 v179; // [rsp+220h] [rbp+110h]
  __int64 v180; // [rsp+228h] [rbp+118h]
  int v181; // [rsp+230h] [rbp+120h]
  __int64 v182; // [rsp+238h] [rbp+128h]
  _DWORD *v183; // [rsp+240h] [rbp+130h]
  _BYTE v184[40]; // [rsp+248h] [rbp+138h] BYREF
  int v185; // [rsp+270h] [rbp+160h] BYREF
  int v186; // [rsp+274h] [rbp+164h]
  __int64 v187; // [rsp+278h] [rbp+168h]
  int v188; // [rsp+280h] [rbp+170h]
  _DWORD v189[2]; // [rsp+288h] [rbp+178h] BYREF
  __int16 v190; // [rsp+290h] [rbp+180h]
  char v191[24]; // [rsp+298h] [rbp+188h] BYREF
  unsigned int v192; // [rsp+2B0h] [rbp+1A0h]
  int v193; // [rsp+2B4h] [rbp+1A4h]
  _BYTE v194[96]; // [rsp+2D0h] [rbp+1C0h] BYREF
  _BYTE v195[128]; // [rsp+330h] [rbp+220h] BYREF

  v148 = a9;
  v165 = a10;
  v177 = a3;
  v159 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v143 = a1;
  v176 = v195;
  v13 = 1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  *(_QWORD *)&Size[1] = a4;
  v138 = a8;
  v175 = 0LL;
  *(_QWORD *)&v134[1] = 0LL;
  v144 = 0LL;
  v120 = 0;
  v129 = 0;
  v130 = 0;
  v133 = 0;
  Src = 0LL;
  v160 = 0LL;
  v119 = 0;
  v123 = 0;
  v116 = 0;
  v135[0] = 0;
  v137[0] = 0;
  v125[0] = 0;
  LOBYTE(v152) = 0;
  v127 = 0;
  v163 = 0LL;
  v161 = 0LL;
  v147 = 0LL;
  v149 = 0LL;
  v146 = 0LL;
  v154 = 0LL;
  v151 = 0;
  v162 = 0LL;
  v150 = 0LL;
  v158 = 0LL;
  v174 = 0LL;
  v117 = 0;
  v132[0] = 1;
  v164 = 0LL;
  v128 = 0;
  LOBYTE(v141) = 1;
  v170 = 0LL;
  v172 = 0LL;
  v166 = 0LL;
  v173 = 0LL;
  v168 = 0LL;
  v167 = 0LL;
  v169 = 0LL;
  if ( a8 )
  {
    result = NtQueryInformationToken(a8, 10LL, v191);
    if ( (int)result < 0 )
      return result;
    v141 = v192;
    v13 = 1;
    if ( v192 == 2 && v193 < 1 )
      return 3221225637LL;
  }
  if ( a2 )
  {
    v131 = 1;
  }
  else
  {
    v131 = 0;
    RtlCreateSecurityDescriptor(v184, 1LL);
    a2 = v184;
    v13 = 1;
  }
  v15 = *((unsigned __int16 *)a2 + 1);
  v16 = v15;
  LOBYTE(v15) = (v15 & 0x40) != 0;
  v17 = v16 >> 7;
  v145 = v15;
  v118 = v17;
  if ( v138 || v17 )
  {
    LOBYTE(v13) = v17;
    result = RtlpGetDefaultsSubjectContext(
               (_DWORD)v138,
               v13,
               (unsigned int)&v170,
               (unsigned int)&v172,
               (__int64)&v166,
               (__int64)&v167,
               (__int64)&v173,
               (__int64)&v168,
               (__int64)&v169);
    LODWORD(v18) = 0;
    if ( (int)result < 0 )
      return result;
    v11 = *v170;
    v12 = *v172;
    v146 = *v166;
    v163 = *v173;
    v161 = *v168;
    if ( v167 )
      v147 = (void *)*v167;
    else
      v147 = 0LL;
    v17 = v118;
    if ( v169 )
    {
      v19 = *v169;
      v149 = *v169;
    }
    else
    {
      v19 = 0LL;
      v149 = 0LL;
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
      goto LABEL_168;
    v18 = &a2[*((unsigned int *)a2 + 1)];
  }
  v139 = v18;
  if ( v18 )
  {
    v123 = 1;
LABEL_18:
    v22 = v143;
    goto LABEL_19;
  }
LABEL_168:
  if ( (a7 & 0x20) == 0 )
  {
    v98 = v11;
    if ( v17 )
      v98 = v147;
    v139 = v98;
    if ( v98 )
      goto LABEL_18;
    v37 = -1073741700;
LABEL_281:
    Acl = v37;
    goto LABEL_282;
  }
  v22 = v143;
  if ( !v143 )
    goto LABEL_280;
  if ( *(__int16 *)(v143 + 2) < 0 )
  {
    if ( *(_DWORD *)(v143 + 4) != (_DWORD)v18 )
    {
      v107 = (void *)(v143 + *(unsigned int *)(v143 + 4));
      goto LABEL_275;
    }
LABEL_280:
    v37 = -1073741734;
    goto LABEL_281;
  }
  v107 = *(void **)(v143 + 8);
LABEL_275:
  v139 = v107;
  v123 = 1;
  if ( !v107 )
    goto LABEL_280;
LABEL_19:
  if ( v21 )
  {
    if ( !*((_DWORD *)a2 + 2) )
      goto LABEL_163;
    v23 = &a2[*((unsigned int *)a2 + 2)];
  }
  else
  {
    v23 = (_BYTE *)*((_QWORD *)a2 + 2);
  }
  v142 = v23;
  if ( !v23 )
  {
LABEL_163:
    if ( (a7 & 0x40) != 0 )
    {
      if ( !v22 )
        goto LABEL_284;
      if ( *(__int16 *)(v22 + 2) >= 0 )
      {
        v97 = *(void **)(v22 + 16);
      }
      else
      {
        if ( !*(_DWORD *)(v22 + 8) )
          goto LABEL_284;
        v97 = (void *)(v22 + *(unsigned int *)(v22 + 8));
      }
    }
    else
    {
      v97 = v12;
      if ( v17 )
        v97 = (void *)v19;
    }
    v142 = v97;
    if ( v97 )
      goto LABEL_23;
LABEL_284:
    v37 = -1073741733;
    Acl = -1073741733;
    goto LABEL_282;
  }
LABEL_23:
  v24 = v20;
  v134[0] = a7 & 4;
  v25 = a7 & 2;
  v121 = v25;
  v26 = v25 != 0;
  v27 = v20 & 0x10;
  v28 = (unsigned __int8)v20;
  v29 = v27 != 0 ? 4 : 0;
  v30 = (v20 >> 1) & 0x1000;
  v31 = (v28 >> 2) & 8;
  v32 = (v24 >> 1) & 0x400;
  if ( v27 == (_WORD)v175 )
    goto LABEL_24;
  if ( !v21 )
  {
    v33 = *((_QWORD *)a2 + 3);
    goto LABEL_25;
  }
  if ( !*((_DWORD *)a2 + 3) )
LABEL_24:
    LODWORD(v33) = 0;
  else
    LODWORD(v33) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
LABEL_25:
  if ( !v143 || (*(_BYTE *)(v143 + 2) & 0x10) == 0 )
  {
LABEL_160:
    LODWORD(v34) = 0;
    goto LABEL_30;
  }
  v25 = v121;
  if ( *(__int16 *)(v143 + 2) < 0 )
  {
    if ( *(_DWORD *)(v143 + 12) )
    {
      LODWORD(v34) = v143 + *(_DWORD *)(v143 + 12);
      goto LABEL_30;
    }
    goto LABEL_160;
  }
  v34 = *(_QWORD *)(v143 + 24);
LABEL_30:
  v35 = v32 | v30;
  LOBYTE(v32) = a6;
  v36 = RtlpInheritAcl(
          v34,
          v33,
          v29 | v31 | (unsigned int)v35,
          v32,
          v26,
          (a7 & 4) != 0,
          (__int64)v139,
          (__int64)v142,
          (__int64)v147,
          v149,
          v148,
          2,
          *(__int64 *)&Size[1],
          a5,
          (__int64)&v134[1],
          (__int64)&v116,
          (__int64)&v136);
  Acl = v36;
  v37 = v36;
  if ( v36 < 0 )
  {
    if ( v36 == -2147483637 )
    {
      v38 = *((_WORD *)a2 + 1);
      v39 = 0x8000;
      if ( v25 )
        v39 = 34816;
      v124 = v39;
      if ( (v38 & 0x30) != 0x30 )
        goto LABEL_35;
      if ( (v38 & 0x10) != 0 )
      {
        if ( (v38 & 0x8000) == 0 )
        {
          v40 = (_BYTE *)*((_QWORD *)a2 + 3);
          goto LABEL_293;
        }
        if ( *((_DWORD *)a2 + 3) )
        {
          v40 = &a2[*((unsigned int *)a2 + 3)];
LABEL_293:
          *(_QWORD *)&v134[1] = v40;
          v126 = v40;
          goto LABEL_294;
        }
      }
      v40 = 0LL;
      v126 = 0LL;
      *(_QWORD *)&v134[1] = 0LL;
LABEL_294:
      v116 = 1;
      v124 = v38 & 0x2000 | 0x10 | v39;
      goto LABEL_36;
    }
LABEL_282:
    v40 = *(_BYTE **)&v134[1];
    goto LABEL_144;
  }
  v120 = 1;
  v124 = (4 * (v136 & 4)) | (4 * (v136 & 8)) | (2 * (v136 & 0x400)) | (2 * (v136 & 0x1000)) | 0x8010;
LABEL_35:
  v40 = *(_BYTE **)&v134[1];
  v126 = *(void **)&v134[1];
LABEL_36:
  v41 = *((_WORD *)a2 + 1);
  v42 = ((unsigned __int8)v41 >> 2) & 8;
  v43 = (v41 >> 1) & 0x400;
  v44 = (v41 & 0x10) != 0 ? 4 : 0;
  if ( (v41 & 0x10) == (_WORD)v175 )
    goto LABEL_37;
  if ( (v41 & 0x8000u) == 0 )
  {
    v45 = *((_QWORD *)a2 + 3);
    goto LABEL_38;
  }
  if ( !*((_DWORD *)a2 + 3) )
LABEL_37:
    LODWORD(v45) = 0;
  else
    LODWORD(v45) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
LABEL_38:
  if ( !v143 || (*(_BYTE *)(v143 + 2) & 0x10) == 0 )
  {
LABEL_161:
    LODWORD(v46) = 0;
    goto LABEL_43;
  }
  v40 = v126;
  if ( *(__int16 *)(v143 + 2) < 0 )
  {
    if ( *(_DWORD *)(v143 + 12) )
    {
      LODWORD(v46) = v143 + *(_DWORD *)(v143 + 12);
      goto LABEL_43;
    }
    goto LABEL_161;
  }
  v46 = *(_QWORD *)(v143 + 24);
LABEL_43:
  LOBYTE(v43) = a6;
  v47 = RtlpInheritAcl(
          v46,
          v45,
          v44 & 0xFFFFEFFF | v42 & 0xFFFFEFFF | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x400,
          v43,
          v121 != 0,
          v134[0] != 0,
          (__int64)v139,
          (__int64)v142,
          (__int64)v147,
          v149,
          v148,
          2,
          *(__int64 *)&Size[1],
          a5,
          (__int64)&v144,
          (__int64)v135,
          (__int64)&v151);
  Acl = v47;
  v37 = v47;
  if ( v47 >= 0 )
  {
    v129 = 1;
  }
  else
  {
    if ( v47 != -2147483637 )
      goto LABEL_144;
    if ( (a2[2] & 0x30) != 0x30 )
      goto LABEL_46;
    if ( (a2[2] & 0x10) != 0 )
    {
      if ( (*((_WORD *)a2 + 1) & 0x8000) == 0 )
      {
        v108 = *((_QWORD *)a2 + 3);
        goto LABEL_302;
      }
      if ( *((_DWORD *)a2 + 3) )
      {
        v108 = (unsigned __int64)&a2[*((unsigned int *)a2 + 3)];
LABEL_302:
        v144 = v108;
        goto LABEL_46;
      }
    }
    v144 = 0LL;
  }
LABEL_46:
  v121 = 0;
  do
  {
    if ( (a2[2] & 0x10) == 0 )
    {
LABEL_48:
      v48 = 0LL;
      goto LABEL_49;
    }
    if ( (*((_WORD *)a2 + 1) & 0x8000) != 0 )
    {
      if ( !*((_DWORD *)a2 + 3) )
        goto LABEL_48;
      v48 = &a2[*((unsigned int *)a2 + 3)];
    }
    else
    {
      v48 = (_BYTE *)*((_QWORD *)a2 + 3);
    }
LABEL_49:
    AceByType = RtlFindAceByType(v48, 20LL, &v121);
    v52 = AceByType + 8;
    if ( !AceByType )
      v52 = 0LL;
    if ( v52 && !(unsigned __int8)RtlpValidTrustSubjectContext(v161, v52, v50, &Acl) )
    {
      v37 = -1073741790;
      goto LABEL_306;
    }
    ++v121;
  }
  while ( AceByType );
  if ( (a7 & 0x800) == 0 )
  {
LABEL_54:
    v164 = v144;
    goto LABEL_55;
  }
  v121 = 0;
  while ( 2 )
  {
    if ( (a2[2] & 0x10) == 0 )
      goto LABEL_312;
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v109 = (_BYTE *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        v109 = &a2[*((unsigned int *)a2 + 3)];
        goto LABEL_314;
      }
LABEL_312:
      v109 = 0LL;
    }
LABEL_314:
    v110 = RtlFindAceByType(v109, 20LL, &v121);
    ++v121;
    if ( v110 )
    {
      if ( (*(_BYTE *)(v110 + 1) & 8) == 0 )
      {
        v111 = *(_DWORD *)(v110 + 4);
        v121 = *(unsigned __int8 *)(v110 + 1);
        v161 = v110 + 8;
        if ( !v165 || (v111 & *(_DWORD *)(v165 + 4)) != v111 || v110 == -8 )
        {
          v37 = -1073741811;
          goto LABEL_142;
        }
        goto LABEL_324;
      }
      continue;
    }
    break;
  }
  if ( !v161 )
    goto LABEL_54;
  if ( !v165 )
  {
    v37 = -1073741811;
    goto LABEL_306;
  }
  v111 = *(_DWORD *)(v165 + 4);
  v121 = 0;
LABEL_324:
  Acl = RtlCreateAcl(v194, 88LL, 2LL);
  v37 = Acl;
  if ( Acl < 0 )
    goto LABEL_143;
  Acl = RtlAddProcessTrustLabelAce((unsigned int)v194, 2, v121, v161, 20, v111);
  v37 = Acl;
  if ( Acl < 0 )
    goto LABEL_143;
  Acl = RtlpComputeMergedAcl(
          v144,
          ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 4 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x400 | ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 8u,
          (int)v194,
          4,
          (__int64)v139,
          (__int64)v142,
          v148,
          2,
          &v164,
          (__int64)&v136);
  v37 = Acl;
  if ( Acl < 0 )
    goto LABEL_143;
  v128 = 1;
LABEL_55:
  v53 = (a7 & 0x100) != 0;
  if ( (a7 & 0x200) != 0 )
    v53 |= 2u;
  if ( (a7 & 0x400) != 0 )
    v53 |= 4u;
  if ( v53 )
  {
    v55 = v162;
    v56 = v162;
    v57 = v162;
  }
  else
  {
    if ( (a2[2] & 0x10) == 0 )
      goto LABEL_61;
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v54 = (_BYTE *)*((_QWORD *)a2 + 3);
    }
    else if ( *((_DWORD *)a2 + 3) )
    {
      v54 = &a2[*((unsigned int *)a2 + 3)];
    }
    else
    {
LABEL_61:
      v54 = 0LL;
    }
    v55 = RtlFindAceByType(v54, 17LL, 0LL);
    v162 = v55;
    if ( v55 )
    {
      v56 = *(_BYTE *)(v55 + 1);
      v57 = v55 + 8;
      v53 = *(_DWORD *)(v55 + 4);
      v150 = v55 + 8;
      v117 = v56;
      if ( v56 == 8 || (v56 & 0x10) != 0 )
      {
        v55 = 0LL;
        v57 = 0LL;
        v56 = 0;
        v162 = 0LL;
        v150 = 0LL;
        v53 = 0;
        v117 = 0;
      }
    }
    else
    {
      v56 = 0;
      v57 = 0LL;
    }
  }
  if ( (v56 & 8) != 0 && *(_DWORD *)(v163 + 8) < 0x2000u )
  {
    v37 = -1073740730;
    goto LABEL_142;
  }
  if ( v53 )
  {
LABEL_219:
    if ( v55 )
      goto LABEL_68;
    if ( v138 )
    {
      v57 = v163;
      v150 = v163;
      v117 = 0;
      goto LABEL_68;
    }
    v37 = -1073741700;
LABEL_142:
    Acl = v37;
    goto LABEL_143;
  }
  if ( v163 && *(_DWORD *)(v163 + 8) < 0x2000u )
  {
    v53 = 1;
    goto LABEL_219;
  }
LABEL_68:
  if ( !v57 )
  {
    v58 = 0LL;
    v176 = 0LL;
    goto LABEL_70;
  }
  Acl = RtlCreateAcl(v195, 128LL, 2LL);
  v37 = Acl;
  if ( Acl < 0 )
    goto LABEL_143;
  Acl = RtlAddMandatoryAce((__int64)v195, 2u, v117, v150, 17, v53);
  v37 = Acl;
  if ( Acl < 0 )
    goto LABEL_143;
  v58 = v195;
LABEL_70:
  if ( (a7 & 0x700) != 0 )
  {
    v59 = 4;
  }
  else if ( !v162 && v58 )
  {
    v59 = 0;
  }
  else
  {
    v59 = ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 4 | ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 8 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x1400;
  }
  if ( !v143 || (*(_BYTE *)(v143 + 2) & 0x10) == 0 )
    goto LABEL_162;
  if ( *(__int16 *)(v143 + 2) >= 0 )
  {
    v60 = *(_QWORD *)(v143 + 24);
  }
  else
  {
    if ( *(_DWORD *)(v143 + 12) )
    {
      LODWORD(v60) = v143 + *(_DWORD *)(v143 + 12);
      goto LABEL_79;
    }
LABEL_162:
    LODWORD(v60) = 0;
  }
LABEL_79:
  LOBYTE(v51) = a6;
  v61 = RtlpInheritAcl(
          v60,
          (_DWORD)v58,
          v59,
          v51,
          1,
          0,
          (__int64)v139,
          (__int64)v142,
          (__int64)v147,
          v149,
          v148,
          3,
          *(__int64 *)&Size[1],
          a5,
          (__int64)&v158,
          (__int64)v137,
          (__int64)&v136);
  Acl = v61;
  v37 = v61;
  if ( v61 != -2147483637 )
  {
    if ( v61 >= 0 )
    {
      v62 = (unsigned __int64)v158;
      v63 = v136;
      goto LABEL_81;
    }
    goto LABEL_143;
  }
  v62 = (unsigned __int64)v58;
  v63 = 0;
  v136 = 0;
LABEL_81:
  v158 = (_BYTE *)v62;
  v37 = RtlpCombineAcls((_DWORD)v126, v62, v144, v144, v164, (__int64)&v174, (__int64)&v133);
  Acl = v37;
  v151 = ((v124 & 0x2000) << 17) | v133;
  if ( v158 && v158 != v176 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v158);
  if ( v37 < 0 )
    goto LABEL_143;
  v65 = v174;
  if ( v174 )
  {
    if ( v120 && v126 )
      RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v126);
    v126 = v65;
    *(_QWORD *)&v134[1] = v65;
    v130 = 1;
    v124 |= (4 * (v63 & 4)) | (4 * (v63 & 8)) | (2 * (v63 & 0x400)) | (2 * (v63 & 0x1000)) | 0x10;
  }
  v40 = v126;
  v121 = a7 & 8;
  if ( (a7 & 8) != 0 || ((v99 = RtlFindAceByType(v126, 17LL, 0LL)) != 0 ? (v100 = v99 + 8) : (v100 = v150), !v100) )
  {
LABEL_85:
    v66 = *((_WORD *)a2 + 1);
    v133 = a7 & 1;
    if ( (v66 & 4) == 0 )
      goto LABEL_183;
    if ( (v66 & 0x8000) == 0 )
    {
      v67 = *((_QWORD *)a2 + 4);
      goto LABEL_89;
    }
    if ( *((_DWORD *)a2 + 4) )
      LODWORD(v67) = (_DWORD)a2 + *((_DWORD *)a2 + 4);
    else
LABEL_183:
      LODWORD(v67) = 0;
LABEL_89:
    if ( v143 && (*(_BYTE *)(v143 + 2) & 4) != 0 )
    {
      if ( (*(_WORD *)(v143 + 2) & 0x8000) == 0 )
      {
        v68 = *(_QWORD *)(v143 + 32);
LABEL_94:
        LOBYTE(v64) = a6;
        v69 = RtlpInheritAcl(
                v68,
                v67,
                v66 & 0x140C,
                v64,
                (a7 & 1) != 0,
                v134[0] != 0,
                (__int64)v139,
                (__int64)v142,
                (__int64)v147,
                v149,
                v148,
                1,
                *(__int64 *)&Size[1],
                a5,
                (__int64)&Src,
                (__int64)v125,
                (__int64)&v136);
        Acl = v69;
        v37 = v69;
        if ( v69 >= 0 )
        {
          v119 = 1;
          v124 |= v136 & 0x1408 | 4;
LABEL_96:
          v70 = 1;
          goto LABEL_97;
        }
        if ( v69 != -2147483637 )
          goto LABEL_143;
        v104 = v124;
        if ( v133 )
        {
          v104 = v124 | 0x400;
          v124 |= 0x400u;
        }
        v105 = *((_WORD *)a2 + 1);
        if ( (v105 & 0xC) != 0xC )
        {
          if ( v146 )
          {
            Src = (void *)v146;
            v124 = v104 | 4;
          }
          goto LABEL_96;
        }
        if ( (v105 & 4) != 0 )
        {
          if ( v105 >= 0 )
          {
            v112 = (_BYTE *)*((_QWORD *)a2 + 4);
            goto LABEL_342;
          }
          if ( *((_DWORD *)a2 + 4) )
          {
            v112 = &a2[*((unsigned int *)a2 + 4)];
LABEL_342:
            Src = v112;
            goto LABEL_343;
          }
        }
        Src = 0LL;
LABEL_343:
        v124 = v105 & 0x1000 | 4 | v104;
        v70 = 1;
        v125[0] = 1;
LABEL_97:
        v71 = v138;
        if ( (a7 & 0x1000) != 0 || !v131 || !v138 || !v143 )
        {
LABEL_108:
          if ( !Src && v133 )
            v124 |= 0x1000u;
          v74 = !v151 || (v151 & 0xB0) != v151;
          v75 = v121;
          if ( v116 && !v121 && v74 )
          {
            if ( !v71 )
              goto LABEL_334;
            v185 = 1;
            v186 = 1;
            v146 = 8LL;
            v187 = 8LL;
            v188 = 0;
            Acl = ZwPrivilegeCheck(v71, &v185, &v122);
            v37 = Acl;
            if ( Acl < 0 )
              goto LABEL_143;
            if ( !v122 )
              goto LABEL_353;
          }
          if ( !(_BYTE)v152 )
          {
            v76 = v138;
            goto LABEL_114;
          }
          v113 = v75 == 0;
          v76 = v138;
          if ( !v113 )
          {
LABEL_114:
            if ( v123 && (a7 & 0x10) == 0 )
            {
              if ( !v76 )
                goto LABEL_334;
              v77 = v118;
              v78 = (unsigned __int8 *)v139;
              if ( !RtlpValidOwnerSubjectContext(v138, (__int64)v139, v118, &v155) )
              {
                v37 = v155;
LABEL_306:
                Acl = v37;
                goto LABEL_144;
              }
            }
            else
            {
              v77 = v118;
              v78 = (unsigned __int8 *)v139;
            }
            if ( v125[0] && v77 )
            {
              v114 = Src;
              LOBYTE(v70) = v145;
              Acl = RtlpCreateServerAcl((_DWORD)Src, v70, (_DWORD)v147, (unsigned int)&v160, (__int64)&v127);
              v37 = Acl;
              if ( Acl < 0 )
                goto LABEL_143;
              if ( v119 && v114 )
                RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v114);
              Src = v160;
              v160 = 0LL;
            }
            v79 = 4 * v78[1] + 11;
            Size[0] = 4 * v78[1] + 8;
            v80 = v79 & 0xFFFFFFFC;
            v153 = v80;
            if ( v142 )
            {
              v134[0] = 4 * *((unsigned __int8 *)v142 + 1) + 8;
              v81 = (v134[0] + 3) & 0xFFFFFFFC;
            }
            else
            {
              v134[0] = 0;
              v81 = 0;
            }
            v82 = v124;
            v133 = v81;
            v145 = v124 & 0x10;
            if ( (v124 & 0x10) != 0 && v126 )
              v83 = (*((unsigned __int16 *)v126 + 1) + 3) & 0xFFFFFFFC;
            else
              v83 = 0;
            v155 = v124 & 4;
            if ( (v124 & 4) != 0 && Src )
              v84 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
            else
              v84 = 0;
            v141 = v84;
            Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, v80 + v83 + v84 + 20 + v81);
            v154 = (_DWORD *)Heap;
            v86 = (_DWORD *)Heap;
            if ( Heap )
            {
              *(_QWORD *)Heap = 0LL;
              *(_QWORD *)(Heap + 8) = 0LL;
              *(_DWORD *)(Heap + 16) = 0;
              *(_WORD *)(Heap + 2) |= v82;
              v87 = (char *)(Heap + 20);
              *(_BYTE *)Heap = 1;
              if ( v145 )
              {
                v102 = (unsigned __int16 *)v126;
                if ( v126 )
                {
                  memmove(v87, v126, *((unsigned __int16 *)v126 + 1));
                  if ( !v120 )
                    RtlpApplyAclToObject((__int64)v87, v148);
                  v86 = v154;
                  v154[3] = (_DWORD)v87 - (_DWORD)v154;
                  v103 = v102[1];
                  if ( v83 > (unsigned int)v103 )
                  {
                    memset(&v87[v103], 0, v83 - (unsigned int)v103);
                    v86 = v154;
                  }
                  v87 += v83;
                }
                else
                {
                  *(_DWORD *)(Heap + 12) = 0;
                }
              }
              if ( v155 )
              {
                v88 = (unsigned __int16 *)Src;
                if ( Src )
                {
                  memmove(v87, Src, *((unsigned __int16 *)Src + 1));
                  if ( !v119 )
                    RtlpApplyAclToObject((__int64)v87, v148);
                  v154[4] = (_DWORD)v87 - (_DWORD)v154;
                  v89 = v88[1];
                  v90 = v141;
                  if ( v141 > (unsigned int)v89 )
                    memset(&v87[v89], 0, v141 - (unsigned int)v89);
                  v87 += v90;
                }
                else
                {
                  v86[4] = 0;
                }
              }
              v91 = Size[0];
              memmove(v87, v139, Size[0]);
              v92 = v153;
              if ( v153 > (unsigned int)v91 )
                memset(&v87[v91], 0, v153 - (unsigned int)v91);
              v93 = (_DWORD)v87 - (_DWORD)v154;
              v94 = &v87[v92];
              v154[1] = v93;
              if ( v142 )
              {
                v95 = v134[0];
                memmove(v94, v142, v134[0]);
                if ( v133 > (unsigned int)v95 )
                  memset(&v94[v95], 0, v133 - (unsigned int)v95);
                v154[2] = (_DWORD)v94 - (_DWORD)v154;
              }
              v37 = 0;
            }
            else
            {
              v37 = -1073741801;
            }
            goto LABEL_142;
          }
          if ( !v138 )
            goto LABEL_334;
          v146 = 32LL;
          v185 = 1;
          v186 = 1;
          v187 = 32LL;
          v188 = 0;
          Acl = ZwPrivilegeCheck(v138, &v185, &v122);
          v37 = Acl;
          if ( Acl >= 0 )
          {
            if ( !v122 )
            {
LABEL_353:
              v37 = -1073741727;
              goto LABEL_306;
            }
            goto LABEL_114;
          }
LABEL_143:
          v40 = v126;
          goto LABEL_144;
        }
        v72 = v148;
        v153 = 0;
        v134[0] = 0;
        Acl = RtlpNewSecurityObject(v143, 0, (unsigned int)&v159, Size[1], a5, a6, a7 | 1u, (__int64)v138, v148, v165);
        v37 = Acl;
        if ( Acl < 0 )
          goto LABEL_143;
        if ( (*(_BYTE *)(v159 + 2) & 4) == 0 )
          goto LABEL_344;
        if ( *(__int16 *)(v159 + 2) >= 0 )
        {
          v73 = *(_QWORD *)(v159 + 32);
          goto LABEL_106;
        }
        if ( *(_DWORD *)(v159 + 16) )
          v73 = v159 + *(unsigned int *)(v159 + 16);
        else
LABEL_344:
          v73 = 0LL;
LABEL_106:
        if ( (unsigned __int8)RtlpOwnerAcesPresent(16LL, v73) )
        {
          Handle = 0LL;
          Size[0] = 20;
          if ( (_BYTE)v141 != 1 )
            goto LABEL_265;
          v190 = 1;
          v189[1] = 2;
          v183 = v189;
          v189[0] = 12;
          v178 = 48;
          v179 = 0LL;
          v181 = 0;
          v180 = 0LL;
          v182 = 0LL;
          Acl = NtDuplicateToken(v138, 8LL, &v178);
          v37 = Acl;
          if ( Acl < 0 )
            goto LABEL_143;
          v106 = Handle;
          if ( !Handle )
LABEL_265:
            v106 = v138;
          Acl = ZwAccessCheck(v159, v106, 0x40000LL, v72, &v185, Size, &v153, v134);
          v37 = Acl;
          if ( Handle )
            NtClose(Handle);
          if ( v37 < 0 )
            goto LABEL_143;
          v37 = v134[0];
          Acl = v134[0];
          if ( v134[0] < 0 )
            goto LABEL_143;
        }
        v71 = v138;
        goto LABEL_108;
      }
      if ( *(_DWORD *)(v143 + 16) )
      {
        LODWORD(v68) = v143 + *(_DWORD *)(v143 + 16);
        goto LABEL_94;
      }
    }
    LODWORD(v68) = 0;
    goto LABEL_94;
  }
  if ( !v138 )
  {
LABEL_334:
    v37 = -1073741700;
    goto LABEL_306;
  }
  Acl = RtlSidDominates(v163, v100, v132);
  v37 = Acl;
  if ( Acl >= 0 )
  {
    v101 = (unsigned __int8)v152;
    if ( !v132[0] )
      v101 = 1;
    v152 = v101;
    goto LABEL_85;
  }
LABEL_144:
  if ( v159 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v159);
    v40 = *(_BYTE **)&v134[1];
    v37 = Acl;
  }
  if ( v127 && v160 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v160);
    v40 = *(_BYTE **)&v134[1];
    v37 = Acl;
  }
  v96 = (__int64)ProcessHeap;
  RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v170);
  RtlFreeHeap(v96, 0, (unsigned __int64)v173);
  RtlFreeHeap(v96, 0, (unsigned __int64)v168);
  RtlFreeHeap(v96, 0, (unsigned __int64)v172);
  RtlFreeHeap(v96, 0, (unsigned __int64)v166);
  if ( v167 )
    RtlFreeHeap(v96, 0, (unsigned __int64)v167);
  if ( v169 )
    RtlFreeHeap(v96, 0, (unsigned __int64)v169);
  if ( (v120 || v130) && v40 )
    RtlFreeHeap(v96, 0, (unsigned __int64)v40);
  if ( v129 && v144 )
    RtlFreeHeap(v96, 0, v144);
  if ( v164 && v128 )
    RtlFreeHeap(v96, 0, v164);
  if ( v119 )
  {
    if ( Src )
      RtlFreeHeap(v96, 0, (unsigned __int64)Src);
  }
  *v177 = v154;
  return (unsigned int)v37;
}
