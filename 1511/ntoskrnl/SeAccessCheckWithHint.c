/*
 * XREFs of SeAccessCheckWithHint @ 0x14008AE20
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x140003E78 (RtlCheckTokenMembershipEx.c)
 *     SeAccessCheckFromStateEx @ 0x14008A740 (SeAccessCheckFromStateEx.c)
 *     SeAccessCheck @ 0x14008ADB0 (SeAccessCheck.c)
 *     RtlpAllowsLowBoxAccess @ 0x14009A1E4 (RtlpAllowsLowBoxAccess.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14010579C (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlCheckTokenCapability @ 0x1401F6378 (RtlCheckTokenCapability.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1403BF560 (ObpVerifyAccessToBoundaryEntry.c)
 *     ExpCheckIRTimerAccess @ 0x1404C02DC (ExpCheckIRTimerAccess.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x14000383C (SepSidInTokenSidHash.c)
 *     SeTokenIsRestricted @ 0x1400038F0 (SeTokenIsRestricted.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400050D4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140006054 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000D930 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlSidDominatesForTrust @ 0x14007A050 (RtlSidDominatesForTrust.c)
 *     SepAccessCheck @ 0x14008B8F0 (SepAccessCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x14008C7D0 (SepMandatoryIntegrityCheck.c)
 *     SepFreeResourceInfo @ 0x14009C168 (SepFreeResourceInfo.c)
 *     SepLocateTokenTrustLevel @ 0x1400E194C (SepLocateTokenTrustLevel.c)
 *     SeLogAccessFailure @ 0x1400E6334 (SeLogAccessFailure.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402005BC (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x140200710 (SepGetScopedPolicySid.c)
 *     SepRmDereferenceCap @ 0x14020077C (SepRmDereferenceCap.c)
 *     SepRmReferenceFindCap @ 0x140201B24 (SepRmReferenceFindCap.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeUnlockSubjectContext @ 0x140470920 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x140470960 (SeLockSubjectContext.c)
 */

bool __fastcall SeAccessCheckWithHint(
        __int64 a1,
        char a2,
        int *a3,
        char a4,
        unsigned int a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        char a9,
        _DWORD *a10,
        NTSTATUS *a11)
{
  void *v11; // r15
  int v15; // ebx
  unsigned int v17; // edi
  unsigned __int16 v18; // r10
  __int64 v19; // rdx
  int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // r9d
  unsigned __int8 *v25; // r9
  __int64 v26; // rcx
  char v27; // dl
  int v28; // eax
  _DWORD *v29; // rcx
  char v30; // al
  __int64 v31; // rax
  char *v32; // r15
  __int64 v33; // rax
  unsigned __int8 v34; // r8
  __int16 v35; // r10
  unsigned int v36; // r11d
  unsigned __int64 v37; // rdx
  int v38; // eax
  _WORD *v39; // rcx
  int v40; // edx
  char v41; // dl
  __int16 v42; // ax
  __int64 v43; // rax
  __int64 v44; // rcx
  _WORD *SeOwnerRightsSid; // r9
  __int64 v46; // r15
  unsigned int v47; // edx
  int v48; // r8d
  unsigned __int8 v49; // cl
  unsigned __int8 *v50; // rcx
  unsigned int v51; // r8d
  int v52; // r15d
  __int64 v53; // r9
  __int64 v55; // rdx
  char v56; // r14
  _DWORD *v57; // rcx
  char v58; // r8
  int v59; // ebx
  PVOID v60; // rbx
  bool result; // al
  unsigned int v62; // ecx
  void *v63; // rax
  NTSTATUS v64; // eax
  char v65; // r12
  int v66; // eax
  int v67; // edx
  int v68; // r8d
  __int64 v69; // rbx
  int TokenTrustLevel; // eax
  int v71; // edx
  int v72; // r8d
  __int64 v73; // rax
  __int16 v74; // dx
  __int64 v75; // rax
  ACL *v76; // rdx
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v79; // rdx
  bool v80; // sf
  unsigned int v81; // ecx
  _WORD *v82; // rdx
  unsigned int v83; // r8d
  __int64 v84; // r10
  int v85; // r9d
  PVOID v86; // rcx
  int v87; // eax
  int v88; // r9d
  __int64 v89; // r9
  _QWORD *v90; // rax
  __int64 v91; // r11
  __int64 v92; // r8
  __int64 v93; // rdx
  int v94; // eax
  __int64 v95; // r9
  _QWORD *v96; // rax
  __int64 v97; // r10
  __int64 v98; // r8
  __int64 v99; // rdx
  PVOID v100; // rcx
  int v101; // ecx
  int v102; // edx
  char v103; // al
  __int64 v104; // [rsp+58h] [rbp-C8h]
  char v105; // [rsp+A0h] [rbp-80h]
  BOOLEAN DominatesTrust; // [rsp+A1h] [rbp-7Fh] BYREF
  char v107; // [rsp+A2h] [rbp-7Eh] BYREF
  char v108; // [rsp+A3h] [rbp-7Dh]
  __int16 v109; // [rsp+A4h] [rbp-7Ch]
  int v110; // [rsp+A8h] [rbp-78h]
  BOOLEAN v111[4]; // [rsp+ACh] [rbp-74h] BYREF
  unsigned int v112; // [rsp+B0h] [rbp-70h]
  unsigned int v113; // [rsp+B4h] [rbp-6Ch]
  PACCESS_TOKEN Token; // [rsp+B8h] [rbp-68h]
  int v115; // [rsp+C0h] [rbp-60h]
  unsigned int *v116; // [rsp+C8h] [rbp-58h]
  PVOID P; // [rsp+D0h] [rbp-50h] BYREF
  unsigned int v118; // [rsp+D8h] [rbp-48h]
  __int64 v119; // [rsp+E0h] [rbp-40h]
  int v120; // [rsp+E8h] [rbp-38h] BYREF
  unsigned int v121; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v122; // [rsp+F4h] [rbp-2Ch]
  unsigned int v123; // [rsp+FCh] [rbp-24h]
  int v124; // [rsp+100h] [rbp-20h] BYREF
  int v125; // [rsp+104h] [rbp-1Ch] BYREF
  _WORD *i; // [rsp+108h] [rbp-18h]
  ACL *v127; // [rsp+110h] [rbp-10h]
  __int64 v128; // [rsp+118h] [rbp-8h] BYREF
  __int64 v129; // [rsp+120h] [rbp+0h]
  int v130; // [rsp+128h] [rbp+8h]
  unsigned __int64 v131; // [rsp+130h] [rbp+10h]
  _WORD *v132; // [rsp+138h] [rbp+18h]
  char SecurityDescriptor; // [rsp+140h] [rbp+20h] BYREF
  __int64 v134; // [rsp+141h] [rbp+21h]
  __int64 v135; // [rsp+149h] [rbp+29h]
  __int64 v136; // [rsp+151h] [rbp+31h]
  __int64 v137; // [rsp+159h] [rbp+39h]
  int v138; // [rsp+161h] [rbp+41h]
  __int16 v139; // [rsp+165h] [rbp+45h]
  char v140; // [rsp+167h] [rbp+47h]
  char v143; // [rsp+1E0h] [rbp+C0h]
  void *v144; // [rsp+1E0h] [rbp+C0h]
  char v145; // [rsp+1F0h] [rbp+D0h]
  unsigned __int8 v146; // [rsp+200h] [rbp+E0h]
  char v147; // [rsp+200h] [rbp+E0h]
  int v148; // [rsp+200h] [rbp+E0h]
  int v149; // [rsp+200h] [rbp+E0h]

  LODWORD(v11) = 0;
  v15 = -1;
  v121 = 0;
  *a10 = 0;
  *a11 = -1073741790;
  v122 = 0LL;
  v123 = 0;
  v127 = 0LL;
  SecurityDescriptor = 0;
  v134 = 0LL;
  v135 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v119 = 0LL;
  v105 = 0;
  v113 = 0;
  P = 0LL;
  v124 = 0;
  v125 = -1073741790;
  if ( a7 )
    *a7 = 0LL;
  if ( !a9 )
  {
    v62 = a5;
    if ( (a5 & 0x2000000) != 0 )
      v62 = *(_DWORD *)(a8 + 12) | a5 & 0xFDFFFFFF;
    result = 1;
    *a10 = a6 | v62;
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
  v17 = a5;
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
  v18 = *(_WORD *)(a1 + 2);
  LODWORD(v19) = 0;
  v20 = v18;
  DominatesTrust = 0;
  LOWORD(v20) = v18 & 0x10;
  v111[0] = 0;
  while ( 1 )
  {
    if ( (v18 & 0x10) == 0 )
      goto LABEL_19;
    if ( (v18 & 0x8000) == 0 )
      break;
    v21 = *(unsigned int *)(a1 + 12);
    if ( (_DWORD)v21 )
    {
      v22 = a1 + v21;
      goto LABEL_14;
    }
LABEL_19:
    v23 = 0LL;
LABEL_20:
    v19 = (unsigned int)(v19 + 1);
    if ( !v23 )
      goto LABEL_21;
  }
  v22 = *(_QWORD *)(a1 + 24);
LABEL_14:
  if ( !v22 )
    goto LABEL_19;
  v23 = v22 + 8;
  v24 = 0;
  if ( !*(_WORD *)(v22 + 4) )
    goto LABEL_19;
  while ( v24 < (unsigned int)v19 || *(_BYTE *)v23 != 20 )
  {
    ++v24;
    v23 += *(unsigned __int16 *)(v23 + 2);
    if ( v24 >= *(unsigned __int16 *)(v22 + 4) )
      goto LABEL_19;
  }
  v19 = v24;
  if ( (*(_BYTE *)(v23 + 1) & 8) != 0 )
    goto LABEL_20;
  if ( !v23 || (v11 = (void *)(v23 + 8), v148 = *(_DWORD *)(v23 + 4), v23 == -8) )
  {
LABEL_21:
    v15 = -1;
    *a11 = (int)v11;
  }
  else
  {
    if ( !*(_QWORD *)a3 )
      goto LABEL_152;
    v144 = *(void **)(*(_QWORD *)a3 + 1104LL);
    v64 = RtlSidDominatesForTrust(*(PSID *)(*((_QWORD *)a3 + 2) + 1104LL), v144, v111);
    if ( v64 >= 0 )
    {
      if ( v111[0] )
        v63 = v144;
      else
LABEL_152:
        v63 = *(void **)(*((_QWORD *)a3 + 2) + 1104LL);
      v64 = RtlSidDominatesForTrust(v63, v11, &DominatesTrust);
      if ( v64 >= 0 )
      {
        if ( DominatesTrust )
          v15 = -1;
        else
          v15 = v148 | 0x1000000;
      }
    }
    *a11 = v64;
    if ( v64 < 0 )
    {
LABEL_157:
      if ( !a4 )
        goto LABEL_158;
      return 0;
    }
  }
  if ( (v15 & a5 & 0xFDFFFFFF) != (a5 & 0xFDFFFFFF) )
  {
    *a11 = -1073741790;
    v69 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3 )
      v69 = *((_QWORD *)a3 + 2);
    TokenTrustLevel = SepLocateTokenTrustLevel(a3, v19);
    SeLogAccessFailure(v69, v71, v72, TokenTrustLevel, a1, a6 | a5, 0);
    if ( a4 )
      return 0;
LABEL_158:
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
    return 0;
  }
  v25 = 0LL;
  *a11 = 0;
  v26 = *(_QWORD *)a3;
  Token = (PACCESS_TOKEN)v26;
  if ( !v26 )
  {
    v26 = *((_QWORD *)a3 + 2);
    Token = (PACCESS_TOKEN)v26;
  }
  if ( (a2 & 2) == 0 )
  {
    LOBYTE(v20) = 0;
    goto LABEL_27;
  }
  LOBYTE(v20) = 1;
  if ( (*(_DWORD *)(v26 + 200) & 0x2000) != 0 )
    v27 = 1;
  else
LABEL_27:
    v27 = 0;
  v108 = v27;
  v143 = 0;
  if ( !SepAllowAccessUponLogoff && (*(_DWORD *)(v26 + 200) & 0x20) == 0 )
  {
    v73 = *(_QWORD *)(v26 + 216);
    if ( v73 )
    {
      if ( (*(_DWORD *)(v73 + 32) & 0x20) != 0 )
      {
        *a10 = 0;
        *a11 = -1073741790;
        if ( a4 )
          return 0;
        goto LABEL_158;
      }
    }
  }
  if ( v27 )
  {
    v29 = Token;
  }
  else
  {
    v28 = SepMandatoryIntegrityCheck(a8, a1, v20, v26, 0, (__int64)&v121);
    *a11 = v28;
    if ( v28 < 0 )
      goto LABEL_157;
    if ( HIDWORD(v122) && (v121 & a5 & 0xFDFFFFFF) != (a5 & 0xFDFFFFFF) )
    {
      v29 = Token;
      *a11 = -1073741790;
      if ( (v29[50] & 0x4000) == 0 || v123 > 0x2000 )
        goto LABEL_157;
      v143 = 1;
      v25 = 0LL;
    }
    else
    {
      v29 = Token;
      v25 = 0LL;
      *a11 = 0;
      if ( (a5 & 0x2000000) != 0 && (v29[50] & 0x4000) != 0 && v123 <= 0x2000 )
        v143 = 1;
    }
  }
  v30 = SepRmEnforceCap;
  if ( SepRmEnforceCap )
  {
    v74 = *(_WORD *)(a1 + 2);
    if ( (v74 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
      goto LABEL_199;
    if ( v74 < 0 )
    {
      v75 = *(unsigned int *)(a1 + 12);
      if ( !(_DWORD)v75 )
      {
        v127 = 0LL;
        goto LABEL_199;
      }
      v76 = (ACL *)(a1 + v75);
    }
    else
    {
      v76 = *(ACL **)(a1 + 24);
    }
    v127 = v76;
    if ( v76 )
    {
      ScopedPolicySid = (void *)SepGetScopedPolicySid(v76);
      if ( ScopedPolicySid )
      {
        Cap = SepRmReferenceFindCap(ScopedPolicySid);
        v79 = v119;
        v80 = Cap < 0;
        v29 = Token;
        v30 = 1;
        if ( v80 )
          v79 = SepRmDefaultCap;
        v119 = v79;
        v25 = 0LL;
        v105 = 1;
      }
      else
      {
        v29 = Token;
        v30 = 0;
        v25 = 0LL;
      }
      goto LABEL_35;
    }
LABEL_199:
    v30 = 0;
  }
LABEL_35:
  if ( (a2 & 1) != 0 )
  {
    DominatesTrust = 1;
    if ( (a5 & 0x2060000) == 0 && !v30 )
      goto LABEL_77;
  }
  else
  {
    DominatesTrust = 0;
  }
  if ( (*(_WORD *)(a1 + 2) & 0x8000) != 0 )
  {
    v31 = *(unsigned int *)(a1 + 4);
    if ( (_DWORD)v31 )
      v25 = (unsigned __int8 *)(a1 + v31);
  }
  else
  {
    v25 = *(unsigned __int8 **)(a1 + 8);
  }
  v32 = (char *)(v29 + 58);
  v116 = (unsigned int *)v25;
  if ( v29 == (_DWORD *)-232LL || !v25 )
    goto LABEL_76;
  v33 = v25[1];
  v34 = 0;
  v35 = *(_WORD *)v25;
  v109 = *(_WORD *)v25;
  v146 = 0;
  v36 = 4 * v33 + 8;
  LODWORD(v33) = v25[4 * v33 + 4];
  v112 = v36;
  v37 = *(_QWORD *)&v32[8 * (v33 & 0xF) + 16] & *(_QWORD *)&v32[8 * ((unsigned __int64)(unsigned int)v33 >> 4) + 144];
  v131 = v37;
  if ( !v37 )
    goto LABEL_75;
  while ( 2 )
  {
    LOBYTE(v38) = v37;
    v115 = (unsigned __int8)v37;
    if ( !(_BYTE)v37 )
      goto LABEL_112;
    v39 = (_WORD *)*((_QWORD *)v32 + 1);
    v40 = v34;
    i = v39;
    v110 = v34;
    while ( 2 )
    {
      v118 = SidHashByteToIndexLookupTable[(unsigned __int8)v38];
      v132 = &v39[8 * v40 + 8 * v118];
      if ( **(_WORD **)v132 == v35 )
      {
        if ( !memcmp(v25, *(const void **)v132, v36) )
        {
LABEL_47:
          if ( v132 == *((_WORD **)v32 + 1) && (*((_DWORD *)v132 + 2) & 0x10) == 0 || (*((_DWORD *)v132 + 2) & 4) != 0 )
          {
            v41 = 1;
            v147 = 1;
            if ( *((_DWORD *)Token + 32) )
            {
              v41 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)((char *)Token + 504), 0LL, v116, 0, 1, 0);
              v147 = v41;
            }
          }
          else
          {
            v41 = 0;
            v147 = 0;
          }
          if ( !v41 || (a5 & 0x2060000) == 0 )
          {
LABEL_102:
            v52 = a6;
            v51 = v113;
            v30 = v105;
            goto LABEL_79;
          }
          if ( !DominatesTrust )
          {
            v42 = *(_WORD *)(a1 + 2);
            if ( (v42 & 4) != 0 )
            {
              if ( v42 >= 0 )
              {
                v44 = *(_QWORD *)(a1 + 32);
              }
              else
              {
                v43 = *(unsigned int *)(a1 + 16);
                v44 = (_DWORD)v43 ? a1 + v43 : 0LL;
              }
            }
            else
            {
              v44 = 0LL;
            }
            SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
            i = SeOwnerRightsSid;
            if ( v44 )
            {
              v46 = v44 + 8;
              v110 = *(unsigned __int16 *)(v44 + 4);
              v47 = 0;
              v112 = 0;
              if ( v110 )
              {
                v48 = 104928;
                do
                {
                  if ( (*(_BYTE *)(v46 + 1) & 8) == 0 )
                  {
                    v49 = *(_BYTE *)v46;
                    if ( *(_BYTE *)v46 <= 0x10u && _bittest(&v48, v49) )
                    {
                      v50 = (unsigned __int8 *)(16LL * (*(_DWORD *)(v46 + 8) & 1)
                                              + 8LL * (*(_DWORD *)(v46 + 8) & 2)
                                              + v46
                                              + 12);
                    }
                    else if ( v49 == 4 )
                    {
                      v50 = (unsigned __int8 *)(v46 + 12);
                    }
                    else
                    {
                      if ( v49 > 0xAu && (unsigned __int8)(v49 - 13) > 1u )
                        goto LABEL_69;
                      v50 = (unsigned __int8 *)(v46 + 8);
                    }
                    if ( v50 && *(_WORD *)v50 == *SeOwnerRightsSid )
                    {
                      if ( !memcmp(v50, SeOwnerRightsSid, 4 * (unsigned int)v50[1] + 8) )
                      {
                        v41 = v147;
                        goto LABEL_102;
                      }
                      v47 = v112;
                      v48 = 104928;
                      SeOwnerRightsSid = i;
                    }
                  }
LABEL_69:
                  ++v47;
                  v46 += *(unsigned __int16 *)(v46 + 2);
                  v112 = v47;
                }
                while ( v47 < v110 );
              }
              v41 = v147;
            }
          }
          v51 = 393216;
          if ( (a5 & 0x2000000) != 0 )
          {
            v52 = a6 | 0x60000;
          }
          else
          {
            v51 = a5 & 0x60000;
            v52 = a5 & 0x60000 | a6;
          }
          v30 = v105;
          v17 = a5 & 0xFFF9FFFF;
          if ( !v105 )
            goto LABEL_78;
          goto LABEL_79;
        }
        v25 = (unsigned __int8 *)v116;
        v39 = i;
        v35 = v109;
        v36 = v112;
      }
      v38 = (unsigned __int8)v115 ^ (1 << v118);
      v40 = v110;
      v115 = v38;
      if ( (_BYTE)v38 )
        continue;
      break;
    }
    v37 = v131;
    v34 = v146;
LABEL_112:
    v34 += 8;
    v37 >>= 8;
    v146 = v34;
    v131 = v37;
    if ( v37 )
      continue;
    break;
  }
LABEL_75:
  v110 = *(_DWORD *)v32;
  if ( (unsigned int)v110 > 0x40 )
  {
    v81 = 64;
    v149 = 64;
    v82 = (_WORD *)*((_QWORD *)v32 + 1);
    for ( i = v82; ; v82 = i )
    {
      v132 = &v82[8 * v81];
      if ( **(_WORD **)v132 == v35 )
      {
        if ( !memcmp(v25, *(const void **)v132, v36) )
          goto LABEL_47;
        v25 = (unsigned __int8 *)v116;
        v81 = v149;
        v35 = v109;
        v36 = v112;
      }
      v149 = ++v81;
      if ( v81 >= v110 )
        break;
    }
  }
LABEL_76:
  v30 = v105;
LABEL_77:
  v51 = v113;
  v52 = a6;
LABEL_78:
  v41 = 0;
  v147 = 0;
LABEL_79:
  if ( !v17 && !v30 && ((*((_DWORD *)Token + 50) & 0x2000) != 0 || !v51) )
  {
    if ( !a4 )
      SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
    *a10 = v52;
    result = 1;
    *a11 = 0;
    return result;
  }
  v53 = *(_QWORD *)a3;
  v129 = 0LL;
  v130 = 0;
  v104 = (__int64)a7;
  v128 = v51;
  LOBYTE(v109) = SepAccessCheck(
                   a1,
                   0,
                   *((_QWORD *)a3 + 2),
                   v53,
                   v17,
                   0LL,
                   0,
                   a8,
                   v52,
                   a9,
                   (__int64)a10,
                   v104,
                   (__int64)a11,
                   0,
                   v41,
                   (__int64)&v128,
                   (__int64)&P,
                   (__int64)&v107,
                   0LL);
  if ( !SepRmEnforceCap || (v55 = (unsigned int)*a11, v112 = v55, (int)v55 < 0) || !v105 )
  {
    v56 = v107;
    v57 = a10;
    goto LABEL_82;
  }
  v57 = a10;
  v83 = 0;
  v84 = v119;
  v145 = 0;
  LOBYTE(v113) = 0;
  v85 = *a10;
  v115 = *a10;
  v118 = 0;
  if ( !*(_DWORD *)(v119 + 60) )
    goto LABEL_274;
  while ( 2 )
  {
    v116 = *(unsigned int **)(v84 + 8LL * v83 + 64);
    if ( *((_QWORD *)v116 + 3) )
    {
      v86 = P;
      if ( !P )
      {
        v87 = AuthzBasepInitializeResourceClaimsFromSacl((__int64)v127, &P);
        v86 = P;
        v88 = (unsigned __int8)v113;
        if ( v87 < 0 )
          v88 = 1;
        v113 = v88;
      }
      v89 = 0LL;
      v90 = (_QWORD *)*((_QWORD *)Token + 137);
      if ( v90 )
        v91 = v90[75];
      else
        v91 = 0LL;
      if ( v90 )
        v92 = v90[73];
      else
        v92 = 0LL;
      if ( v90 )
        v93 = v90[74];
      else
        v93 = 0LL;
      if ( v90 )
        v89 = v90[72];
      v94 = AuthzBasepEvaluateAceCondition(
              (__int64)Token,
              *((_QWORD *)Token + 97),
              (__int64)v86,
              v89,
              v93,
              v92,
              v91,
              *((_DWORD **)v116 + 3),
              v116[4],
              1,
              0,
              &v120);
      v110 = v94;
      if ( v120 != 1 )
      {
        if ( v94 < 0 )
          goto LABEL_270;
        if ( SeTokenIsRestricted(Token) )
        {
          v95 = 0LL;
          v96 = (_QWORD *)*((_QWORD *)Token + 137);
          if ( v96 )
            v97 = v96[75];
          else
            v97 = 0LL;
          if ( v96 )
            v98 = v96[73];
          else
            v98 = 0LL;
          if ( v96 )
            v99 = v96[74];
          else
            v99 = 0LL;
          if ( v96 )
            v95 = v96[72];
          v110 = AuthzBasepEvaluateAceCondition(
                   (__int64)Token,
                   *((_QWORD *)Token + 97),
                   (__int64)P,
                   v95,
                   v99,
                   v98,
                   v97,
                   *((_DWORD **)v116 + 3),
                   v116[4],
                   1,
                   1,
                   &v120);
          if ( v110 < 0 )
          {
            if ( !a4 )
              goto LABEL_253;
            goto LABEL_254;
          }
        }
        if ( !(_BYTE)v113 && v120 != 1 )
        {
          v55 = v112;
          v85 = v115;
          goto LABEL_268;
        }
      }
    }
    v110 = SepBuildCapeSecurityDescriptor(&SecurityDescriptor);
    if ( v110 < 0 )
    {
LABEL_270:
      if ( !a4 )
LABEL_253:
        SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
LABEL_254:
      SepRmDereferenceCap(v119);
      v100 = P;
      *a10 = 0;
      *a11 = v110;
      SepFreeResourceInfo(v100);
      return 0;
    }
    v101 = v17;
    if ( (v116[12] & 1) != 0 )
    {
      if ( (v17 & 0x2000000) == 0 )
        v101 = v52 | v17;
      v102 = 0;
    }
    else
    {
      v102 = v52;
    }
    v103 = SepAccessCheck(
             (unsigned int)&SecurityDescriptor,
             0,
             *((_QWORD *)a3 + 2),
             *(_QWORD *)a3,
             v101,
             0LL,
             0,
             a8,
             v102,
             a9,
             (__int64)&v124,
             0LL,
             (__int64)&v125,
             0,
             v147,
             (__int64)&v128,
             (__int64)&P,
             (__int64)&v107,
             0LL);
    v85 = v124 & v115;
    LOBYTE(v109) = v103;
    if ( !v145 )
      v85 = v124;
    v115 = v85;
    if ( v85 )
    {
      v55 = (unsigned int)v125;
      v112 = v125;
      v145 = 1;
      if ( v125 < 0 )
        goto LABEL_273;
LABEL_268:
      v84 = v119;
      v83 = v118 + 1;
      v118 = v83;
      if ( v83 >= *(_DWORD *)(v119 + 60) )
        goto LABEL_273;
      continue;
    }
    break;
  }
  v55 = 3221225506LL;
LABEL_273:
  v57 = a10;
LABEL_274:
  v56 = v107;
  *a11 = v55;
  *v57 &= v85;
  if ( *a11 < 0 )
    v56 = 0;
LABEL_82:
  if ( !v108 && (v17 & 0x2000000) != 0 )
  {
    if ( (!v143 || !*(_WORD *)((char *)&v130 + 1)) && HIDWORD(v122) && (!(_BYTE)v122 || !BYTE1(v122) || !BYTE2(v122)) )
    {
      v55 = v121 & *v57;
      if ( (_DWORD)v55 != *v57 )
      {
        *v57 = v55;
        if ( (_DWORD)v55 )
        {
          *a11 = 0;
          v56 = 1;
        }
        else
        {
          *a11 = -1073741790;
LABEL_174:
          v56 = 0;
        }
      }
    }
  }
  else if ( v143 && !*(_WORD *)((char *)&v130 + 1) )
  {
    *a11 = -1073741790;
    *v57 = 0;
    goto LABEL_174;
  }
  v58 = 0;
  if ( (v17 & 0x2000000) != 0 && v15 != -1 )
  {
    v55 = (unsigned int)v15 & *v57;
    if ( (_DWORD)v55 != *v57 )
    {
      *v57 = v55;
      v58 = 1;
      if ( (_DWORD)v55 )
      {
        *a11 = 0;
        v56 = 1;
      }
      else
      {
        *a11 = -1073741790;
        v56 = 0;
      }
    }
  }
  v59 = (int)Token;
  if ( Token )
  {
    if ( v58 )
      goto LABEL_282;
    if ( HIDWORD(v129) || (*((_DWORD *)Token + 50) & 0x4000) == 0 )
      goto LABEL_90;
    if ( *a11 < 0 )
      goto LABEL_167;
    if ( !HIBYTE(v130) )
      goto LABEL_90;
LABEL_282:
    v80 = *a11 < 0;
    v65 = 1;
    if ( v80 )
LABEL_167:
      v65 = 0;
    v66 = SepLocateTokenTrustLevel(a3, v55);
    SeLogAccessFailure(v59, v67, v68, v66, a1, v52 | v17, v65);
  }
LABEL_90:
  if ( v105 )
    SepRmDereferenceCap(v119);
  if ( !a4 )
    SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
  v60 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(v60, 0);
  }
  return (_BYTE)v109 && v56;
}
