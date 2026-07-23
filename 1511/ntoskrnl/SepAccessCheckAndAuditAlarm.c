/*
 * XREFs of SepAccessCheckAndAuditAlarm @ 0x14046E620
 * Callers:
 *     NtAccessCheckAndAuditAlarm @ 0x14046DE98 (NtAccessCheckAndAuditAlarm.c)
 *     NtAccessCheckByTypeAndAuditAlarm @ 0x14046DF1C (NtAccessCheckByTypeAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarm @ 0x140651F14 (NtAccessCheckByTypeResultListAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x140651FBC (NtAccessCheckByTypeResultListAndAuditAlarmByHandle.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x1400038F0 (SeTokenIsRestricted.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400050D4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140006054 (AuthzBasepEvaluateAceCondition.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SepTokenIsOwner @ 0x14008A540 (SepTokenIsOwner.c)
 *     SepAccessCheck @ 0x14008B8F0 (SepAccessCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x14008C7D0 (SepMandatoryIntegrityCheck.c)
 *     SeCaptureObjectTypeList @ 0x14008DC20 (SeCaptureObjectTypeList.c)
 *     SepTrustLevelCheck @ 0x14008DE30 (SepTrustLevelCheck.c)
 *     SePrivilegePolicyCheck @ 0x14008DF10 (SePrivilegePolicyCheck.c)
 *     SepTrustToDiscretionary @ 0x14009C134 (SepTrustToDiscretionary.c)
 *     SepMandatoryToDiscretionary @ 0x14009C148 (SepMandatoryToDiscretionary.c)
 *     SepFreeResourceInfo @ 0x14009C168 (SepFreeResourceInfo.c)
 *     RtlOwnerAcesPresent @ 0x1400D1D2C (RtlOwnerAcesPresent.c)
 *     SepLocateTokenTrustLevel @ 0x1400E194C (SepLocateTokenTrustLevel.c)
 *     SepConstrainByMandatory @ 0x1400E5A20 (SepConstrainByMandatory.c)
 *     SeLogAccessFailure @ 0x1400E6334 (SeLogAccessFailure.c)
 *     SepConstrainByTrust @ 0x1400E6D30 (SepConstrainByTrust.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SeFreeCapturedObjectTypeList @ 0x1402004C0 (SeFreeCapturedObjectTypeList.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402005BC (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x14020065C (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x140200710 (SepGetScopedPolicySid.c)
 *     SepMergeObjectTypeListAccesses @ 0x140200750 (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCap @ 0x14020077C (SepRmDereferenceCap.c)
 *     SepExamineGlobalSaclEx @ 0x140200A24 (SepExamineGlobalSaclEx.c)
 *     SepRmReferenceFindCap @ 0x140201B24 (SepRmReferenceFindCap.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSecurityDescriptor @ 0x14043429C (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x140434450 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     SeCaptureSid @ 0x14046B354 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x14046C40C (SeReleaseSid.c)
 *     SeCheckAuditPrivilege @ 0x14046E588 (SeCheckAuditPrivilege.c)
 *     SepProbeAndCaptureString_U @ 0x14046F5B0 (SepProbeAndCaptureString_U.c)
 *     SeUnlockSubjectContext @ 0x140470920 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x140470960 (SeLockSubjectContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404789C0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x140478BB0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140479708 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14064FF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepExamineSaclEx @ 0x140652A74 (SepExamineSaclEx.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepAccessCheckAndAuditAlarm(
        __int64 a1,
        __int64 a2,
        HANDLE *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 *Src,
        int a8,
        int a9,
        char a10,
        unsigned __int64 a11,
        unsigned int a12,
        __int64 a13,
        int *a14,
        int *Address,
        _BYTE *a16,
        char a17)
{
  char *v20; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  PACCESS_TOKEN ClientToken; // r15
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  int v25; // edi
  SIZE_T v26; // rdi
  __int64 v27; // rsi
  __int16 v28; // cx
  __int64 v29; // rax
  ULONGLONG v30; // rax
  __int64 v31; // rax
  ULONGLONG v32; // rax
  _BYTE *v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  int v37; // r14d
  char v38; // al
  int v39; // r13d
  char IsOwner; // al
  char v41; // r12
  _DWORD *v42; // rax
  char *v43; // rdi
  __int64 v44; // r13
  unsigned __int8 v45; // r12
  unsigned int v46; // r11d
  char v47; // al
  unsigned __int8 v48; // cl
  char *v49; // r9
  char *v50; // r10
  int v51; // edi
  char v52; // r8
  char v53; // dl
  _DWORD *v54; // r15
  unsigned int v55; // r14d
  char v56; // r13
  char v57; // di
  int *v58; // rcx
  int *v59; // rdx
  char *v60; // r12
  char *v61; // r8
  char v62; // r11
  unsigned int v63; // edx
  int *v64; // r8
  int *v65; // r9
  __int64 v66; // rcx
  unsigned int v67; // ecx
  int *v68; // r9
  int *v69; // r10
  unsigned __int64 v70; // rdx
  char v71; // r14
  __int16 v73; // ax
  __int64 v74; // rax
  ACL *v75; // rcx
  int v76; // eax
  unsigned int v77; // eax
  unsigned int v78; // eax
  int v79; // ecx
  char *PoolWithTag; // r10
  unsigned int v81; // r9d
  char *v82; // r8
  unsigned int i; // edx
  __int64 v84; // rcx
  __int16 v85; // dx
  __int64 v86; // rax
  ACL *v87; // rax
  _BYTE *ScopedPolicySid; // rax
  int Cap; // eax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v90; // rdx
  char *v91; // r10
  unsigned int v92; // r9d
  char *v93; // r8
  unsigned int j; // edx
  __int64 v95; // rcx
  __int64 v96; // rdi
  _DWORD *v97; // rax
  _DWORD *v98; // r9
  int *v99; // r8
  unsigned int v100; // eax
  int v101; // edx
  __int64 v102; // r12
  _QWORD *v103; // rax
  __int64 v104; // r8
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r9
  int v108; // eax
  int v109; // esi
  _QWORD *v110; // rax
  __int64 v111; // r8
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r9
  unsigned int v115; // r12d
  unsigned int v116; // esi
  int v117; // r8d
  unsigned int v118; // edx
  __int64 v119; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v121; // si
  char v122; // di
  ULONGLONG TokenTrustLevel; // rax
  __int64 v124; // rdx
  __int64 v125; // r8
  int PrimaryToken; // r10d
  __int16 v127; // cx
  __int64 v128; // rdx
  int v129; // eax
  __int64 v130; // rcx
  int v131; // eax
  int v132; // r13d
  char *v133; // rdi
  char v134; // r14
  int v135; // r8d
  __int16 v136; // ax
  __int64 v137; // rdx
  int v138; // eax
  int v139; // r9d
  __int64 v140; // r8
  __int64 *v141; // r10
  __int64 v142; // rdx
  __int64 *v143; // r8
  int Object; // [rsp+20h] [rbp-248h]
  int HandleInformation; // [rsp+28h] [rbp-240h]
  char v146; // [rsp+30h] [rbp-238h]
  unsigned int v147; // [rsp+40h] [rbp-228h]
  char v148; // [rsp+A0h] [rbp-1C8h]
  char v149; // [rsp+A1h] [rbp-1C7h] BYREF
  KPROCESSOR_MODE v150; // [rsp+A2h] [rbp-1C6h]
  char v151; // [rsp+A3h] [rbp-1C5h]
  unsigned __int8 v152; // [rsp+A4h] [rbp-1C4h] BYREF
  char v153; // [rsp+A5h] [rbp-1C3h]
  char v154; // [rsp+A6h] [rbp-1C2h]
  char v155; // [rsp+A7h] [rbp-1C1h]
  char v156; // [rsp+A8h] [rbp-1C0h]
  int v157; // [rsp+ACh] [rbp-1BCh]
  PVOID v158; // [rsp+B0h] [rbp-1B8h]
  char v159; // [rsp+B8h] [rbp-1B0h]
  char v160[7]; // [rsp+B9h] [rbp-1AFh] BYREF
  PVOID v161; // [rsp+C0h] [rbp-1A8h]
  int v162; // [rsp+C8h] [rbp-1A0h] BYREF
  _BYTE v163[2]; // [rsp+CCh] [rbp-19Ch] BYREF
  char v164[2]; // [rsp+CEh] [rbp-19Ah] BYREF
  ULONGLONG v165; // [rsp+D0h] [rbp-198h] BYREF
  int v166; // [rsp+D8h] [rbp-190h] BYREF
  _WORD v167[3]; // [rsp+DCh] [rbp-18Ch] BYREF
  char v168[2]; // [rsp+E2h] [rbp-186h] BYREF
  int v169; // [rsp+E4h] [rbp-184h] BYREF
  char v170; // [rsp+E8h] [rbp-180h]
  char v171; // [rsp+E9h] [rbp-17Fh]
  char v172; // [rsp+EAh] [rbp-17Eh]
  char v173; // [rsp+ECh] [rbp-17Ch]
  char v174[7]; // [rsp+EDh] [rbp-17Bh] BYREF
  int v175; // [rsp+F4h] [rbp-174h]
  int v176; // [rsp+F8h] [rbp-170h]
  char *v177; // [rsp+100h] [rbp-168h]
  int v178; // [rsp+108h] [rbp-160h]
  unsigned int v179; // [rsp+10Ch] [rbp-15Ch]
  int v180; // [rsp+110h] [rbp-158h]
  _QWORD *v181; // [rsp+118h] [rbp-150h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+120h] [rbp-148h] BYREF
  PVOID v183; // [rsp+140h] [rbp-128h] BYREF
  int *v184; // [rsp+148h] [rbp-120h]
  ACL *v185; // [rsp+150h] [rbp-118h]
  __int64 v186; // [rsp+158h] [rbp-110h] BYREF
  int v187; // [rsp+160h] [rbp-108h] BYREF
  __int64 v188; // [rsp+168h] [rbp-100h] BYREF
  unsigned int v189; // [rsp+170h] [rbp-F8h]
  int v190; // [rsp+174h] [rbp-F4h] BYREF
  PVOID v191; // [rsp+178h] [rbp-F0h] BYREF
  __int64 v192; // [rsp+180h] [rbp-E8h] BYREF
  PVOID v193; // [rsp+188h] [rbp-E0h] BYREF
  PVOID P; // [rsp+190h] [rbp-D8h] BYREF
  PVOID v195; // [rsp+198h] [rbp-D0h] BYREF
  int v196; // [rsp+1A0h] [rbp-C8h] BYREF
  __int64 v197; // [rsp+1A4h] [rbp-C4h]
  __int64 v198; // [rsp+1ACh] [rbp-BCh]
  PVOID v199; // [rsp+1B8h] [rbp-B0h]
  PVOID v200; // [rsp+1C0h] [rbp-A8h] BYREF
  int v201; // [rsp+1C8h] [rbp-A0h] BYREF
  __int64 v202; // [rsp+1CCh] [rbp-9Ch]
  unsigned int v203; // [rsp+1D4h] [rbp-94h]
  PACCESS_TOKEN v204; // [rsp+1D8h] [rbp-90h]
  void *v205; // [rsp+1E0h] [rbp-88h]
  __int128 v206; // [rsp+1F0h] [rbp-78h] BYREF
  char v207; // [rsp+200h] [rbp-68h] BYREF
  _BYTE v208[4]; // [rsp+204h] [rbp-64h] BYREF
  _BYTE SecurityDescriptor[96]; // [rsp+208h] [rbp-60h] BYREF
  __int64 v210; // [rsp+278h] [rbp+10h] BYREF
  HANDLE *v211; // [rsp+280h] [rbp+18h]
  __int64 v212; // [rsp+288h] [rbp+20h]

  v212 = a4;
  v211 = a3;
  v210 = a2;
  v157 = 0;
  v169 = 0;
  v20 = 0LL;
  v158 = 0LL;
  v159 = 0;
  v162 = -1073741823;
  v161 = 0LL;
  v184 = 0LL;
  v175 = 0;
  v173 = 0;
  P = 0LL;
  v183 = 0LL;
  v193 = 0LL;
  v165 = 0LL;
  v186 = 0LL;
  v181 = 0LL;
  v166 = 0;
  v191 = 0LL;
  v163[0] = 0;
  v160[0] = 0;
  v171 = 0;
  v156 = 0;
  v154 = 0;
  v174[0] = 1;
  v168[0] = 0;
  v199 = 0LL;
  v205 = 0LL;
  v170 = 0;
  v201 = 0;
  v202 = 0LL;
  v203 = 0;
  v185 = 0LL;
  memset(SecurityDescriptor, 0, 40);
  v192 = 0LL;
  v148 = 0;
  v155 = 0;
  v151 = 0;
  v172 = 0;
  v167[0] = 999;
  v196 = 0;
  v197 = 0LL;
  v198 = 0LL;
  v153 = 0;
  v178 = 0;
  v188 = 0LL;
  v176 = 0;
  v174[3] = 0;
  v164[0] = 0;
  v195 = 0LL;
  v187 = -1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v150 = PreviousMode;
  v163[1] = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( a9 )
  {
    if ( a9 != 1 )
    {
      v25 = -1073741811;
      goto LABEL_359;
    }
    v180 = 7;
  }
  else
  {
    v180 = 2;
  }
  ClientToken = SubjectContext.ClientToken;
  if ( a3 )
    goto LABEL_6;
  if ( !SubjectContext.ClientToken )
  {
    v25 = -1073741732;
    v20 = 0LL;
LABEL_359:
    v71 = 0;
    v60 = 0LL;
    goto LABEL_360;
  }
  if ( SubjectContext.ImpersonationLevel < SecurityIdentification )
  {
    v25 = -1073741659;
    v20 = 0LL;
    goto LABEL_359;
  }
LABEL_6:
  if ( a17 )
  {
    if ( !a12 )
    {
      v25 = -1073741811;
      v157 = -1073741811;
      goto LABEL_20;
    }
    if ( a12 > 0x1000 )
    {
      v25 = -1073741811;
      v157 = -1073741811;
      goto LABEL_20;
    }
    v26 = 4LL * a12;
    ProbeForWrite(Address, v26, 4u);
    ProbeForWrite(a14, v26, 4u);
  }
  else
  {
    v23 = Address;
    if ( (unsigned __int64)Address >= MmUserProbeAddress )
      v23 = (_DWORD *)MmUserProbeAddress;
    *v23 = *v23;
    v24 = a14;
    if ( (unsigned __int64)a14 >= MmUserProbeAddress )
      v24 = (_DWORD *)MmUserProbeAddress;
    *v24 = *v24;
  }
  if ( (a13 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v206 = *(_OWORD *)a13;
  v25 = v157;
  ClientToken = SubjectContext.ClientToken;
LABEL_20:
  if ( v25 < 0 )
    goto LABEL_179;
  if ( a3 )
  {
    v25 = ObReferenceObjectByHandle(*a3, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v200, 0LL);
    v199 = v200;
    if ( v25 < 0 )
    {
      v199 = 0LL;
      v27 = v165;
      v20 = (char *)v158;
      v71 = (char)v158;
      v60 = (char *)v158;
      if ( v25 != -1073741816 )
        v172 = 1;
      goto LABEL_112;
    }
    v205 = ClientToken;
    ClientToken = v200;
    SubjectContext.ClientToken = v200;
    v170 = 1;
  }
  if ( !ClientToken )
    ClientToken = SubjectContext.PrimaryToken;
  v204 = ClientToken;
  if ( !SeCheckAuditPrivilege((__int64)&SubjectContext, PreviousMode) )
  {
    if ( (a10 & 1) != 0 )
    {
      v171 = 1;
      goto LABEL_25;
    }
    v25 = -1073741727;
LABEL_179:
    v20 = (char *)v158;
    v71 = (char)v158;
    v60 = (char *)v158;
LABEL_360:
    v27 = v165;
    goto LABEL_112;
  }
LABEL_25:
  if ( (a8 & 0xF0000000) != 0 )
  {
    v25 = -1073741594;
    v20 = (char *)v158;
    v71 = (char)v158;
    v60 = (char *)v158;
    goto LABEL_360;
  }
  v25 = SeCaptureSecurityDescriptor(a6, PreviousMode, PagedPool, 0, &v165);
  v157 = v25;
  if ( v25 < 0 )
  {
    v27 = 0LL;
    goto LABEL_182;
  }
  v27 = v165;
  if ( !v165 )
    goto LABEL_183;
  v28 = *(_WORD *)(v165 + 2) & 0x8000;
  if ( v28 )
  {
    v29 = *(unsigned int *)(v165 + 4);
    if ( !(_DWORD)v29 )
      goto LABEL_183;
    v30 = v165 + v29;
  }
  else
  {
    v30 = *(_QWORD *)(v165 + 8);
  }
  if ( !v30 )
    goto LABEL_183;
  if ( v28 )
  {
    v31 = *(unsigned int *)(v165 + 8);
    if ( (_DWORD)v31 )
    {
      v32 = v165 + v31;
      goto LABEL_35;
    }
LABEL_183:
    v25 = -1073741703;
    v20 = (char *)v158;
    v71 = (char)v158;
    v60 = (char *)v158;
    goto LABEL_112;
  }
  v32 = *(_QWORD *)(v165 + 16);
LABEL_35:
  if ( !v32 )
    goto LABEL_183;
  v33 = a16;
  if ( (unsigned __int64)a16 >= MmUserProbeAddress )
    v33 = (_BYTE *)MmUserProbeAddress;
  *v33 = *v33;
  v25 = SepProbeAndCaptureString_U(a1, &P);
  v157 = v25;
  if ( v25 >= 0 )
  {
    v25 = SepProbeAndCaptureString_U(a4, &v183);
    v157 = v25;
    if ( v25 >= 0 )
    {
      v25 = SepProbeAndCaptureString_U(a5, &v193);
      v157 = v25;
    }
  }
  if ( v25 < 0 )
    goto LABEL_179;
  if ( Src )
  {
    v25 = SeCaptureSid(Src, PreviousMode, v34, v35, Object, 1, (PSID *)&v186);
    if ( v25 < 0 )
    {
      v186 = 0LL;
      v20 = (char *)v158;
      v71 = (char)v158;
      v60 = (char *)v158;
      goto LABEL_360;
    }
  }
  v25 = SeCaptureObjectTypeList(a11, a12, PreviousMode, &v181);
  if ( v25 < 0 )
    goto LABEL_179;
  v27 = v165;
  v25 = SepTrustLevelCheck(v36, v165, &SubjectContext, 0LL, 0LL, 1, &v187);
  if ( v25 < 0 )
    goto LABEL_182;
  v37 = a8;
  v25 = SepTrustToDiscretionary(&v187, a8);
  v157 = v25;
  if ( v25 < 0 )
  {
    v164[0] = 1;
LABEL_52:
    v39 = v166;
    goto LABEL_53;
  }
  v25 = SepMandatoryIntegrityCheck(&v206, v27, 0LL, (ULONG_PTR)ClientToken, 1, (__int64)&v201);
  if ( v25 < 0 )
  {
LABEL_182:
    v20 = (char *)v158;
    v71 = (char)v158;
    v60 = (char *)v158;
    goto LABEL_112;
  }
  v25 = SepMandatoryToDiscretionary(&v201, v37);
  v157 = v25;
  if ( (v25 < 0 || (v37 & 0x2000000) != 0) && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 && v203 <= 0x2000 )
  {
    v38 = 1;
    v153 = 1;
  }
  else
  {
    v38 = v153;
  }
  if ( v25 < 0 && !v38 )
    goto LABEL_52;
  v25 = SePrivilegePolicyCheck(&a8, &v166, (__int64 *)&SubjectContext, 0, (__int64)&v191, PreviousMode);
  v157 = v25;
  v37 = a8;
  if ( a8 )
    goto LABEL_52;
  v79 = (unsigned __int8)v176;
  v39 = v166;
  if ( v166 )
    v79 = 1;
  v176 = v79;
LABEL_53:
  SeLockSubjectContext(&SubjectContext);
  if ( v25 < 0 && !v153 )
  {
    v45 = 0;
    v152 = 0;
    v48 = 1;
    v149 = 1;
    v162 = v25;
    if ( !a17 )
    {
      v158 = &v169;
      v177 = (char *)&v162;
      goto LABEL_70;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
    v158 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SeUnlockSubjectContext(&SubjectContext);
      v25 = -1073741670;
LABEL_199:
      PreviousMode = v150;
      v20 = (char *)v158;
      v71 = v148;
      v60 = (char *)v161;
      goto LABEL_112;
    }
    v159 = 1;
    v81 = a12;
    v82 = &PoolWithTag[4 * a12];
    v177 = v82;
    for ( i = 0; i < v81; ++i )
    {
      v84 = 4LL * i;
      *(_DWORD *)&PoolWithTag[v84] = v169;
      *(_DWORD *)&v82[v84] = v25;
    }
LABEL_203:
    v48 = v149;
    goto LABEL_70;
  }
  IsOwner = SepTokenIsOwner((__int64)ClientToken, v27);
  v151 = IsOwner;
  v27 = v165;
  if ( !SepRmEnforceCap )
    goto LABEL_55;
  v85 = *(_WORD *)(v165 + 2);
  if ( (v85 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_55;
  if ( (v85 & 0x8000) == 0 )
  {
    v87 = *(ACL **)(v165 + 24);
    goto LABEL_212;
  }
  v86 = *(unsigned int *)(v165 + 12);
  if ( (_DWORD)v86 )
  {
    v87 = (ACL *)(v165 + v86);
LABEL_212:
    v185 = v87;
    if ( v87 )
    {
      ScopedPolicySid = SepGetScopedPolicySid(v87);
      if ( ScopedPolicySid )
      {
        Cap = SepRmReferenceFindCap(ScopedPolicySid, (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)&v192);
        v90 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)v192;
        if ( Cap < 0 )
          v90 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)SepRmDefaultCap;
        v192 = (__int64)v90;
        v25 = 0;
        v157 = 0;
        v148 = 1;
        IsOwner = v151;
        goto LABEL_56;
      }
    }
    goto LABEL_217;
  }
  v185 = 0LL;
LABEL_217:
  IsOwner = v151;
LABEL_55:
  v25 = v157;
LABEL_56:
  v37 = a8;
  if ( (a8 & 0x2060000) != 0
    && IsOwner
    && ((v73 = *(_WORD *)(v27 + 2), (v73 & 4) == 0)
      ? (v75 = 0LL)
      : (v73 & 0x8000) == 0
      ? (v75 = *(ACL **)(v27 + 32))
      : (v74 = *(unsigned int *)(v27 + 16), !(_DWORD)v74)
      ? (v75 = 0LL)
      : (v75 = (ACL *)(v27 + v74)),
        !RtlOwnerAcesPresent(v75)) )
  {
    if ( (v37 & 0x2000000) != 0 )
      v76 = 393216;
    else
      v76 = v37 & 0x60000;
    v39 = v76 | v166;
    v166 |= v76;
    v178 = v76;
    v37 &= 0xFFF9FFFF;
    a8 = v37;
  }
  else
  {
    v39 = v166;
  }
  if ( !v37 && (!v148 || (_BYTE)v176) && ((*((_DWORD *)ClientToken + 50) & 0x2000) != 0 || !v178) )
  {
    v169 = v39;
    if ( v39 )
    {
      v45 = 1;
      v48 = 0;
      v162 = 0;
    }
    else
    {
      v45 = 0;
      v48 = 1;
      v162 = -1073741790;
    }
    v149 = v48;
    v152 = v45;
    if ( !a17 )
    {
      v158 = &v169;
      v177 = (char *)&v162;
      goto LABEL_70;
    }
    v91 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
    v158 = v91;
    if ( v91 )
    {
      v159 = 1;
      v92 = a12;
      v93 = &v91[4 * a12];
      v177 = v93;
      for ( j = 0; j < v92; ++j )
      {
        v95 = 4LL * j;
        *(_DWORD *)&v91[v95] = v169;
        *(_DWORD *)&v93[v95] = v162;
      }
      goto LABEL_203;
    }
LABEL_198:
    v25 = -1073741670;
    SeUnlockSubjectContext(&SubjectContext);
    goto LABEL_199;
  }
  v41 = a17;
  if ( a17 )
  {
    v96 = a12;
    v42 = ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
    v158 = v42;
    if ( !v42 )
      goto LABEL_198;
    v159 = 1;
    v43 = (char *)&v42[v96];
  }
  else
  {
    v42 = &v169;
    v158 = &v169;
    v43 = (char *)&v162;
  }
  v177 = v43;
  v196 = v178;
  v147 = v39;
  v44 = a12;
  SepAccessCheck(
    v27,
    v186,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)ClientToken,
    v37,
    v181,
    a12,
    &v206,
    v147,
    v150,
    v42,
    0LL,
    (int *)v43,
    v41,
    v151,
    &v196,
    &v188,
    (char *)&v152,
    &v149);
  if ( !SepRmEnforceCap || *(int *)v43 < 0 || (v71 = v148) == 0 )
  {
    v37 = a8;
    v25 = v157;
    v39 = v166;
    v45 = v152;
    v46 = a12;
    goto LABEL_63;
  }
  if ( v41 )
  {
    v97 = ExAllocatePoolWithTag(PagedPool, 8 * v44, 0x61476553u);
    v98 = v97;
    v161 = v97;
    if ( !v97 )
    {
      SeUnlockSubjectContext(&SubjectContext);
      SeReleaseSubjectContext(&SubjectContext);
      v25 = -1073741670;
      PreviousMode = v150;
      v20 = (char *)v158;
      v60 = (char *)v161;
      goto LABEL_360;
    }
    v99 = &v97[v44];
  }
  else
  {
    v98 = v208;
    v161 = v208;
    v99 = (int *)&v207;
  }
  v184 = v99;
  v46 = a12;
  if ( a12 )
  {
    v25 = SepCopyObjectTypeList((__int64)v181, a12, &v195);
    if ( v25 < 0 )
    {
      PreviousMode = v150;
      v20 = (char *)v158;
      v60 = (char *)v161;
      goto LABEL_360;
    }
    v46 = a12;
    v98 = v161;
  }
  else
  {
    v25 = v157;
  }
  LOBYTE(v27) = 0;
  v176 = v27;
  v100 = 0;
  v37 = a8;
  v39 = v166;
  v101 = a9;
  while ( 1 )
  {
    v179 = v100;
    if ( v100 >= *(_DWORD *)(v192 + 60) )
      break;
    v102 = *(_QWORD *)(v192 + 8LL * v100 + 64);
    v200 = (PVOID)v102;
    if ( *(_QWORD *)(v102 + 24) )
    {
      if ( !v188 )
      {
        LODWORD(v27) = (unsigned __int8)v27;
        if ( (int)AuthzBasepInitializeResourceClaimsFromSacl((__int64)v185, &v188) < 0 )
          LODWORD(v27) = 1;
        v176 = v27;
      }
      v103 = (_QWORD *)*((_QWORD *)ClientToken + 137);
      v104 = v103 ? v103[75] : 0LL;
      v105 = v103 ? v103[73] : 0LL;
      v106 = v103 ? v103[74] : 0LL;
      v107 = v103 ? v103[72] : 0LL;
      v108 = AuthzBasepEvaluateAceCondition(
               (__int64)ClientToken,
               *((_QWORD *)ClientToken + 97),
               v188,
               v107,
               v106,
               v105,
               v104,
               *(_DWORD **)(v102 + 24),
               *(_DWORD *)(v102 + 16),
               1,
               0,
               &v190);
      v25 = v108;
      v109 = v190;
      if ( v190 != 1 )
      {
        if ( v108 < 0 )
          goto LABEL_296;
        if ( SeTokenIsRestricted(ClientToken) )
        {
          v110 = (_QWORD *)*((_QWORD *)ClientToken + 137);
          if ( v110 )
            v111 = v110[75];
          else
            v111 = 0LL;
          if ( v110 )
            v112 = v110[73];
          else
            v112 = 0LL;
          if ( v110 )
            v113 = v110[74];
          else
            v113 = 0LL;
          if ( v110 )
            v114 = v110[72];
          else
            v114 = 0LL;
          v25 = AuthzBasepEvaluateAceCondition(
                  (__int64)ClientToken,
                  *((_QWORD *)ClientToken + 97),
                  v188,
                  v114,
                  v113,
                  v112,
                  v111,
                  *(_DWORD **)(v102 + 24),
                  *(_DWORD *)(v102 + 16),
                  1,
                  1,
                  &v190);
          if ( v25 < 0 )
          {
LABEL_296:
            PreviousMode = v150;
            v20 = (char *)v158;
            v71 = v148;
            v60 = (char *)v161;
            goto LABEL_360;
          }
          v109 = v190;
        }
        if ( !(_BYTE)v176 && v109 != 1 )
        {
          v101 = a9;
          v46 = a12;
          v98 = v161;
          goto LABEL_295;
        }
      }
    }
    if ( (*(_DWORD *)(v102 + 48) & 1) == 0 )
    {
      v115 = v39;
LABEL_287:
      v116 = v37;
      goto LABEL_288;
    }
    v115 = 0;
    if ( (v37 & 0x2000000) != 0 )
      goto LABEL_287;
    v116 = v37 | v39;
LABEL_288:
    v25 = SepBuildCapeSecurityDescriptor(SecurityDescriptor, *((unsigned __int8 **)v200 + 4), v185);
    if ( v25 < 0 )
      goto LABEL_296;
    SepAccessCheck(
      (__int64)SecurityDescriptor,
      v186,
      (__int64)SubjectContext.PrimaryToken,
      (__int64)SubjectContext.ClientToken,
      v116,
      v195,
      a12,
      &v206,
      v115,
      v150,
      (unsigned int *)v161,
      0LL,
      v184,
      a17,
      v151,
      &v196,
      &v188,
      v174,
      v168);
    v98 = v161;
    if ( v155 )
      v101 = *(_DWORD *)v161 & a9;
    else
      v101 = *(_DWORD *)v161;
    a9 = v101;
    v46 = a12;
    if ( v195 )
    {
      SepMergeObjectTypeListAccesses((__int64)v181, (__int64)v195, a12);
      v101 = a9;
      v98 = v161;
    }
    v155 = 1;
LABEL_295:
    v100 = v179 + 1;
    LOBYTE(v27) = v176;
  }
  v45 = v174[0];
  v152 = v174[0];
  v149 = v168[0];
  *v98 &= v101;
  if ( !v101 )
  {
    *v184 = -1073741790;
    v45 = 0;
    v152 = 0;
    v149 = 1;
  }
LABEL_63:
  if ( (v37 & 0x2000000) != 0 )
  {
    if ( !v153 || !*(_WORD *)((char *)&v198 + 5) )
    {
      if ( a17 )
        v77 = v46;
      else
        v77 = 0;
      SepConstrainByMandatory((__int64)&v201, v37, (char *)v158, v177, 0LL, v77);
    }
    goto LABEL_65;
  }
  if ( !v153 || BYTE6(v198) )
  {
LABEL_65:
    v47 = a17;
LABEL_66:
    v48 = v149;
LABEL_67:
    v49 = v177;
    v50 = (char *)v158;
    goto LABEL_68;
  }
  v47 = a17;
  if ( BYTE5(v198) )
    goto LABEL_66;
  v45 = 0;
  v152 = 0;
  v48 = 1;
  v149 = 1;
  v117 = 0;
  v169 = 0;
  v162 = -1073741790;
  if ( !a17 )
    goto LABEL_67;
  v118 = 0;
  v49 = v177;
  v50 = (char *)v158;
  while ( v118 < v46 )
  {
    v119 = 4LL * v118;
    *(_DWORD *)&v50[v119] = v117;
    *(_DWORD *)&v49[v119] = v162;
    ++v118;
    v117 = v169;
  }
  v48 = v149;
  v47 = a17;
LABEL_68:
  if ( (v37 & 0x2000000) != 0 )
  {
    if ( v47 )
      v78 = a12;
    else
      v78 = 0;
    SepConstrainByTrust(&v187, v37, v50, v49, 0LL, v78, v164);
    v48 = v149;
  }
  v27 = v165;
LABEL_70:
  if ( ClientToken
    && (v164[0]
     || !(_DWORD)v198 && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 && v25 >= 0 && (v162 < 0 || HIBYTE(v198))) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
    v121 = v162 >= 0;
    v122 = a8 | v166;
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)&SubjectContext);
    SeLogAccessFailure((__int64)ClientToken, v124, v125, TokenTrustLevel, v165, v122, v121);
    ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v37 = a8;
    v27 = v165;
    v39 = v166;
    v45 = v152;
    v48 = v149;
  }
  if ( v171 )
    goto LABEL_86;
  v51 = v180;
  if ( v180 == 2 )
  {
    if ( v45 )
    {
      LOBYTE(HandleInformation) = 0;
      v156 = SepAdtAuditObjectAccessWithContext(0LL, v183, v45, 0LL, &SubjectContext, HandleInformation, v167);
      v48 = v149;
    }
    if ( v48 )
    {
      LOBYTE(HandleInformation) = 0;
      v52 = SepAdtAuditObjectAccessWithContext(0LL, v183, 0LL, v48, &SubjectContext, HandleInformation, v167);
      v154 = v52;
    }
    else
    {
LABEL_79:
      v52 = v154;
    }
  }
  else
  {
    if ( v45 )
    {
      v167[0] = 151;
      v156 = SepAdtAuditThisEventWithContext(151LL, v45, 0LL, &SubjectContext);
      v48 = v149;
    }
    if ( !v48 )
    {
      v51 = v180;
      goto LABEL_79;
    }
    v167[0] = 151;
    v52 = SepAdtAuditThisEventWithContext(151LL, 0LL, v48, &SubjectContext);
    v154 = v52;
    v51 = v180;
  }
  v53 = v156;
  if ( v156 || v52 )
  {
    PrimaryToken = (int)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = (int)SubjectContext.ClientToken;
    v127 = *(_WORD *)(v27 + 2);
    if ( (v127 & 0x10) != 0 )
    {
      if ( v127 < 0 )
      {
        v129 = *(_DWORD *)(v27 + 12);
        if ( v129 )
          LODWORD(v128) = v27 + v129;
        else
          LODWORD(v128) = 0;
      }
      else
      {
        v128 = *(_QWORD *)(v27 + 24);
      }
    }
    else
    {
      LODWORD(v128) = 0;
    }
    if ( (v127 & 0x10) != 0 )
    {
      if ( v127 < 0 )
      {
        v131 = *(_DWORD *)(v27 + 12);
        if ( v131 )
          LODWORD(v130) = v27 + v131;
        else
          LODWORD(v130) = 0;
      }
      else
      {
        v130 = *(_QWORD *)(v27 + 24);
      }
    }
    else
    {
      LODWORD(v130) = 0;
    }
    v132 = v37 | v39;
    v133 = v177;
    v134 = a17;
    SepExamineSaclEx(
      v130,
      v128,
      PrimaryToken,
      v132,
      (__int64)v181,
      a12,
      a17,
      (__int64)v177,
      (__int64)v158,
      v186,
      v151,
      (__int64)v163,
      (__int64)v160);
    v135 = (int)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      v135 = (int)SubjectContext.ClientToken;
    v136 = *(_WORD *)(v27 + 2);
    if ( (v136 & 0x10) != 0 )
    {
      if ( v136 < 0 )
      {
        v138 = *(_DWORD *)(v27 + 12);
        if ( v138 )
          LODWORD(v137) = v27 + v138;
        else
          LODWORD(v137) = 0;
      }
      else
      {
        v137 = *(_QWORD *)(v27 + 24);
      }
    }
    else
    {
      LODWORD(v137) = 0;
    }
    v54 = v158;
    v146 = v134;
    v55 = a12;
    SepExamineGlobalSaclEx(
      (__int64)v183,
      v137,
      v135,
      v132,
      (__int64)v181,
      a12,
      v146,
      (__int64)v133,
      (__int64)v158,
      v186,
      v151,
      (__int64)v163,
      v160);
    v53 = v156;
    v51 = v180;
    v52 = v154;
  }
  else
  {
    v54 = v158;
    v55 = a12;
  }
  if ( v163[0] || v160[0] )
  {
    v139 = (unsigned __int8)v175;
    if ( v45 )
      v139 = 1;
    v175 = v139;
    v56 = a17;
    if ( v163[0] && v53 )
    {
      v140 = 0LL;
      if ( a17 )
        v140 = (__int64)v54;
      v141 = &v210;
      if ( !v45 )
        LODWORD(v141) = 0;
      v27 = v165;
      SepAdtOpenObjectAuditAlarm(
        v167[0],
        (_DWORD)P,
        (_DWORD)v141,
        (_DWORD)v183,
        (__int64)v193,
        v165,
        (__int64)SubjectContext.ClientToken,
        (__int64)SubjectContext.PrimaryToken,
        *v54,
        *v54,
        (__int64)v191,
        1,
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink,
        v51,
        (__int64)v181,
        v55,
        v140,
        0LL,
        0LL);
      v45 = v152;
      v52 = v154;
    }
    if ( v160[0] && v52 )
    {
      v142 = 0LL;
      if ( v56 )
        v142 = (__int64)v54;
      v143 = &v210;
      if ( !v45 )
        LODWORD(v143) = 0;
      v27 = v165;
      SepAdtOpenObjectAuditAlarm(
        v167[0],
        (_DWORD)P,
        (_DWORD)v143,
        (_DWORD)v183,
        (__int64)v193,
        v165,
        (__int64)SubjectContext.ClientToken,
        (__int64)SubjectContext.PrimaryToken,
        a8,
        a8,
        (__int64)v191,
        0,
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink,
        v51,
        (__int64)v181,
        v55,
        v142,
        0LL,
        0LL);
    }
    goto LABEL_87;
  }
  if ( !v191 || !v45 )
  {
LABEL_86:
    v56 = a17;
LABEL_87:
    v57 = v175;
    goto LABEL_88;
  }
  SepAdtPrivilegeObjectAuditAlarm(
    (_DWORD)P,
    (_DWORD)v183,
    (_DWORD)v193,
    (unsigned int)&v210,
    (__int64)SubjectContext.ClientToken,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink,
    a8,
    (__int64)v191,
    v152);
  v57 = 0;
  v27 = v165;
  v56 = a17;
LABEL_88:
  SeUnlockSubjectContext(&SubjectContext);
  if ( v56 )
  {
    v61 = v177;
    v189 = 0;
    v62 = v155;
    if ( v177 )
    {
      v67 = 0;
      v68 = Address;
      v69 = a14;
      v20 = (char *)v158;
      v60 = (char *)v161;
      while ( v67 < a12 )
      {
        v70 = v67;
        v68[v70] = *(_DWORD *)&v61[v70 * 4];
        v69[v70] = *(_DWORD *)&v20[v70 * 4];
        if ( SepRmEnforceCap && v62 && *(int *)&v61[v70 * 4] >= 0 )
        {
          v68[v70] = v184[v70];
          v69[v70] &= *(_DWORD *)&v60[v70 * 4];
        }
        v189 = ++v67;
        v27 = v165;
      }
      goto LABEL_111;
    }
    v63 = 0;
    v64 = Address;
    v65 = a14;
    while ( v63 < a12 )
    {
      v66 = v63;
      v64[v66] = v162;
      v65[v66] = v169;
      if ( SepRmEnforceCap && v62 && v162 >= 0 )
      {
        v64[v66] = v162;
        v65[v66] &= v169;
      }
      v189 = ++v63;
      v27 = v165;
    }
LABEL_91:
    v60 = (char *)v161;
    goto LABEL_92;
  }
  v58 = Address;
  *Address = v162;
  v59 = a14;
  *a14 = v169;
  if ( !SepRmEnforceCap || !v155 || v162 < 0 )
  {
    v27 = v165;
    goto LABEL_91;
  }
  *v58 = *v184;
  v60 = (char *)v161;
  *v59 &= *(_DWORD *)v161;
  v27 = v165;
LABEL_92:
  v20 = (char *)v158;
LABEL_111:
  *a16 = v57;
  v25 = 0;
  v157 = 0;
  PreviousMode = v150;
  v71 = v148;
LABEL_112:
  if ( v170 )
  {
    ObfDereferenceObject(v199);
    SubjectContext.ClientToken = v205;
  }
  if ( v191 )
    ExFreePoolWithTag(v191, 0);
  SeReleaseSubjectContext(&SubjectContext);
  SeReleaseSecurityDescriptor((void *)v27, PreviousMode, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v183 )
    ExFreePoolWithTag(v183, 0);
  if ( v193 )
    ExFreePoolWithTag(v193, 0);
  if ( v186 )
    SeReleaseSid((void *)v186, PreviousMode, 1);
  if ( v181 )
    SeFreeCapturedObjectTypeList(v181);
  if ( v159 )
  {
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    if ( v60 )
      ExFreePoolWithTag(v60, 0);
  }
  if ( v71 )
    SepRmDereferenceCap(v192);
  if ( v195 )
    ExFreePoolWithTag(v195, 0);
  SepFreeResourceInfo(v188);
  if ( v25 == -1073741670 || v172 )
    SepAuditFailed((unsigned int)v25);
  return (unsigned int)v25;
}
