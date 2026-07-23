/*
 * XREFs of SepCommonAccessCheckEx @ 0x140161A70
 * Callers:
 *     SeAccessCheckEx @ 0x140161A44 (SeAccessCheckEx.c)
 *     SeSrpAccessCheck @ 0x14024F494 (SeSrpAccessCheck.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x140007C40 (SeTokenIsRestricted.c)
 *     RtlpOwnerAcesPresent @ 0x1400150CC (RtlpOwnerAcesPresent.c)
 *     SepLocateTokenTrustLevel @ 0x140045658 (SepLocateTokenTrustLevel.c)
 *     SepMandatoryIntegrityCheck @ 0x1400CC5F0 (SepMandatoryIntegrityCheck.c)
 *     SepTokenIsOwner @ 0x1400CD420 (SepTokenIsOwner.c)
 *     SepMandatoryToDiscretionary @ 0x1400CE714 (SepMandatoryToDiscretionary.c)
 *     SepTrustLevelCheck @ 0x1400CE734 (SepTrustLevelCheck.c)
 *     AuthzBasepSetAccessReasons @ 0x140107AB0 (AuthzBasepSetAccessReasons.c)
 *     SepFreeResourceInfo @ 0x14010D734 (SepFreeResourceInfo.c)
 *     SepConstrainByMandatory @ 0x14010D79C (SepConstrainByMandatory.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14011C690 (AuthzBasepEvaluateAceCondition.c)
 *     SeLogAccessFailure @ 0x140124240 (SeLogAccessFailure.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14012A2E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepAccessCheckEx @ 0x1401620E4 (SepAccessCheckEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14024F4BC (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x14024F610 (SepGetScopedPolicySid.c)
 *     SepRmDereferenceCap @ 0x14024F67C (SepRmDereferenceCap.c)
 *     SepRmReferenceFindCap @ 0x140250B38 (SepRmReferenceFindCap.c)
 *     AuthzBasepMergeAccessReasons @ 0x140269E5C (AuthzBasepMergeAccessReasons.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepAdtAuditThisEventWithContext @ 0x140432F30 (SepAdtAuditThisEventWithContext.c)
 *     SeUnlockSubjectContext @ 0x1404C52E0 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1404C5390 (SeLockSubjectContext.c)
 */

bool __fastcall SepCommonAccessCheckEx(
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        char a2,
        unsigned int *a3,
        __int64 a4,
        _DWORD *a5,
        char a6)
{
  char v6; // si
  unsigned int *v7; // r15
  PSECURITY_SUBJECT_CONTEXT v9; // r12
  _DWORD *v11; // rdx
  _DWORD *v12; // rcx
  _DWORD *v13; // rax
  _DWORD *v14; // rax
  _QWORD *v15; // rax
  unsigned int v16; // r13d
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  int *v20; // r8
  int v21; // eax
  int v22; // ebx
  __int64 PrimaryToken; // r14
  __int64 v24; // rdx
  int v25; // eax
  bool v26; // bl
  char v27; // r8
  int v28; // eax
  _DWORD *v29; // r8
  char v30; // cl
  bool v31; // bl
  int v32; // ecx
  char v33; // al
  __int64 v34; // rdx
  PACCESS_TOKEN v35; // r9
  PACCESS_TOKEN v36; // r8
  __int64 v37; // r8
  bool v38; // r13
  int v39; // edx
  char *v40; // r8
  int v41; // ebx
  unsigned int v42; // edx
  char v43; // bl
  int *v44; // r9
  _DWORD *v45; // r10
  int v46; // r8d
  __int64 v48; // rcx
  __int16 v49; // ax
  __int64 v50; // rax
  __int64 v51; // rdx
  char v52; // al
  int v53; // eax
  int v54; // r13d
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  _QWORD *v57; // rax
  int v58; // r14d
  __int64 v59; // rsi
  ULONGLONG TokenTrustLevel; // rax
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // rax
  int v64; // ecx
  __int64 v65; // rcx
  __int16 v66; // dx
  __int64 v67; // rax
  ACL *v68; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v71; // rdx
  int v72; // ecx
  _DWORD **v73; // r9
  _DWORD *v74; // r9
  __int64 v75; // r10
  unsigned int *v76; // r9
  int v77; // r15d
  PVOID PoolWithTag; // rax
  __int64 v79; // rcx
  __int64 v80; // rcx
  unsigned __int64 v81; // rax
  int v82; // r9d
  int v83; // r10d
  char *v84; // r8
  int v85; // ebx
  int v86; // r13d
  unsigned int v87; // ecx
  char *v88; // rax
  unsigned int i; // r12d
  int v90; // r11d
  int v91; // ecx
  int v92; // r11d
  __int64 v93; // rcx
  __int64 v94; // r8
  int v95; // eax
  int v96; // ecx
  _QWORD *v97; // rax
  __int64 v98; // r8
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r9
  int v102; // eax
  _QWORD *v103; // rax
  __int64 v104; // r8
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r9
  unsigned int v108; // eax
  __int64 v109; // rdx
  char v110; // al
  int v111; // r11d
  int v112; // edx
  int v113; // r11d
  int v114; // eax
  bool v115; // zf
  int v116; // r11d
  bool v117; // cf
  int v118; // eax
  __int64 v119; // rdx
  unsigned __int64 v120; // r10
  int v121; // eax
  unsigned __int64 v122; // r10
  int v123; // eax
  int v124; // ecx
  int v125; // r11d
  __int64 v126; // rbx
  char v127; // si
  int v128; // edi
  ULONGLONG v129; // rax
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // [rsp+38h] [rbp-F8h]
  unsigned int v133; // [rsp+40h] [rbp-F0h]
  int v134; // [rsp+48h] [rbp-E8h]
  __int64 v135; // [rsp+50h] [rbp-E0h]
  __int64 v136; // [rsp+58h] [rbp-D8h]
  __int64 v137; // [rsp+60h] [rbp-D0h]
  __int64 v138; // [rsp+68h] [rbp-C8h]
  char v140; // [rsp+B1h] [rbp-7Fh]
  bool v141; // [rsp+B2h] [rbp-7Eh] BYREF
  char v142; // [rsp+B3h] [rbp-7Dh]
  int v143; // [rsp+B4h] [rbp-7Ch]
  int v144; // [rsp+B8h] [rbp-78h]
  char v145; // [rsp+BCh] [rbp-74h]
  int v146; // [rsp+C0h] [rbp-70h]
  int v147; // [rsp+C4h] [rbp-6Ch]
  int v148; // [rsp+C8h] [rbp-68h]
  __int64 v149; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v150; // [rsp+D8h] [rbp-58h]
  int v151; // [rsp+E0h] [rbp-50h] BYREF
  PVOID P; // [rsp+E8h] [rbp-48h]
  int v153; // [rsp+F0h] [rbp-40h]
  int v154; // [rsp+F4h] [rbp-3Ch]
  LONG HighPart; // [rsp+F8h] [rbp-38h]
  int v156; // [rsp+FCh] [rbp-34h]
  int v157; // [rsp+100h] [rbp-30h] BYREF
  __int64 ClientToken; // [rsp+108h] [rbp-28h]
  int v159; // [rsp+110h] [rbp-20h]
  int v160; // [rsp+114h] [rbp-1Ch] BYREF
  int v161; // [rsp+11Ch] [rbp-14h] BYREF
  unsigned __int64 v162; // [rsp+120h] [rbp-10h]
  int v163; // [rsp+128h] [rbp-8h] BYREF
  ACL *v164; // [rsp+130h] [rbp+0h]
  __int64 v165; // [rsp+138h] [rbp+8h]
  __int64 v166; // [rsp+140h] [rbp+10h]
  int v167; // [rsp+148h] [rbp+18h]
  int v168; // [rsp+150h] [rbp+20h] BYREF
  __int64 v169; // [rsp+154h] [rbp+24h]
  unsigned int v170; // [rsp+15Ch] [rbp+2Ch]
  PSECURITY_SUBJECT_CONTEXT v171; // [rsp+160h] [rbp+30h]
  char v172[8]; // [rsp+168h] [rbp+38h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+170h] [rbp+40h] BYREF
  _BYTE v174[40]; // [rsp+198h] [rbp+68h] BYREF
  _DWORD v175[12]; // [rsp+1C0h] [rbp+90h] BYREF
  _DWORD v176[32]; // [rsp+1F0h] [rbp+C0h] BYREF
  _DWORD v177[32]; // [rsp+270h] [rbp+140h] BYREF
  _DWORD v178[32]; // [rsp+2F0h] [rbp+1C0h] BYREF

  v162 = (unsigned __int64)a3;
  v6 = 0;
  v7 = a3;
  v171 = SubjectContext;
  v168 = 0;
  v9 = SubjectContext;
  v169 = 0LL;
  v170 = 0;
  v164 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(v174, 0, sizeof(v174));
  v150 = 0LL;
  v140 = 0;
  v149 = 0LL;
  memset(v176, 0, sizeof(v176));
  memset(v177, 0, sizeof(v177));
  memset(v178, 0, sizeof(v178));
  v161 = -1;
  if ( !a4 )
    return 0;
  if ( *(_DWORD *)a4 != 40 )
    return 0;
  v11 = *(_DWORD **)(a4 + 16);
  if ( !v11 )
    return 0;
  if ( !SubjectContext
    || !a3
    || *a3 != 56
    || (v12 = *(_DWORD **)(a4 + 8)) == 0LL
    || (v13 = (_DWORD *)*((_QWORD *)a3 + 1)) != 0LL && (*v13 != 16 || (v13[1] & 0xFFFFFFFC) != 0)
    || a5 && *a5 != 96 )
  {
    *v11 = -1073741811;
    return 0;
  }
  *v12 = 0;
  v14 = *(_DWORD **)(a4 + 16);
  v157 = 0;
  *v14 = -1073741790;
  v15 = *(_QWORD **)(a4 + 32);
  v151 = -1073741790;
  if ( v15 )
    *v15 = 0LL;
  v16 = a3[4] & ~a3[5] & 0xFDFFFFFF;
  AuthzBasepSetAccessReasons(v16, 0, 0, *(_QWORD *)(a4 + 24), 1);
  if ( !a6 )
  {
    v55 = v7[4];
    if ( (v55 & 0x2000000) != 0 )
    {
      **(_DWORD **)(a4 + 8) = *(_DWORD *)(*((_QWORD *)v7 + 4) + 12LL);
      **(_DWORD **)(a4 + 8) |= v7[4] & 0xFDFFFFFF;
      **(_DWORD **)(a4 + 8) |= v7[5];
    }
    else
    {
      **(_DWORD **)(a4 + 8) = v7[5] | v55;
    }
    **(_DWORD **)(a4 + 16) = 0;
    return 1;
  }
  v18 = *((_QWORD *)v7 + 1);
  if ( !v18 || !*(_QWORD *)(v18 + 8) )
    goto LABEL_273;
  if ( v9->ClientToken && v9->ImpersonationLevel < SecurityImpersonation )
  {
    **(_DWORD **)(a4 + 16) = -1073741659;
    return 0;
  }
  if ( !v7[4] )
  {
    v56 = v7[5];
    if ( v56 )
    {
      **(_DWORD **)(a4 + 8) = v56;
      **(_DWORD **)(a4 + 16) = 0;
      v57 = *(_QWORD **)(a4 + 32);
      if ( v57 )
        *v57 = 0LL;
      return 1;
    }
LABEL_273:
    **(_DWORD **)(a4 + 16) = -1073741790;
    return 0;
  }
  v19 = *(_DWORD *)(a4 + 4);
  if ( v19 != 1 && v19 != v7[10] )
  {
    **(_DWORD **)(a4 + 16) = -1073741811;
    return 0;
  }
  if ( !a2 )
    SeLockSubjectContext(v9);
  **(_DWORD **)(a4 + 16) = SepTrustLevelCheck(v17, *(_QWORD *)(*((_QWORD *)v7 + 1) + 8LL), v9, 0LL, 0LL, 0, &v161);
  v20 = *(int **)(a4 + 16);
  if ( *v20 < 0 )
  {
    if ( a2 )
      return 0;
    goto LABEL_99;
  }
  v21 = -1073741790;
  v22 = v161;
  if ( (v161 & v7[4] & 0xFDFFFFFF) == (v7[4] & 0xFDFFFFFF) )
    v21 = 0;
  *v20 = v21;
  if ( **(int **)(a4 + 16) < 0 )
  {
    ClientToken = (__int64)v9->ClientToken;
    if ( !ClientToken )
      ClientToken = (__int64)v9->PrimaryToken;
    v58 = v7[4] | v7[5];
    v59 = *((_QWORD *)v7 + 1);
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)v9);
    SeLogAccessFailure(ClientToken, v61, v62, TokenTrustLevel, *(_QWORD *)(v59 + 8), v58, 0);
    if ( !a2 )
      SeUnlockSubjectContext(v9);
    AuthzBasepSetAccessReasons(v16 & ~v22, 9437184, 0, *(_QWORD *)(a4 + 24), 0);
    return 0;
  }
  PrimaryToken = (__int64)v9->ClientToken;
  if ( !v9->ClientToken )
    PrimaryToken = (__int64)v9->PrimaryToken;
  v24 = *((_QWORD *)v7 + 1);
  v25 = *(_DWORD *)(v24 + 4);
  v26 = (v25 & 1) != 0;
  v142 = v26;
  if ( (v25 & 2) != 0 )
  {
    v27 = 1;
    if ( (*(_DWORD *)(PrimaryToken + 200) & 0x2000) != 0 )
      v6 = 1;
  }
  else
  {
    v27 = 0;
  }
  if ( !SepAllowAccessUponLogoff && (*(_DWORD *)(PrimaryToken + 200) & 0x20) == 0 )
  {
    v63 = *(_QWORD *)(PrimaryToken + 216);
    if ( v63 )
    {
      if ( (*(_DWORD *)(v63 + 32) & 0x20) != 0 )
      {
        **(_DWORD **)(a4 + 8) = 0;
        **(_DWORD **)(a4 + 16) = -1073741790;
LABEL_111:
        if ( a2 )
          return 0;
LABEL_99:
        SeUnlockSubjectContext(v9);
        return 0;
      }
    }
  }
  LOBYTE(v154) = 0;
  if ( !v6 )
  {
    **(_DWORD **)(a4 + 16) = SepMandatoryIntegrityCheck(
                               *((_DWORD **)v7 + 4),
                               *(_QWORD *)(v24 + 8),
                               v27,
                               PrimaryToken,
                               0,
                               (__int64)&v168);
    if ( **(int **)(a4 + 16) < 0 )
      goto LABEL_111;
    v28 = SepMandatoryToDiscretionary(&v168, v7[4]);
    *v29 = v28;
    if ( **(int **)(a4 + 16) < 0 )
    {
      if ( (*(_DWORD *)(PrimaryToken + 200) & 0x4000) == 0 || v170 > 0x2000 )
      {
        if ( !a2 )
          SeUnlockSubjectContext(v9);
        AuthzBasepSetAccessReasons(v16 & ~v168, 3145728, 0, *(_QWORD *)(a4 + 24), 0);
        return 0;
      }
      LOBYTE(v154) = 1;
    }
    else if ( (v7[4] & 0x2000000) != 0 && (*(_DWORD *)(PrimaryToken + 200) & 0x4000) != 0 )
    {
      v64 = (unsigned __int8)v154;
      if ( v170 <= 0x2000 )
        v64 = 1;
      v154 = v64;
    }
  }
  if ( !SepRmEnforceCap )
    goto LABEL_39;
  v65 = *(_QWORD *)(*((_QWORD *)v7 + 1) + 8LL);
  v66 = *(_WORD *)(v65 + 2);
  if ( (v66 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_39;
  if ( v66 < 0 )
  {
    v67 = *(unsigned int *)(v65 + 12);
    if ( !(_DWORD)v67 )
    {
      v164 = 0LL;
      goto LABEL_39;
    }
    v68 = (ACL *)(v65 + v67);
  }
  else
  {
    v68 = *(ACL **)(v65 + 24);
  }
  v164 = v68;
  if ( v68 )
  {
    ScopedPolicySid = (void *)SepGetScopedPolicySid(v68);
    if ( ScopedPolicySid )
    {
      Cap = SepRmReferenceFindCap(ScopedPolicySid);
      v71 = v150;
      if ( Cap < 0 )
        v71 = SepRmDefaultCap;
      v30 = 1;
      v140 = 1;
      v150 = v71;
      goto LABEL_40;
    }
  }
LABEL_39:
  v30 = 0;
LABEL_40:
  v31 = (!v26 || (v7[4] & 0x2060000) != 0 || v30)
     && SepTokenIsOwner(PrimaryToken, *(_QWORD *)(*((_QWORD *)v7 + 1) + 8LL));
  v32 = v7[4];
  v144 = v32;
  if ( v31
    && (v32 & 0x2060000) != 0
    && (v142
     || ((v48 = *(_QWORD *)(*((_QWORD *)v7 + 1) + 8LL), v49 = *(_WORD *)(v48 + 2), (v49 & 4) == 0)
       ? (v51 = 0LL)
       : (v49 & 0x8000) == 0
       ? (v51 = *(_QWORD *)(v48 + 32))
       : (v50 = *(unsigned int *)(v48 + 16), !(_DWORD)v50)
       ? (v51 = 0LL)
       : (v51 = v48 + v50),
         v52 = RtlpOwnerAcesPresent(0, v51),
         v32 = v144,
         !v52)) )
  {
    v53 = v32 & 0x2000000;
    if ( (v32 & 0x2000000) != 0 )
    {
      v7[5] |= 0x60000u;
      v144 = 393216;
    }
    else
    {
      v72 = v32 & 0x60000;
      v7[5] |= v72;
      v144 = v72;
    }
    if ( v53 )
      v54 = 393216;
    else
      v54 = v16 & 0x60000;
    AuthzBasepSetAccessReasons(v54, 0x400000, 0, *(_QWORD *)(a4 + 24), 0);
    v33 = v140;
    v7[4] &= 0xFFF9FFFF;
    if ( !v140 )
      v31 = 0;
    v32 = v144;
  }
  else
  {
    v33 = v140;
  }
  v34 = v7[4];
  if ( !(_DWORD)v34 && !v33 && ((*(_DWORD *)(PrimaryToken + 200) & 0x2000) != 0 || !v32) )
  {
    if ( !a2 )
      SeUnlockSubjectContext(v9);
    **(_DWORD **)(a4 + 8) = v7[5];
    **(_DWORD **)(a4 + 16) = 0;
    return 1;
  }
  v35 = v9->ClientToken;
  v36 = v9->PrimaryToken;
  v165 = 0LL;
  v166 = 0LL;
  v167 = 0;
  v138 = *(_QWORD *)(a4 + 24);
  v137 = *(_QWORD *)(a4 + 16);
  v136 = *(_QWORD *)(a4 + 32);
  v135 = *(_QWORD *)(a4 + 8);
  v133 = v7[5];
  v132 = *((_QWORD *)v7 + 4);
  LODWORD(v165) = v32;
  v145 = SepAccessCheckEx(
           *(_QWORD *)(*((_QWORD *)v7 + 1) + 8LL),
           v34,
           v36,
           v35,
           v34,
           0LL,
           0,
           v132,
           v133,
           a6,
           v135,
           v136,
           v137,
           v138);
  if ( !SepRmEnforceCap || (v156 = **(_DWORD **)(a4 + 16), v156 < 0) || !v140 )
  {
    v38 = v141;
LABEL_47:
    if ( v6 || (v39 = v7[4], (v39 & 0x2000000) == 0) )
    {
      if ( (_BYTE)v154 && !*(_WORD *)((char *)&v167 + 1) )
      {
        v38 = 0;
        **(_DWORD **)(a4 + 16) = -1073741790;
        **(_DWORD **)(a4 + 8) = 0;
        AuthzBasepSetAccessReasons(~**(_DWORD **)(a4 + 8), 3145728, 0, *(_QWORD *)(a4 + 24), 0);
      }
    }
    else
    {
      v40 = *(char **)(a4 + 8);
      v41 = *(_DWORD *)v40;
      if ( !(_BYTE)v154 || !*(_WORD *)((char *)&v167 + 1) )
      {
        SepConstrainByMandatory((__int64)&v168, v39, v40, *(char **)(a4 + 16), &v141, 0);
        AuthzBasepSetAccessReasons(v41 & ~**(_DWORD **)(a4 + 8), 3145728, 0, *(_QWORD *)(a4 + 24), 0);
        v38 = v141;
      }
    }
    v42 = v7[4];
    v43 = 0;
    if ( (v42 & 0x2000000) != 0 )
    {
      v44 = *(int **)(a4 + 8);
      v45 = *(_DWORD **)(a4 + 16);
      v46 = *v44;
      if ( v161 != -1 )
      {
        v125 = v161 & v46;
        if ( (v161 & v46) != v46 )
        {
          *v44 = v125;
          v43 = 1;
          if ( (v42 & 0x2000000) != 0 )
          {
            if ( v125 )
            {
              *v45 = 0;
              v38 = 1;
            }
            else
            {
              v38 = 0;
              *v45 = -1073741790;
            }
          }
          else
          {
            *v45 = -1073741790;
            v38 = *v44 != 0;
          }
        }
      }
      AuthzBasepSetAccessReasons(v46 & ~**(_DWORD **)(a4 + 8), 9437184, 0, *(_QWORD *)(a4 + 24), 0);
    }
    if ( PrimaryToken
      && (v43
       || !HIDWORD(v166) && (*(_DWORD *)(PrimaryToken + 200) & 0x4000) != 0 && (**(int **)(a4 + 16) < 0 || HIBYTE(v167))) )
    {
      v126 = *((_QWORD *)v7 + 1);
      v127 = **(_DWORD **)(a4 + 16) >= 0;
      v128 = v7[4] | v7[5];
      v129 = SepLocateTokenTrustLevel((__int64 *)v9);
      SeLogAccessFailure(PrimaryToken, v130, v131, v129, *(_QWORD *)(v126 + 8), v128, v127);
    }
    if ( v140 )
      SepRmDereferenceCap(v150);
    if ( !a2 )
      SeUnlockSubjectContext(v9);
    SepFreeResourceInfo(v149);
    return v145 && v38;
  }
  v73 = *(_DWORD ***)(a4 + 32);
  v146 = **(_DWORD **)(a4 + 8);
  v148 = v146;
  P = 0LL;
  LOBYTE(v159) = 0;
  v144 = 0;
  if ( v73 )
  {
    v74 = *v73;
    if ( v74 )
    {
      if ( *v74 )
      {
        v75 = (unsigned int)*v74;
        v76 = v74 + 2;
        v77 = v144;
        HighPart = SeSecurityPrivilege.HighPart;
        v153 = HIDWORD(SeTakeOwnershipPrivilege);
        do
        {
          v37 = v76[2];
          if ( (int)v37 < 0 )
          {
            v37 = *v76;
            if ( *(_QWORD *)v76 == SeSecurityPrivilege )
            {
              v77 |= 0x1000000u;
            }
            else if ( *(_QWORD *)v76 == SeTakeOwnershipPrivilege || *(_QWORD *)v76 == SeRelabelPrivilege )
            {
              v77 |= 0x80000u;
            }
          }
          v76 += 3;
          --v75;
        }
        while ( v75 );
        v9 = v171;
        v144 = v77;
        v7 = (unsigned int *)v162;
      }
    }
  }
  LOBYTE(v37) = 1;
  v153 = v146;
  v142 = SepAdtAuditThisEventWithContext(129LL, 1LL, v37, v9);
  if ( v142 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * *(unsigned int *)(v150 + 60), 0x41536553u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( !a2 )
        SeUnlockSubjectContext(v9);
      SepRmDereferenceCap(v150);
      v79 = v149;
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = -1073741801;
      SepFreeResourceInfo(v79);
      return 0;
    }
    memset(PoolWithTag, 0, 8LL * *(unsigned int *)(v150 + 60));
  }
  v80 = v150;
  v81 = 0LL;
  HighPart = 0;
  if ( !*(_DWORD *)(v150 + 60) )
  {
    v82 = v146;
    v83 = v146;
    v84 = (char *)P;
LABEL_167:
    if ( v142 )
    {
      if ( v83 != v82 )
      {
        v151 = *(_DWORD *)(v80 + 60);
        v85 = v83 & (v82 ^ v83);
        v86 = v82 & (v82 ^ v83);
        if ( v151 )
        {
          v87 = v151;
          v88 = v84;
          v162 = (unsigned __int64)v84;
          for ( i = 0; i < v87; ++i )
          {
            if ( !v85 && !v86 )
              break;
            if ( v88[4] )
            {
              v90 = *(_DWORD *)v88;
              v91 = v86 & (v86 ^ *(_DWORD *)v88);
              if ( v91 )
                AuthzBasepSetAccessReasons(v91, 0x80000000, i << 24, (__int64)v177, 0);
              v86 &= ~v91;
              v92 = v85 & v90;
              if ( v92 )
                AuthzBasepSetAccessReasons(v92, 0x80000000, i << 24, (__int64)v177, 0);
              v85 &= ~v92;
              AuthzBasepMergeAccessReasons(v176, v177, 4278190080LL);
              v88 = (char *)v162;
              v87 = v151;
            }
            v88 += 8;
            v162 = (unsigned __int64)v88;
          }
          v9 = v171;
          v84 = (char *)P;
          v82 = v146;
        }
      }
    }
    if ( v84 )
    {
      ExFreePoolWithTag(v84, 0);
      v82 = v146;
    }
    v38 = v141;
    **(_DWORD **)(a4 + 16) = v156;
    **(_DWORD **)(a4 + 8) &= v82;
    v93 = *(_QWORD *)(a4 + 24);
    if ( **(int **)(a4 + 16) < 0 )
      v38 = 0;
    v141 = v38;
    AuthzBasepMergeAccessReasons(v93, v176, 0LL);
    AuthzBasepMergeAccessReasons(*(_QWORD *)(a4 + 24), v176, 4278190080LL);
    goto LABEL_47;
  }
  while ( 1 )
  {
    v94 = *(_QWORD *)(v80 + 8 * v81 + 64);
    v162 = v81;
    ClientToken = v94;
    if ( *(_QWORD *)(v94 + 24) )
    {
      if ( !v149 )
      {
        v95 = AuthzBasepInitializeResourceClaimsFromSacl((__int64)v164, (__int64)&v149);
        v96 = (unsigned __int8)v159;
        if ( v95 < 0 )
          v96 = 1;
        v159 = v96;
      }
      v97 = *(_QWORD **)(PrimaryToken + 1096);
      v98 = v97 ? v97[75] : 0LL;
      v99 = v97 ? v97[73] : 0LL;
      v100 = v97 ? v97[74] : 0LL;
      v101 = v97 ? v97[72] : 0LL;
      v102 = AuthzBasepEvaluateAceCondition(
               PrimaryToken,
               *(_QWORD *)(PrimaryToken + 776),
               v149,
               v101,
               v100,
               v99,
               v98,
               *(_DWORD **)(ClientToken + 24),
               *(_DWORD *)(ClientToken + 16),
               1,
               0,
               &v160);
      v143 = v102;
      if ( v160 != 1 )
      {
        if ( v102 < 0 )
        {
          if ( !a2 )
            SeUnlockSubjectContext(v9);
          goto LABEL_254;
        }
        if ( SeTokenIsRestricted((PACCESS_TOKEN)PrimaryToken) )
        {
          v103 = *(_QWORD **)(PrimaryToken + 1096);
          v104 = v103 ? v103[75] : 0LL;
          v105 = v103 ? v103[73] : 0LL;
          v106 = v103 ? v103[74] : 0LL;
          v107 = v103 ? v103[72] : 0LL;
          v143 = AuthzBasepEvaluateAceCondition(
                   PrimaryToken,
                   *(_QWORD *)(PrimaryToken + 776),
                   v149,
                   v107,
                   v106,
                   v105,
                   v104,
                   *(_DWORD **)(ClientToken + 24),
                   *(_DWORD *)(ClientToken + 16),
                   1,
                   1,
                   &v160);
          if ( v143 < 0 )
          {
            if ( !a2 )
              SeUnlockSubjectContext(v9);
LABEL_254:
            SepRmDereferenceCap(v150);
            v124 = v143;
            goto LABEL_258;
          }
        }
        if ( !(_BYTE)v159 && v160 != 1 )
        {
          v82 = v146;
LABEL_225:
          v83 = v148;
          v84 = (char *)P;
          goto LABEL_226;
        }
      }
    }
    v156 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
    if ( v156 < 0 )
      break;
    v108 = v7[4];
    if ( (*(_DWORD *)(ClientToken + 48) & 1) != 0 )
    {
      v147 = 0;
      if ( (v108 & 0x2000000) == 0 )
        v108 |= v7[5];
      v143 = v108 | 0x2000000;
    }
    else
    {
      v143 = v108 | 0x2000000;
      v147 = v7[5];
    }
    memset(v175, 0, sizeof(v175));
    LOBYTE(v134) = a6;
    v110 = SepAccessCheckEx(
             SecurityDescriptor,
             v109,
             v9->PrimaryToken,
             v9->ClientToken,
             v143,
             v175,
             1,
             *((_QWORD *)v7 + 4),
             v147,
             v134,
             &v157,
             0LL,
             &v151,
             v178);
    v111 = v144 | v175[7];
    v145 = v110;
    v112 = (v147 | **(_DWORD **)(a4 + 8)) & v157;
    v157 = v112;
    if ( v31 )
      v111 |= v112 & 0x60000;
    v113 = ~v175[8] & v111;
    v114 = v151;
    v115 = (v112 & v146) == 0;
    v82 = v112 & v146;
    v146 &= v112;
    if ( v115 )
      v114 = -1073741790;
    v156 = v114;
    if ( (v153 & (v153 ^ v113)) != 0 )
    {
      AuthzBasepSetAccessReasons(v153 & (v153 ^ v113), 327680, HighPart, (__int64)v176, 0);
      v153 &= v116;
      v112 = v157;
      v82 = v146;
    }
    if ( !v142 )
      goto LABEL_225;
    if ( *(_QWORD *)(ClientToken + 40) )
    {
      v143 = SepBuildCapeSecurityDescriptor(v174);
      if ( v143 < 0 )
      {
        if ( !a2 )
          SeUnlockSubjectContext(v9);
        goto LABEL_254;
      }
      v117 = (*(_DWORD *)(ClientToken + 48) & 0x100) != 0;
      v118 = v7[4];
      v147 = v118;
      if ( v117 )
      {
        v143 = 0;
        if ( (v118 & 0x2000000) == 0 )
          v147 = v7[5] | v118;
      }
      else
      {
        v143 = v7[5];
      }
      memset(v175, 0, sizeof(v175));
      LOBYTE(v134) = a6;
      SepAccessCheckEx(
        v174,
        v119,
        v9->PrimaryToken,
        v9->ClientToken,
        v147,
        0LL,
        0,
        *((_QWORD *)v7 + 4),
        v143,
        v134,
        &v163,
        0LL,
        v172,
        v178);
      v120 = v162;
      v84 = (char *)P;
      v121 = v144 | v163;
      v82 = v146;
      *((_BYTE *)P + 8 * v162 + 4) = 1;
      *(_DWORD *)&v84[8 * v120] = v121;
      v83 = v163 & v148;
      v148 &= v163;
    }
    else
    {
      v122 = v162;
      v84 = (char *)P;
      v123 = v112 | v144;
      *((_BYTE *)P + 8 * v162 + 4) = 1;
      *(_DWORD *)&v84[8 * v122] = v123;
      v83 = v112 & v148;
      v148 &= v112;
    }
LABEL_226:
    v80 = v150;
    v81 = (unsigned int)(HighPart + 1);
    HighPart = v81;
    if ( (unsigned int)v81 >= *(_DWORD *)(v150 + 60) )
      goto LABEL_167;
  }
  if ( !a2 )
    SeUnlockSubjectContext(v9);
  SepRmDereferenceCap(v150);
  v124 = v156;
LABEL_258:
  **(_DWORD **)(a4 + 8) = 0;
  **(_DWORD **)(a4 + 16) = v124;
  SepFreeResourceInfo(v149);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0;
}
