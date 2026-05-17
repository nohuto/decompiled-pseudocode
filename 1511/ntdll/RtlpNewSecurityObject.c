/*
 * XREFs of RtlpNewSecurityObject @ 0x18005E688
 * Callers:
 *     RtlNewSecurityObject @ 0x18005D1A0 (RtlNewSecurityObject.c)
 *     RtlNewSecurityObjectEx @ 0x18005E330 (RtlNewSecurityObjectEx.c)
 *     RtlpNewSecurityObject @ 0x18005E688 (RtlpNewSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x18008B430 (RtlNewSecurityObjectWithMultipleInheritance.c)
 * Callees:
 *     RtlpValidTrustSubjectContext @ 0x180003344 (RtlpValidTrustSubjectContext.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlSidDominates @ 0x18005DA90 (RtlSidDominates.c)
 *     RtlpApplyAclToObject @ 0x18005DB84 (RtlpApplyAclToObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x18005DC30 (RtlpValidOwnerSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x18005E688 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl @ 0x18005FDD0 (RtlpInheritAcl.c)
 *     RtlCreateAcl @ 0x180060370 (RtlCreateAcl.c)
 *     RtlFindAceByType @ 0x180061000 (RtlFindAceByType.c)
 *     RtlpCombineAcls @ 0x180061054 (RtlpCombineAcls.c)
 *     RtlpGetDefaultsSubjectContext @ 0x1800614F4 (RtlpGetDefaultsSubjectContext.c)
 *     RtlCreateSecurityDescriptor @ 0x180061E30 (RtlCreateSecurityDescriptor.c)
 *     RtlpOwnerAcesPresent @ 0x180061EE0 (RtlpOwnerAcesPresent.c)
 *     RtlAddMandatoryAce @ 0x1800620B0 (RtlAddMandatoryAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x180065780 (RtlAddProcessTrustLabelAce.c)
 *     RtlpComputeMergedAcl @ 0x18008BA0C (RtlpComputeMergedAcl.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A50C0 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A54E0 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x1800A5900 (NtDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x1800A7550 (ZwPrivilegeCheck.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlpCreateServerAcl @ 0x1800D83C4 (RtlpCreateServerAcl.c)
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
  __int64 v18; // r10
  _BYTE *v19; // rcx
  unsigned __int16 v20; // r8
  __int16 v21; // dx
  __int64 v22; // rax
  _BYTE *v23; // rcx
  int v24; // ebx
  _BYTE *v25; // rdi
  __int64 v26; // rsi
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  unsigned int v30; // r9d
  int v31; // edi
  char v32; // bl
  __int16 v33; // cx
  unsigned int v34; // eax
  int v35; // r10d
  int v36; // r8d
  int v37; // eax
  int v38; // r9d
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // r8d
  int v42; // eax
  unsigned __int16 v43; // dx
  int v44; // eax
  int v45; // r9d
  int v46; // r10d
  __int64 v47; // rdx
  __int16 v48; // cx
  int v49; // edx
  __int64 v50; // rcx
  int v51; // eax
  _BYTE *v52; // rcx
  unsigned __int64 v53; // rax
  __int64 AceByType; // rbx
  __int64 v55; // r8
  int v56; // r9d
  __int64 v57; // rdx
  _BYTE *v58; // rcx
  __int64 v59; // rax
  int v60; // edi
  int v61; // edi
  _BYTE *v62; // rcx
  __int64 v63; // rax
  unsigned __int8 v64; // cl
  __int64 v65; // rdx
  _BYTE *v66; // rdi
  int v67; // r10d
  __int64 v68; // rcx
  int v69; // eax
  unsigned __int64 v70; // rdx
  __int16 v71; // di
  int v72; // r9d
  void *v73; // rbx
  __int64 v74; // rax
  __int64 v75; // rax
  int v76; // eax
  __int16 v77; // r8
  __int64 v78; // rdx
  __int64 v79; // rcx
  int v80; // eax
  int v81; // edx
  __int16 v82; // cx
  _BYTE *v83; // rax
  int v84; // edx
  void *v85; // r9
  __int64 v86; // rsi
  __int64 v87; // rdx
  HANDLE v88; // rdx
  bool v89; // al
  int v90; // esi
  bool v91; // zf
  void *v92; // rsi
  char v93; // bl
  unsigned __int8 *v94; // rsi
  void *v95; // rdi
  int v96; // r9d
  unsigned int v97; // r9d
  unsigned int v98; // r8d
  __int16 v99; // bx
  unsigned int v100; // esi
  unsigned int v101; // ecx
  __int64 Heap; // rax
  _DWORD *v103; // rdx
  char *v104; // rbx
  unsigned __int16 *v105; // rdi
  __int64 v106; // rcx
  unsigned __int16 *v107; // rdi
  __int64 v108; // rcx
  __int64 v109; // rdi
  __int64 v110; // rsi
  __int64 v111; // rdi
  int v112; // eax
  char *v113; // rbx
  __int64 v114; // rdi
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
  void *Src; // [rsp+B0h] [rbp-60h]
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
  void *v140; // [rsp+F0h] [rbp-20h] BYREF
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
  HANDLE Handle; // [rsp+1E0h] [rbp+D0h] BYREF
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
  v140 = 0LL;
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
    LODWORD(v19) = 0;
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
      v18 = *v169;
      v149 = *v169;
    }
    else
    {
      v18 = 0LL;
      v149 = 0LL;
    }
  }
  else
  {
    v18 = 0LL;
    LODWORD(v19) = 0;
  }
  v20 = *((_WORD *)a2 + 1);
  v21 = v20 & 0x8000;
  if ( (v20 & 0x8000u) == 0 )
  {
    v19 = (_BYTE *)*((_QWORD *)a2 + 1);
  }
  else
  {
    if ( !*((_DWORD *)a2 + 1) )
      goto LABEL_29;
    v19 = &a2[*((unsigned int *)a2 + 1)];
  }
  v139 = v19;
  if ( v19 )
  {
    v123 = 1;
LABEL_25:
    v22 = v143;
    goto LABEL_26;
  }
LABEL_29:
  if ( (a7 & 0x20) != 0 )
  {
    v22 = v143;
    if ( !v143 )
    {
LABEL_31:
      v24 = -1073741734;
      goto LABEL_32;
    }
    if ( *(__int16 *)(v143 + 2) >= 0 )
    {
      v27 = *(void **)(v143 + 8);
    }
    else
    {
      if ( *(_DWORD *)(v143 + 4) == (_DWORD)v19 )
        goto LABEL_31;
      v27 = (void *)(v143 + *(unsigned int *)(v143 + 4));
    }
    v139 = v27;
    v123 = 1;
    if ( v27 )
    {
LABEL_26:
      if ( v21 )
      {
        if ( !*((_DWORD *)a2 + 2) )
          goto LABEL_70;
        v23 = &a2[*((unsigned int *)a2 + 2)];
      }
      else
      {
        v23 = (_BYTE *)*((_QWORD *)a2 + 2);
      }
      v142 = v23;
      if ( v23 )
      {
LABEL_80:
        v30 = v20;
        v134[0] = a7 & 4;
        v31 = a7 & 2;
        v121 = v31;
        v32 = v31 != 0;
        v33 = v20 & 0x10;
        v34 = (unsigned __int8)v20;
        v35 = v33 != 0 ? 4 : 0;
        v36 = (v20 >> 1) & 0x1000;
        v37 = (v34 >> 2) & 8;
        v38 = (v30 >> 1) & 0x400;
        if ( v33 == (_WORD)v175 )
          goto LABEL_81;
        if ( !v21 )
        {
          v39 = *((_QWORD *)a2 + 3);
          goto LABEL_86;
        }
        if ( !*((_DWORD *)a2 + 3) )
LABEL_81:
          LODWORD(v39) = 0;
        else
          LODWORD(v39) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
LABEL_86:
        if ( v143 && (*(_BYTE *)(v143 + 2) & 0x10) != 0 )
        {
          v31 = v121;
          if ( *(__int16 *)(v143 + 2) >= 0 )
          {
            v40 = *(_QWORD *)(v143 + 24);
            goto LABEL_93;
          }
          if ( *(_DWORD *)(v143 + 12) )
          {
            LODWORD(v40) = v143 + *(_DWORD *)(v143 + 12);
            goto LABEL_93;
          }
        }
        LODWORD(v40) = 0;
LABEL_93:
        v41 = v38 | v36;
        LOBYTE(v38) = a6;
        v42 = RtlpInheritAcl(
                v40,
                v39,
                v35 | v37 | (unsigned int)v41,
                v38,
                v32,
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
        Acl = v42;
        v24 = v42;
        if ( v42 >= 0 )
        {
          v120 = 1;
          v124 = (4 * (v136 & 4)) | (4 * (v136 & 8)) | (2 * (v136 & 0x400)) | (2 * (v136 & 0x1000)) | 0x8010;
LABEL_95:
          v25 = *(_BYTE **)&v134[1];
          Src = *(void **)&v134[1];
LABEL_96:
          v43 = *((_WORD *)a2 + 1);
          v44 = ((unsigned __int8)v43 >> 2) & 8;
          v45 = (v43 >> 1) & 0x400;
          v46 = (v43 & 0x10) != 0 ? 4 : 0;
          if ( (v43 & 0x10) == (_WORD)v175 )
            goto LABEL_97;
          if ( (v43 & 0x8000u) == 0 )
          {
            v47 = *((_QWORD *)a2 + 3);
            goto LABEL_114;
          }
          if ( !*((_DWORD *)a2 + 3) )
LABEL_97:
            LODWORD(v47) = 0;
          else
            LODWORD(v47) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
LABEL_114:
          if ( v143 && (*(_BYTE *)(v143 + 2) & 0x10) != 0 )
          {
            v25 = Src;
            if ( *(__int16 *)(v143 + 2) >= 0 )
            {
              v50 = *(_QWORD *)(v143 + 24);
              goto LABEL_121;
            }
            if ( *(_DWORD *)(v143 + 12) )
            {
              LODWORD(v50) = v143 + *(_DWORD *)(v143 + 12);
              goto LABEL_121;
            }
          }
          LODWORD(v50) = 0;
LABEL_121:
          LOBYTE(v45) = a6;
          v51 = RtlpInheritAcl(
                  v50,
                  v47,
                  v46 & 0xFFFFEFFF | v44 & 0xFFFFEFFF | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x400,
                  v45,
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
          Acl = v51;
          v24 = v51;
          if ( v51 >= 0 )
          {
            v129 = 1;
LABEL_123:
            v121 = 0;
            while ( 1 )
            {
              if ( (a2[2] & 0x10) == 0 )
                goto LABEL_125;
              if ( (*((_WORD *)a2 + 1) & 0x8000) == 0 )
              {
                v52 = (_BYTE *)*((_QWORD *)a2 + 3);
                goto LABEL_139;
              }
              if ( *((_DWORD *)a2 + 3) )
                v52 = &a2[*((unsigned int *)a2 + 3)];
              else
LABEL_125:
                v52 = 0LL;
LABEL_139:
              AceByType = RtlFindAceByType(v52, 20LL, &v121);
              v57 = AceByType + 8;
              if ( !AceByType )
                v57 = 0LL;
              if ( v57 && !RtlpValidTrustSubjectContext(v161, v57, v55, &Acl) )
              {
                v24 = -1073741790;
                goto LABEL_146;
              }
              ++v121;
              if ( !AceByType )
              {
                if ( (a7 & 0x800) != 0 )
                {
                  v121 = 0;
                  while ( (a2[2] & 0x10) != 0 )
                  {
                    if ( *((__int16 *)a2 + 1) >= 0 )
                    {
                      v58 = (_BYTE *)*((_QWORD *)a2 + 3);
                    }
                    else
                    {
                      if ( !*((_DWORD *)a2 + 3) )
                        break;
                      v58 = &a2[*((unsigned int *)a2 + 3)];
                    }
LABEL_155:
                    v59 = RtlFindAceByType(v58, 20LL, &v121);
                    ++v121;
                    if ( !v59 )
                    {
                      if ( !v161 )
                        goto LABEL_171;
                      if ( !v165 )
                      {
                        v24 = -1073741811;
                        goto LABEL_146;
                      }
                      v60 = *(_DWORD *)(v165 + 4);
                      v121 = 0;
LABEL_167:
                      Acl = RtlCreateAcl(v194, 88LL, 2LL);
                      v24 = Acl;
                      if ( Acl >= 0 )
                      {
                        Acl = RtlAddProcessTrustLabelAce((unsigned int)v194, 2, v121, v161, 20, v60);
                        v24 = Acl;
                        if ( Acl >= 0 )
                        {
                          Acl = RtlpComputeMergedAcl(
                                  v144,
                                  ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 4 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x400 | ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 8u,
                                  (unsigned int)v194,
                                  4,
                                  (__int64)v139,
                                  (__int64)v142,
                                  v148,
                                  2,
                                  (__int64)&v164,
                                  (__int64)&v136);
                          v24 = Acl;
                          if ( Acl >= 0 )
                          {
                            v128 = 1;
                            goto LABEL_172;
                          }
                        }
                      }
                      goto LABEL_162;
                    }
                    if ( (*(_BYTE *)(v59 + 1) & 8) == 0 )
                    {
                      v60 = *(_DWORD *)(v59 + 4);
                      v121 = *(unsigned __int8 *)(v59 + 1);
                      v161 = v59 + 8;
                      if ( !v165 || (v60 & *(_DWORD *)(v165 + 4)) != v60 || v59 == -8 )
                      {
                        v24 = -1073741811;
                        goto LABEL_161;
                      }
                      goto LABEL_167;
                    }
                  }
                  v58 = 0LL;
                  goto LABEL_155;
                }
LABEL_171:
                v164 = v144;
LABEL_172:
                v61 = (a7 & 0x100) != 0;
                if ( (a7 & 0x200) != 0 )
                  v61 |= 2u;
                if ( (a7 & 0x400) != 0 )
                  v61 |= 4u;
                if ( v61 )
                {
                  v63 = v162;
                  v64 = v162;
                  v65 = v162;
                }
                else
                {
                  if ( (a2[2] & 0x10) == 0 )
                    goto LABEL_178;
                  if ( *((__int16 *)a2 + 1) >= 0 )
                  {
                    v62 = (_BYTE *)*((_QWORD *)a2 + 3);
                  }
                  else if ( *((_DWORD *)a2 + 3) )
                  {
                    v62 = &a2[*((unsigned int *)a2 + 3)];
                  }
                  else
                  {
LABEL_178:
                    v62 = 0LL;
                  }
                  v63 = RtlFindAceByType(v62, 17LL, 0LL);
                  v162 = v63;
                  if ( v63 )
                  {
                    v64 = *(_BYTE *)(v63 + 1);
                    v65 = v63 + 8;
                    v61 = *(_DWORD *)(v63 + 4);
                    v150 = v63 + 8;
                    v117 = v64;
                    if ( v64 == 8 || (v64 & 0x10) != 0 )
                    {
                      v63 = 0LL;
                      v65 = 0LL;
                      v64 = 0;
                      v162 = 0LL;
                      v150 = 0LL;
                      v61 = 0;
                      v117 = 0;
                    }
                  }
                  else
                  {
                    v64 = 0;
                    v65 = 0LL;
                  }
                }
                if ( (v64 & 8) != 0 && *(_DWORD *)(v163 + 8) < 0x2000u )
                {
                  v24 = -1073740730;
                  goto LABEL_161;
                }
                if ( v61 )
                {
LABEL_196:
                  if ( !v63 )
                  {
                    if ( !v138 )
                    {
                      v24 = -1073741700;
                      goto LABEL_161;
                    }
                    v65 = v163;
                    v150 = v163;
                    v117 = 0;
                  }
                }
                else if ( v163 && *(_DWORD *)(v163 + 8) < 0x2000u )
                {
                  v61 = 1;
                  goto LABEL_196;
                }
                if ( v65 )
                {
                  Acl = RtlCreateAcl(v195, 128LL, 2LL);
                  v24 = Acl;
                  if ( Acl < 0 )
                    goto LABEL_162;
                  Acl = RtlAddMandatoryAce((unsigned int)v195, 2, v117, v150, 17, v61);
                  v24 = Acl;
                  if ( Acl < 0 )
                    goto LABEL_162;
                  v66 = v195;
                }
                else
                {
                  v66 = 0LL;
                  v176 = 0LL;
                }
                if ( (a7 & 0x700) != 0 )
                {
                  v67 = 4;
                }
                else if ( v162 || !v66 )
                {
                  v67 = ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 4 | ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 8 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x1400;
                }
                else
                {
                  v67 = 0;
                }
                if ( !v143 || (*(_BYTE *)(v143 + 2) & 0x10) == 0 )
                  goto LABEL_217;
                if ( *(__int16 *)(v143 + 2) >= 0 )
                {
                  v68 = *(_QWORD *)(v143 + 24);
                }
                else
                {
                  if ( *(_DWORD *)(v143 + 12) )
                  {
                    LODWORD(v68) = v143 + *(_DWORD *)(v143 + 12);
                    goto LABEL_218;
                  }
LABEL_217:
                  LODWORD(v68) = 0;
                }
LABEL_218:
                LOBYTE(v56) = a6;
                v69 = RtlpInheritAcl(
                        v68,
                        (_DWORD)v66,
                        v67,
                        v56,
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
                Acl = v69;
                v24 = v69;
                if ( v69 == -2147483637 )
                {
                  v70 = (unsigned __int64)v66;
                  v71 = 0;
                  v136 = 0;
                }
                else
                {
                  if ( v69 < 0 )
                    goto LABEL_162;
                  v70 = (unsigned __int64)v158;
                  v71 = v136;
                }
                v158 = (_BYTE *)v70;
                v24 = RtlpCombineAcls((_DWORD)Src, v70, v144, v144, v164, (__int64)&v174, (__int64)&v133);
                Acl = v24;
                v151 = ((v124 & 0x2000) << 17) | v133;
                if ( v158 && v158 != v176 )
                  RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v158);
                if ( v24 < 0 )
                  goto LABEL_162;
                v73 = v174;
                if ( v174 )
                {
                  if ( v120 && Src )
                    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Src);
                  Src = v73;
                  *(_QWORD *)&v134[1] = v73;
                  v130 = 1;
                  v124 |= (4 * (v71 & 4)) | (4 * (v71 & 8)) | (2 * (v71 & 0x400)) | (2 * (v71 & 0x1000)) | 0x10;
                }
                v25 = Src;
                v121 = a7 & 8;
                if ( (a7 & 8) == 0 )
                {
                  v74 = RtlFindAceByType(Src, 17LL, 0LL);
                  v75 = v74 ? v74 + 8 : v150;
                  if ( v75 )
                  {
                    if ( !v138 )
                      goto LABEL_237;
                    Acl = RtlSidDominates(v163, v75, v132);
                    v24 = Acl;
                    if ( Acl < 0 )
                      goto LABEL_34;
                    v76 = (unsigned __int8)v152;
                    if ( !v132[0] )
                      v76 = 1;
                    v152 = v76;
                  }
                }
                v77 = *((_WORD *)a2 + 1);
                v133 = a7 & 1;
                if ( (v77 & 4) != 0 )
                {
                  if ( v77 < 0 )
                  {
                    if ( !*((_DWORD *)a2 + 4) )
                      goto LABEL_243;
                    LODWORD(v78) = (_DWORD)a2 + *((_DWORD *)a2 + 4);
                  }
                  else
                  {
                    v78 = *((_QWORD *)a2 + 4);
                  }
                }
                else
                {
LABEL_243:
                  LODWORD(v78) = 0;
                }
                if ( !v143 || (*(_BYTE *)(v143 + 2) & 4) == 0 )
                  goto LABEL_254;
                if ( (*(_WORD *)(v143 + 2) & 0x8000) != 0 )
                {
                  if ( *(_DWORD *)(v143 + 16) )
                  {
                    LODWORD(v79) = v143 + *(_DWORD *)(v143 + 16);
                    goto LABEL_255;
                  }
LABEL_254:
                  LODWORD(v79) = 0;
                }
                else
                {
                  v79 = *(_QWORD *)(v143 + 32);
                }
LABEL_255:
                LOBYTE(v72) = a6;
                v80 = RtlpInheritAcl(
                        v79,
                        v78,
                        v77 & 0x140C,
                        v72,
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
                        (__int64)&v140,
                        (__int64)v125,
                        (__int64)&v136);
                Acl = v80;
                v24 = v80;
                if ( v80 >= 0 )
                {
                  v119 = 1;
                  v124 |= v136 & 0x1408 | 4;
                  goto LABEL_271;
                }
                if ( v80 != -2147483637 )
                  goto LABEL_162;
                v81 = v124;
                if ( v133 )
                {
                  v81 = v124 | 0x400;
                  v124 |= 0x400u;
                }
                v82 = *((_WORD *)a2 + 1);
                if ( (v82 & 0xC) == 0xC )
                {
                  if ( (v82 & 4) == 0 )
                    goto LABEL_262;
                  if ( v82 >= 0 )
                  {
                    v83 = (_BYTE *)*((_QWORD *)a2 + 4);
LABEL_267:
                    v140 = v83;
                  }
                  else
                  {
                    if ( *((_DWORD *)a2 + 4) )
                    {
                      v83 = &a2[*((unsigned int *)a2 + 4)];
                      goto LABEL_267;
                    }
LABEL_262:
                    v140 = 0LL;
                  }
                  v124 = v82 & 0x1000 | 4 | v81;
                  v84 = 1;
                  v125[0] = 1;
                }
                else
                {
                  if ( v146 )
                  {
                    v140 = (void *)v146;
                    v124 = v81 | 4;
                  }
LABEL_271:
                  v84 = 1;
                }
                v85 = v138;
                if ( (a7 & 0x1000) == 0 && v131 && v138 && v143 )
                {
                  v86 = v148;
                  v153 = 0;
                  v134[0] = 0;
                  Acl = RtlpNewSecurityObject(
                          v143,
                          0,
                          (unsigned int)&v159,
                          Size[1],
                          a5,
                          a6,
                          a7 | 1u,
                          (__int64)v138,
                          v148,
                          v165);
                  v24 = Acl;
                  if ( Acl < 0 )
                    goto LABEL_162;
                  if ( (*(_BYTE *)(v159 + 2) & 4) != 0 )
                  {
                    if ( *(__int16 *)(v159 + 2) >= 0 )
                    {
                      v87 = *(_QWORD *)(v159 + 32);
                    }
                    else
                    {
                      if ( !*(_DWORD *)(v159 + 16) )
                        goto LABEL_278;
                      v87 = v159 + *(unsigned int *)(v159 + 16);
                    }
                  }
                  else
                  {
LABEL_278:
                    v87 = 0LL;
                  }
                  if ( !(unsigned __int8)RtlpOwnerAcesPresent(16LL, v87) )
                    goto LABEL_292;
                  Handle = 0LL;
                  Size[0] = 20;
                  if ( (_BYTE)v141 != 1 )
                    goto LABEL_287;
                  v190 = 1;
                  v189[1] = 2;
                  v183 = v189;
                  v189[0] = 12;
                  v178 = 48;
                  v179 = 0LL;
                  v181 = 0;
                  v180 = 0LL;
                  v182 = 0LL;
                  Acl = NtDuplicateToken(v138, 8LL, &v178, 0LL, 2, &Handle);
                  v24 = Acl;
                  if ( Acl < 0 )
                    goto LABEL_162;
                  v88 = Handle;
                  if ( !Handle )
LABEL_287:
                    v88 = v138;
                  Acl = ZwAccessCheck(v159, v88, 0x40000LL, v86, &v185, Size, &v153, v134);
                  v24 = Acl;
                  if ( Handle )
                    NtClose(Handle);
                  if ( v24 >= 0 )
                  {
                    v24 = v134[0];
                    Acl = v134[0];
                    if ( v134[0] >= 0 )
                    {
LABEL_292:
                      v85 = v138;
                      goto LABEL_293;
                    }
                  }
LABEL_162:
                  v25 = Src;
                  goto LABEL_34;
                }
LABEL_293:
                if ( v133 && !v140 )
                  v124 |= 0x1000u;
                v89 = !v151 || (v151 & 0xB0) != v151;
                v90 = v121;
                if ( !v116 || v121 || !v89 )
                  goto LABEL_307;
                if ( !v85 )
                  goto LABEL_237;
                v185 = 1;
                v186 = 1;
                v146 = 8LL;
                v187 = 8LL;
                v188 = 0;
                Acl = ZwPrivilegeCheck(v85, &v185, &v122);
                v24 = Acl;
                if ( Acl < 0 )
                  goto LABEL_162;
                if ( !v122 )
                  goto LABEL_306;
LABEL_307:
                if ( !(_BYTE)v152 )
                {
                  v92 = v138;
                  goto LABEL_314;
                }
                v91 = v90 == 0;
                v92 = v138;
                if ( v91 )
                {
                  if ( v138 )
                  {
                    v146 = 32LL;
                    v185 = 1;
                    v186 = 1;
                    v187 = 32LL;
                    v188 = 0;
                    Acl = ZwPrivilegeCheck(v138, &v185, &v122);
                    v24 = Acl;
                    if ( Acl < 0 )
                      goto LABEL_162;
                    if ( !v122 )
                    {
LABEL_306:
                      v24 = -1073741727;
                      goto LABEL_146;
                    }
                    goto LABEL_314;
                  }
LABEL_237:
                  v24 = -1073741700;
LABEL_146:
                  Acl = v24;
                  goto LABEL_34;
                }
LABEL_314:
                if ( !v123 || (a7 & 0x10) != 0 )
                {
                  v93 = v118;
                  v94 = (unsigned __int8 *)v139;
                }
                else
                {
                  if ( !v92 )
                    goto LABEL_237;
                  v93 = v118;
                  v94 = (unsigned __int8 *)v139;
                  if ( !RtlpValidOwnerSubjectContext(v138, (__int64)v139, v118, &v155) )
                  {
                    v24 = v155;
                    goto LABEL_146;
                  }
                }
                if ( v125[0] && v93 )
                {
                  v95 = v140;
                  LOBYTE(v84) = v145;
                  Acl = RtlpCreateServerAcl((_DWORD)v140, v84, (_DWORD)v147, (unsigned int)&v160, (__int64)&v127);
                  v24 = Acl;
                  if ( Acl < 0 )
                    goto LABEL_162;
                  if ( v119 && v95 )
                    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v95);
                  v140 = v160;
                  v160 = 0LL;
                }
                v96 = 4 * v94[1] + 11;
                Size[0] = 4 * v94[1] + 8;
                v97 = v96 & 0xFFFFFFFC;
                v153 = v97;
                if ( v142 )
                {
                  v134[0] = 4 * *((unsigned __int8 *)v142 + 1) + 8;
                  v98 = (v134[0] + 3) & 0xFFFFFFFC;
                }
                else
                {
                  v134[0] = 0;
                  v98 = 0;
                }
                v99 = v124;
                v133 = v98;
                v145 = v124 & 0x10;
                if ( (v124 & 0x10) != 0 && Src )
                  v100 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
                else
                  v100 = 0;
                v155 = v124 & 4;
                if ( (v124 & 4) != 0 && v140 )
                  v101 = (*((unsigned __int16 *)v140 + 1) + 3) & 0xFFFFFFFC;
                else
                  v101 = 0;
                v141 = v101;
                Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, v97 + v100 + v101 + 20 + v98);
                v154 = (_DWORD *)Heap;
                v103 = (_DWORD *)Heap;
                if ( Heap )
                {
                  *(_QWORD *)Heap = 0LL;
                  *(_QWORD *)(Heap + 8) = 0LL;
                  *(_DWORD *)(Heap + 16) = 0;
                  *(_WORD *)(Heap + 2) |= v99;
                  v104 = (char *)(Heap + 20);
                  *(_BYTE *)Heap = 1;
                  if ( v145 )
                  {
                    v105 = (unsigned __int16 *)Src;
                    if ( Src )
                    {
                      memmove(v104, Src, *((unsigned __int16 *)Src + 1));
                      if ( !v120 )
                        RtlpApplyAclToObject((__int64)v104, v148);
                      v103 = v154;
                      v154[3] = (_DWORD)v104 - (_DWORD)v154;
                      v106 = v105[1];
                      if ( v100 > (unsigned int)v106 )
                      {
                        memset(&v104[v106], 0, v100 - (unsigned int)v106);
                        v103 = v154;
                      }
                      v104 += v100;
                    }
                    else
                    {
                      *(_DWORD *)(Heap + 12) = 0;
                    }
                  }
                  if ( v155 )
                  {
                    v107 = (unsigned __int16 *)v140;
                    if ( v140 )
                    {
                      memmove(v104, v140, *((unsigned __int16 *)v140 + 1));
                      if ( !v119 )
                        RtlpApplyAclToObject((__int64)v104, v148);
                      v154[4] = (_DWORD)v104 - (_DWORD)v154;
                      v108 = v107[1];
                      v109 = v141;
                      if ( v141 > (unsigned int)v108 )
                        memset(&v104[v108], 0, v141 - (unsigned int)v108);
                      v104 += v109;
                    }
                    else
                    {
                      v103[4] = 0;
                    }
                  }
                  v110 = Size[0];
                  memmove(v104, v139, Size[0]);
                  v111 = v153;
                  if ( v153 > (unsigned int)v110 )
                    memset(&v104[v110], 0, v153 - (unsigned int)v110);
                  v112 = (_DWORD)v104 - (_DWORD)v154;
                  v113 = &v104[v111];
                  v154[1] = v112;
                  if ( v142 )
                  {
                    v114 = v134[0];
                    memmove(v113, v142, v134[0]);
                    if ( v133 > (unsigned int)v114 )
                      memset(&v113[v114], 0, v133 - (unsigned int)v114);
                    v154[2] = (_DWORD)v113 - (_DWORD)v154;
                  }
                  v24 = 0;
                }
                else
                {
                  v24 = -1073741801;
                }
LABEL_161:
                Acl = v24;
                goto LABEL_162;
              }
            }
          }
          if ( v51 != -2147483637 )
            goto LABEL_34;
          if ( (a2[2] & 0x30) != 0x30 )
            goto LABEL_123;
          if ( (a2[2] & 0x10) == 0 )
          {
LABEL_129:
            v144 = 0LL;
            goto LABEL_123;
          }
          if ( (*((_WORD *)a2 + 1) & 0x8000) != 0 )
          {
            if ( !*((_DWORD *)a2 + 3) )
              goto LABEL_129;
            v53 = (unsigned __int64)&a2[*((unsigned int *)a2 + 3)];
          }
          else
          {
            v53 = *((_QWORD *)a2 + 3);
          }
          v144 = v53;
          goto LABEL_123;
        }
        if ( v42 != -2147483637 )
          goto LABEL_33;
        v48 = *((_WORD *)a2 + 1);
        v49 = 0x8000;
        if ( v31 )
          v49 = 34816;
        v124 = v49;
        if ( (v48 & 0x30) != 0x30 )
          goto LABEL_95;
        if ( (v48 & 0x10) == 0 )
          goto LABEL_103;
        if ( v48 < 0 )
        {
          if ( !*((_DWORD *)a2 + 3) )
          {
LABEL_103:
            v25 = 0LL;
            Src = 0LL;
            *(_QWORD *)&v134[1] = 0LL;
LABEL_109:
            v116 = 1;
            v124 = v48 & 0x2000 | 0x10 | v49;
            goto LABEL_96;
          }
          v25 = &a2[*((unsigned int *)a2 + 3)];
        }
        else
        {
          v25 = (_BYTE *)*((_QWORD *)a2 + 3);
        }
        *(_QWORD *)&v134[1] = v25;
        Src = v25;
        goto LABEL_109;
      }
LABEL_70:
      if ( (a7 & 0x40) != 0 )
      {
        if ( !v22 )
        {
LABEL_72:
          v24 = -1073741733;
          Acl = -1073741733;
          goto LABEL_33;
        }
        if ( *(__int16 *)(v22 + 2) >= 0 )
        {
          v29 = *(void **)(v22 + 16);
        }
        else
        {
          if ( !*(_DWORD *)(v22 + 8) )
            goto LABEL_72;
          v29 = (void *)(v22 + *(unsigned int *)(v22 + 8));
        }
      }
      else
      {
        v29 = v12;
        if ( v17 )
          v29 = (void *)v18;
      }
      v142 = v29;
      if ( !v29 )
        goto LABEL_72;
      goto LABEL_80;
    }
    goto LABEL_31;
  }
  v28 = v11;
  if ( v17 )
    v28 = v147;
  v139 = v28;
  if ( v28 )
    goto LABEL_25;
  v24 = -1073741700;
LABEL_32:
  Acl = v24;
LABEL_33:
  v25 = *(_BYTE **)&v134[1];
LABEL_34:
  if ( v159 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v159);
    v25 = *(_BYTE **)&v134[1];
    v24 = Acl;
  }
  if ( v127 && v160 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v160);
    v25 = *(_BYTE **)&v134[1];
    v24 = Acl;
  }
  v26 = (__int64)ProcessHeap;
  RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v170);
  RtlFreeHeap(v26, 0, (unsigned __int64)v173);
  RtlFreeHeap(v26, 0, (unsigned __int64)v168);
  RtlFreeHeap(v26, 0, (unsigned __int64)v172);
  RtlFreeHeap(v26, 0, (unsigned __int64)v166);
  if ( v167 )
    RtlFreeHeap(v26, 0, (unsigned __int64)v167);
  if ( v169 )
    RtlFreeHeap(v26, 0, (unsigned __int64)v169);
  if ( (v120 || v130) && v25 )
    RtlFreeHeap(v26, 0, (unsigned __int64)v25);
  if ( v129 && v144 )
    RtlFreeHeap(v26, 0, v144);
  if ( v164 && v128 )
    RtlFreeHeap(v26, 0, v164);
  if ( v119 )
  {
    if ( v140 )
      RtlFreeHeap(v26, 0, (unsigned __int64)v140);
  }
  *v177 = v154;
  return (unsigned int)v24;
}
