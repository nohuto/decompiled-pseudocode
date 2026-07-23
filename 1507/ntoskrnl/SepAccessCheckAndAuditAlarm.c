/*
 * XREFs of SepAccessCheckAndAuditAlarm @ 0x140525750
 * Callers:
 *     NtAccessCheckAndAuditAlarm @ 0x140525620 (NtAccessCheckAndAuditAlarm.c)
 *     NtAccessCheckByTypeAndAuditAlarm @ 0x1405256A4 (NtAccessCheckByTypeAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarm @ 0x1405877D8 (NtAccessCheckByTypeResultListAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x1406D466C (NtAccessCheckByTypeResultListAndAuditAlarmByHandle.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x140007C40 (SeTokenIsRestricted.c)
 *     SepLocateTokenTrustLevel @ 0x140045658 (SepLocateTokenTrustLevel.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     SepAccessCheck @ 0x1400CB700 (SepAccessCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x1400CC5F0 (SepMandatoryIntegrityCheck.c)
 *     SepTokenIsOwner @ 0x1400CD420 (SepTokenIsOwner.c)
 *     SeCaptureObjectTypeList @ 0x1400CE500 (SeCaptureObjectTypeList.c)
 *     SepMandatoryToDiscretionary @ 0x1400CE714 (SepMandatoryToDiscretionary.c)
 *     SepTrustLevelCheck @ 0x1400CE734 (SepTrustLevelCheck.c)
 *     SePrivilegePolicyCheck @ 0x1400CE840 (SePrivilegePolicyCheck.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SepFreeResourceInfo @ 0x14010D734 (SepFreeResourceInfo.c)
 *     SepTrustToDiscretionary @ 0x14010D740 (SepTrustToDiscretionary.c)
 *     RtlOwnerAcesPresent @ 0x14010D754 (RtlOwnerAcesPresent.c)
 *     SepConstrainByTrust @ 0x14010D760 (SepConstrainByTrust.c)
 *     SepConstrainByMandatory @ 0x14010D79C (SepConstrainByMandatory.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14011C690 (AuthzBasepEvaluateAceCondition.c)
 *     SeLogAccessFailure @ 0x140124240 (SeLogAccessFailure.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14012A2E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepExamineGlobalSaclEx @ 0x14015B154 (SepExamineGlobalSaclEx.c)
 *     SeFreeCapturedObjectTypeList @ 0x14015B31C (SeFreeCapturedObjectTypeList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14024F4BC (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x14024F55C (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x14024F610 (SepGetScopedPolicySid.c)
 *     SepMergeObjectTypeListAccesses @ 0x14024F650 (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCap @ 0x14024F67C (SepRmDereferenceCap.c)
 *     SepRmReferenceFindCap @ 0x140250B38 (SepRmReferenceFindCap.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepAdtAuditThisEventWithContext @ 0x140432F30 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404358A0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeCaptureSid @ 0x140470AC8 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140470E00 (SeReleaseSid.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     SeUnlockSubjectContext @ 0x1404C52E0 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1404C5390 (SeLockSubjectContext.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8F88 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C9790 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     SepProbeAndCaptureString_U @ 0x140526A90 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x140526BA8 (SeCheckAuditPrivilege.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140526C38 (SepAdtAuditObjectAccessWithContext.c)
 *     SepExamineSaclEx @ 0x140584948 (SepExamineSaclEx.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1405867E8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepAccessCheckAndAuditAlarm(
        __int64 a1,
        __int64 a2,
        void **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 *Src,
        unsigned int a8,
        int a9,
        char a10,
        unsigned __int64 a11,
        unsigned int a12,
        __int64 a13,
        char *a14,
        char *Address,
        char *a16,
        char a17)
{
  PVOID v19; // r15
  char *v20; // r13
  char v21; // r14
  PACCESS_TOKEN ClientToken; // r13
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  unsigned int v25; // r14d
  int v26; // ebx
  unsigned __int8 v27; // di
  __int64 v28; // rdi
  __int16 v29; // cx
  __int64 v30; // rax
  ULONGLONG v31; // rax
  __int64 v32; // rax
  ULONGLONG v33; // rax
  _BYTE *v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  char v37; // r12
  __int64 v38; // rcx
  int v39; // r14d
  int v40; // eax
  char IsOwner; // al
  unsigned int v42; // r12d
  _DWORD *v43; // rax
  int *v44; // r15
  __int64 v45; // rbx
  unsigned __int8 v46; // r12
  char v47; // dl
  unsigned __int8 v48; // cl
  char *v49; // r10
  char v50; // al
  char v51; // r8
  _DWORD *v52; // r14
  int v53; // r13d
  char v54; // bl
  char v55; // r13
  unsigned int v56; // r14d
  unsigned int v57; // eax
  char *v58; // r8
  int *v59; // r11
  char v60; // r12
  __int64 v61; // rdx
  char *v62; // r9
  char *v63; // r10
  _DWORD *v64; // rcx
  _DWORD *v65; // rdx
  unsigned int v66; // edx
  char *v67; // r8
  char *v68; // r9
  __int64 v69; // rcx
  __int64 v71; // rbx
  __int16 v72; // ax
  __int64 v73; // rax
  ACL *v74; // rcx
  int v75; // eax
  int PrimaryToken; // r8d
  __int16 v77; // cx
  int v78; // edx
  __int64 v79; // rdx
  int v80; // eax
  __int64 v81; // rcx
  int v82; // ebx
  int v83; // r8d
  __int16 v84; // ax
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // r9
  __int64 *v88; // r8
  int v89; // ebx
  unsigned int v90; // eax
  unsigned int v91; // eax
  void *v92; // rcx
  int v93; // eax
  int v94; // ecx
  __int64 v95; // r15
  char *PoolWithTag; // rax
  unsigned int v97; // edx
  unsigned int v98; // r14d
  __int64 v99; // rcx
  __int16 v100; // dx
  __int64 v101; // rax
  ACL *v102; // rax
  _BYTE *ScopedPolicySid; // rax
  __int64 v104; // r8
  __int64 v105; // r9
  int Cap; // eax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v107; // rdx
  __int64 v108; // r15
  char *v109; // rax
  unsigned int v110; // edx
  unsigned int v111; // r12d
  __int64 v112; // rcx
  _DWORD *v113; // rax
  _DWORD *v114; // r11
  int *v115; // r10
  __int64 v116; // rcx
  int v117; // edx
  int v118; // eax
  __int64 v119; // r12
  _QWORD *v120; // rax
  __int64 v121; // r8
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r9
  int v125; // eax
  int v126; // edi
  _QWORD *v127; // rax
  __int64 v128; // r8
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r9
  unsigned int v132; // r12d
  unsigned int v133; // edi
  unsigned int v134; // r12d
  unsigned int v135; // r8d
  unsigned int v136; // edx
  unsigned int v137; // r9d
  __int64 v138; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v140; // di
  char v141; // bl
  ULONGLONG TokenTrustLevel; // rax
  __int64 v143; // rdx
  __int64 v144; // r8
  struct _KTHREAD *v145; // rcx
  __int16 v146; // ax
  __int64 v147; // rdx
  __int64 *v148; // r8
  int Object; // [rsp+20h] [rbp-248h]
  int HandleInformation; // [rsp+28h] [rbp-240h]
  unsigned int v151; // [rsp+40h] [rbp-228h]
  KPROCESSOR_MODE PreviousMode; // [rsp+A0h] [rbp-1C8h]
  unsigned __int8 v153; // [rsp+A1h] [rbp-1C7h] BYREF
  char v154; // [rsp+A2h] [rbp-1C6h]
  unsigned __int8 v155; // [rsp+A3h] [rbp-1C5h] BYREF
  char v156; // [rsp+A4h] [rbp-1C4h]
  char v157; // [rsp+A5h] [rbp-1C3h]
  char v158; // [rsp+A6h] [rbp-1C2h]
  char v159; // [rsp+A7h] [rbp-1C1h]
  char v160; // [rsp+A8h] [rbp-1C0h]
  int v161; // [rsp+ACh] [rbp-1BCh]
  char v162; // [rsp+B0h] [rbp-1B8h]
  char v163; // [rsp+B1h] [rbp-1B7h] BYREF
  char v164; // [rsp+B2h] [rbp-1B6h] BYREF
  char v165[5]; // [rsp+B3h] [rbp-1B5h] BYREF
  int v166; // [rsp+B8h] [rbp-1B0h] BYREF
  PVOID v167; // [rsp+C0h] [rbp-1A8h]
  ULONGLONG v168; // [rsp+C8h] [rbp-1A0h] BYREF
  int v169; // [rsp+D0h] [rbp-198h] BYREF
  PVOID v170; // [rsp+D8h] [rbp-190h]
  _WORD v171[3]; // [rsp+E0h] [rbp-188h] BYREF
  char v172[2]; // [rsp+E6h] [rbp-182h] BYREF
  char v173; // [rsp+E8h] [rbp-180h]
  unsigned int v174; // [rsp+ECh] [rbp-17Ch] BYREF
  char v175; // [rsp+F1h] [rbp-177h]
  char v176; // [rsp+F2h] [rbp-176h]
  int v177; // [rsp+F4h] [rbp-174h]
  char v178; // [rsp+F9h] [rbp-16Fh]
  char v179; // [rsp+FAh] [rbp-16Eh]
  unsigned __int8 v180; // [rsp+FBh] [rbp-16Dh] BYREF
  int v181; // [rsp+FCh] [rbp-16Ch]
  int v182; // [rsp+100h] [rbp-168h]
  int v183; // [rsp+104h] [rbp-164h]
  int v184; // [rsp+108h] [rbp-160h]
  _QWORD *v185; // [rsp+110h] [rbp-158h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+118h] [rbp-150h] BYREF
  PVOID v187; // [rsp+138h] [rbp-130h] BYREF
  int *v188; // [rsp+140h] [rbp-128h]
  ACL *v189; // [rsp+148h] [rbp-120h]
  __int64 v190; // [rsp+150h] [rbp-118h] BYREF
  unsigned int v191; // [rsp+158h] [rbp-110h]
  __int64 v192; // [rsp+160h] [rbp-108h] BYREF
  int v193; // [rsp+168h] [rbp-100h] BYREF
  int v194; // [rsp+16Ch] [rbp-FCh] BYREF
  PVOID v195; // [rsp+170h] [rbp-F8h] BYREF
  __int64 v196; // [rsp+178h] [rbp-F0h] BYREF
  PVOID v197; // [rsp+180h] [rbp-E8h] BYREF
  PVOID P; // [rsp+188h] [rbp-E0h] BYREF
  PVOID v199; // [rsp+190h] [rbp-D8h] BYREF
  int v200; // [rsp+198h] [rbp-D0h] BYREF
  __int64 v201; // [rsp+19Ch] [rbp-CCh]
  __int64 v202; // [rsp+1A4h] [rbp-C4h]
  PVOID v203; // [rsp+1B0h] [rbp-B8h]
  PVOID v204; // [rsp+1B8h] [rbp-B0h] BYREF
  int v205; // [rsp+1C0h] [rbp-A8h] BYREF
  __int64 v206; // [rsp+1C4h] [rbp-A4h]
  unsigned int v207; // [rsp+1CCh] [rbp-9Ch]
  PACCESS_TOKEN v208; // [rsp+1E0h] [rbp-88h]
  void *v209; // [rsp+1E8h] [rbp-80h]
  __int128 v210; // [rsp+1F0h] [rbp-78h] BYREF
  _BYTE v211[4]; // [rsp+200h] [rbp-68h] BYREF
  char v212; // [rsp+204h] [rbp-64h] BYREF
  _BYTE SecurityDescriptor[96]; // [rsp+208h] [rbp-60h] BYREF
  __int64 v214; // [rsp+278h] [rbp+10h] BYREF
  void **v215; // [rsp+280h] [rbp+18h]
  __int64 v216; // [rsp+288h] [rbp+20h]

  v216 = a4;
  v215 = a3;
  v214 = a2;
  v161 = 0;
  v174 = 0;
  v19 = 0LL;
  v162 = 0;
  v166 = -1073741823;
  v20 = 0LL;
  v167 = 0LL;
  v188 = 0LL;
  v157 = 0;
  P = 0LL;
  v187 = 0LL;
  v197 = 0LL;
  v168 = 0LL;
  v190 = 0LL;
  v185 = 0LL;
  v169 = 0;
  v195 = 0LL;
  v165[0] = 0;
  v163 = 0;
  v176 = 0;
  v160 = 0;
  v159 = 0;
  v180 = 1;
  v172[0] = 0;
  v203 = 0LL;
  v209 = 0LL;
  v173 = 0;
  v205 = 0;
  v206 = 0LL;
  v207 = 0;
  v189 = 0LL;
  memset(SecurityDescriptor, 0, 40);
  v196 = 0LL;
  v21 = 0;
  v154 = 0;
  v158 = 0;
  v156 = 0;
  v179 = 0;
  v171[0] = 999;
  v200 = 0;
  v201 = 0LL;
  v202 = 0LL;
  v182 = 0;
  v175 = 0;
  v181 = 0;
  v192 = 0LL;
  v177 = 0;
  v178 = 0;
  v164 = 0;
  v199 = 0LL;
  v194 = -1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v165[1] = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( a9 )
  {
    if ( a9 != 1 )
    {
      v26 = -1073741811;
      goto LABEL_374;
    }
    v184 = 7;
  }
  else
  {
    v184 = 2;
  }
  ClientToken = SubjectContext.ClientToken;
  if ( !a3 )
  {
    if ( SubjectContext.ClientToken )
    {
      if ( SubjectContext.ImpersonationLevel >= SecurityIdentification )
        goto LABEL_6;
      v26 = -1073741659;
      v20 = 0LL;
    }
    else
    {
      v26 = -1073741732;
      v20 = 0LL;
    }
LABEL_374:
    v28 = v168;
    goto LABEL_208;
  }
LABEL_6:
  if ( a17 )
  {
    v25 = a12;
    if ( !a12 )
    {
      v26 = -1073741811;
      v161 = -1073741811;
      goto LABEL_20;
    }
    if ( a12 > 0x1000 )
    {
      v26 = -1073741811;
      v161 = -1073741811;
      goto LABEL_20;
    }
    ProbeForWrite(Address, 4LL * a12, 4u);
    ProbeForWrite(a14, 4LL * v25, 4u);
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
    v25 = a12;
  }
  if ( (a13 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v210 = *(_OWORD *)a13;
  v26 = v161;
  ClientToken = SubjectContext.ClientToken;
LABEL_20:
  if ( v26 < 0 )
    goto LABEL_218;
  if ( a3 )
  {
    v92 = *a3;
    v27 = PreviousMode;
    v26 = ObReferenceObjectByHandle(v92, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v204, 0LL);
    v203 = v204;
    if ( v26 < 0 )
    {
      v203 = 0LL;
      v28 = v168;
      v37 = PreviousMode;
      v21 = v154;
      v20 = (char *)v167;
      if ( v26 != -1073741816 )
        v179 = 1;
      goto LABEL_113;
    }
    v209 = ClientToken;
    ClientToken = v204;
    SubjectContext.ClientToken = v204;
    v173 = 1;
  }
  else
  {
    v27 = PreviousMode;
  }
  if ( !ClientToken )
    ClientToken = SubjectContext.PrimaryToken;
  v208 = ClientToken;
  if ( !(unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v27) )
  {
    if ( (a10 & 1) != 0 )
    {
      v176 = 1;
      goto LABEL_26;
    }
    v26 = -1073741727;
LABEL_218:
    v21 = v154;
    v20 = (char *)v167;
    goto LABEL_374;
  }
LABEL_26:
  if ( (a8 & 0xF0000000) != 0 )
  {
    v26 = -1073741594;
    v21 = v154;
    v20 = (char *)v167;
    goto LABEL_374;
  }
  v26 = SeCaptureSecurityDescriptor(a6, v27, PagedPool, 0, &v168);
  v161 = v26;
  if ( v26 < 0 )
  {
    v28 = 0LL;
    v21 = v154;
    v20 = (char *)v167;
    goto LABEL_208;
  }
  v28 = v168;
  if ( !v168 )
    goto LABEL_207;
  v29 = *(_WORD *)(v168 + 2) & 0x8000;
  if ( v29 )
  {
    v30 = *(unsigned int *)(v168 + 4);
    if ( !(_DWORD)v30 )
      goto LABEL_207;
    v31 = v168 + v30;
  }
  else
  {
    v31 = *(_QWORD *)(v168 + 8);
  }
  if ( !v31 )
    goto LABEL_207;
  if ( v29 )
  {
    v32 = *(unsigned int *)(v168 + 8);
    if ( (_DWORD)v32 )
    {
      v33 = v168 + v32;
      goto LABEL_36;
    }
LABEL_207:
    v26 = -1073741703;
    v21 = v154;
    v20 = (char *)v167;
    goto LABEL_208;
  }
  v33 = *(_QWORD *)(v168 + 16);
LABEL_36:
  if ( !v33 )
    goto LABEL_207;
  v34 = a16;
  if ( (unsigned __int64)a16 >= MmUserProbeAddress )
    v34 = (_BYTE *)MmUserProbeAddress;
  *v34 = *v34;
  v26 = SepProbeAndCaptureString_U(a1, &P);
  v161 = v26;
  if ( v26 >= 0 )
  {
    v26 = SepProbeAndCaptureString_U(v216, &v187);
    v161 = v26;
    if ( v26 >= 0 )
    {
      v26 = SepProbeAndCaptureString_U(a5, &v197);
      v161 = v26;
    }
  }
  v37 = PreviousMode;
  if ( v26 < 0 )
    goto LABEL_218;
  if ( Src )
  {
    v26 = SeCaptureSid(Src, PreviousMode, v35, v36, Object, 1, (PSID *)&v190);
    if ( v26 < 0 )
    {
      v190 = 0LL;
      v28 = v168;
      goto LABEL_223;
    }
  }
  v26 = SeCaptureObjectTypeList(a11, v25, PreviousMode, &v185);
  if ( v26 < 0 )
    goto LABEL_218;
  v28 = v168;
  v26 = SepTrustLevelCheck(v38, v168, &SubjectContext, 0LL, 0LL, 1, &v194);
  if ( v26 < 0 )
    goto LABEL_223;
  v39 = a8;
  v26 = SepTrustToDiscretionary(&v194, a8);
  v161 = v26;
  if ( v26 < 0 )
  {
    v164 = 1;
    v93 = v169;
LABEL_233:
    a9 = v93;
    goto LABEL_54;
  }
  v26 = SepMandatoryIntegrityCheck(&v210, v28, 0, (__int64)ClientToken, 1, (__int64)&v205);
  if ( v26 < 0 )
  {
LABEL_223:
    v21 = v154;
    v20 = (char *)v167;
    goto LABEL_113;
  }
  v26 = SepMandatoryToDiscretionary(&v205, v39);
  v161 = v26;
  if ( (v26 < 0 || (v39 & 0x2000000) != 0) && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 )
  {
    v40 = (unsigned __int8)v182;
    if ( v207 <= 0x2000 )
      v40 = 1;
    v182 = v40;
  }
  else
  {
    LOBYTE(v40) = v182;
  }
  if ( v26 >= 0 || (_BYTE)v40 )
  {
    v26 = SePrivilegePolicyCheck(&a8, &v169, (__int64 *)&SubjectContext, 0LL, (__int64)&v195, PreviousMode);
    v161 = v26;
    v39 = a8;
    if ( !a8 )
    {
      v94 = (unsigned __int8)v177;
      v93 = v169;
      if ( v169 )
        v94 = 1;
      v177 = v94;
      goto LABEL_233;
    }
  }
  a9 = v169;
LABEL_54:
  SeLockSubjectContext(&SubjectContext);
  if ( v26 < 0 && !(_BYTE)v182 )
  {
    v46 = 0;
    v155 = 0;
    v48 = 1;
    v153 = 1;
    v166 = v26;
    if ( a17 )
    {
      v95 = a12;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
      v170 = PoolWithTag;
      if ( PoolWithTag )
      {
        v162 = 1;
        v44 = (int *)&PoolWithTag[4 * v95];
        v97 = 0;
        v98 = a12;
        while ( v97 < v98 )
        {
          v99 = v97;
          *(_DWORD *)&PoolWithTag[v99 * 4] = v174;
          v44[v99] = v26;
          ++v97;
        }
        v39 = a8;
        v48 = v153;
        goto LABEL_71;
      }
      SeUnlockSubjectContext(&SubjectContext);
      v26 = -1073741670;
      v19 = v170;
      v21 = v154;
      v20 = (char *)v167;
      goto LABEL_208;
    }
LABEL_206:
    v170 = &v174;
    v44 = &v166;
    goto LABEL_71;
  }
  IsOwner = SepTokenIsOwner((__int64)ClientToken, v28);
  v156 = IsOwner;
  v28 = v168;
  if ( !SepRmEnforceCap )
    goto LABEL_56;
  v100 = *(_WORD *)(v168 + 2);
  if ( (v100 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_56;
  if ( v100 >= 0 )
  {
    v102 = *(ACL **)(v168 + 24);
  }
  else
  {
    v101 = *(unsigned int *)(v168 + 12);
    if ( !(_DWORD)v101 )
    {
      v189 = 0LL;
      IsOwner = v156;
      goto LABEL_56;
    }
    v102 = (ACL *)(v168 + v101);
  }
  v189 = v102;
  if ( v102 )
  {
    ScopedPolicySid = SepGetScopedPolicySid(v102);
    if ( ScopedPolicySid )
    {
      Cap = SepRmReferenceFindCap(ScopedPolicySid, (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)&v196, v104, v105);
      v107 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)v196;
      if ( Cap < 0 )
        v107 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)SepRmDefaultCap;
      v196 = (__int64)v107;
      v26 = 0;
      v161 = 0;
      v154 = 1;
      IsOwner = v156;
      goto LABEL_57;
    }
  }
  IsOwner = v156;
LABEL_56:
  v26 = v161;
LABEL_57:
  v39 = a8;
  if ( (a8 & 0x2060000) != 0
    && IsOwner
    && ((v72 = *(_WORD *)(v28 + 2), (v72 & 4) == 0)
      ? (v74 = 0LL)
      : (v72 & 0x8000) == 0
      ? (v74 = *(ACL **)(v28 + 32))
      : (v73 = *(unsigned int *)(v28 + 16), !(_DWORD)v73)
      ? (v74 = 0LL)
      : (v74 = (ACL *)(v28 + v73)),
        !RtlOwnerAcesPresent(v74)) )
  {
    if ( (v39 & 0x2000000) != 0 )
      v75 = 393216;
    else
      v75 = v39 & 0x60000;
    v42 = v75 | v169;
    v169 |= v75;
    v181 = v75;
    v39 &= 0xFFF9FFFF;
    a8 = v39;
  }
  else
  {
    v42 = v169;
  }
  a9 = v42;
  if ( !v39 && (!v154 || (_BYTE)v177) && ((*((_DWORD *)ClientToken + 50) & 0x2000) != 0 || !v181) )
  {
    v174 = v42;
    if ( v42 )
    {
      v46 = 1;
      v48 = 0;
      v166 = 0;
    }
    else
    {
      v46 = 0;
      v48 = 1;
      v166 = -1073741790;
    }
    v153 = v48;
    v155 = v46;
    if ( !a17 )
      goto LABEL_206;
    v108 = a12;
    v109 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
    v170 = v109;
    if ( v109 )
    {
      v162 = 1;
      v44 = (int *)&v109[4 * v108];
      v110 = 0;
      v111 = a12;
      while ( v110 < v111 )
      {
        v112 = v110;
        *(_DWORD *)&v109[v112 * 4] = v174;
        v44[v112] = v166;
        ++v110;
      }
      v46 = v155;
      v48 = v153;
      goto LABEL_71;
    }
    v26 = -1073741670;
    SeUnlockSubjectContext(&SubjectContext);
    v19 = v170;
    v21 = v154;
    v20 = (char *)v167;
LABEL_208:
    v37 = PreviousMode;
    goto LABEL_113;
  }
  if ( a17 )
  {
    v71 = a12;
    v43 = ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
    v19 = v43;
    v170 = v43;
    if ( !v43 )
    {
      v26 = -1073741670;
      SeUnlockSubjectContext(&SubjectContext);
      v21 = v154;
      v20 = (char *)v167;
      goto LABEL_208;
    }
    v162 = 1;
    v44 = &v43[v71];
  }
  else
  {
    v43 = &v174;
    v170 = &v174;
    v44 = &v166;
  }
  v200 = v181;
  v45 = a12;
  SepAccessCheck(
    v28,
    v190,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)ClientToken,
    v39,
    v185,
    a12,
    &v210,
    v42,
    PreviousMode,
    v43,
    0LL,
    v44,
    a17,
    v156,
    &v200,
    (__int64)&v192,
    (char *)&v155,
    (char *)&v153);
  if ( !SepRmEnforceCap || *v44 < 0 || (v21 = v154) == 0 )
  {
    v39 = a8;
    v26 = v161;
    a9 = v169;
    v46 = v155;
    goto LABEL_64;
  }
  if ( a17 )
  {
    v113 = ExAllocatePoolWithTag(PagedPool, 8 * v45, 0x61476553u);
    v114 = v113;
    v167 = v113;
    if ( !v113 )
    {
      SeUnlockSubjectContext(&SubjectContext);
      SeReleaseSubjectContext(&SubjectContext);
      v26 = -1073741670;
      v19 = v170;
      v20 = (char *)v167;
      goto LABEL_374;
    }
    v115 = &v113[v45];
  }
  else
  {
    v114 = v211;
    v167 = v211;
    v115 = (int *)&v212;
  }
  v188 = v115;
  if ( a12 )
  {
    v26 = SepCopyObjectTypeList((__int64)v185, a12, &v199);
    if ( v26 < 0 )
    {
      v19 = v170;
      v20 = (char *)v167;
      goto LABEL_374;
    }
    v114 = v167;
  }
  else
  {
    v26 = v161;
  }
  LOBYTE(v28) = 0;
  v181 = v28;
  v116 = 0LL;
  v39 = a8;
  v117 = v169;
  a9 = v169;
  v118 = v177;
  while ( 1 )
  {
    v183 = v116;
    if ( (unsigned int)v116 >= *(_DWORD *)(v196 + 60) )
      break;
    v119 = *(_QWORD *)(v196 + 8 * v116 + 64);
    v204 = (PVOID)v119;
    if ( *(_QWORD *)(v119 + 24) )
    {
      if ( !v192 )
      {
        LODWORD(v28) = (unsigned __int8)v28;
        if ( (int)AuthzBasepInitializeResourceClaimsFromSacl((__int64)v189, (__int64)&v192) < 0 )
          LODWORD(v28) = 1;
        v181 = v28;
      }
      v120 = (_QWORD *)*((_QWORD *)ClientToken + 137);
      if ( v120 )
        v121 = v120[75];
      else
        v121 = 0LL;
      if ( v120 )
        v122 = v120[73];
      else
        v122 = 0LL;
      if ( v120 )
        v123 = v120[74];
      else
        v123 = 0LL;
      if ( v120 )
        v124 = v120[72];
      else
        v124 = 0LL;
      v125 = AuthzBasepEvaluateAceCondition(
               (__int64)ClientToken,
               *((_QWORD *)ClientToken + 97),
               v192,
               v124,
               v123,
               v122,
               v121,
               *(_DWORD **)(v119 + 24),
               *(_DWORD *)(v119 + 16),
               1,
               0,
               &v193);
      v26 = v125;
      v126 = v193;
      if ( v193 != 1 )
      {
        if ( v125 < 0 )
          goto LABEL_335;
        if ( SeTokenIsRestricted(ClientToken) )
        {
          v127 = (_QWORD *)*((_QWORD *)ClientToken + 137);
          if ( v127 )
            v128 = v127[75];
          else
            v128 = 0LL;
          if ( v127 )
            v129 = v127[73];
          else
            v129 = 0LL;
          if ( v127 )
            v130 = v127[74];
          else
            v130 = 0LL;
          if ( v127 )
            v131 = v127[72];
          else
            v131 = 0LL;
          v26 = AuthzBasepEvaluateAceCondition(
                  (__int64)ClientToken,
                  *((_QWORD *)ClientToken + 97),
                  v192,
                  v131,
                  v130,
                  v129,
                  v128,
                  *(_DWORD **)(v119 + 24),
                  *(_DWORD *)(v119 + 16),
                  1,
                  1,
                  &v193);
          if ( v26 < 0 )
          {
LABEL_335:
            v19 = v170;
            v21 = v154;
            v20 = (char *)v167;
            goto LABEL_374;
          }
          v126 = v193;
        }
        if ( !(_BYTE)v181 && v126 != 1 )
        {
          v118 = v177;
          v114 = v167;
          goto LABEL_334;
        }
      }
      v117 = a9;
    }
    if ( (*(_DWORD *)(v119 + 48) & 1) == 0 )
    {
      v132 = v117;
LABEL_326:
      v133 = v39;
      goto LABEL_327;
    }
    v132 = 0;
    if ( (v39 & 0x2000000) != 0 )
      goto LABEL_326;
    v133 = v39 | v117;
LABEL_327:
    v26 = SepBuildCapeSecurityDescriptor(SecurityDescriptor, *((unsigned __int8 **)v204 + 4), v189);
    if ( v26 < 0 )
      goto LABEL_335;
    v151 = v132;
    v134 = a12;
    SepAccessCheck(
      (__int64)SecurityDescriptor,
      v190,
      (__int64)SubjectContext.PrimaryToken,
      (__int64)SubjectContext.ClientToken,
      v133,
      v199,
      a12,
      &v210,
      v151,
      PreviousMode,
      v167,
      0LL,
      v188,
      a17,
      v156,
      &v200,
      (__int64)&v192,
      (char *)&v180,
      v172);
    v114 = v167;
    if ( v158 )
      v118 = *(_DWORD *)v167 & v177;
    else
      v118 = *(_DWORD *)v167;
    v177 = v118;
    if ( v199 )
    {
      SepMergeObjectTypeListAccesses((__int64)v185, (__int64)v199, v134);
      v118 = v177;
    }
    v158 = 1;
LABEL_334:
    v116 = (unsigned int)(v183 + 1);
    v117 = a9;
    LOBYTE(v28) = v181;
  }
  v46 = v180;
  v155 = v180;
  v153 = v172[0];
  *v114 &= v118;
  if ( !v118 )
  {
    *v188 = -1073741790;
    v46 = 0;
    v155 = 0;
    v153 = 1;
  }
LABEL_64:
  if ( (v39 & 0x2000000) != 0 )
  {
    if ( !(_BYTE)v182 || !*(_WORD *)((char *)&v202 + 5) )
    {
      v90 = 0;
      if ( a17 )
        v90 = a12;
      SepConstrainByMandatory((__int64)&v205, v39, (char *)v170, (char *)v44, 0LL, v90);
    }
    goto LABEL_66;
  }
  if ( !(_BYTE)v182 || BYTE6(v202) )
  {
LABEL_66:
    v47 = a17;
LABEL_67:
    v48 = v153;
LABEL_68:
    v49 = (char *)v170;
    goto LABEL_69;
  }
  v47 = a17;
  if ( BYTE5(v202) )
    goto LABEL_67;
  v46 = 0;
  v155 = 0;
  v48 = 1;
  v153 = 1;
  v135 = 0;
  v174 = 0;
  v166 = -1073741790;
  if ( !a17 )
    goto LABEL_68;
  v136 = 0;
  v49 = (char *)v170;
  v137 = a12;
  while ( v136 < v137 )
  {
    v138 = v136;
    *(_DWORD *)&v49[v138 * 4] = v135;
    v44[v138] = v166;
    ++v136;
    v135 = v174;
  }
  v48 = v153;
  v47 = a17;
LABEL_69:
  if ( (v39 & 0x2000000) != 0 )
  {
    v91 = 0;
    if ( v47 )
      v91 = a12;
    SepConstrainByTrust(&v194, v39, v49, (char *)v44, 0LL, v91, &v164);
    v48 = v153;
  }
  v28 = v168;
LABEL_71:
  if ( ClientToken
    && (v164 || !(_DWORD)v202 && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 && v26 >= 0 && (v166 < 0 || HIBYTE(v202))) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
    v140 = v166 >= 0;
    v141 = a8 | v169;
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)&SubjectContext);
    SeLogAccessFailure((__int64)ClientToken, v143, v144, TokenTrustLevel, v168, v141, v140);
    ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
    v145 = KeGetCurrentThread();
    v146 = v145->KernelApcDisable + 1;
    v145->KernelApcDisable = v146;
    if ( !v146
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v145->ApcState.ApcListHead[0].Flink != &v145->152
      && !v145->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v48 = v153;
    v46 = v155;
    a9 = v169;
    v28 = v168;
    v39 = a8;
  }
  if ( v176 )
    goto LABEL_87;
  if ( v184 == 2 )
  {
    if ( v46 )
    {
      LOBYTE(HandleInformation) = 0;
      v160 = SepAdtAuditObjectAccessWithContext(0LL, v187, v46, 0LL, &SubjectContext, HandleInformation, v171);
      v48 = v153;
    }
    if ( !v48 )
      goto LABEL_80;
    LOBYTE(HandleInformation) = 0;
    v50 = SepAdtAuditObjectAccessWithContext(0LL, v187, 0LL, v48, &SubjectContext, HandleInformation, v171);
    v159 = v50;
  }
  else
  {
    if ( v46 )
    {
      v171[0] = 150;
      v160 = SepAdtAuditThisEventWithContext(150LL, v46, 0, (__int64)&SubjectContext);
    }
    if ( v153 )
    {
      v171[0] = 150;
      v50 = SepAdtAuditThisEventWithContext(150LL, 0, v153, (__int64)&SubjectContext);
      v159 = v50;
    }
    else
    {
LABEL_80:
      v50 = v159;
    }
  }
  v51 = v160;
  if ( v160 || v50 )
  {
    PrimaryToken = (int)SubjectContext.ClientToken;
    if ( !SubjectContext.ClientToken )
      PrimaryToken = (int)SubjectContext.PrimaryToken;
    v77 = *(_WORD *)(v28 + 2);
    if ( (v77 & 0x10) != 0 )
    {
      if ( v77 < 0 )
      {
        v78 = *(_DWORD *)(v28 + 12);
        if ( v78 )
          LODWORD(v79) = v28 + v78;
        else
          LODWORD(v79) = 0;
      }
      else
      {
        v79 = *(_QWORD *)(v28 + 24);
      }
    }
    else
    {
      LODWORD(v79) = 0;
    }
    if ( (v77 & 0x10) != 0 )
    {
      if ( v77 < 0 )
      {
        v80 = *(_DWORD *)(v28 + 12);
        if ( v80 )
          LODWORD(v81) = v28 + v80;
        else
          LODWORD(v81) = 0;
      }
      else
      {
        v81 = *(_QWORD *)(v28 + 24);
      }
    }
    else
    {
      LODWORD(v81) = 0;
    }
    v82 = v39 | a9;
    v52 = v170;
    v53 = a12;
    SepExamineSaclEx(
      v81,
      v79,
      PrimaryToken,
      v82,
      (__int64)v185,
      a12,
      a17,
      (__int64)v44,
      (__int64)v170,
      v190,
      v156,
      (__int64)v165,
      (__int64)&v163);
    v83 = (int)SubjectContext.ClientToken;
    if ( !SubjectContext.ClientToken )
      v83 = (int)SubjectContext.PrimaryToken;
    v84 = *(_WORD *)(v28 + 2);
    if ( (v84 & 0x10) != 0 )
    {
      if ( v84 >= 0 )
      {
        v86 = *(_QWORD *)(v28 + 24);
      }
      else
      {
        v85 = *(_DWORD *)(v28 + 12);
        if ( v85 )
          LODWORD(v86) = v28 + v85;
        else
          LODWORD(v86) = 0;
      }
    }
    else
    {
      LODWORD(v86) = 0;
    }
    SepExamineGlobalSaclEx(
      (__int64)v187,
      v86,
      v83,
      v82,
      (__int64)v185,
      v53,
      a17,
      (__int64)v44,
      (__int64)v52,
      v190,
      v156,
      v165,
      &v163);
    v51 = v160;
  }
  else
  {
    v52 = v170;
    v53 = a12;
  }
  if ( !v165[0] && !v163 )
  {
    if ( v195 && v46 )
    {
      SepAdtPrivilegeObjectAuditAlarm(
        (unsigned __int16 *)P,
        (unsigned __int16 *)v187,
        (unsigned __int16 *)v197,
        (__int64)&v214,
        (__int64)SubjectContext.ClientToken,
        (__int64)SubjectContext.PrimaryToken,
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink,
        a8,
        (unsigned int *)v195,
        v155);
      v54 = 0;
      v28 = v168;
LABEL_88:
      v55 = a17;
LABEL_89:
      v56 = a12;
      goto LABEL_90;
    }
LABEL_87:
    v54 = v157;
    goto LABEL_88;
  }
  if ( v46 )
    v157 = 1;
  if ( v165[0] && v51 )
  {
    if ( a17 )
      v87 = (__int64)v52;
    else
      v87 = 0LL;
    if ( v46 )
      v88 = &v214;
    else
      LODWORD(v88) = 0;
    v89 = v184;
    v28 = v168;
    SepAdtOpenObjectAuditAlarm(
      v171[0],
      (_DWORD)P,
      (_DWORD)v88,
      (_DWORD)v187,
      (__int64)v197,
      v168,
      (__int64)SubjectContext.ClientToken,
      (__int64)SubjectContext.PrimaryToken,
      *v52,
      *v52,
      (__int64)v195,
      1,
      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink,
      v184,
      (__int64)v185,
      v53,
      v87,
      0LL,
      0LL);
    v46 = v155;
  }
  else
  {
    v89 = v184;
  }
  if ( !v163 )
    goto LABEL_87;
  v55 = a17;
  if ( !v159 )
  {
    v54 = v157;
    goto LABEL_89;
  }
  v147 = 0LL;
  if ( a17 )
    v147 = (__int64)v52;
  v148 = &v214;
  if ( !v46 )
    LODWORD(v148) = 0;
  v56 = a12;
  v28 = v168;
  SepAdtOpenObjectAuditAlarm(
    v171[0],
    (_DWORD)P,
    (_DWORD)v148,
    (_DWORD)v187,
    (__int64)v197,
    v168,
    (__int64)SubjectContext.ClientToken,
    (__int64)SubjectContext.PrimaryToken,
    a8,
    a8,
    (__int64)v195,
    0,
    (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink,
    v89,
    (__int64)v185,
    a12,
    v147,
    0LL,
    0LL);
  v54 = v157;
LABEL_90:
  SeUnlockSubjectContext(&SubjectContext);
  if ( !v55 )
  {
    v64 = Address;
    *(_DWORD *)Address = v166;
    v65 = a14;
    *(_DWORD *)a14 = v174;
    if ( SepRmEnforceCap && v158 && v166 >= 0 )
    {
      *v64 = *v188;
      v20 = (char *)v167;
      *v65 &= *(_DWORD *)v167;
      v28 = v168;
      goto LABEL_112;
    }
    v28 = v168;
LABEL_98:
    v20 = (char *)v167;
    goto LABEL_112;
  }
  if ( !v44 )
  {
    v66 = 0;
    v67 = Address;
    v68 = a14;
    while ( 1 )
    {
      v191 = v66;
      if ( v66 >= v56 )
        break;
      v69 = 4LL * v66;
      *(_DWORD *)&v67[v69] = v166;
      *(_DWORD *)&v68[v69] = v174;
      if ( SepRmEnforceCap && v158 && v166 >= 0 )
      {
        *(_DWORD *)&v67[v69] = v166;
        *(_DWORD *)&v68[v69] &= v174;
      }
      ++v66;
      v28 = v168;
    }
    goto LABEL_98;
  }
  v57 = 0;
  v58 = (char *)v170;
  v59 = v188;
  v60 = v158;
  v20 = (char *)v167;
  while ( 1 )
  {
    v191 = v57;
    if ( v57 >= v56 )
      break;
    v61 = 4LL * v57;
    v62 = Address;
    *(_DWORD *)&Address[v61] = v44[(unsigned __int64)v61 / 4];
    v63 = a14;
    *(_DWORD *)&a14[v61] = *(_DWORD *)&v58[v61];
    if ( SepRmEnforceCap && v60 && v44[(unsigned __int64)v61 / 4] >= 0 )
    {
      *(_DWORD *)&v62[v61] = v59[(unsigned __int64)v61 / 4];
      *(_DWORD *)&v63[v61] &= *(_DWORD *)&v20[v61];
    }
    ++v57;
    v28 = v168;
  }
LABEL_112:
  *a16 = v54;
  v26 = 0;
  v161 = 0;
  v19 = v170;
  v37 = PreviousMode;
  v21 = v154;
LABEL_113:
  if ( v173 )
  {
    ObfDereferenceObject(v203);
    SubjectContext.ClientToken = v209;
  }
  if ( v195 )
    ExFreePoolWithTag(v195, 0);
  SeReleaseSubjectContext(&SubjectContext);
  SeReleaseSecurityDescriptor((void *)v28, v37, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v187 )
    ExFreePoolWithTag(v187, 0);
  if ( v197 )
    ExFreePoolWithTag(v197, 0);
  if ( v190 )
    SeReleaseSid((void *)v190, v37, 1);
  if ( v185 )
    SeFreeCapturedObjectTypeList(v185);
  if ( v162 )
  {
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
  }
  if ( v21 )
    SepRmDereferenceCap(v196);
  if ( v199 )
    ExFreePoolWithTag(v199, 0);
  SepFreeResourceInfo(v192);
  if ( v26 == -1073741670 || v179 )
    SepAuditFailed((unsigned int)v26);
  return (unsigned int)v26;
}
