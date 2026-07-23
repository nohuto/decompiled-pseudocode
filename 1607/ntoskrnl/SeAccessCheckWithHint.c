/*
 * XREFs of SeAccessCheckWithHint @ 0x140062700
 * Callers:
 *     SeAccessCheckFromStateEx @ 0x140060F6C (SeAccessCheckFromStateEx.c)
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     RtlCheckTokenMembershipEx @ 0x140086B9C (RtlCheckTokenMembershipEx.c)
 *     RtlpAllowsLowBoxAccess @ 0x1400ADCD4 (RtlpAllowsLowBoxAccess.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140110550 (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlCheckTokenCapability @ 0x140210438 (RtlCheckTokenCapability.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140478298 (ObpVerifyAccessToBoundaryEntry.c)
 *     ExpCheckIRTimerAccess @ 0x1404D03D8 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x140012AA0 (SepLocateTokenTrustLevel.c)
 *     SepSidInTokenSidHash @ 0x140060D70 (SepSidInTokenSidHash.c)
 *     SeLogAccessFailure @ 0x140061150 (SeLogAccessFailure.c)
 *     SepMandatoryIntegrityCheck @ 0x1400631D0 (SepMandatoryIntegrityCheck.c)
 *     SepAccessCheck @ 0x140063630 (SepAccessCheck.c)
 *     SeTokenIsRestricted @ 0x14007F7C0 (SeTokenIsRestricted.c)
 *     SepFreeResourceInfo @ 0x14008D00C (SepFreeResourceInfo.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400AAE9C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     RtlSidDominatesForTrust @ 0x1400D1B40 (RtlSidDominatesForTrust.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14010C930 (AuthzBasepFreeSecurityAttributesList.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402198D0 (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x140219A24 (SepGetScopedPolicySid.c)
 *     SepRmDereferenceCap @ 0x140219A90 (SepRmDereferenceCap.c)
 *     SepRmReferenceFindCap @ 0x14021B49C (SepRmReferenceFindCap.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeLockSubjectContext @ 0x14044CA80 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14044CAE0 (SeUnlockSubjectContext.c)
 */

bool __fastcall SeAccessCheckWithHint(
        ULONGLONG a1,
        char a2,
        int *a3,
        char a4,
        unsigned int a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        char a9,
        int *a10,
        int *a11)
{
  bool result; // al
  void *v13; // rdi
  int v15; // ebx
  char v16; // r13
  unsigned int v18; // esi
  __int16 v19; // r9
  unsigned int v20; // r8d
  ULONGLONG v21; // rax
  ULONGLONG v22; // rdx
  unsigned int v23; // r10d
  __int64 v24; // r13
  char v25; // cl
  int v26; // eax
  void *ScopedPolicySid; // rax
  unsigned __int8 *v28; // rdi
  __int64 v29; // r8
  int v30; // eax
  unsigned __int8 v31; // r9
  __int16 v32; // r10
  unsigned int v33; // r11d
  unsigned int v34; // eax
  unsigned __int64 v35; // rdx
  unsigned int v36; // edx
  int v37; // edi
  char v38; // cl
  __int64 v39; // r9
  __int64 v40; // r8
  char v41; // al
  __int64 v42; // r8
  __int64 v43; // rdx
  char v44; // al
  int *v45; // rcx
  char v46; // bl
  PVOID v47; // rdi
  int v48; // eax
  _WORD *v49; // rcx
  int v50; // edx
  __int16 v51; // ax
  unsigned int v52; // edx
  ULONGLONG v53; // rcx
  _WORD *SeOwnerRightsSid; // r9
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned int v57; // ecx
  __int64 v58; // rax
  int v59; // eax
  unsigned __int8 *v60; // rdi
  int v61; // r8d
  unsigned __int8 v62; // cl
  unsigned __int8 *v63; // rcx
  __int64 v64; // r15
  int v65; // eax
  void *v66; // r13
  NTSTATUS v67; // eax
  __int64 v68; // rbx
  ULONGLONG TokenTrustLevel; // rax
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // rax
  __int16 v73; // cx
  __int64 v74; // rax
  ACL *v75; // rcx
  __int64 v76; // rdx
  bool v77; // sf
  unsigned int v78; // ecx
  _WORD *v79; // rdx
  int v80; // eax
  __int64 v81; // r9
  unsigned int v82; // ecx
  int v83; // ecx
  int v84; // eax
  int v85; // r9d
  _QWORD *v86; // rax
  __int64 v87; // r10
  __int64 v88; // r8
  __int64 v89; // rdx
  __int64 v90; // r9
  int v91; // eax
  _QWORD *v92; // rax
  __int64 v93; // r9
  __int64 v94; // r8
  __int64 v95; // rdx
  __int64 v96; // rcx
  PVOID v97; // rcx
  int v98; // ecx
  int v99; // edx
  char v100; // al
  int v101; // eax
  char v102; // [rsp+A0h] [rbp-80h]
  BOOLEAN DominatesTrust; // [rsp+A1h] [rbp-7Fh] BYREF
  char v104; // [rsp+A2h] [rbp-7Eh]
  char v105; // [rsp+A3h] [rbp-7Dh] BYREF
  BOOLEAN v106; // [rsp+A4h] [rbp-7Ch] BYREF
  char v107; // [rsp+A5h] [rbp-7Bh]
  __int16 v108; // [rsp+A6h] [rbp-7Ah]
  int v109; // [rsp+A8h] [rbp-78h]
  unsigned int v110; // [rsp+ACh] [rbp-74h]
  BOOLEAN v111[4]; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v112; // [rsp+B4h] [rbp-6Ch]
  unsigned int v113; // [rsp+B8h] [rbp-68h]
  PVOID P; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v115; // [rsp+C8h] [rbp-58h]
  __int64 v116; // [rsp+D0h] [rbp-50h]
  int v117; // [rsp+D8h] [rbp-48h] BYREF
  unsigned __int64 v118; // [rsp+E0h] [rbp-40h]
  int v119; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v120; // [rsp+ECh] [rbp-34h]
  unsigned int v121; // [rsp+F4h] [rbp-2Ch]
  unsigned int v122; // [rsp+F8h] [rbp-28h] BYREF
  int v123; // [rsp+FCh] [rbp-24h] BYREF
  ACL *v124; // [rsp+100h] [rbp-20h]
  _WORD *i; // [rsp+108h] [rbp-18h]
  __int64 v126; // [rsp+110h] [rbp-10h] BYREF
  __int64 v127; // [rsp+118h] [rbp-8h]
  int v128; // [rsp+120h] [rbp+0h]
  _WORD *v129; // [rsp+128h] [rbp+8h]
  _QWORD SecurityDescriptor[12]; // [rsp+130h] [rbp+10h] BYREF
  char v133; // [rsp+1D0h] [rbp+B0h]
  char v134; // [rsp+1E0h] [rbp+C0h]
  char v135; // [rsp+1E0h] [rbp+C0h]
  __int64 v136; // [rsp+1E8h] [rbp+C8h]
  unsigned __int8 v137; // [rsp+1F0h] [rbp+D0h]
  char v138; // [rsp+1F0h] [rbp+D0h]
  int v139; // [rsp+1F0h] [rbp+D0h]
  int v140; // [rsp+1F0h] [rbp+D0h]

  result = 0;
  LODWORD(v13) = 0;
  v119 = 0;
  v15 = -1;
  *a10 = 0;
  v16 = a4;
  *a11 = -1073741790;
  v120 = 0LL;
  v121 = 0;
  v124 = 0LL;
  memset(SecurityDescriptor, 0, 40);
  v116 = 0LL;
  v102 = 0;
  v112 = 0;
  P = 0LL;
  v122 = 0;
  v123 = -1073741790;
  if ( a7 )
    *a7 = 0LL;
  if ( !a9 )
  {
    v57 = a5;
    if ( (a5 & 0x2000000) != 0 )
      v57 = *(_DWORD *)(a8 + 12) | a5 & 0xFDFFFFFF;
    result = 1;
    *a10 = a6 | v57;
    *a11 = 0;
    return result;
  }
  if ( !a1 )
  {
    *a11 = -1073741790;
    return result;
  }
  if ( *(_QWORD *)a3 && a3[2] < 2 )
  {
    *a11 = -1073741659;
    return result;
  }
  v18 = a5;
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
  v19 = *(_WORD *)(a1 + 2);
  v20 = 0;
  DominatesTrust = 0;
  v106 = 0;
  while ( 1 )
  {
    if ( (v19 & 0x10) != 0 )
    {
      if ( (v19 & 0x8000) == 0 )
      {
        v21 = *(_QWORD *)(a1 + 24);
        goto LABEL_13;
      }
      v56 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v56 )
        break;
    }
LABEL_18:
    v22 = 0LL;
LABEL_19:
    ++v20;
    if ( !v22 )
      goto LABEL_20;
  }
  v21 = a1 + v56;
LABEL_13:
  if ( !v21 )
    goto LABEL_18;
  v22 = v21 + 8;
  v23 = 0;
  if ( !*(_WORD *)(v21 + 4) )
    goto LABEL_18;
  while ( v23 < v20 || *(_BYTE *)v22 != 20 )
  {
    ++v23;
    v22 += *(unsigned __int16 *)(v22 + 2);
    if ( v23 >= *(unsigned __int16 *)(v21 + 4) )
      goto LABEL_18;
  }
  v20 = v23;
  if ( (*(_BYTE *)(v22 + 1) & 8) != 0 )
    goto LABEL_19;
  if ( !v22 || (v13 = (void *)(v22 + 8), v139 = *(_DWORD *)(v22 + 4), v22 == -8LL) )
  {
LABEL_20:
    v15 = -1;
    *a11 = (int)v13;
    goto LABEL_21;
  }
  if ( !*(_QWORD *)a3 )
    goto LABEL_167;
  v66 = *(void **)(*(_QWORD *)a3 + 1104LL);
  v67 = RtlSidDominatesForTrust(*(PSID *)(*((_QWORD *)a3 + 2) + 1104LL), v66, &v106);
  if ( v67 >= 0 )
  {
    if ( !v106 )
LABEL_167:
      v66 = *(void **)(*((_QWORD *)a3 + 2) + 1104LL);
    v67 = RtlSidDominatesForTrust(v66, v13, &DominatesTrust);
    if ( v67 >= 0 )
    {
      if ( DominatesTrust )
        v15 = -1;
      else
        v15 = v139 | 0x1000000;
    }
  }
  *a11 = v67;
  if ( v67 < 0 )
    goto LABEL_176;
  v16 = a4;
LABEL_21:
  if ( (v15 & a5 & 0xFDFFFFFF) != (a5 & 0xFDFFFFFF) )
  {
    *a11 = -1073741790;
    v68 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3 )
      v68 = *((_QWORD *)a3 + 2);
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)a3);
    SeLogAccessFailure(v68, v70, v71, TokenTrustLevel, a1, a6 | a5, 0);
    if ( !v16 )
LABEL_177:
      SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
    return 0;
  }
  *a11 = 0;
  v24 = *(_QWORD *)a3;
  if ( !*(_QWORD *)a3 )
    v24 = *((_QWORD *)a3 + 2);
  if ( (a2 & 2) == 0 )
  {
    LOBYTE(v20) = 0;
    goto LABEL_26;
  }
  LOBYTE(v20) = 1;
  if ( (*(_DWORD *)(v24 + 200) & 0x2000) != 0 )
    v25 = 1;
  else
LABEL_26:
    v25 = 0;
  v107 = v25;
  v104 = 0;
  if ( !SepAllowAccessUponLogoff && (*(_DWORD *)(v24 + 200) & 0x20) == 0 )
  {
    v72 = *(_QWORD *)(v24 + 216);
    if ( v72 )
    {
      if ( (*(_DWORD *)(v72 + 32) & 0x20) != 0 )
      {
        *a10 = 0;
        *a11 = -1073741790;
        if ( !a4 )
          goto LABEL_177;
        return 0;
      }
    }
  }
  if ( !v25 )
  {
    v26 = SepMandatoryIntegrityCheck(a8, a1, v20, v24, 0, (__int64)&v119);
    *a11 = v26;
    if ( v26 >= 0 )
    {
      if ( !HIDWORD(v120) || (v119 & a5 & 0xFDFFFFFF) == (a5 & 0xFDFFFFFF) )
      {
        *a11 = 0;
        if ( (a5 & 0x2000000) == 0 || (*(_DWORD *)(v24 + 200) & 0x4000) == 0 || v121 > 0x2000 )
          goto LABEL_33;
LABEL_139:
        v104 = 1;
        goto LABEL_33;
      }
      *a11 = -1073741790;
      if ( (*(_DWORD *)(v24 + 200) & 0x4000) != 0 && v121 <= 0x2000 )
        goto LABEL_139;
    }
LABEL_176:
    if ( !a4 )
      goto LABEL_177;
    return 0;
  }
LABEL_33:
  LOBYTE(ScopedPolicySid) = SepRmEnforceCap;
  if ( SepRmEnforceCap )
  {
    v73 = *(_WORD *)(a1 + 2);
    if ( (v73 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
      goto LABEL_205;
    if ( v73 < 0 )
    {
      v74 = *(unsigned int *)(a1 + 12);
      if ( !(_DWORD)v74 )
      {
        v124 = 0LL;
        goto LABEL_205;
      }
      v75 = (ACL *)(a1 + v74);
    }
    else
    {
      v75 = *(ACL **)(a1 + 24);
    }
    v124 = v75;
    if ( v75 )
    {
      ScopedPolicySid = (void *)SepGetScopedPolicySid(v75);
      if ( ScopedPolicySid )
      {
        LODWORD(ScopedPolicySid) = SepRmReferenceFindCap(ScopedPolicySid);
        v76 = v116;
        v77 = (int)ScopedPolicySid < 0;
        LOBYTE(ScopedPolicySid) = 1;
        if ( v77 )
          v76 = SepRmDefaultCap;
        v102 = 1;
        v116 = v76;
      }
      goto LABEL_34;
    }
LABEL_205:
    LOBYTE(ScopedPolicySid) = 0;
  }
LABEL_34:
  if ( (a2 & 1) != 0 )
  {
    DominatesTrust = 1;
    if ( (a5 & 0x2060000) == 0 && !(_BYTE)ScopedPolicySid )
      goto LABEL_43;
  }
  else
  {
    DominatesTrust = 0;
  }
  if ( (*(_WORD *)(a1 + 2) & 0x8000) != 0 )
  {
    v55 = *(unsigned int *)(a1 + 4);
    if ( (_DWORD)v55 )
      v28 = (unsigned __int8 *)(a1 + v55);
    else
      v28 = 0LL;
  }
  else
  {
    v28 = *(unsigned __int8 **)(a1 + 8);
  }
  v29 = v24 + 232;
  if ( v24 == -232 || !v28 )
    goto LABEL_42;
  v30 = v28[1];
  v31 = 0;
  v32 = *(_WORD *)v28;
  v108 = *(_WORD *)v28;
  v137 = 0;
  v33 = 4 * v30 + 8;
  v110 = v33;
  v34 = v28[4 * v30 + 4];
  v35 = *(_QWORD *)(v29 + 8LL * (v34 & 0xF) + 16) & *(_QWORD *)(v29 + 8LL * (int)((v34 >> 4) + 16) + 16);
  v118 = v35;
  if ( !v35 )
    goto LABEL_41;
  while ( 2 )
  {
    LOBYTE(v48) = v35;
    v113 = (unsigned __int8)v35;
    if ( !(_BYTE)v35 )
      goto LABEL_92;
    v49 = *(_WORD **)(v29 + 8);
    v50 = v31;
    i = v49;
    v109 = v31;
    while ( 2 )
    {
      v115 = SidHashByteToIndexLookupTable[(unsigned __int8)v48];
      v129 = &v49[8 * v50 + 8 * v115];
      if ( **(_WORD **)v129 == v32 )
      {
        if ( !memcmp(v28, *(const void **)v129, v33) )
        {
LABEL_70:
          if ( v129 == *(_WORD **)(v24 + 240) && (*((_DWORD *)v129 + 2) & 0x10) == 0 || (*((_DWORD *)v129 + 2) & 4) != 0 )
          {
            v38 = 1;
            v138 = 1;
            if ( *(_DWORD *)(v24 + 128) )
            {
              v38 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v24 + 504), 0LL, v28, 0, 1, 0);
              v138 = v38;
            }
          }
          else
          {
            v38 = 0;
            v138 = 0;
          }
          if ( !v38 || (a5 & 0x2060000) == 0 )
          {
LABEL_102:
            v37 = a6;
            v36 = v112;
            LOBYTE(ScopedPolicySid) = v102;
            goto LABEL_45;
          }
          if ( !DominatesTrust )
          {
            v51 = *(_WORD *)(a1 + 2);
            v52 = 0;
            if ( (v51 & 4) != 0 )
            {
              if ( v51 >= 0 )
              {
                v53 = *(_QWORD *)(a1 + 32);
              }
              else
              {
                v58 = *(unsigned int *)(a1 + 16);
                if ( (_DWORD)v58 )
                  v53 = a1 + v58;
                else
                  v53 = 0LL;
              }
            }
            else
            {
              v53 = 0LL;
            }
            SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
            i = SeOwnerRightsSid;
            if ( v53 )
            {
              v59 = *(unsigned __int16 *)(v53 + 4);
              v60 = (unsigned __int8 *)(v53 + 8);
              v110 = 0;
              v109 = v59;
              if ( v59 )
              {
                v61 = 104928;
                do
                {
                  if ( (v60[1] & 8) == 0 )
                  {
                    v62 = *v60;
                    if ( *v60 <= 0x10u && _bittest(&v61, v62) )
                    {
                      v63 = &v60[16 * (*((_DWORD *)v60 + 2) & 1) + 12 + 8 * (*((_DWORD *)v60 + 2) & 2)];
                    }
                    else if ( v62 == 4 )
                    {
                      v63 = v60 + 12;
                    }
                    else
                    {
                      if ( v62 > 0xAu && (unsigned __int8)(v62 - 13) > 1u )
                        goto LABEL_119;
                      v63 = v60 + 8;
                    }
                    if ( v63 && *(_WORD *)v63 == *SeOwnerRightsSid )
                    {
                      if ( !memcmp(v63, SeOwnerRightsSid, 4 * (unsigned int)v63[1] + 8) )
                      {
                        v38 = v138;
                        goto LABEL_102;
                      }
                      v52 = v110;
                      v61 = 104928;
                      SeOwnerRightsSid = i;
                    }
                  }
LABEL_119:
                  ++v52;
                  v60 += *((unsigned __int16 *)v60 + 1);
                  v110 = v52;
                }
                while ( v52 < v109 );
              }
            }
            v38 = v138;
          }
          v36 = 393216;
          if ( (a5 & 0x2000000) != 0 )
          {
            v37 = a6 | 0x60000;
          }
          else
          {
            v36 = a5 & 0x60000;
            v37 = a5 & 0x60000 | a6;
          }
          LOBYTE(ScopedPolicySid) = v102;
          v18 = a5 & 0xFFF9FFFF;
          if ( !v102 )
            goto LABEL_44;
          goto LABEL_45;
        }
        v49 = i;
        v32 = v108;
        v33 = v110;
      }
      v48 = (unsigned __int8)v113 ^ (1 << v115);
      v50 = v109;
      v113 = v48;
      if ( (_BYTE)v48 )
        continue;
      break;
    }
    v35 = v118;
    v29 = v24 + 232;
    v31 = v137;
LABEL_92:
    v31 += 8;
    v35 >>= 8;
    v137 = v31;
    v118 = v35;
    if ( v35 )
      continue;
    break;
  }
LABEL_41:
  v109 = *(_DWORD *)v29;
  if ( (unsigned int)v109 > 0x40 )
  {
    v78 = 64;
    v140 = 64;
    v79 = *(_WORD **)(v29 + 8);
    for ( i = v79; ; v79 = i )
    {
      v129 = &v79[8 * v78];
      if ( **(_WORD **)v129 == v32 )
      {
        if ( !memcmp(v28, *(const void **)v129, v33) )
          goto LABEL_70;
        v78 = v140;
        v32 = v108;
        v33 = v110;
      }
      v140 = ++v78;
      if ( v78 >= v109 )
        break;
    }
  }
LABEL_42:
  LOBYTE(ScopedPolicySid) = v102;
LABEL_43:
  v36 = v112;
  v37 = a6;
LABEL_44:
  v38 = 0;
  v138 = 0;
LABEL_45:
  if ( !v18 && !(_BYTE)ScopedPolicySid && ((*(_DWORD *)(v24 + 200) & 0x2000) != 0 || !v36) )
  {
    if ( !a4 )
      SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
    result = 1;
    *a10 = v37;
    *a11 = 0;
    return result;
  }
  v39 = *(_QWORD *)a3;
  v40 = *((_QWORD *)a3 + 2);
  v127 = 0LL;
  v128 = 0;
  v126 = v36;
  v41 = SepAccessCheck(
          a1,
          0,
          v40,
          v39,
          v18,
          0LL,
          0,
          a8,
          v37,
          a9,
          (__int64)a10,
          (__int64)a7,
          (__int64)a11,
          0,
          v38,
          (__int64)&v126,
          (__int64)&P,
          (__int64)&v105,
          0LL);
  v43 = 1LL;
  LOBYTE(v108) = v41;
  if ( !SepRmEnforceCap || (v80 = *a11, v110 = v80, v80 < 0) || !v102 )
  {
    v44 = v105;
    v45 = a10;
    goto LABEL_48;
  }
  v81 = v116;
  v133 = 0;
  LOBYTE(v112) = 0;
  v42 = (unsigned int)*a10;
  v82 = 0;
  v113 = *a10;
  v115 = 0;
  if ( !*(_DWORD *)(v116 + 60) )
    goto LABEL_281;
  while ( 2 )
  {
    v118 = *(_QWORD *)(v81 + 8LL * v82 + 64);
    if ( *(_QWORD *)(v118 + 24) )
    {
      v83 = (int)P;
      if ( !P )
      {
        v84 = AuthzBasepInitializeResourceClaimsFromSacl(v124, &P);
        v83 = (int)P;
        v85 = (unsigned __int8)v112;
        if ( v84 < 0 )
          v85 = 1;
        v112 = v85;
      }
      v86 = *(_QWORD **)(v24 + 1096);
      v87 = v86 ? v86[75] : 0LL;
      v88 = v86 ? v86[73] : 0LL;
      v89 = v86 ? v86[74] : 0LL;
      if ( v86 )
        v90 = v86[72];
      else
        LODWORD(v90) = 0;
      v91 = AuthzBasepEvaluateAceCondition(
              v24,
              *(_QWORD *)(v24 + 776),
              v83,
              v90,
              v89,
              v88,
              v87,
              *(_QWORD *)(v118 + 24),
              *(_DWORD *)(v118 + 16),
              1,
              0,
              (__int64)&v117);
      v109 = v91;
      if ( v117 != 1 )
      {
        if ( v91 < 0 )
          goto LABEL_277;
        if ( SeTokenIsRestricted((PACCESS_TOKEN)v24) )
        {
          v92 = *(_QWORD **)(v24 + 1096);
          LODWORD(v93) = 0;
          if ( v92 )
            v94 = v92[75];
          else
            v94 = 0LL;
          if ( v92 )
            v95 = v92[73];
          else
            v95 = 0LL;
          if ( v92 )
            v96 = v92[74];
          else
            v96 = 0LL;
          if ( v92 )
            v93 = v92[72];
          v109 = AuthzBasepEvaluateAceCondition(
                   v24,
                   *(_QWORD *)(v24 + 776),
                   (_DWORD)P,
                   v93,
                   v96,
                   v95,
                   v94,
                   *(_QWORD *)(v118 + 24),
                   *(_DWORD *)(v118 + 16),
                   1,
                   1,
                   (__int64)&v117);
          if ( v109 < 0 )
          {
            if ( !a4 )
              goto LABEL_260;
            goto LABEL_261;
          }
        }
        if ( !(_BYTE)v112 && v117 != 1 )
        {
          v80 = v110;
          v42 = v113;
          goto LABEL_275;
        }
      }
    }
    v109 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
    if ( v109 < 0 )
    {
LABEL_277:
      if ( !a4 )
LABEL_260:
        SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
LABEL_261:
      SepRmDereferenceCap(v116);
      v97 = P;
      *a10 = 0;
      *a11 = v109;
      SepFreeResourceInfo(v97);
      return 0;
    }
    v98 = v18;
    if ( (*(_DWORD *)(v118 + 48) & 1) != 0 )
    {
      if ( (v18 & 0x2000000) == 0 )
        v98 = v37 | v18;
      v99 = 0;
    }
    else
    {
      v99 = v37;
    }
    v100 = SepAccessCheck(
             (unsigned int)SecurityDescriptor,
             0,
             *((_QWORD *)a3 + 2),
             *(_QWORD *)a3,
             v98,
             0LL,
             0,
             a8,
             v99,
             a9,
             (__int64)&v122,
             0LL,
             (__int64)&v123,
             0,
             v138,
             (__int64)&v126,
             (__int64)&P,
             (__int64)&v105,
             0LL);
    v42 = v122 & v113;
    LOBYTE(v108) = v100;
    if ( !v133 )
      v42 = v122;
    v113 = v42;
    if ( (_DWORD)v42 )
    {
      v80 = v123;
      v110 = v123;
      v133 = 1;
      if ( v123 < 0 )
        goto LABEL_280;
LABEL_275:
      v81 = v116;
      v82 = v115 + 1;
      v115 = v82;
      if ( v82 >= *(_DWORD *)(v116 + 60) )
        goto LABEL_280;
      continue;
    }
    break;
  }
  v80 = -1073741790;
LABEL_280:
  v43 = 1LL;
LABEL_281:
  v45 = a10;
  *a11 = v80;
  v44 = v105;
  *a10 &= v42;
  if ( *a11 < 0 )
    v44 = 0;
LABEL_48:
  v134 = v44;
  if ( !v107 && (v18 & 0x2000000) != 0 )
  {
    if ( (!v104 || !*(_WORD *)((char *)&v128 + 1)) && HIDWORD(v120) && (!(_BYTE)v120 || !BYTE1(v120) || !BYTE2(v120)) )
    {
      v65 = v119 & *v45;
      if ( v65 != *v45 )
      {
        *v45 = v65;
        if ( v65 )
        {
          *a11 = 0;
          v134 = 1;
        }
        else
        {
          *a11 = -1073741790;
LABEL_142:
          v134 = 0;
        }
      }
    }
  }
  else if ( v104 && !*(_WORD *)((char *)&v128 + 1) )
  {
    *a11 = -1073741790;
    *v45 = 0;
    goto LABEL_142;
  }
  LOBYTE(v42) = 0;
  if ( (v18 & 0x2000000) == 0 || v15 == -1 || (v101 = v15 & *v45, v101 == *v45) )
  {
    v46 = v134;
  }
  else
  {
    *v45 = v101;
    LOBYTE(v42) = 1;
    if ( v101 )
    {
      *a11 = 0;
      v46 = 1;
    }
    else
    {
      *a11 = -1073741790;
      v46 = 0;
    }
  }
  if ( v24 )
  {
    if ( !(_BYTE)v42 )
    {
      if ( HIDWORD(v127) || (*(_DWORD *)(v24 + 200) & 0x4000) == 0 )
        goto LABEL_57;
      if ( *a11 < 0 )
      {
LABEL_134:
        v135 = 0;
        goto LABEL_135;
      }
      if ( !HIBYTE(v128) )
        goto LABEL_57;
    }
    v135 = 1;
    if ( *a11 < 0 )
      goto LABEL_134;
LABEL_135:
    v64 = *((_QWORD *)a3 + 2);
    v136 = *(_QWORD *)a3;
    if ( *(_QWORD *)a3 )
    {
      RtlSidDominatesForTrust(*(PSID *)(v64 + 1104), *(PSID *)(*(_QWORD *)a3 + 1104LL), v111);
      if ( v111[0] )
        v64 = v136;
    }
    SeLogAccessFailure(v24, v43, v42, *(_QWORD *)(v64 + 1104), a1, v37 | v18, v135);
  }
LABEL_57:
  if ( v102 )
    SepRmDereferenceCap(v116);
  if ( !a4 )
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
  v47 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(v47, 0);
  }
  return (_BYTE)v108 && v46;
}
