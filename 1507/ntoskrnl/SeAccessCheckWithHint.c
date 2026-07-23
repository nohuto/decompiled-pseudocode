/*
 * XREFs of SeAccessCheckWithHint @ 0x1400CABF0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400083BC (RtlCheckTokenMembershipEx.c)
 *     SeAccessCheck @ 0x1400CAB80 (SeAccessCheck.c)
 *     SeAccessCheckFromStateEx @ 0x1400CD1B0 (SeAccessCheckFromStateEx.c)
 *     RtlpAllowsLowBoxAccess @ 0x14012F0C8 (RtlpAllowsLowBoxAccess.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140133DD4 (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlCheckTokenCapability @ 0x1402450DC (RtlCheckTokenCapability.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140413138 (ObpVerifyAccessToBoundaryEntry.c)
 *     ExpCheckIRTimerAccess @ 0x140557A34 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x140007C40 (SeTokenIsRestricted.c)
 *     RtlSidDominatesForTrust @ 0x140043E50 (RtlSidDominatesForTrust.c)
 *     SepLocateTokenTrustLevel @ 0x140045658 (SepLocateTokenTrustLevel.c)
 *     SepAccessCheck @ 0x1400CB700 (SepAccessCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x1400CC5F0 (SepMandatoryIntegrityCheck.c)
 *     SepSidInTokenSidHash @ 0x1400CD250 (SepSidInTokenSidHash.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140109210 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepFreeResourceInfo @ 0x14010D734 (SepFreeResourceInfo.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14011C690 (AuthzBasepEvaluateAceCondition.c)
 *     SeLogAccessFailure @ 0x140124240 (SeLogAccessFailure.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14012A2E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14024F4BC (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x14024F610 (SepGetScopedPolicySid.c)
 *     SepRmDereferenceCap @ 0x14024F67C (SepRmDereferenceCap.c)
 *     SepRmReferenceFindCap @ 0x140250B38 (SepRmReferenceFindCap.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeUnlockSubjectContext @ 0x1404C52E0 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1404C5390 (SeLockSubjectContext.c)
 */

char __fastcall SeAccessCheckWithHint(
        __int64 a1,
        char a2,
        int *a3,
        char a4,
        unsigned int a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        char a9,
        int *a10,
        NTSTATUS *a11)
{
  int *v11; // r14
  __int64 v12; // rsi
  int v14; // ebx
  unsigned int v16; // r13d
  __int16 v17; // r11
  unsigned int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // edx
  __int64 v23; // r12
  char v24; // cl
  int v25; // eax
  void *ScopedPolicySid; // rax
  __int64 v27; // rax
  unsigned __int8 *v28; // r14
  __int64 v29; // rdi
  __int64 v30; // rax
  BOOLEAN v31; // r8
  __int16 v32; // r9
  unsigned int v33; // r10d
  unsigned __int64 v34; // r15
  int v35; // r12d
  __int64 v36; // rcx
  int v37; // edx
  __int64 v38; // rsi
  char v39; // cl
  __int16 v40; // cx
  __int64 v41; // rax
  __int64 v42; // rcx
  _WORD *SeOwnerRightsSid; // r15
  unsigned int v44; // r14d
  unsigned __int8 *v45; // rdi
  unsigned int v46; // esi
  int v47; // r12d
  unsigned __int8 v48; // cl
  unsigned __int8 *v49; // rcx
  unsigned int v50; // edx
  int v51; // edi
  unsigned int v52; // r15d
  int v53; // esi
  char v54; // r12
  char v55; // r15
  PVOID v56; // r14
  char v57; // si
  int *v58; // rcx
  int *v59; // r8
  char v60; // dl
  struct _SECURITY_SUBJECT_CONTEXT *v61; // rdi
  char result; // al
  unsigned int v63; // ecx
  int v64; // eax
  int v65; // r14d
  void *v66; // rdi
  void *v67; // rsi
  NTSTATUS v68; // eax
  char v69; // bl
  char v70; // r13
  int v71; // eax
  int v72; // edx
  int v73; // r8d
  __int64 v74; // rbx
  int TokenTrustLevel; // eax
  int v76; // edx
  int v77; // r8d
  struct _SECURITY_SUBJECT_CONTEXT *v78; // rcx
  int v79; // eax
  int v80; // edx
  __int64 v81; // r9
  __int64 v82; // r8
  unsigned int v83; // ecx
  __int64 v84; // rax
  __int16 v85; // cx
  __int64 v86; // rax
  ACL *v87; // rcx
  __int64 v88; // rdx
  bool v89; // sf
  unsigned int v90; // r12d
  __int64 v91; // rax
  int v92; // eax
  _QWORD *v93; // rax
  __int64 v94; // r8
  __int64 v95; // rdx
  __int64 v96; // rcx
  int v97; // eax
  int v98; // esi
  _QWORD *v99; // rsi
  _QWORD *v100; // rax
  __int64 v101; // r9
  __int64 v102; // r8
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r12
  int v106; // eax
  int v107; // ecx
  int v108; // eax
  __int16 v109; // [rsp+A0h] [rbp-80h]
  char v110; // [rsp+A0h] [rbp-80h]
  char v111; // [rsp+A2h] [rbp-7Eh]
  BOOLEAN DominatesTrust; // [rsp+A3h] [rbp-7Dh] BYREF
  BOOLEAN v113; // [rsp+A4h] [rbp-7Ch] BYREF
  char v114; // [rsp+A5h] [rbp-7Bh]
  char v115; // [rsp+A6h] [rbp-7Ah] BYREF
  char v116; // [rsp+A7h] [rbp-79h]
  unsigned int v117; // [rsp+A8h] [rbp-78h]
  int v118; // [rsp+ACh] [rbp-74h]
  __int64 v119; // [rsp+B0h] [rbp-70h]
  unsigned int v120; // [rsp+B8h] [rbp-68h]
  int v121; // [rsp+BCh] [rbp-64h]
  PVOID P; // [rsp+C0h] [rbp-60h] BYREF
  int v123; // [rsp+C8h] [rbp-58h] BYREF
  PACCESS_TOKEN Token; // [rsp+D0h] [rbp-50h]
  __int64 v125; // [rsp+D8h] [rbp-48h]
  int v126; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v127; // [rsp+E4h] [rbp-3Ch]
  unsigned int v128; // [rsp+ECh] [rbp-34h]
  int v129; // [rsp+F0h] [rbp-30h] BYREF
  ACL *v130; // [rsp+F8h] [rbp-28h]
  int v131; // [rsp+100h] [rbp-20h] BYREF
  __int64 v132; // [rsp+108h] [rbp-18h] BYREF
  __int64 v133; // [rsp+110h] [rbp-10h]
  int v134; // [rsp+118h] [rbp-8h]
  char SecurityDescriptor; // [rsp+120h] [rbp+0h] BYREF
  __int64 v136; // [rsp+121h] [rbp+1h]
  __int64 v137; // [rsp+129h] [rbp+9h]
  __int64 v138; // [rsp+131h] [rbp+11h]
  __int64 v139; // [rsp+139h] [rbp+19h]
  int v140; // [rsp+141h] [rbp+21h]
  __int16 v141; // [rsp+145h] [rbp+25h]
  char v142; // [rsp+147h] [rbp+27h]
  char v146; // [rsp+1C0h] [rbp+A0h]

  v11 = a11;
  v12 = a1;
  v126 = 0;
  v130 = 0LL;
  v127 = 0LL;
  v14 = -1;
  v128 = 0;
  SecurityDescriptor = 0;
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0;
  v141 = 0;
  v142 = 0;
  v111 = 0;
  *a10 = 0;
  *a11 = -1073741790;
  v119 = 0LL;
  v117 = 0;
  P = 0LL;
  v129 = 0;
  v131 = -1073741790;
  if ( a7 )
    *a7 = 0LL;
  if ( !a9 )
  {
    v63 = a5;
    if ( (a5 & 0x2000000) != 0 )
      v63 = *(_DWORD *)(a8 + 12) | a5 & 0xFDFFFFFF;
    result = 1;
    *a10 = a6 | v63;
    *a11 = 0;
    return result;
  }
  if ( !a1 )
  {
    *a11 = -1073741790;
    return 0;
  }
  if ( *(_QWORD *)a3 && a3[2] < 2 )
  {
    *a11 = -1073741659;
    return 0;
  }
  v16 = a5;
  if ( !a5 )
  {
    if ( a6 )
    {
      *a10 = a6;
      *a11 = 0;
      if ( a7 )
        *a7 = 0LL;
      return 1;
    }
    else
    {
      *a11 = -1073741790;
      return 0;
    }
  }
  if ( !a4 )
    SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
  v17 = *(_WORD *)(v12 + 2);
  v18 = 0;
  DominatesTrust = 0;
  v113 = 0;
  while ( 1 )
  {
    if ( (v17 & 0x10) == 0 )
      goto LABEL_19;
    if ( (v17 & 0x8000) == 0 )
      break;
    v19 = *(unsigned int *)(v12 + 12);
    if ( (_DWORD)v19 )
    {
      v20 = v12 + v19;
      goto LABEL_14;
    }
LABEL_19:
    v21 = 0LL;
LABEL_20:
    ++v18;
    if ( !v21 )
      goto LABEL_21;
  }
  v20 = *(_QWORD *)(v12 + 24);
LABEL_14:
  if ( !v20 )
    goto LABEL_19;
  v21 = v20 + 8;
  v22 = 0;
  if ( !*(_WORD *)(v20 + 4) )
    goto LABEL_19;
  while ( v22 < v18 || *(_BYTE *)v21 != 20 )
  {
    ++v22;
    v21 += *(unsigned __int16 *)(v21 + 2);
    if ( v22 >= *(unsigned __int16 *)(v20 + 4) )
      goto LABEL_19;
  }
  v18 = v22;
  if ( (*(_BYTE *)(v21 + 1) & 8) != 0 )
    goto LABEL_20;
  if ( !v21 )
  {
LABEL_21:
    v14 = -1;
    *v11 = 0;
    goto LABEL_22;
  }
  v65 = *(_DWORD *)(v21 + 4);
  v66 = (void *)(v21 + 8);
  if ( v21 == -8 )
  {
    v11 = a11;
    goto LABEL_21;
  }
  if ( !*(_QWORD *)a3 )
    goto LABEL_150;
  v67 = *(void **)(*(_QWORD *)a3 + 1104LL);
  v68 = RtlSidDominatesForTrust(*(PSID *)(*((_QWORD *)a3 + 2) + 1104LL), v67, &v113);
  if ( v68 >= 0 )
  {
    if ( !v113 )
LABEL_150:
      v67 = *(void **)(*((_QWORD *)a3 + 2) + 1104LL);
    v68 = RtlSidDominatesForTrust(v67, v66, &DominatesTrust);
    if ( v68 >= 0 )
    {
      if ( DominatesTrust )
        v14 = -1;
      else
        v14 = v65 | 0x1000000;
    }
  }
  v11 = a11;
  *a11 = v68;
  if ( v68 < 0 )
  {
    if ( a4 )
      return 0;
LABEL_177:
    v78 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
    goto LABEL_193;
  }
  v12 = a1;
LABEL_22:
  if ( (v14 & a5 & 0xFDFFFFFF) != (a5 & 0xFDFFFFFF) )
  {
    *v11 = -1073741790;
    v74 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3 )
      v74 = *((_QWORD *)a3 + 2);
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)a3);
    SeLogAccessFailure(v74, v76, v77, TokenTrustLevel, v12, a6 | a5, 0);
    if ( a4 )
      return 0;
    goto LABEL_177;
  }
  *v11 = 0;
  v23 = *(_QWORD *)a3;
  Token = (PACCESS_TOKEN)v23;
  if ( !v23 )
  {
    v23 = *((_QWORD *)a3 + 2);
    Token = (PACCESS_TOKEN)v23;
  }
  if ( (a2 & 2) == 0 )
  {
    LOBYTE(v18) = 0;
    goto LABEL_27;
  }
  LOBYTE(v18) = 1;
  if ( (*(_DWORD *)(v23 + 200) & 0x2000) != 0 )
    v24 = 1;
  else
LABEL_27:
    v24 = 0;
  v116 = v24;
  v114 = 0;
  if ( !SepAllowAccessUponLogoff && (*(_DWORD *)(v23 + 200) & 0x20) == 0 )
  {
    v84 = *(_QWORD *)(v23 + 216);
    if ( v84 )
    {
      if ( (*(_DWORD *)(v84 + 32) & 0x20) != 0 )
      {
        *a10 = 0;
        *v11 = -1073741790;
        if ( !a4 )
        {
          v78 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
LABEL_193:
          SeUnlockSubjectContext(v78);
        }
        return 0;
      }
    }
  }
  if ( v24 )
    goto LABEL_34;
  v25 = SepMandatoryIntegrityCheck(a8, v12, v18, v23, 0, (__int64)&v126);
  *v11 = v25;
  if ( v25 < 0 )
  {
LABEL_166:
    if ( !a4 )
    {
      v78 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
      goto LABEL_193;
    }
    return 0;
  }
  if ( HIDWORD(v127) && (v126 & a5 & 0xFDFFFFFF) != (a5 & 0xFDFFFFFF) )
  {
    *v11 = -1073741790;
    if ( (*(_DWORD *)(v23 + 200) & 0x4000) != 0 && v128 <= 0x2000 )
    {
LABEL_134:
      v114 = 1;
      goto LABEL_34;
    }
    goto LABEL_166;
  }
  *v11 = 0;
  if ( (a5 & 0x2000000) != 0 && (*(_DWORD *)(v23 + 200) & 0x4000) != 0 && v128 <= 0x2000 )
    goto LABEL_134;
LABEL_34:
  LOBYTE(ScopedPolicySid) = SepRmEnforceCap;
  if ( SepRmEnforceCap )
  {
    v85 = *(_WORD *)(v12 + 2);
    if ( (v85 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
      goto LABEL_208;
    if ( v85 < 0 )
    {
      v86 = *(unsigned int *)(v12 + 12);
      if ( !(_DWORD)v86 )
      {
        v130 = 0LL;
        goto LABEL_208;
      }
      v87 = (ACL *)(v12 + v86);
    }
    else
    {
      v87 = *(ACL **)(v12 + 24);
    }
    v130 = v87;
    if ( v87 )
    {
      ScopedPolicySid = (void *)SepGetScopedPolicySid(v87);
      if ( ScopedPolicySid )
      {
        LODWORD(ScopedPolicySid) = SepRmReferenceFindCap(ScopedPolicySid);
        v88 = v119;
        v89 = (int)ScopedPolicySid < 0;
        LOBYTE(ScopedPolicySid) = 1;
        if ( v89 )
          v88 = SepRmDefaultCap;
        v111 = 1;
        v119 = v88;
      }
      goto LABEL_35;
    }
LABEL_208:
    LOBYTE(ScopedPolicySid) = 0;
  }
LABEL_35:
  if ( (a2 & 1) != 0 )
  {
    v113 = 1;
    if ( (a5 & 0x2060000) == 0 && !(_BYTE)ScopedPolicySid )
      goto LABEL_77;
  }
  else
  {
    v113 = 0;
  }
  if ( (*(_WORD *)(v12 + 2) & 0x8000) != 0 )
  {
    v27 = *(unsigned int *)(v12 + 4);
    if ( (_DWORD)v27 )
      v28 = (unsigned __int8 *)(v12 + v27);
    else
      v28 = 0LL;
  }
  else
  {
    v28 = *(unsigned __int8 **)(v12 + 8);
  }
  v29 = v23 + 232;
  if ( v23 == -232 || !v28 )
    goto LABEL_76;
  v30 = v28[1];
  v31 = 0;
  v32 = *(_WORD *)v28;
  v109 = *(_WORD *)v28;
  DominatesTrust = 0;
  v33 = 4 * v30 + 8;
  LODWORD(v30) = v28[4 * v30 + 4];
  v118 = v33;
  v34 = *(_QWORD *)(v29 + 8 * (v30 & 0xF) + 16) & *(_QWORD *)(v29 + 8 * ((unsigned __int64)(unsigned int)v30 >> 4) + 144);
  if ( !v34 )
    goto LABEL_75;
  while ( 2 )
  {
    LOBYTE(v35) = v34;
    if ( !(_BYTE)v34 )
      goto LABEL_114;
    v36 = *(_QWORD *)(v29 + 8);
    v37 = v31;
    v125 = v36;
    v121 = v31;
    while ( 2 )
    {
      v120 = SidHashByteToIndexLookupTable[(unsigned __int8)v35];
      v38 = v36 + 16LL * (v37 + v120);
      if ( **(_WORD **)v38 == v32 )
      {
        if ( !memcmp(v28, *(const void **)v38, v33) )
        {
LABEL_47:
          if ( v38 == *(_QWORD *)(v29 + 8) && (*(_DWORD *)(v38 + 8) & 0x10) == 0 || (*(_DWORD *)(v38 + 8) & 4) != 0 )
          {
            v39 = 1;
            v110 = 1;
            if ( *((_DWORD *)Token + 32) )
            {
              v39 = SepSidInTokenSidHash((char *)Token + 504);
              v110 = v39;
            }
          }
          else
          {
            v39 = 0;
            v110 = 0;
          }
          if ( !v39 || (a5 & 0x2060000) == 0 )
          {
LABEL_102:
            v51 = a6;
            v11 = a11;
            v50 = v117;
            LOBYTE(ScopedPolicySid) = v111;
            goto LABEL_79;
          }
          if ( !v113 )
          {
            v40 = *(_WORD *)(a1 + 2);
            if ( (v40 & 4) != 0 )
            {
              if ( v40 >= 0 )
              {
                v42 = *(_QWORD *)(a1 + 32);
              }
              else
              {
                v41 = *(unsigned int *)(a1 + 16);
                if ( (_DWORD)v41 )
                  v42 = a1 + v41;
                else
                  v42 = 0LL;
              }
            }
            else
            {
              v42 = 0LL;
            }
            SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
            if ( v42 )
            {
              v44 = *(unsigned __int16 *)(v42 + 4);
              v45 = (unsigned __int8 *)(v42 + 8);
              v46 = 0;
              if ( *(_WORD *)(v42 + 4) )
              {
                v47 = 104928;
                do
                {
                  if ( (v45[1] & 8) == 0 )
                  {
                    v48 = *v45;
                    if ( *v45 <= 0x10u && _bittest(&v47, v48) )
                    {
                      v49 = &v45[16 * (*((_DWORD *)v45 + 2) & 1) + 12 + 8 * (*((_DWORD *)v45 + 2) & 2)];
                    }
                    else if ( v48 == 4 )
                    {
                      v49 = v45 + 12;
                    }
                    else
                    {
                      if ( v48 > 0xAu && (unsigned __int8)(v48 - 13) > 1u )
                        goto LABEL_69;
                      v49 = v45 + 8;
                    }
                    if ( v49
                      && *(_WORD *)v49 == *SeOwnerRightsSid
                      && !memcmp(v49, SeOwnerRightsSid, 4 * (unsigned int)v49[1] + 8) )
                    {
                      v39 = v110;
                      goto LABEL_102;
                    }
                  }
LABEL_69:
                  ++v46;
                  v45 += *((unsigned __int16 *)v45 + 1);
                }
                while ( v46 < v44 );
              }
            }
            v39 = v110;
          }
          v50 = 393216;
          if ( (a5 & 0x2000000) != 0 )
          {
            v51 = a6 | 0x60000;
          }
          else
          {
            v51 = a5 & 0x60000 | a6;
            v50 = a5 & 0x60000;
          }
          LOBYTE(ScopedPolicySid) = v111;
          v16 = a5 & 0xFFF9FFFF;
          v11 = a11;
          if ( !v111 )
            goto LABEL_78;
          goto LABEL_79;
        }
        v36 = v125;
        v32 = v109;
        v33 = v118;
      }
      v37 = v121;
      v35 = (unsigned __int8)v35 ^ (1 << v120);
      if ( (_BYTE)v35 )
        continue;
      break;
    }
    v31 = DominatesTrust;
LABEL_114:
    v31 += 8;
    v34 >>= 8;
    DominatesTrust = v31;
    if ( v34 )
      continue;
    break;
  }
LABEL_75:
  v52 = *(_DWORD *)v29;
  if ( *(_DWORD *)v29 > 0x40u )
  {
    v90 = 64;
    v91 = *(_QWORD *)(v29 + 8);
    v125 = v91;
    do
    {
      v38 = v91 + 16LL * v90;
      if ( **(_WORD **)v38 == v32 )
      {
        if ( !memcmp(v28, *(const void **)v38, v33) )
          goto LABEL_47;
        v91 = v125;
        v32 = v109;
        v33 = v118;
      }
      ++v90;
    }
    while ( v90 < v52 );
  }
LABEL_76:
  v11 = a11;
  LOBYTE(ScopedPolicySid) = v111;
LABEL_77:
  v50 = v117;
  v51 = a6;
LABEL_78:
  v39 = 0;
  v110 = 0;
LABEL_79:
  if ( !v16 && !(_BYTE)ScopedPolicySid && ((*((_DWORD *)Token + 50) & 0x2000) != 0 || !v50) )
  {
    if ( !a4 )
      SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
    *a10 = v51;
    result = 1;
    *v11 = 0;
    return result;
  }
  v53 = (int)a10;
  v133 = 0LL;
  v134 = 0;
  v132 = v50;
  v54 = SepAccessCheck(
          a1,
          0,
          *((_QWORD *)a3 + 2),
          *(_QWORD *)a3,
          v16,
          0LL,
          0,
          a8,
          v51,
          a9,
          (__int64)a10,
          (__int64)a7,
          (__int64)v11,
          0,
          v39,
          (__int64)&v132,
          (__int64)&P,
          (__int64)&v115,
          0LL);
  v55 = 1;
  if ( SepRmEnforceCap && (v79 = *v11, v121 = v79, v79 >= 0) && v111 )
  {
    v80 = *a10;
    LODWORD(v81) = 0;
    v82 = v119;
    LOBYTE(v53) = 0;
    v83 = 0;
    v146 = 0;
    v118 = *a10;
    v117 = v53;
    v120 = 0;
    if ( *(_DWORD *)(v119 + 60) )
    {
      v56 = P;
      while ( 1 )
      {
        v125 = *(_QWORD *)(v82 + 8LL * v83 + 64);
        if ( !*(_QWORD *)(v125 + 24) )
          goto LABEL_263;
        if ( !v56 )
        {
          v92 = AuthzBasepInitializeResourceClaimsFromSacl(v130, &P);
          v56 = P;
          v53 = (unsigned __int8)v53;
          if ( v92 < 0 )
            v53 = 1;
          LODWORD(v81) = 0;
          v117 = v53;
        }
        v93 = (_QWORD *)*((_QWORD *)Token + 137);
        if ( v93 )
          v94 = v93[75];
        else
          v94 = 0LL;
        if ( v93 )
          v95 = v93[73];
        else
          v95 = 0LL;
        if ( v93 )
          v96 = v93[74];
        else
          v96 = 0LL;
        if ( v93 )
          v81 = v93[72];
        v97 = AuthzBasepEvaluateAceCondition(
                (_DWORD)Token,
                *((_QWORD *)Token + 97),
                (_DWORD)v56,
                v81,
                v96,
                v95,
                v94,
                *(_QWORD *)(v125 + 24),
                *(_DWORD *)(v125 + 16),
                1,
                0,
                (__int64)&v123);
        v98 = v97;
        if ( v123 == 1 )
          goto LABEL_263;
        if ( v97 < 0 )
          goto LABEL_278;
        v99 = Token;
        if ( SeTokenIsRestricted(Token) )
        {
          v100 = (_QWORD *)v99[137];
          LODWORD(v101) = 0;
          if ( v100 )
            v102 = v100[75];
          else
            v102 = 0LL;
          if ( v100 )
            v103 = v100[73];
          else
            v103 = 0LL;
          if ( v100 )
            v104 = v100[74];
          else
            v104 = 0LL;
          if ( v100 )
            v101 = v100[72];
          v98 = AuthzBasepEvaluateAceCondition(
                  (_DWORD)v99,
                  v99[97],
                  (_DWORD)v56,
                  v101,
                  v104,
                  v103,
                  v102,
                  *(_QWORD *)(v125 + 24),
                  *(_DWORD *)(v125 + 16),
                  1,
                  1,
                  (__int64)&v123);
          if ( v98 < 0 )
          {
            if ( !a4 )
              goto LABEL_258;
            goto LABEL_259;
          }
        }
        LOBYTE(v53) = v117;
        if ( (_BYTE)v117 || v123 == 1 )
        {
LABEL_263:
          v105 = v125;
          v98 = SepBuildCapeSecurityDescriptor(&SecurityDescriptor);
          if ( v98 < 0 )
          {
LABEL_278:
            if ( !a4 )
LABEL_258:
              SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
LABEL_259:
            SepRmDereferenceCap(v119);
            *a10 = 0;
            *a11 = v98;
            SepFreeResourceInfo(v56);
            return 0;
          }
          v106 = v16;
          if ( (*(_DWORD *)(v105 + 48) & 1) != 0 )
          {
            if ( (v16 & 0x2000000) == 0 )
              v106 = v51 | v16;
            v107 = 0;
          }
          else
          {
            v107 = v51;
          }
          v54 = SepAccessCheck(
                  (unsigned int)&SecurityDescriptor,
                  0,
                  *((_QWORD *)a3 + 2),
                  *(_QWORD *)a3,
                  v106,
                  0LL,
                  0,
                  a8,
                  v107,
                  a9,
                  (__int64)&v129,
                  0LL,
                  (__int64)&v131,
                  0,
                  v110,
                  (__int64)&v132,
                  (__int64)&P,
                  (__int64)&v115,
                  0LL);
          v80 = v129 & v118;
          if ( !v146 )
            v80 = v129;
          v118 = v80;
          if ( !v80 )
          {
            v79 = -1073741790;
            break;
          }
          v79 = v131;
          v121 = v131;
          v146 = 1;
          if ( v131 < 0 )
            break;
          v56 = P;
          LOBYTE(v53) = v117;
        }
        else
        {
          v79 = v121;
          v80 = v118;
        }
        LODWORD(v81) = 0;
        v82 = v119;
        v83 = v120 + 1;
        v120 = v83;
        if ( v83 >= *(_DWORD *)(v119 + 60) )
          goto LABEL_275;
      }
    }
    v56 = P;
LABEL_275:
    v58 = a11;
    v59 = a10;
    v57 = v115;
    *a11 = v79;
    *a10 &= v80;
    if ( *a11 < 0 )
      v57 = 0;
  }
  else
  {
    v56 = P;
    v57 = v115;
    v58 = a11;
    v59 = a10;
  }
  if ( !v116 && (v16 & 0x2000000) != 0 )
  {
    if ( (!v114 || !*(_WORD *)((char *)&v134 + 1)) && HIDWORD(v127) && (!(_BYTE)v127 || !BYTE1(v127) || !BYTE2(v127)) )
    {
      v64 = v126 & *v59;
      if ( v64 != *v59 )
      {
        *v59 = v64;
        if ( v64 )
        {
          *v58 = 0;
          v57 = 1;
        }
        else
        {
          *v58 = -1073741790;
LABEL_170:
          v57 = 0;
        }
      }
    }
  }
  else if ( v114 && !*(_WORD *)((char *)&v134 + 1) )
  {
    *v58 = -1073741790;
    *v59 = 0;
    goto LABEL_170;
  }
  v60 = 0;
  if ( (v16 & 0x2000000) != 0 && v14 != -1 )
  {
    v108 = v14 & *v59;
    if ( v108 != *v59 )
    {
      *v59 = v108;
      v60 = 1;
      if ( v108 )
      {
        *v58 = 0;
        v57 = 1;
      }
      else
      {
        *v58 = -1073741790;
        v57 = 0;
      }
    }
  }
  if ( Token )
  {
    if ( v60 )
      goto LABEL_287;
    if ( HIDWORD(v133) || (*((_DWORD *)Token + 50) & 0x4000) == 0 )
      goto LABEL_90;
    if ( *v58 < 0 )
      goto LABEL_171;
    if ( !HIBYTE(v134) )
      goto LABEL_90;
LABEL_287:
    v69 = 1;
    if ( *v58 < 0 )
LABEL_171:
      v69 = 0;
    v70 = v51 | v16;
    v61 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
    v71 = SepLocateTokenTrustLevel((__int64 *)a3);
    SeLogAccessFailure((_DWORD)Token, v72, v73, v71, a1, v70, v69);
  }
  else
  {
LABEL_90:
    v61 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
  }
  if ( v111 )
    SepRmDereferenceCap(v119);
  if ( !a4 )
    SeUnlockSubjectContext(v61);
  if ( v56 )
  {
    AuthzBasepFreeSecurityAttributesList(v56);
    ExFreePoolWithTag(v56, 0);
  }
  if ( !v54 || !v57 )
    return 0;
  return v55;
}
