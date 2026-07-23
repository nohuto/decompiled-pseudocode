/*
 * XREFs of SepCommonAccessCheckEx @ 0x140135324
 * Callers:
 *     SeAccessCheckEx @ 0x1401352FC (SeAccessCheckEx.c)
 *     SeSrpAccessCheck @ 0x140200594 (SeSrpAccessCheck.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x1400038F0 (SeTokenIsRestricted.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400050D4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140006054 (AuthzBasepEvaluateAceCondition.c)
 *     SepTokenIsOwner @ 0x14008A540 (SepTokenIsOwner.c)
 *     SepMandatoryIntegrityCheck @ 0x14008C7D0 (SepMandatoryIntegrityCheck.c)
 *     SepTrustLevelCheck @ 0x14008DE30 (SepTrustLevelCheck.c)
 *     SepMandatoryToDiscretionary @ 0x14009C148 (SepMandatoryToDiscretionary.c)
 *     SepFreeResourceInfo @ 0x14009C168 (SepFreeResourceInfo.c)
 *     RtlpOwnerAcesPresent @ 0x1400D1D40 (RtlpOwnerAcesPresent.c)
 *     AuthzBasepSetAccessReasons @ 0x1400D5CC0 (AuthzBasepSetAccessReasons.c)
 *     SepLocateTokenTrustLevel @ 0x1400E194C (SepLocateTokenTrustLevel.c)
 *     SepConstrainByMandatory @ 0x1400E5A20 (SepConstrainByMandatory.c)
 *     SeLogAccessFailure @ 0x1400E6334 (SeLogAccessFailure.c)
 *     SepAccessCheckEx @ 0x1401359B4 (SepAccessCheckEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402005BC (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x140200710 (SepGetScopedPolicySid.c)
 *     SepRmDereferenceCap @ 0x14020077C (SepRmDereferenceCap.c)
 *     SepRmReferenceFindCap @ 0x140201B24 (SepRmReferenceFindCap.c)
 *     AuthzBasepMergeAccessReasons @ 0x14021A17C (AuthzBasepMergeAccessReasons.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeUnlockSubjectContext @ 0x140470920 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x140470960 (SeLockSubjectContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140478BB0 (SepAdtAuditThisEventWithContext.c)
 */

char __fastcall SepCommonAccessCheckEx(
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        char a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        char a6)
{
  __int64 v6; // r15
  PSECURITY_SUBJECT_CONTEXT v8; // r12
  _DWORD *v10; // rcx
  _DWORD *v11; // rdx
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  _QWORD *v14; // rax
  char v15; // si
  unsigned int v16; // r13d
  __int64 v17; // rcx
  int v18; // r11d
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r8
  int *v22; // rdx
  int v23; // ebx
  ULONG_PTR PrimaryToken; // rbx
  __int64 v25; // rdx
  __int64 v26; // r9
  char v27; // di
  char v28; // cl
  int v29; // eax
  _DWORD *v30; // r8
  char v31; // cl
  bool IsOwner; // r11
  int v33; // ebx
  char v34; // di
  __int64 v35; // rdx
  __int64 v36; // rcx
  PACCESS_TOKEN v37; // r9
  PACCESS_TOKEN v38; // r8
  __int64 v39; // rcx
  LUID v40; // rdx
  __int64 v41; // r8
  bool v42; // r13
  int v43; // edx
  char *v44; // r8
  int v45; // ebx
  int v46; // r11d
  int v47; // r9d
  int *v48; // rdx
  int *v49; // r8
  int v50; // r10d
  __int64 v52; // rcx
  __int16 v53; // ax
  __int64 v54; // rax
  __int64 v55; // rdx
  char v56; // al
  int v57; // eax
  int v58; // r13d
  char v59; // r11
  int v60; // eax
  int *v61; // rcx
  int v62; // ecx
  _QWORD *v63; // rax
  bool v64; // zf
  int v65; // esi
  __int64 v66; // rdi
  ULONGLONG TokenTrustLevel; // rax
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rax
  int v71; // ecx
  __int64 v72; // rcx
  __int16 v73; // dx
  __int64 v74; // rax
  ACL *v75; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v78; // rdx
  int *v79; // rcx
  char *v80; // rdi
  _DWORD **v81; // r9
  int v82; // r13d
  _DWORD *v83; // r9
  __int64 v84; // r10
  unsigned int *v85; // r9
  int v86; // r12d
  __int64 v87; // rbx
  char v88; // cl
  char *PoolWithTag; // rax
  __int64 v90; // rcx
  unsigned __int64 v91; // rax
  __int64 v92; // r8
  __int64 v93; // r13
  int v94; // eax
  int v95; // ecx
  _QWORD *v96; // rax
  __int64 v97; // r8
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r9
  int v101; // eax
  int v102; // ebx
  _QWORD *v103; // rbx
  _QWORD *v104; // rax
  __int64 v105; // r8
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r9
  bool v109; // zf
  int v110; // ebx
  int v111; // ebx
  int v112; // r13d
  __int64 v113; // rdx
  char v114; // al
  int v115; // r8d
  int v116; // r11d
  int v117; // ebx
  int v118; // r11d
  int v119; // eax
  int v120; // r11d
  __int64 v121; // r13
  int v122; // ebx
  int v123; // r13d
  __int64 v124; // rdx
  int v125; // eax
  unsigned __int64 v126; // rcx
  int v127; // r13d
  int v128; // ebx
  int v129; // r13d
  unsigned int v130; // r12d
  char *v131; // rax
  unsigned int v132; // ecx
  int v133; // r11d
  int v134; // ecx
  int v135; // r11d
  __int64 v136; // rcx
  __int64 v137; // rcx
  int v138; // ecx
  __int64 v139; // rbx
  char v140; // si
  int v141; // edi
  ULONGLONG v142; // rax
  __int64 v143; // rdx
  __int64 v144; // r8
  __int64 v145; // [rsp+38h] [rbp-F8h]
  int v146; // [rsp+40h] [rbp-F0h]
  int v147; // [rsp+48h] [rbp-E8h]
  __int64 v148; // [rsp+50h] [rbp-E0h]
  __int64 v149; // [rsp+58h] [rbp-D8h]
  __int64 v150; // [rsp+60h] [rbp-D0h]
  __int64 v151; // [rsp+68h] [rbp-C8h]
  char v152; // [rsp+B0h] [rbp-80h]
  char v154; // [rsp+B2h] [rbp-7Eh]
  bool v155; // [rsp+B3h] [rbp-7Dh] BYREF
  char v156; // [rsp+B4h] [rbp-7Ch]
  char v157; // [rsp+B5h] [rbp-7Bh]
  char v158; // [rsp+B6h] [rbp-7Ah]
  char v159; // [rsp+B7h] [rbp-79h]
  int v160; // [rsp+B8h] [rbp-78h]
  int v161; // [rsp+BCh] [rbp-74h]
  __int64 v162; // [rsp+C0h] [rbp-70h]
  int v163; // [rsp+C8h] [rbp-68h]
  unsigned int v164; // [rsp+CCh] [rbp-64h] BYREF
  int v165; // [rsp+D0h] [rbp-60h]
  __int64 v166; // [rsp+D8h] [rbp-58h] BYREF
  int v167; // [rsp+E0h] [rbp-50h] BYREF
  int v168; // [rsp+E4h] [rbp-4Ch] BYREF
  __int64 ClientToken; // [rsp+E8h] [rbp-48h]
  int v170; // [rsp+F0h] [rbp-40h]
  int v171; // [rsp+F4h] [rbp-3Ch] BYREF
  int v172; // [rsp+FCh] [rbp-34h]
  int v173; // [rsp+100h] [rbp-30h] BYREF
  int v174; // [rsp+104h] [rbp-2Ch]
  __int64 v175; // [rsp+108h] [rbp-28h]
  PACCESS_TOKEN Token; // [rsp+110h] [rbp-20h]
  unsigned __int64 v177; // [rsp+118h] [rbp-18h]
  int v178; // [rsp+120h] [rbp-10h]
  __int64 v179; // [rsp+128h] [rbp-8h]
  __int64 v180; // [rsp+130h] [rbp+0h]
  int v181; // [rsp+138h] [rbp+8h]
  int v182; // [rsp+140h] [rbp+10h] BYREF
  __int64 v183; // [rsp+144h] [rbp+14h]
  unsigned int v184; // [rsp+14Ch] [rbp+1Ch]
  PSECURITY_SUBJECT_CONTEXT v185; // [rsp+150h] [rbp+20h]
  __int64 v186; // [rsp+158h] [rbp+28h]
  char v187[8]; // [rsp+160h] [rbp+30h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+168h] [rbp+38h] BYREF
  _BYTE v189[40]; // [rsp+190h] [rbp+60h] BYREF
  _DWORD v190[14]; // [rsp+1B8h] [rbp+88h] BYREF
  _DWORD v191[32]; // [rsp+1F0h] [rbp+C0h] BYREF
  _DWORD v192[32]; // [rsp+270h] [rbp+140h] BYREF
  _DWORD v193[32]; // [rsp+2F0h] [rbp+1C0h] BYREF

  v186 = a3;
  v6 = a3;
  v185 = SubjectContext;
  v182 = 0;
  v8 = SubjectContext;
  v183 = 0LL;
  v184 = 0;
  v175 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(v189, 0, sizeof(v189));
  v162 = 0LL;
  v152 = 0;
  v166 = 0LL;
  memset(v191, 0, sizeof(v191));
  memset(v192, 0, sizeof(v192));
  memset(v193, 0, sizeof(v193));
  v168 = -1;
  v157 = 0;
  if ( !a4 )
    return 0;
  if ( *(_DWORD *)a4 != 40 )
    return 0;
  v10 = *(_DWORD **)(a4 + 16);
  if ( !v10 )
    return 0;
  if ( !v8
    || !a3
    || *(_DWORD *)a3 != 56
    || (v11 = *(_DWORD **)(a4 + 8)) == 0LL
    || (v12 = *(_DWORD **)(a3 + 8)) != 0LL && (*v12 != 16 || (v12[1] & 0xFFFFFFFC) != 0)
    || a5 && *a5 != 96 )
  {
    *v10 = -1073741811;
    return 0;
  }
  *v11 = 0;
  v13 = *(_DWORD **)(a4 + 16);
  v173 = 0;
  v167 = -1073741790;
  *v13 = -1073741790;
  v14 = *(_QWORD **)(a4 + 32);
  if ( v14 )
    *v14 = 0LL;
  v15 = 1;
  v16 = *(_DWORD *)(a3 + 16) & ~*(_DWORD *)(a3 + 20) & 0xFDFFFFFF;
  AuthzBasepSetAccessReasons(v16, 0, 0, *(_QWORD *)(a4 + 24), 1);
  if ( !a6 )
  {
    v60 = *(_DWORD *)(v6 + 16);
    v61 = *(int **)(a4 + 8);
    if ( (v60 & 0x2000000) != 0 )
    {
      *v61 = *(_DWORD *)(*(_QWORD *)(v6 + 32) + 12LL);
      **(_DWORD **)(a4 + 8) |= v18 & *(_DWORD *)(v6 + 16);
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(v6 + 20);
    }
    else
    {
      *v61 = *(_DWORD *)(v6 + 20) | v60;
    }
    **(_DWORD **)(a4 + 16) = 0;
    return v15;
  }
  v19 = *(_QWORD *)(v6 + 8);
  if ( !v19 || !*(_QWORD *)(v19 + 8) )
  {
    **(_DWORD **)(a4 + 16) = -1073741790;
    return 0;
  }
  if ( v8->ClientToken && v8->ImpersonationLevel < SecurityImpersonation )
  {
    **(_DWORD **)(a4 + 16) = -1073741659;
    return 0;
  }
  if ( !*(_DWORD *)(v6 + 16) )
  {
    v62 = *(_DWORD *)(v6 + 20);
    if ( !v62 )
    {
      **(_DWORD **)(a4 + 16) = -1073741790;
      return 0;
    }
    **(_DWORD **)(a4 + 8) = v62;
    **(_DWORD **)(a4 + 16) = 0;
    v63 = *(_QWORD **)(a4 + 32);
    if ( v63 )
      *v63 = 0LL;
    return v15;
  }
  v20 = *(_DWORD *)(a4 + 4);
  if ( v20 != 1 && v20 != *(_DWORD *)(v6 + 40) )
  {
    **(_DWORD **)(a4 + 16) = -1073741811;
    return 0;
  }
  if ( !a2 )
    SeLockSubjectContext(v8);
  **(_DWORD **)(a4 + 16) = SepTrustLevelCheck(v17, *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL), v8, 0LL, 0LL, 0, &v168);
  v22 = *(int **)(a4 + 16);
  if ( *v22 < 0 )
  {
    v64 = a2 == 0;
    goto LABEL_98;
  }
  v23 = v168;
  *v22 = (*(_DWORD *)(v6 + 16) & 0xFDFFFFFF) != (v168 & *(_DWORD *)(v6 + 16) & 0xFDFFFFFF) ? 0xC0000022 : 0;
  if ( **(int **)(a4 + 16) < 0 )
  {
    ClientToken = (__int64)v8->ClientToken;
    if ( !ClientToken )
      ClientToken = (__int64)v8->PrimaryToken;
    v65 = *(_DWORD *)(v6 + 16) | *(_DWORD *)(v6 + 20);
    v66 = *(_QWORD *)(v6 + 8);
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)v8);
    SeLogAccessFailure(ClientToken, v68, v69, TokenTrustLevel, *(_QWORD *)(v66 + 8), v65, 0);
    if ( !a2 )
      SeUnlockSubjectContext(v8);
    AuthzBasepSetAccessReasons(v16 & ~v23, 9437184, 0, *(_QWORD *)(a4 + 24), 0);
    return 0;
  }
  PrimaryToken = (ULONG_PTR)v8->ClientToken;
  Token = (PACCESS_TOKEN)PrimaryToken;
  if ( !PrimaryToken )
  {
    PrimaryToken = (ULONG_PTR)v8->PrimaryToken;
    Token = (PACCESS_TOKEN)PrimaryToken;
  }
  v25 = *(_QWORD *)(v6 + 8);
  v26 = 0LL;
  v27 = *(_DWORD *)(v25 + 4) & 1;
  if ( (*(_DWORD *)(v25 + 4) & 2) != 0 )
  {
    LOBYTE(v21) = 1;
    if ( (*(_DWORD *)(PrimaryToken + 200) & 0x2000) != 0 )
    {
      v28 = 1;
      goto LABEL_31;
    }
  }
  else
  {
    LOBYTE(v21) = 0;
  }
  v28 = 0;
LABEL_31:
  v159 = v28;
  if ( !SepAllowAccessUponLogoff && (*(_DWORD *)(PrimaryToken + 200) & 0x20) == 0 )
  {
    v70 = *(_QWORD *)(PrimaryToken + 216);
    if ( v70 )
    {
      if ( (*(_DWORD *)(v70 + 32) & 0x20) != 0 )
      {
        **(_DWORD **)(a4 + 8) = 0;
        **(_DWORD **)(a4 + 16) = -1073741790;
        goto LABEL_97;
      }
    }
  }
  LOBYTE(v165) = 0;
  if ( !v28 )
  {
    **(_DWORD **)(a4 + 16) = SepMandatoryIntegrityCheck(
                               *(_DWORD **)(v6 + 32),
                               *(_QWORD *)(v25 + 8),
                               v21,
                               PrimaryToken,
                               0,
                               (__int64)&v182);
    if ( **(int **)(a4 + 16) < 0 )
    {
LABEL_97:
      v64 = a2 == 0;
LABEL_98:
      if ( v64 )
        SeUnlockSubjectContext(v8);
      return 0;
    }
    v29 = SepMandatoryToDiscretionary(&v182, *(_DWORD *)(v6 + 16));
    *v30 = v29;
    if ( **(_DWORD **)(a4 + 16) < (int)v26 )
    {
      if ( (*(_DWORD *)(PrimaryToken + 200) & 0x4000) == 0 || v184 > 0x2000 )
      {
        if ( a2 == (_BYTE)v26 )
        {
          SeUnlockSubjectContext(v8);
          LOBYTE(v26) = 0;
        }
        AuthzBasepSetAccessReasons(v16 & ~v182, 3145728, 0, *(_QWORD *)(a4 + 24), v26);
        return 0;
      }
      LOBYTE(v165) = 1;
    }
    else if ( (*(_DWORD *)(v6 + 16) & 0x2000000) != 0 && (*(_DWORD *)(PrimaryToken + 200) & 0x4000) != 0 )
    {
      v71 = (unsigned __int8)v165;
      if ( v184 <= 0x2000 )
        v71 = 1;
      v165 = v71;
    }
  }
  if ( !SepRmEnforceCap )
    goto LABEL_38;
  v72 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL);
  v73 = *(_WORD *)(v72 + 2);
  if ( (v73 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_38;
  if ( v73 < 0 )
  {
    v74 = *(unsigned int *)(v72 + 12);
    if ( !(_DWORD)v74 )
    {
      v175 = v26;
LABEL_38:
      v31 = 0;
      goto LABEL_39;
    }
    v75 = (ACL *)(v72 + v74);
  }
  else
  {
    v75 = *(ACL **)(v72 + 24);
  }
  v175 = (__int64)v75;
  if ( !v75 )
    goto LABEL_38;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v75);
  v26 = 0LL;
  if ( ScopedPolicySid )
  {
    Cap = SepRmReferenceFindCap(ScopedPolicySid);
    v78 = v162;
    v26 = 0LL;
    if ( Cap < 0 )
      v78 = SepRmDefaultCap;
    v31 = 1;
    v152 = 1;
    v162 = v78;
  }
  else
  {
    v31 = 0;
  }
LABEL_39:
  if ( !v27 || (*(_DWORD *)(v6 + 16) & 0x2060000) != 0 || v31 )
  {
    IsOwner = SepTokenIsOwner(PrimaryToken, *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL));
    v154 = IsOwner;
    v26 = 0LL;
  }
  else
  {
    IsOwner = v26;
    v154 = v26;
  }
  v33 = *(_DWORD *)(v6 + 16);
  if ( !IsOwner || (v33 & 0x2060000) == 0 )
    goto LABEL_42;
  if ( !v27 )
  {
    v52 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL);
    v53 = *(_WORD *)(v52 + 2);
    if ( (v53 & 4) != 0 )
    {
      if ( v53 >= 0 )
      {
        v55 = *(_QWORD *)(v52 + 32);
LABEL_71:
        v56 = RtlpOwnerAcesPresent(0, v55);
        LODWORD(v26) = 0;
        if ( !v56 )
          goto LABEL_72;
LABEL_42:
        v34 = v152;
        goto LABEL_43;
      }
      v54 = *(unsigned int *)(v52 + 16);
      if ( (_DWORD)v54 )
      {
        v55 = v52 + v54;
        goto LABEL_71;
      }
    }
    v55 = v26;
    goto LABEL_71;
  }
LABEL_72:
  v57 = v33 & 0x2000000;
  if ( (v33 & 0x2000000) != 0 )
  {
    *(_DWORD *)(v6 + 20) |= 0x60000u;
    v33 = 393216;
  }
  else
  {
    v33 &= 0x60000u;
    *(_DWORD *)(v6 + 20) |= v33;
  }
  if ( v57 )
    v58 = 393216;
  else
    v58 = v16 & 0x60000;
  AuthzBasepSetAccessReasons(v58, 0x400000, 0, *(_QWORD *)(a4 + 24), v26);
  *(_DWORD *)(v6 + 16) &= 0xFFF9FFFF;
  v34 = v152;
  v154 = v152 != 0 ? v59 : 0;
  LODWORD(v26) = 0;
LABEL_43:
  v35 = *(unsigned int *)(v6 + 16);
  if ( !(_DWORD)v35 && !v34 && ((*((_DWORD *)Token + 50) & 0x2000) != 0 || !v33) )
  {
    if ( a2 == (_BYTE)v26 )
    {
      SeUnlockSubjectContext(v8);
      LODWORD(v26) = 0;
    }
    **(_DWORD **)(a4 + 8) = *(_DWORD *)(v6 + 20);
    **(_DWORD **)(a4 + 16) = v26;
    return v15;
  }
  v36 = *(_QWORD *)(v6 + 8);
  v37 = v8->ClientToken;
  v38 = v8->PrimaryToken;
  v179 = 0LL;
  v39 = *(_QWORD *)(v36 + 8);
  v180 = 0LL;
  v181 = 0;
  v151 = *(_QWORD *)(a4 + 24);
  v150 = *(_QWORD *)(a4 + 16);
  v149 = *(_QWORD *)(a4 + 32);
  v148 = *(_QWORD *)(a4 + 8);
  v146 = *(_DWORD *)(v6 + 20);
  v145 = *(_QWORD *)(v6 + 32);
  LODWORD(v179) = v33;
  v158 = SepAccessCheckEx(v39, v35, v38, v37, v35, 0LL, 0, v145, v146, a6, v148, v149, v150, v151);
  if ( !SepRmEnforceCap || (v178 = **(_DWORD **)(a4 + 16), v178 < 0) || !v34 )
  {
    v42 = v155;
    goto LABEL_46;
  }
  v79 = *(int **)(a4 + 8);
  v80 = 0LL;
  v81 = *(_DWORD ***)(a4 + 32);
  LOBYTE(v170) = 0;
  v161 = 0;
  v82 = *v79;
  v160 = v82;
  v163 = v82;
  if ( v81 )
  {
    v83 = *v81;
    if ( v83 )
    {
      if ( *v83 )
      {
        v84 = (unsigned int)*v83;
        v85 = v83 + 2;
        v86 = 0;
        v40 = SeRelabelPrivilege;
        do
        {
          v41 = v85[2];
          if ( (int)v41 < 0 )
          {
            v41 = *v85;
            if ( *(_QWORD *)v85 == SeSecurityPrivilege )
            {
              v86 |= 0x1000000u;
            }
            else if ( *(_QWORD *)v85 == SeTakeOwnershipPrivilege || *(_QWORD *)v85 == SeRelabelPrivilege )
            {
              v86 |= 0x80000u;
            }
          }
          v85 += 3;
          --v84;
        }
        while ( v84 );
        v82 = v160;
        v161 = v86;
        v8 = v185;
      }
    }
  }
  v172 = v82;
  LOBYTE(v41) = 1;
  LOBYTE(v40.LowPart) = 1;
  v87 = v162;
  v88 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SepAdtAuditThisEventWithContext)(129LL, v40, v41, v8);
  v156 = v88;
  if ( v88 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * *(unsigned int *)(v162 + 60), 0x41536553u);
    v80 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( !a2 )
        SeUnlockSubjectContext(v8);
      SepRmDereferenceCap(v162);
      v90 = v166;
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = -1073741801;
      SepFreeResourceInfo(v90);
      return 0;
    }
    memset(PoolWithTag, 0, 8LL * *(unsigned int *)(v162 + 60));
    v88 = v156;
  }
  v91 = 0LL;
  v174 = 0;
  if ( !*(_DWORD *)(v162 + 60) )
  {
LABEL_224:
    if ( v88 )
    {
      if ( v163 != v82 )
      {
        v167 = 0;
        v127 = v82 ^ v163;
        v128 = v163 & v127;
        v129 = v160 & v127;
        v164 = *(_DWORD *)(v162 + 60);
        if ( v164 )
        {
          v130 = v167;
          v131 = v80;
          v132 = v164;
          v177 = (unsigned __int64)v80;
          do
          {
            if ( !v128 && !v129 )
              break;
            if ( v131[4] )
            {
              v133 = *(_DWORD *)v131;
              v134 = v129 & (v129 ^ *(_DWORD *)v131);
              if ( v134 )
                AuthzBasepSetAccessReasons(v134, 0x80000000, v130 << 24, (__int64)v192, 0);
              v129 &= ~v134;
              v135 = v128 & v133;
              if ( v135 )
                AuthzBasepSetAccessReasons(v135, 0x80000000, v130 << 24, (__int64)v192, 0);
              v128 &= ~v135;
              AuthzBasepMergeAccessReasons(v191, v192, 4278190080LL);
              v131 = (char *)v177;
              v132 = v164;
            }
            v131 += 8;
            ++v130;
            v177 = (unsigned __int64)v131;
          }
          while ( v130 < v132 );
          v6 = v186;
          v8 = v185;
        }
      }
    }
    if ( v80 )
      ExFreePoolWithTag(v80, 0);
    v42 = v155;
    **(_DWORD **)(a4 + 16) = v178;
    **(_DWORD **)(a4 + 8) &= v160;
    v136 = *(_QWORD *)(a4 + 24);
    if ( **(int **)(a4 + 16) < 0 )
      v42 = 0;
    v155 = v42;
    AuthzBasepMergeAccessReasons(v136, v191, 0LL);
    AuthzBasepMergeAccessReasons(*(_QWORD *)(a4 + 24), v191, 4278190080LL);
LABEL_46:
    if ( v159 || (v43 = *(_DWORD *)(v6 + 16), (v43 & 0x2000000) == 0) )
    {
      if ( (_BYTE)v165 && !BYTE2(v181) )
      {
        v46 = -1073741790;
        if ( !BYTE1(v181) )
        {
          v42 = 0;
          **(_DWORD **)(a4 + 16) = -1073741790;
          **(_DWORD **)(a4 + 8) = 0;
          AuthzBasepSetAccessReasons(~**(_DWORD **)(a4 + 8), 3145728, 0, *(_QWORD *)(a4 + 24), 0);
        }
        goto LABEL_51;
      }
    }
    else
    {
      v44 = *(char **)(a4 + 8);
      v45 = *(_DWORD *)v44;
      if ( !(_BYTE)v165 || !*(_WORD *)((char *)&v181 + 1) )
      {
        SepConstrainByMandatory((__int64)&v182, v43, v44, *(char **)(a4 + 16), &v155, 0);
        AuthzBasepSetAccessReasons(v45 & ~**(_DWORD **)(a4 + 8), 3145728, 0, *(_QWORD *)(a4 + 24), 0);
        v42 = v155;
      }
    }
    v46 = -1073741790;
LABEL_51:
    v47 = *(_DWORD *)(v6 + 16);
    if ( (v47 & 0x2000000) != 0 )
    {
      v48 = *(int **)(a4 + 8);
      v49 = *(int **)(a4 + 16);
      v157 = 0;
      v50 = *v48;
      if ( v168 != -1 )
      {
        v138 = v168 & v50;
        if ( (v168 & v50) != v50 )
        {
          v157 = 1;
          *v48 = v138;
          if ( (v47 & 0x2000000) != 0 )
          {
            if ( v138 )
            {
              *v49 = 0;
              v42 = 1;
            }
            else
            {
              *v49 = v46;
              v42 = 0;
            }
          }
          else
          {
            *v49 = v46;
            v42 = *v48 != 0;
          }
        }
      }
      AuthzBasepSetAccessReasons(v50 & ~**(_DWORD **)(a4 + 8), 9437184, 0, *(_QWORD *)(a4 + 24), 0);
    }
    if ( Token
      && (v157 || !HIDWORD(v180) && (*((_DWORD *)Token + 50) & 0x4000) != 0 && (**(int **)(a4 + 16) < 0 || HIBYTE(v181))) )
    {
      v139 = *(_QWORD *)(v6 + 8);
      v140 = **(_DWORD **)(a4 + 16) >= 0;
      v141 = *(_DWORD *)(v6 + 16) | *(_DWORD *)(v6 + 20);
      v142 = SepLocateTokenTrustLevel((__int64 *)v8);
      SeLogAccessFailure((__int64)Token, v143, v144, v142, *(_QWORD *)(v139 + 8), v141, v140);
      v15 = 1;
    }
    if ( v152 )
      SepRmDereferenceCap(v162);
    if ( !a2 )
      SeUnlockSubjectContext(v8);
    SepFreeResourceInfo(v166);
    if ( !v158 || !v42 )
      return 0;
    return v15;
  }
  while ( 1 )
  {
    v92 = *(_QWORD *)(v87 + 8 * v91 + 64);
    v93 = v166;
    v177 = v91;
    ClientToken = v92;
    if ( *(_QWORD *)(v92 + 24) )
    {
      if ( !v166 )
      {
        v94 = AuthzBasepInitializeResourceClaimsFromSacl(v175, &v166);
        v93 = v166;
        v95 = (unsigned __int8)v170;
        if ( v94 < 0 )
          v95 = 1;
        v170 = v95;
      }
      v96 = (_QWORD *)*((_QWORD *)Token + 137);
      v97 = v96 ? v96[75] : 0LL;
      v98 = v96 ? v96[73] : 0LL;
      v99 = v96 ? v96[74] : 0LL;
      v100 = v96 ? v96[72] : 0LL;
      v101 = AuthzBasepEvaluateAceCondition(
               (__int64)Token,
               *((_QWORD *)Token + 97),
               v93,
               v100,
               v99,
               v98,
               v97,
               *(_DWORD **)(ClientToken + 24),
               *(_DWORD *)(ClientToken + 16),
               1,
               0,
               &v171);
      v102 = v101;
      if ( v171 != 1 )
      {
        if ( v101 < 0 )
          goto LABEL_243;
        v103 = Token;
        if ( SeTokenIsRestricted(Token) )
        {
          v104 = (_QWORD *)v103[137];
          v105 = v104 ? v104[75] : 0LL;
          v106 = v104 ? v104[73] : 0LL;
          v107 = v104 ? v104[74] : 0LL;
          v108 = v104 ? v104[72] : 0LL;
          v102 = AuthzBasepEvaluateAceCondition(
                   (__int64)v103,
                   v103[97],
                   v93,
                   v108,
                   v107,
                   v106,
                   v105,
                   *(_DWORD **)(ClientToken + 24),
                   *(_DWORD *)(ClientToken + 16),
                   1,
                   1,
                   &v171);
          if ( v102 < 0 )
          {
            v109 = a2 == 0;
LABEL_244:
            if ( v109 )
              SeUnlockSubjectContext(v8);
            SepRmDereferenceCap(v162);
            v137 = v93;
            goto LABEL_248;
          }
        }
        if ( !(_BYTE)v170 && v171 != 1 )
          goto LABEL_222;
      }
    }
    v102 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
    if ( v102 < 0 )
    {
LABEL_243:
      v109 = a2 == 0;
      goto LABEL_244;
    }
    v110 = *(_DWORD *)(v6 + 16);
    if ( (*(_DWORD *)(ClientToken + 48) & 1) != 0 )
    {
      if ( (v110 & 0x2000000) == 0 )
        v110 |= *(_DWORD *)(v6 + 20);
      v111 = v110 | 0x2000000;
      v112 = 0;
    }
    else
    {
      v112 = *(_DWORD *)(v6 + 20);
      v111 = v110 | 0x2000000;
    }
    memset(v190, 0, 0x30uLL);
    LOBYTE(v147) = a6;
    v114 = SepAccessCheckEx(
             SecurityDescriptor,
             v113,
             v8->PrimaryToken,
             v8->ClientToken,
             v111,
             v190,
             1,
             *(_QWORD *)(v6 + 32),
             v112,
             v147,
             &v173,
             0LL,
             &v167,
             v193);
    v115 = v161;
    v116 = v161 | v190[7];
    v158 = v114;
    v117 = (v112 | **(_DWORD **)(a4 + 8)) & v173;
    v173 = v117;
    if ( v154 )
      v116 |= v117 & 0x60000;
    v118 = ~v190[8] & v116;
    v119 = v167;
    v64 = (v117 & v160) == 0;
    v82 = v117 & v160;
    v160 &= v117;
    if ( v64 )
      v119 = -1073741790;
    v178 = v119;
    if ( (v172 & (v172 ^ v118)) != 0 )
    {
      AuthzBasepSetAccessReasons(v172 & (v172 ^ v118), 327680, v174, (__int64)v191, 0);
      v172 &= v120;
      v115 = v161;
    }
    v88 = v156;
    if ( v156 )
      break;
LABEL_223:
    v87 = v162;
    v91 = (unsigned int)(v174 + 1);
    v174 = v91;
    if ( (unsigned int)v91 >= *(_DWORD *)(v162 + 60) )
      goto LABEL_224;
  }
  v121 = ClientToken;
  if ( !*(_QWORD *)(ClientToken + 40) )
  {
    v125 = v117 | v115;
    v163 &= v117;
LABEL_221:
    v126 = v177;
    *(_DWORD *)&v80[8 * v177] = v125;
    v80[8 * v126 + 4] = 1;
LABEL_222:
    v82 = v160;
    v88 = v156;
    goto LABEL_223;
  }
  v102 = SepBuildCapeSecurityDescriptor(v189);
  if ( v102 >= 0 )
  {
    v122 = *(_DWORD *)(v6 + 16);
    if ( (*(_DWORD *)(v121 + 48) & 0x100) != 0 )
    {
      if ( (v122 & 0x2000000) == 0 )
        v122 |= *(_DWORD *)(v6 + 20);
      v123 = 0;
    }
    else
    {
      v123 = *(_DWORD *)(v6 + 20);
    }
    memset(v190, 0, 0x30uLL);
    LOBYTE(v147) = a6;
    SepAccessCheckEx(
      v189,
      v124,
      v8->PrimaryToken,
      v8->ClientToken,
      v122,
      0LL,
      0,
      *(_QWORD *)(v6 + 32),
      v123,
      v147,
      &v164,
      0LL,
      v187,
      v193);
    v125 = v161 | v164;
    v163 &= v164;
    goto LABEL_221;
  }
  if ( !a2 )
    SeUnlockSubjectContext(v8);
  SepRmDereferenceCap(v162);
  v137 = v166;
LABEL_248:
  **(_DWORD **)(a4 + 8) = 0;
  **(_DWORD **)(a4 + 16) = v102;
  SepFreeResourceInfo(v137);
  if ( v80 )
    ExFreePoolWithTag(v80, 0);
  return 0;
}
