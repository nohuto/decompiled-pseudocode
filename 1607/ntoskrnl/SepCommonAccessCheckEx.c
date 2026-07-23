/*
 * XREFs of SepCommonAccessCheckEx @ 0x140135D00
 * Callers:
 *     SeAccessCheckEx @ 0x140135CD0 (SeAccessCheckEx.c)
 *     SeSrpAccessCheck @ 0x1402198A8 (SeSrpAccessCheck.c)
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x140012AA0 (SepLocateTokenTrustLevel.c)
 *     SepTokenIsOwner @ 0x140060CE0 (SepTokenIsOwner.c)
 *     SeLogAccessFailure @ 0x140061150 (SeLogAccessFailure.c)
 *     SepMandatoryIntegrityCheck @ 0x1400631D0 (SepMandatoryIntegrityCheck.c)
 *     SeTokenIsRestricted @ 0x14007F7C0 (SeTokenIsRestricted.c)
 *     SepFreeResourceInfo @ 0x14008D00C (SepFreeResourceInfo.c)
 *     SepMandatoryToDiscretionary @ 0x14008D12C (SepMandatoryToDiscretionary.c)
 *     SepTrustLevelCheck @ 0x14008D160 (SepTrustLevelCheck.c)
 *     RtlpOwnerAcesPresent @ 0x14008D270 (RtlpOwnerAcesPresent.c)
 *     SepConstrainByMandatory @ 0x14008D3A8 (SepConstrainByMandatory.c)
 *     AuthzBasepSetAccessReasons @ 0x140092400 (AuthzBasepSetAccessReasons.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400AAE9C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepAccessCheckEx @ 0x140136360 (SepAccessCheckEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402198D0 (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x140219A24 (SepGetScopedPolicySid.c)
 *     SepRmDereferenceCap @ 0x140219A90 (SepRmDereferenceCap.c)
 *     SepRmReferenceFindCap @ 0x14021B49C (SepRmReferenceFindCap.c)
 *     AuthzBasepMergeAccessReasons @ 0x14023426C (AuthzBasepMergeAccessReasons.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SepAdtAuditThisEventWithContext @ 0x140413C10 (SepAdtAuditThisEventWithContext.c)
 *     SeLockSubjectContext @ 0x14044CA80 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14044CAE0 (SeUnlockSubjectContext.c)
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
  char IsOwner; // bl
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
  void *v79; // rcx
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
  int v111; // r10d
  int v112; // r11d
  int v113; // edx
  int v114; // r11d
  int v115; // eax
  bool v116; // zf
  int v117; // r11d
  bool v118; // cf
  int v119; // eax
  __int64 v120; // rdx
  unsigned __int64 v121; // r9
  int v122; // eax
  unsigned __int64 v123; // r9
  int v124; // eax
  int v125; // ecx
  int v126; // r11d
  __int64 v127; // rbx
  char v128; // si
  int v129; // edi
  ULONGLONG v130; // rax
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // [rsp+38h] [rbp-F8h]
  unsigned int v134; // [rsp+40h] [rbp-F0h]
  int v135; // [rsp+48h] [rbp-E8h]
  __int64 v136; // [rsp+50h] [rbp-E0h]
  __int64 v137; // [rsp+58h] [rbp-D8h]
  __int64 v138; // [rsp+60h] [rbp-D0h]
  __int64 v139; // [rsp+68h] [rbp-C8h]
  char v141; // [rsp+B1h] [rbp-7Fh]
  bool v142; // [rsp+B2h] [rbp-7Eh] BYREF
  char v143; // [rsp+B3h] [rbp-7Dh]
  int v144; // [rsp+B4h] [rbp-7Ch]
  int v145; // [rsp+B8h] [rbp-78h]
  char v146; // [rsp+BCh] [rbp-74h]
  int v147; // [rsp+C0h] [rbp-70h]
  int v148; // [rsp+C4h] [rbp-6Ch]
  int v149; // [rsp+C8h] [rbp-68h]
  __int64 v150; // [rsp+D0h] [rbp-60h]
  void *v151; // [rsp+D8h] [rbp-58h] BYREF
  LONG HighPart; // [rsp+E0h] [rbp-50h]
  int v153; // [rsp+E4h] [rbp-4Ch]
  int v154; // [rsp+E8h] [rbp-48h] BYREF
  PVOID P; // [rsp+F0h] [rbp-40h]
  int v156; // [rsp+F8h] [rbp-38h]
  int v157; // [rsp+FCh] [rbp-34h] BYREF
  int v158; // [rsp+100h] [rbp-30h]
  __int64 ClientToken; // [rsp+108h] [rbp-28h]
  int v160; // [rsp+114h] [rbp-1Ch]
  int v161; // [rsp+118h] [rbp-18h] BYREF
  int v162; // [rsp+11Ch] [rbp-14h] BYREF
  int v163; // [rsp+120h] [rbp-10h] BYREF
  unsigned __int64 v164; // [rsp+128h] [rbp-8h]
  ACL *v165; // [rsp+130h] [rbp+0h]
  __int64 v166; // [rsp+138h] [rbp+8h]
  __int64 v167; // [rsp+140h] [rbp+10h]
  int v168; // [rsp+148h] [rbp+18h]
  int v169; // [rsp+150h] [rbp+20h] BYREF
  __int64 v170; // [rsp+154h] [rbp+24h]
  unsigned int v171; // [rsp+15Ch] [rbp+2Ch]
  PSECURITY_SUBJECT_CONTEXT v172; // [rsp+160h] [rbp+30h]
  char v173[8]; // [rsp+168h] [rbp+38h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+170h] [rbp+40h] BYREF
  _BYTE v175[40]; // [rsp+198h] [rbp+68h] BYREF
  _DWORD v176[12]; // [rsp+1C0h] [rbp+90h] BYREF
  _BYTE v177[128]; // [rsp+1F0h] [rbp+C0h] BYREF
  _BYTE v178[128]; // [rsp+270h] [rbp+140h] BYREF
  _BYTE v179[128]; // [rsp+2F0h] [rbp+1C0h] BYREF

  v6 = 0;
  v164 = (unsigned __int64)a3;
  v7 = a3;
  v172 = SubjectContext;
  v169 = 0;
  v9 = SubjectContext;
  v170 = 0LL;
  v171 = 0;
  v165 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(v175, 0, sizeof(v175));
  v150 = 0LL;
  v141 = 0;
  v151 = 0LL;
  memset(v177, 0, sizeof(v177));
  memset(v178, 0, sizeof(v178));
  memset(v179, 0, sizeof(v179));
  v162 = -1;
  if ( !a4 )
    return 0;
  if ( *(_DWORD *)a4 != 40 )
    return 0;
  v11 = *(_DWORD **)(a4 + 16);
  if ( !v11 )
    return 0;
  if ( !v9
    || !v7
    || *v7 != 56
    || (v12 = *(_DWORD **)(a4 + 8)) == 0LL
    || (v13 = (_DWORD *)*((_QWORD *)v7 + 1)) != 0LL && (*v13 != 16 || (v13[1] & 0xFFFFFFFC) != 0)
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
  v154 = -1073741790;
  if ( v15 )
    *v15 = 0LL;
  v16 = v7[4] & ~v7[5] & 0xFDFFFFFF;
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
  **(_DWORD **)(a4 + 16) = SepTrustLevelCheck(v17, *(_QWORD *)(*((_QWORD *)v7 + 1) + 8LL), v9, 0LL, 0LL, 0, &v162);
  v20 = *(int **)(a4 + 16);
  if ( *v20 < 0 )
  {
    if ( a2 )
      return 0;
    goto LABEL_99;
  }
  v21 = -1073741790;
  v22 = v162;
  if ( (v162 & v7[4] & 0xFDFFFFFF) == (v7[4] & 0xFDFFFFFF) )
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
  v143 = v26;
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
  LOBYTE(v153) = 0;
  if ( !v6 )
  {
    **(_DWORD **)(a4 + 16) = SepMandatoryIntegrityCheck(
                               *((_DWORD **)v7 + 4),
                               *(_QWORD *)(v24 + 8),
                               v27,
                               PrimaryToken,
                               0,
                               (__int64)&v169);
    if ( **(int **)(a4 + 16) < 0 )
      goto LABEL_111;
    v28 = SepMandatoryToDiscretionary(&v169, v7[4]);
    *v29 = v28;
    if ( **(int **)(a4 + 16) < 0 )
    {
      if ( (*(_DWORD *)(PrimaryToken + 200) & 0x4000) == 0 || v171 > 0x2000 )
      {
        if ( !a2 )
          SeUnlockSubjectContext(v9);
        AuthzBasepSetAccessReasons(v16 & ~v169, 3145728, 0, *(_QWORD *)(a4 + 24), 0);
        return 0;
      }
      LOBYTE(v153) = 1;
    }
    else if ( (v7[4] & 0x2000000) != 0 && (*(_DWORD *)(PrimaryToken + 200) & 0x4000) != 0 )
    {
      v64 = (unsigned __int8)v153;
      if ( v171 <= 0x2000 )
        v64 = 1;
      v153 = v64;
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
      v165 = 0LL;
      goto LABEL_39;
    }
    v68 = (ACL *)(v65 + v67);
  }
  else
  {
    v68 = *(ACL **)(v65 + 24);
  }
  v165 = v68;
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
      v141 = 1;
      v150 = v71;
      goto LABEL_40;
    }
  }
LABEL_39:
  v30 = 0;
LABEL_40:
  if ( !v26 || (v7[4] & 0x2060000) != 0 || v30 )
    IsOwner = SepTokenIsOwner(PrimaryToken);
  else
    IsOwner = 0;
  v32 = v7[4];
  v145 = v32;
  if ( IsOwner
    && (v32 & 0x2060000) != 0
    && (v143
     || ((v48 = *(_QWORD *)(*((_QWORD *)v7 + 1) + 8LL), v49 = *(_WORD *)(v48 + 2), (v49 & 4) == 0)
       ? (v51 = 0LL)
       : (v49 & 0x8000) == 0
       ? (v51 = *(_QWORD *)(v48 + 32))
       : (v50 = *(unsigned int *)(v48 + 16), !(_DWORD)v50)
       ? (v51 = 0LL)
       : (v51 = v48 + v50),
         v52 = RtlpOwnerAcesPresent(0, v51),
         v32 = v145,
         !v52)) )
  {
    v53 = v32 & 0x2000000;
    if ( (v32 & 0x2000000) != 0 )
    {
      v7[5] |= 0x60000u;
      v145 = 393216;
    }
    else
    {
      v72 = v32 & 0x60000;
      v7[5] |= v72;
      v145 = v72;
    }
    if ( v53 )
      v54 = 393216;
    else
      v54 = v16 & 0x60000;
    AuthzBasepSetAccessReasons(v54, 0x400000, 0, *(_QWORD *)(a4 + 24), 0);
    v33 = v141;
    v7[4] &= 0xFFF9FFFF;
    if ( !v141 )
      IsOwner = 0;
    v32 = v145;
  }
  else
  {
    v33 = v141;
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
  v166 = 0LL;
  v167 = 0LL;
  v168 = 0;
  v139 = *(_QWORD *)(a4 + 24);
  v138 = *(_QWORD *)(a4 + 16);
  v137 = *(_QWORD *)(a4 + 32);
  v136 = *(_QWORD *)(a4 + 8);
  v134 = v7[5];
  v133 = *((_QWORD *)v7 + 4);
  LODWORD(v166) = v32;
  v146 = SepAccessCheckEx(
           *(_QWORD *)(*((_QWORD *)v7 + 1) + 8LL),
           v34,
           v36,
           v35,
           v34,
           0LL,
           0,
           v133,
           v134,
           a6,
           v136,
           v137,
           v138,
           v139);
  if ( !SepRmEnforceCap || (v158 = **(_DWORD **)(a4 + 16), v158 < 0) || !v141 )
  {
    v38 = v142;
LABEL_47:
    if ( v6 || (v39 = v7[4], (v39 & 0x2000000) == 0) )
    {
      if ( (_BYTE)v153 && !*(_WORD *)((char *)&v168 + 1) )
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
      if ( !(_BYTE)v153 || !*(_WORD *)((char *)&v168 + 1) )
      {
        SepConstrainByMandatory((__int64)&v169, v39, v40, *(char **)(a4 + 16), &v142, 0);
        AuthzBasepSetAccessReasons(v41 & ~**(_DWORD **)(a4 + 8), 3145728, 0, *(_QWORD *)(a4 + 24), 0);
        v38 = v142;
      }
    }
    v42 = v7[4];
    v43 = 0;
    if ( (v42 & 0x2000000) != 0 )
    {
      v44 = *(int **)(a4 + 8);
      v45 = *(_DWORD **)(a4 + 16);
      v46 = *v44;
      if ( v162 != -1 )
      {
        v126 = v162 & v46;
        if ( (v162 & v46) != v46 )
        {
          *v44 = v126;
          v43 = 1;
          if ( (v42 & 0x2000000) != 0 )
          {
            if ( v126 )
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
       || !HIDWORD(v167) && (*(_DWORD *)(PrimaryToken + 200) & 0x4000) != 0 && (**(int **)(a4 + 16) < 0 || HIBYTE(v168))) )
    {
      v127 = *((_QWORD *)v7 + 1);
      v128 = **(_DWORD **)(a4 + 16) >= 0;
      v129 = v7[4] | v7[5];
      v130 = SepLocateTokenTrustLevel((__int64 *)v9);
      SeLogAccessFailure(PrimaryToken, v131, v132, v130, *(_QWORD *)(v127 + 8), v129, v128);
    }
    if ( v141 )
      SepRmDereferenceCap(v150);
    if ( !a2 )
      SeUnlockSubjectContext(v9);
    SepFreeResourceInfo(v151);
    return v146 && v38;
  }
  v73 = *(_DWORD ***)(a4 + 32);
  v147 = **(_DWORD **)(a4 + 8);
  v149 = v147;
  P = 0LL;
  LOBYTE(v160) = 0;
  v145 = 0;
  if ( v73 )
  {
    v74 = *v73;
    if ( v74 )
    {
      if ( *v74 )
      {
        v75 = (unsigned int)*v74;
        v76 = v74 + 2;
        v77 = v145;
        HighPart = SeSecurityPrivilege.HighPart;
        v156 = HIDWORD(SeTakeOwnershipPrivilege);
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
        v9 = v172;
        v145 = v77;
        v7 = (unsigned int *)v164;
      }
    }
  }
  LOBYTE(v37) = 1;
  v156 = v147;
  v143 = SepAdtAuditThisEventWithContext(130LL, 1LL, v37, v9);
  if ( v143 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * *(unsigned int *)(v150 + 60), 0x41536553u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( !a2 )
        SeUnlockSubjectContext(v9);
      SepRmDereferenceCap(v150);
      v79 = v151;
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
    v82 = v147;
    v83 = v147;
    v84 = (char *)P;
LABEL_167:
    if ( v143 )
    {
      if ( v83 != v82 )
      {
        v154 = *(_DWORD *)(v80 + 60);
        v85 = v83 & (v82 ^ v83);
        v86 = v82 & (v82 ^ v83);
        if ( v154 )
        {
          v87 = v154;
          v88 = v84;
          v164 = (unsigned __int64)v84;
          for ( i = 0; i < v87; ++i )
          {
            if ( !v85 && !v86 )
              break;
            if ( v88[4] )
            {
              v90 = *(_DWORD *)v88;
              v91 = v86 & (v86 ^ *(_DWORD *)v88);
              if ( v91 )
                AuthzBasepSetAccessReasons(v91, 0x80000000, i << 24, (__int64)v178, 0);
              v86 &= ~v91;
              v92 = v85 & v90;
              if ( v92 )
                AuthzBasepSetAccessReasons(v92, 0x80000000, i << 24, (__int64)v178, 0);
              v85 &= ~v92;
              AuthzBasepMergeAccessReasons(v177, v178, 4278190080LL);
              v88 = (char *)v164;
              v87 = v154;
            }
            v88 += 8;
            v164 = (unsigned __int64)v88;
          }
          v9 = v172;
          v84 = (char *)P;
          v82 = v147;
        }
      }
    }
    if ( v84 )
    {
      ExFreePoolWithTag(v84, 0);
      v82 = v147;
    }
    v38 = v142;
    **(_DWORD **)(a4 + 16) = v158;
    **(_DWORD **)(a4 + 8) &= v82;
    v93 = *(_QWORD *)(a4 + 24);
    if ( **(int **)(a4 + 16) < 0 )
      v38 = 0;
    v142 = v38;
    AuthzBasepMergeAccessReasons(v93, v177, 0LL);
    AuthzBasepMergeAccessReasons(*(_QWORD *)(a4 + 24), v177, 4278190080LL);
    goto LABEL_47;
  }
  while ( 1 )
  {
    v94 = *(_QWORD *)(v80 + 8 * v81 + 64);
    v164 = v81;
    ClientToken = v94;
    if ( *(_QWORD *)(v94 + 24) )
    {
      if ( !v151 )
      {
        v95 = AuthzBasepInitializeResourceClaimsFromSacl((__int64)v165, (__int64)&v151);
        v96 = (unsigned __int8)v160;
        if ( v95 < 0 )
          v96 = 1;
        v160 = v96;
      }
      v97 = *(_QWORD **)(PrimaryToken + 1096);
      v98 = v97 ? v97[75] : 0LL;
      v99 = v97 ? v97[73] : 0LL;
      v100 = v97 ? v97[74] : 0LL;
      v101 = v97 ? v97[72] : 0LL;
      v102 = AuthzBasepEvaluateAceCondition(
               PrimaryToken,
               *(_QWORD *)(PrimaryToken + 776),
               (__int64)v151,
               v101,
               v100,
               v99,
               v98,
               *(_DWORD **)(ClientToken + 24),
               *(_DWORD *)(ClientToken + 16),
               1,
               0,
               &v163);
      v144 = v102;
      if ( v163 != 1 )
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
          v144 = AuthzBasepEvaluateAceCondition(
                   PrimaryToken,
                   *(_QWORD *)(PrimaryToken + 776),
                   (__int64)v151,
                   v107,
                   v106,
                   v105,
                   v104,
                   *(_DWORD **)(ClientToken + 24),
                   *(_DWORD *)(ClientToken + 16),
                   1,
                   1,
                   &v163);
          if ( v144 < 0 )
          {
            if ( !a2 )
              SeUnlockSubjectContext(v9);
LABEL_254:
            SepRmDereferenceCap(v150);
            v125 = v144;
            goto LABEL_258;
          }
        }
        if ( !(_BYTE)v160 && v163 != 1 )
        {
          v82 = v147;
LABEL_225:
          v83 = v149;
          v84 = (char *)P;
          goto LABEL_226;
        }
      }
    }
    v158 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
    if ( v158 < 0 )
      break;
    v108 = v7[4];
    if ( (*(_DWORD *)(ClientToken + 48) & 1) != 0 )
    {
      v148 = 0;
      if ( (v108 & 0x2000000) == 0 )
        v108 |= v7[5];
      v144 = v108 | 0x2000000;
    }
    else
    {
      v144 = v108 | 0x2000000;
      v148 = v7[5];
    }
    memset(v176, 0, sizeof(v176));
    LOBYTE(v135) = a6;
    v110 = SepAccessCheckEx(
             SecurityDescriptor,
             v109,
             v9->PrimaryToken,
             v9->ClientToken,
             v144,
             v176,
             1,
             *((_QWORD *)v7 + 4),
             v148,
             v135,
             &v157,
             0LL,
             &v154,
             v179);
    v111 = v145;
    v112 = v145 | v176[7];
    v146 = v110;
    v113 = (v148 | **(_DWORD **)(a4 + 8)) & v157;
    v157 = v113;
    if ( IsOwner )
      v112 |= v113 & 0x60000;
    v114 = ~v176[8] & v112;
    v115 = v154;
    v116 = (v113 & v147) == 0;
    v82 = v113 & v147;
    v147 &= v113;
    if ( v116 )
      v115 = -1073741790;
    v158 = v115;
    if ( (v156 & (v156 ^ v114)) != 0 )
    {
      AuthzBasepSetAccessReasons(v156 & (v156 ^ v114), 327680, HighPart, (__int64)v177, 0);
      v156 &= v117;
      v113 = v157;
      v111 = v145;
      v82 = v147;
    }
    if ( !v143 )
      goto LABEL_225;
    if ( *(_QWORD *)(ClientToken + 40) )
    {
      v144 = SepBuildCapeSecurityDescriptor(v175);
      if ( v144 < 0 )
      {
        if ( !a2 )
          SeUnlockSubjectContext(v9);
        goto LABEL_254;
      }
      v118 = (*(_DWORD *)(ClientToken + 48) & 0x100) != 0;
      v119 = v7[4];
      v148 = v119;
      if ( v118 )
      {
        v144 = 0;
        if ( (v119 & 0x2000000) == 0 )
          v148 = v7[5] | v119;
      }
      else
      {
        v144 = v7[5];
      }
      memset(v176, 0, sizeof(v176));
      LOBYTE(v135) = a6;
      SepAccessCheckEx(
        v175,
        v120,
        v9->PrimaryToken,
        v9->ClientToken,
        v148,
        0LL,
        0,
        *((_QWORD *)v7 + 4),
        v144,
        v135,
        &v161,
        0LL,
        v173,
        v179);
      v121 = v164;
      v84 = (char *)P;
      v122 = v145 | v161;
      v83 = v161 & v149;
      *((_BYTE *)P + 8 * v164 + 4) = 1;
      *(_DWORD *)&v84[8 * v121] = v122;
      v82 = v147;
      v149 = v83;
    }
    else
    {
      v123 = v164;
      v84 = (char *)P;
      v124 = v113 | v111;
      v83 = v113 & v149;
      v149 &= v113;
      *((_BYTE *)P + 8 * v164 + 4) = 1;
      *(_DWORD *)&v84[8 * v123] = v124;
      v82 = v147;
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
  v125 = v158;
LABEL_258:
  **(_DWORD **)(a4 + 8) = 0;
  **(_DWORD **)(a4 + 16) = v125;
  SepFreeResourceInfo(v151);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0;
}
