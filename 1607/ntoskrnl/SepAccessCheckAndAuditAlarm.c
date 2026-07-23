/*
 * XREFs of SepAccessCheckAndAuditAlarm @ 0x1404A1110
 * Callers:
 *     NtAccessCheckAndAuditAlarm @ 0x1404A0FDC (NtAccessCheckAndAuditAlarm.c)
 *     NtAccessCheckByTypeAndAuditAlarm @ 0x1404A1060 (NtAccessCheckByTypeAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarm @ 0x1406912D8 (NtAccessCheckByTypeResultListAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x140691380 (NtAccessCheckByTypeResultListAndAuditAlarmByHandle.c)
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x140012AA0 (SepLocateTokenTrustLevel.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     SeCaptureObjectTypeList @ 0x140060ACC (SeCaptureObjectTypeList.c)
 *     SepTokenIsOwner @ 0x140060CE0 (SepTokenIsOwner.c)
 *     SeLogAccessFailure @ 0x140061150 (SeLogAccessFailure.c)
 *     SepMandatoryIntegrityCheck @ 0x1400631D0 (SepMandatoryIntegrityCheck.c)
 *     SepAccessCheck @ 0x140063630 (SepAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     SeTokenIsRestricted @ 0x14007F7C0 (SeTokenIsRestricted.c)
 *     SepFreeResourceInfo @ 0x14008D00C (SepFreeResourceInfo.c)
 *     SePrivilegePolicyCheck @ 0x14008D030 (SePrivilegePolicyCheck.c)
 *     SepMandatoryToDiscretionary @ 0x14008D12C (SepMandatoryToDiscretionary.c)
 *     SepTrustToDiscretionary @ 0x14008D14C (SepTrustToDiscretionary.c)
 *     SepTrustLevelCheck @ 0x14008D160 (SepTrustLevelCheck.c)
 *     RtlOwnerAcesPresent @ 0x14008D260 (RtlOwnerAcesPresent.c)
 *     SepConstrainByTrust @ 0x14008D36C (SepConstrainByTrust.c)
 *     SepConstrainByMandatory @ 0x14008D3A8 (SepConstrainByMandatory.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400AAE9C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SeFreeCapturedObjectTypeList @ 0x1402197D4 (SeFreeCapturedObjectTypeList.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402198D0 (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x140219970 (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x140219A24 (SepGetScopedPolicySid.c)
 *     SepMergeObjectTypeListAccesses @ 0x140219A64 (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCap @ 0x140219A90 (SepRmDereferenceCap.c)
 *     SepExamineGlobalSaclEx @ 0x14021A144 (SepExamineGlobalSaclEx.c)
 *     SepRmReferenceFindCap @ 0x14021B49C (SepRmReferenceFindCap.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140413A18 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x140413C10 (SepAdtAuditThisEventWithContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     SeCaptureSecurityDescriptor @ 0x14041FD80 (SeCaptureSecurityDescriptor.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     SeReleaseSecurityDescriptor @ 0x14044CA54 (SeReleaseSecurityDescriptor.c)
 *     SeLockSubjectContext @ 0x14044CA80 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14044CAE0 (SeUnlockSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     SeCaptureSid @ 0x14047807C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140478424 (SeReleaseSid.c)
 *     SepProbeAndCaptureString_U @ 0x1404A2118 (SepProbeAndCaptureString_U.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1404A2230 (SepAdtAuditObjectAccessWithContext.c)
 *     SeCheckAuditPrivilege @ 0x1404A23B0 (SeCheckAuditPrivilege.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F610 (SepAdtOpenObjectAuditAlarm.c)
 *     SepExamineSaclEx @ 0x140691E34 (SepExamineSaclEx.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepAccessCheckAndAuditAlarm(
        __int64 a1,
        __int64 a2,
        void **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _BYTE *Src,
        unsigned int a8,
        int a9,
        char a10,
        unsigned __int64 a11,
        unsigned int a12,
        __int64 a13,
        unsigned int *a14,
        int *Address,
        _BYTE *a16,
        char a17)
{
  char *v20; // r15
  KPROCESSOR_MODE PreviousMode; // r14
  PACCESS_TOKEN ClientToken; // r15
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edi
  SIZE_T v26; // rdi
  unsigned __int8 v27; // si
  unsigned int *v28; // rsi
  __int16 v29; // cx
  __int64 v30; // rax
  char *v31; // rax
  __int64 v32; // rax
  char *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  char v37; // r12
  __int64 v38; // rcx
  int v39; // r14d
  int v40; // eax
  char v41; // r12
  unsigned int v42; // r13d
  char IsOwner; // al
  char v44; // al
  unsigned int *v45; // rcx
  char *v46; // rdi
  __int64 v47; // r12
  unsigned __int8 v48; // r12
  char *v49; // r9
  char *v50; // r10
  char v51; // al
  int v52; // edi
  char v53; // dl
  char v54; // r8
  int *v55; // r15
  int v56; // r14d
  char v57; // r13
  char v58; // di
  int *v59; // rcx
  unsigned int *v60; // rdx
  char *v61; // r12
  char *v62; // r8
  char v63; // r11
  unsigned int v64; // edx
  int *v65; // r8
  unsigned int *v66; // r9
  __int64 v67; // rcx
  unsigned int v68; // ecx
  int *v69; // r9
  unsigned int *v70; // r10
  unsigned __int64 v71; // rdx
  char v72; // r13
  __int16 v74; // ax
  __int64 v75; // rax
  ACL *v76; // rcx
  int v77; // eax
  unsigned int v78; // eax
  unsigned int v79; // eax
  struct _KTHREAD *CurrentThread; // rax
  char v81; // si
  char v82; // di
  ULONGLONG TokenTrustLevel; // rax
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  void *v89; // rcx
  int v90; // ecx
  char *PoolWithTag; // r10
  unsigned int v92; // r14d
  char *v93; // r8
  unsigned int i; // edx
  __int64 v95; // rcx
  __int16 v96; // dx
  __int64 v97; // rax
  ACL *v98; // rax
  _BYTE *ScopedPolicySid; // rax
  int Cap; // eax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v101; // rdx
  char *v102; // r10
  unsigned int v103; // r12d
  char *v104; // r8
  unsigned int j; // edx
  __int64 v106; // rcx
  __int64 v107; // rdi
  unsigned int *v108; // rax
  _DWORD *v109; // rax
  _DWORD *v110; // r9
  int *v111; // r8
  unsigned int v112; // eax
  int v113; // edx
  __int64 v114; // r12
  _QWORD *v115; // rax
  __int64 v116; // r8
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r9
  int v120; // eax
  int v121; // esi
  _QWORD *v122; // rax
  __int64 v123; // r8
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r9
  unsigned int v127; // r12d
  unsigned int v128; // esi
  unsigned int v129; // r12d
  unsigned int v130; // r8d
  unsigned int v131; // edx
  unsigned int v132; // r12d
  __int64 v133; // rcx
  int PrimaryToken; // r10d
  __int16 v135; // cx
  __int64 v136; // rdx
  unsigned int v137; // eax
  __int64 v138; // rcx
  unsigned int v139; // eax
  int v140; // r13d
  char *v141; // rdi
  char v142; // r14
  int v143; // r8d
  __int16 v144; // ax
  __int64 v145; // rdx
  unsigned int v146; // eax
  int v147; // r9d
  __int64 v148; // r8
  __int64 *v149; // r10
  __int64 v150; // rdx
  __int64 *v151; // r8
  int Object; // [rsp+20h] [rbp-248h]
  int HandleInformation; // [rsp+28h] [rbp-240h]
  char v154; // [rsp+30h] [rbp-238h]
  unsigned int v155; // [rsp+40h] [rbp-228h]
  char v156; // [rsp+48h] [rbp-220h]
  char v157; // [rsp+A0h] [rbp-1C8h]
  char v158; // [rsp+A1h] [rbp-1C7h]
  unsigned __int8 v159; // [rsp+A2h] [rbp-1C6h] BYREF
  char v160; // [rsp+A3h] [rbp-1C5h]
  unsigned __int8 v161; // [rsp+A4h] [rbp-1C4h] BYREF
  char v162; // [rsp+A5h] [rbp-1C3h]
  char v163; // [rsp+A6h] [rbp-1C2h]
  char v164; // [rsp+A7h] [rbp-1C1h]
  char v165; // [rsp+A8h] [rbp-1C0h]
  int v166; // [rsp+ACh] [rbp-1BCh]
  PVOID v167; // [rsp+B0h] [rbp-1B8h]
  char v168; // [rsp+B8h] [rbp-1B0h] BYREF
  char v169; // [rsp+B9h] [rbp-1AFh]
  PVOID v170; // [rsp+C0h] [rbp-1A8h]
  char v171; // [rsp+C8h] [rbp-1A0h] BYREF
  _BYTE v172[3]; // [rsp+C9h] [rbp-19Fh] BYREF
  int v173; // [rsp+CCh] [rbp-19Ch] BYREF
  PVOID v174; // [rsp+D0h] [rbp-198h] BYREF
  unsigned int v175; // [rsp+D8h] [rbp-190h] BYREF
  _WORD v176[2]; // [rsp+DCh] [rbp-18Ch] BYREF
  char v177; // [rsp+E0h] [rbp-188h]
  char v178; // [rsp+E6h] [rbp-182h]
  unsigned __int8 v179; // [rsp+E7h] [rbp-181h] BYREF
  unsigned __int8 v180; // [rsp+E8h] [rbp-180h] BYREF
  char v181; // [rsp+E9h] [rbp-17Fh]
  char v182; // [rsp+EAh] [rbp-17Eh]
  unsigned int v183; // [rsp+ECh] [rbp-17Ch] BYREF
  char v184; // [rsp+F0h] [rbp-178h]
  int v185; // [rsp+F4h] [rbp-174h]
  int v186; // [rsp+F8h] [rbp-170h]
  char *v187; // [rsp+100h] [rbp-168h]
  int v188; // [rsp+108h] [rbp-160h]
  int v189; // [rsp+10Ch] [rbp-15Ch]
  unsigned int v190; // [rsp+110h] [rbp-158h]
  __int64 v191; // [rsp+118h] [rbp-150h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+120h] [rbp-148h] BYREF
  int *v193; // [rsp+140h] [rbp-128h]
  PVOID v194; // [rsp+148h] [rbp-120h] BYREF
  int v195; // [rsp+150h] [rbp-118h] BYREF
  int v196; // [rsp+154h] [rbp-114h] BYREF
  unsigned int v197; // [rsp+158h] [rbp-110h]
  ACL *v198; // [rsp+160h] [rbp-108h]
  __int64 v199; // [rsp+168h] [rbp-100h] BYREF
  void *v200; // [rsp+170h] [rbp-F8h] BYREF
  PVOID v201; // [rsp+178h] [rbp-F0h] BYREF
  __int64 v202; // [rsp+180h] [rbp-E8h] BYREF
  PVOID P; // [rsp+188h] [rbp-E0h] BYREF
  PVOID v204; // [rsp+190h] [rbp-D8h] BYREF
  PVOID v205; // [rsp+198h] [rbp-D0h] BYREF
  int v206; // [rsp+1A0h] [rbp-C8h] BYREF
  __int64 v207; // [rsp+1A4h] [rbp-C4h]
  __int64 v208; // [rsp+1ACh] [rbp-BCh]
  PVOID v209; // [rsp+1B8h] [rbp-B0h]
  PVOID v210; // [rsp+1C0h] [rbp-A8h] BYREF
  int v211; // [rsp+1C8h] [rbp-A0h] BYREF
  __int64 v212; // [rsp+1CCh] [rbp-9Ch]
  unsigned int v213; // [rsp+1D4h] [rbp-94h]
  PACCESS_TOKEN v214; // [rsp+1E0h] [rbp-88h]
  void *v215; // [rsp+1E8h] [rbp-80h]
  _BYTE v216[4]; // [rsp+1F0h] [rbp-78h] BYREF
  char v217; // [rsp+1F4h] [rbp-74h] BYREF
  __int128 v218; // [rsp+1F8h] [rbp-70h] BYREF
  _BYTE SecurityDescriptor[96]; // [rsp+208h] [rbp-60h] BYREF
  __int64 v220; // [rsp+278h] [rbp+10h] BYREF
  void **v221; // [rsp+280h] [rbp+18h]
  __int64 v222; // [rsp+288h] [rbp+20h]

  v222 = a4;
  v221 = a3;
  v220 = a2;
  v166 = 0;
  v183 = 0;
  v20 = 0LL;
  v167 = 0LL;
  v169 = 0;
  v173 = -1073741823;
  v170 = 0LL;
  v193 = 0LL;
  v186 = 0;
  v177 = 0;
  P = 0LL;
  v194 = 0LL;
  v204 = 0LL;
  v174 = 0LL;
  v199 = 0LL;
  v191 = 0LL;
  v175 = 0;
  v201 = 0LL;
  v172[0] = 0;
  v168 = 0;
  v181 = 0;
  v165 = 0;
  v162 = 0;
  v179 = 1;
  v180 = 0;
  v209 = 0LL;
  v215 = 0LL;
  v182 = 0;
  v211 = 0;
  v212 = 0LL;
  v213 = 0;
  v198 = 0LL;
  memset(SecurityDescriptor, 0, 0x28uLL);
  v202 = 0LL;
  v158 = 0;
  v164 = 0;
  v160 = 0;
  v184 = 0;
  v176[0] = 999;
  v206 = 0;
  v207 = 0LL;
  v208 = 0LL;
  v163 = 0;
  v188 = 0;
  v200 = 0LL;
  v185 = 0;
  v178 = 0;
  v171 = 0;
  v205 = 0LL;
  v196 = -1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v157 = PreviousMode;
  v172[1] = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( a9 )
  {
    if ( a9 != 1 )
    {
      v25 = -1073741811;
      goto LABEL_360;
    }
    v189 = 7;
  }
  else
  {
    v189 = 2;
  }
  ClientToken = SubjectContext.ClientToken;
  if ( a3 )
    goto LABEL_6;
  if ( !SubjectContext.ClientToken )
  {
    v25 = -1073741732;
    v20 = 0LL;
LABEL_360:
    v72 = 0;
    v61 = 0LL;
    goto LABEL_361;
  }
  if ( SubjectContext.ImpersonationLevel < SecurityIdentification )
  {
    v25 = -1073741659;
    v20 = 0LL;
    goto LABEL_360;
  }
LABEL_6:
  if ( a17 )
  {
    if ( !a12 || a12 > 0x1000 )
    {
      v25 = -1073741811;
      v166 = -1073741811;
      goto LABEL_19;
    }
    v26 = 4LL * a12;
    ProbeForWrite(Address, v26, 4u);
    ProbeForWrite(a14, v26, 4u);
  }
  else
  {
    v23 = (__int64)Address;
    if ( (unsigned __int64)Address >= 0x7FFFFFFF0000LL )
      v23 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v23 = *(_DWORD *)v23;
    v24 = (__int64)a14;
    if ( (unsigned __int64)a14 >= 0x7FFFFFFF0000LL )
      v24 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v24 = *(_DWORD *)v24;
  }
  if ( (a13 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v218 = *(_OWORD *)a13;
  v25 = v166;
  ClientToken = SubjectContext.ClientToken;
LABEL_19:
  if ( v25 < 0 )
    goto LABEL_178;
  if ( a3 )
  {
    v89 = *a3;
    v27 = PreviousMode;
    v25 = ObReferenceObjectByHandle(v89, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v210, 0LL);
    v209 = v210;
    if ( v25 < 0 )
    {
      v209 = 0LL;
      v28 = (unsigned int *)v174;
      v20 = (char *)v167;
      v72 = (char)v167;
      v61 = (char *)v167;
      if ( v25 != -1073741816 )
        v184 = 1;
      goto LABEL_110;
    }
    v215 = ClientToken;
    ClientToken = v210;
    SubjectContext.ClientToken = v210;
    v182 = 1;
  }
  else
  {
    v27 = PreviousMode;
  }
  if ( !ClientToken )
    ClientToken = SubjectContext.PrimaryToken;
  v214 = ClientToken;
  if ( !(unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v27) )
  {
    if ( (a10 & 1) != 0 )
    {
      v181 = 1;
      goto LABEL_25;
    }
    v25 = -1073741727;
LABEL_178:
    v20 = (char *)v167;
    v72 = (char)v167;
    v61 = (char *)v167;
LABEL_361:
    v28 = (unsigned int *)v174;
    goto LABEL_110;
  }
LABEL_25:
  if ( (a8 & 0xF0000000) != 0 )
  {
    v25 = -1073741594;
    v20 = (char *)v167;
    v72 = (char)v167;
    v61 = (char *)v167;
    goto LABEL_361;
  }
  v25 = SeCaptureSecurityDescriptor(a6, v27, PagedPool, 0, &v174);
  v166 = v25;
  if ( v25 < 0 )
  {
    v28 = 0LL;
    goto LABEL_181;
  }
  v28 = (unsigned int *)v174;
  if ( !v174 )
    goto LABEL_183;
  v29 = *((_WORD *)v174 + 1) & 0x8000;
  if ( v29 )
  {
    v30 = *((unsigned int *)v174 + 1);
    if ( !(_DWORD)v30 )
      goto LABEL_183;
    v31 = (char *)v174 + v30;
  }
  else
  {
    v31 = (char *)*((_QWORD *)v174 + 1);
  }
  if ( !v31 )
    goto LABEL_183;
  if ( v29 )
  {
    v32 = *((unsigned int *)v174 + 2);
    if ( (_DWORD)v32 )
    {
      v33 = (char *)v174 + v32;
      goto LABEL_35;
    }
LABEL_183:
    v25 = -1073741703;
    v20 = (char *)v167;
    v72 = (char)v167;
    v61 = (char *)v167;
    goto LABEL_110;
  }
  v33 = (char *)*((_QWORD *)v174 + 2);
LABEL_35:
  if ( !v33 )
    goto LABEL_183;
  v34 = (__int64)a16;
  if ( (unsigned __int64)a16 >= 0x7FFFFFFF0000LL )
    v34 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v34 = *(_BYTE *)v34;
  v25 = SepProbeAndCaptureString_U(a1, &P);
  v166 = v25;
  if ( v25 >= 0 )
  {
    v25 = SepProbeAndCaptureString_U(a4, &v194);
    v166 = v25;
    if ( v25 >= 0 )
    {
      v25 = SepProbeAndCaptureString_U(a5, &v204);
      v166 = v25;
    }
  }
  v37 = v163;
  if ( v25 < 0 )
    goto LABEL_178;
  if ( Src )
  {
    v25 = SeCaptureSid(Src, PreviousMode, v35, v36, Object, 1, (PSID *)&v199);
    if ( v25 < 0 )
    {
      v199 = 0LL;
      v20 = (char *)v167;
      v72 = (char)v167;
      v61 = (char *)v167;
      goto LABEL_361;
    }
  }
  v25 = SeCaptureObjectTypeList(a11, a12, PreviousMode, &v191);
  if ( v25 < 0 )
    goto LABEL_178;
  v28 = (unsigned int *)v174;
  v25 = SepTrustLevelCheck(v38, (__int64)v174, &SubjectContext, 0LL, 0LL, 1, &v196);
  if ( v25 < 0 )
  {
LABEL_182:
    v20 = (char *)v167;
    v72 = (char)v167;
    v61 = (char *)v167;
    goto LABEL_110;
  }
  v39 = a8;
  v25 = SepTrustToDiscretionary(&v196, a8);
  v166 = v25;
  if ( v25 < 0 )
  {
    v171 = 1;
LABEL_194:
    v41 = v157;
    goto LABEL_51;
  }
  v25 = SepMandatoryIntegrityCheck(&v218, (__int64)v28, 0, (__int64)ClientToken, 1, (__int64)&v211);
  if ( v25 < 0 )
  {
LABEL_181:
    PreviousMode = v157;
    goto LABEL_182;
  }
  v40 = SepMandatoryToDiscretionary(&v211, v39);
  v25 = v40;
  v166 = v40;
  if ( (v40 < 0 || (v39 & 0x2000000) != 0) && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 && v213 <= 0x2000 )
  {
    v37 = 1;
    v163 = 1;
  }
  if ( v40 < 0 && !v37 )
    goto LABEL_194;
  v41 = v157;
  v25 = SePrivilegePolicyCheck(&a8, &v175, (__int64 *)&SubjectContext, 0LL, (__int64)&v201, v157);
  v166 = v25;
  v39 = a8;
  if ( a8 )
  {
LABEL_51:
    v42 = v175;
    goto LABEL_52;
  }
  v90 = (unsigned __int8)v185;
  v42 = v175;
  if ( v175 )
    v90 = 1;
  v185 = v90;
LABEL_52:
  SeLockSubjectContext(&SubjectContext);
  if ( v25 < 0 && !v163 )
  {
    v48 = 0;
    v159 = 0;
    v161 = 1;
    v173 = v25;
    if ( !a17 )
    {
      v167 = &v183;
      v187 = (char *)&v173;
      goto LABEL_68;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
    v167 = PoolWithTag;
    if ( PoolWithTag )
    {
      v169 = 1;
      v92 = a12;
      v93 = &PoolWithTag[4 * a12];
      v187 = v93;
      for ( i = 0; i < v92; ++i )
      {
        v95 = 4LL * i;
        *(_DWORD *)&PoolWithTag[v95] = v183;
        *(_DWORD *)&v93[v95] = v25;
      }
      v39 = a8;
      goto LABEL_68;
    }
    SeUnlockSubjectContext(&SubjectContext);
    v25 = -1073741670;
    goto LABEL_200;
  }
  IsOwner = SepTokenIsOwner((__int64)ClientToken);
  v160 = IsOwner;
  v28 = (unsigned int *)v174;
  if ( !SepRmEnforceCap )
    goto LABEL_54;
  v96 = *((_WORD *)v174 + 1);
  if ( (v96 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_54;
  if ( v96 >= 0 )
  {
    v98 = (ACL *)*((_QWORD *)v174 + 3);
  }
  else
  {
    v97 = *((unsigned int *)v174 + 3);
    if ( !(_DWORD)v97 )
    {
      v198 = 0LL;
      IsOwner = v160;
      goto LABEL_54;
    }
    v98 = (ACL *)((char *)v174 + v97);
  }
  v198 = v98;
  if ( v98 )
  {
    ScopedPolicySid = SepGetScopedPolicySid(v98);
    if ( ScopedPolicySid )
    {
      Cap = SepRmReferenceFindCap(ScopedPolicySid, (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)&v202);
      v101 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)v202;
      if ( Cap < 0 )
        v101 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)SepRmDefaultCap;
      v202 = (__int64)v101;
      v25 = 0;
      v166 = 0;
      v158 = 1;
      IsOwner = v160;
      goto LABEL_55;
    }
  }
  IsOwner = v160;
LABEL_54:
  v25 = v166;
LABEL_55:
  v39 = a8;
  if ( (a8 & 0x2060000) != 0
    && IsOwner
    && ((v74 = *((_WORD *)v28 + 1), (v74 & 4) == 0)
      ? (v76 = 0LL)
      : (v74 & 0x8000) == 0
      ? (v76 = (ACL *)*((_QWORD *)v28 + 4))
      : (v75 = v28[4], !(_DWORD)v75)
      ? (v76 = 0LL)
      : (v76 = (ACL *)((char *)v28 + v75)),
        !RtlOwnerAcesPresent(v76)) )
  {
    if ( (v39 & 0x2000000) != 0 )
      v77 = 393216;
    else
      v77 = v39 & 0x60000;
    v42 = v77 | v175;
    v175 |= v77;
    v188 = v77;
    v39 &= 0xFFF9FFFF;
    a8 = v39;
  }
  else
  {
    v42 = v175;
  }
  if ( !v39 && (!v158 || (_BYTE)v185) && ((*((_DWORD *)ClientToken + 50) & 0x2000) != 0 || !v188) )
  {
    v183 = v42;
    if ( v42 )
    {
      v48 = 1;
      v161 = 0;
      v173 = 0;
    }
    else
    {
      v48 = 0;
      v161 = 1;
      v173 = -1073741790;
    }
    v159 = v48;
    if ( !a17 )
    {
      v167 = &v183;
      v187 = (char *)&v173;
      goto LABEL_68;
    }
    v102 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
    v167 = v102;
    if ( v102 )
    {
      v169 = 1;
      v103 = a12;
      v104 = &v102[4 * a12];
      v187 = v104;
      for ( j = 0; j < v103; ++j )
      {
        v106 = 4LL * j;
        *(_DWORD *)&v102[v106] = v183;
        *(_DWORD *)&v104[v106] = v173;
      }
      v48 = v159;
      goto LABEL_68;
    }
    goto LABEL_199;
  }
  v44 = a17;
  if ( a17 )
  {
    v107 = a12;
    v108 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8LL * a12, 0x61476553u);
    v45 = v108;
    v167 = v108;
    if ( !v108 )
    {
LABEL_199:
      v25 = -1073741670;
      SeUnlockSubjectContext(&SubjectContext);
LABEL_200:
      PreviousMode = v157;
      v20 = (char *)v167;
      v72 = v158;
      v61 = (char *)v170;
      goto LABEL_110;
    }
    v169 = 1;
    v46 = (char *)&v108[v107];
    v44 = a17;
  }
  else
  {
    v45 = &v183;
    v167 = &v183;
    v46 = (char *)&v173;
  }
  v187 = v46;
  v206 = v188;
  v156 = v41;
  v47 = a12;
  SepAccessCheck(
    (__int64)v28,
    (unsigned __int8 *)v199,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)ClientToken,
    v39,
    (_QWORD *)v191,
    a12,
    &v218,
    v42,
    v156,
    v45,
    0LL,
    (int *)v46,
    v44,
    v160,
    &v206,
    &v200,
    (char *)&v159,
    (char *)&v161);
  if ( !SepRmEnforceCap || *(int *)v46 < 0 || (v72 = v158) == 0 )
  {
    v39 = a8;
    v25 = v166;
    v42 = v175;
    v48 = v159;
    goto LABEL_62;
  }
  if ( a17 )
  {
    v109 = ExAllocatePoolWithTag(PagedPool, 8 * v47, 0x61476553u);
    v110 = v109;
    v170 = v109;
    if ( !v109 )
    {
      SeUnlockSubjectContext(&SubjectContext);
      SeReleaseSubjectContext(&SubjectContext);
      v25 = -1073741670;
      PreviousMode = v157;
      v20 = (char *)v167;
      v61 = (char *)v170;
      goto LABEL_361;
    }
    v111 = &v109[v47];
  }
  else
  {
    v110 = v216;
    v170 = v216;
    v111 = (int *)&v217;
  }
  v193 = v111;
  if ( (_DWORD)v47 )
  {
    v25 = SepCopyObjectTypeList(v191, v47, &v205);
    if ( v25 < 0 )
    {
      PreviousMode = v157;
      v20 = (char *)v167;
      v61 = (char *)v170;
      goto LABEL_361;
    }
    v110 = v170;
  }
  else
  {
    v25 = v166;
  }
  LOBYTE(v28) = 0;
  v185 = (int)v28;
  v112 = 0;
  v39 = a8;
  v42 = v175;
  v113 = a9;
  while ( 1 )
  {
    v190 = v112;
    if ( v112 >= *(_DWORD *)(v202 + 60) )
      break;
    v114 = *(_QWORD *)(v202 + 8LL * v112 + 64);
    v210 = (PVOID)v114;
    if ( *(_QWORD *)(v114 + 24) )
    {
      if ( !v200 )
      {
        LODWORD(v28) = (unsigned __int8)v28;
        if ( (int)AuthzBasepInitializeResourceClaimsFromSacl((__int64)v198, (__int64)&v200) < 0 )
          LODWORD(v28) = 1;
        v185 = (int)v28;
      }
      v115 = (_QWORD *)*((_QWORD *)ClientToken + 137);
      v116 = v115 ? v115[75] : 0LL;
      v117 = v115 ? v115[73] : 0LL;
      v118 = v115 ? v115[74] : 0LL;
      v119 = v115 ? v115[72] : 0LL;
      v120 = AuthzBasepEvaluateAceCondition(
               (__int64)ClientToken,
               *((_QWORD *)ClientToken + 97),
               (__int64)v200,
               v119,
               v118,
               v117,
               v116,
               *(_DWORD **)(v114 + 24),
               *(_DWORD *)(v114 + 16),
               1,
               0,
               &v195);
      v25 = v120;
      v121 = v195;
      if ( v195 != 1 )
      {
        if ( v120 < 0 )
          goto LABEL_298;
        if ( SeTokenIsRestricted(ClientToken) )
        {
          v122 = (_QWORD *)*((_QWORD *)ClientToken + 137);
          if ( v122 )
            v123 = v122[75];
          else
            v123 = 0LL;
          if ( v122 )
            v124 = v122[73];
          else
            v124 = 0LL;
          if ( v122 )
            v125 = v122[74];
          else
            v125 = 0LL;
          if ( v122 )
            v126 = v122[72];
          else
            v126 = 0LL;
          v25 = AuthzBasepEvaluateAceCondition(
                  (__int64)ClientToken,
                  *((_QWORD *)ClientToken + 97),
                  (__int64)v200,
                  v126,
                  v125,
                  v124,
                  v123,
                  *(_DWORD **)(v114 + 24),
                  *(_DWORD *)(v114 + 16),
                  1,
                  1,
                  &v195);
          if ( v25 < 0 )
          {
LABEL_298:
            PreviousMode = v157;
            v20 = (char *)v167;
            v72 = v158;
            v61 = (char *)v170;
            goto LABEL_361;
          }
          v121 = v195;
        }
        if ( !(_BYTE)v185 && v121 != 1 )
        {
          v113 = a9;
          v110 = v170;
          goto LABEL_297;
        }
      }
    }
    if ( (*(_DWORD *)(v114 + 48) & 1) == 0 )
    {
      v127 = v42;
LABEL_289:
      v128 = v39;
      goto LABEL_290;
    }
    v127 = 0;
    if ( (v39 & 0x2000000) != 0 )
      goto LABEL_289;
    v128 = v39 | v42;
LABEL_290:
    v25 = SepBuildCapeSecurityDescriptor(SecurityDescriptor, *((unsigned __int8 **)v210 + 4), v198);
    if ( v25 < 0 )
      goto LABEL_298;
    v155 = v127;
    v129 = a12;
    SepAccessCheck(
      (__int64)SecurityDescriptor,
      (unsigned __int8 *)v199,
      (__int64)SubjectContext.PrimaryToken,
      (__int64)SubjectContext.ClientToken,
      v128,
      v205,
      a12,
      &v218,
      v155,
      v157,
      (unsigned int *)v170,
      0LL,
      v193,
      a17,
      v160,
      &v206,
      &v200,
      (char *)&v179,
      (char *)&v180);
    v110 = v170;
    if ( v164 )
      v113 = *(_DWORD *)v170 & a9;
    else
      v113 = *(_DWORD *)v170;
    a9 = v113;
    if ( v205 )
    {
      SepMergeObjectTypeListAccesses(v191, (__int64)v205, v129);
      v113 = a9;
      v110 = v170;
    }
    v164 = 1;
LABEL_297:
    v112 = v190 + 1;
    LOBYTE(v28) = v185;
  }
  v48 = v179;
  v159 = v179;
  v161 = v180;
  *v110 &= v113;
  if ( !v113 )
  {
    *v193 = -1073741790;
    v48 = 0;
    v159 = 0;
    v161 = 1;
  }
LABEL_62:
  if ( (v39 & 0x2000000) != 0 )
  {
    if ( !v163 || !*(_WORD *)((char *)&v208 + 5) )
    {
      if ( a17 )
        v78 = a12;
      else
        v78 = 0;
      SepConstrainByMandatory((__int64)&v211, v39, (char *)v167, v187, 0LL, v78);
    }
    goto LABEL_64;
  }
  if ( !v163 || BYTE6(v208) )
  {
LABEL_64:
    v49 = v187;
    v50 = (char *)v167;
    goto LABEL_65;
  }
  v51 = a17;
  v49 = v187;
  v50 = (char *)v167;
  if ( !BYTE5(v208) )
  {
    v48 = 0;
    v159 = 0;
    v161 = 1;
    v130 = 0;
    v183 = 0;
    v173 = -1073741790;
    if ( a17 )
    {
      v131 = 0;
      v132 = a12;
      while ( v131 < v132 )
      {
        v133 = 4LL * v131;
        *(_DWORD *)&v50[v133] = v130;
        *(_DWORD *)&v49[v133] = v173;
        ++v131;
        v130 = v183;
      }
      v48 = v159;
LABEL_65:
      v51 = a17;
    }
  }
  if ( (v39 & 0x2000000) != 0 )
  {
    if ( v51 )
      v79 = a12;
    else
      v79 = 0;
    SepConstrainByTrust(&v196, v39, v50, v49, 0LL, v79, &v171);
  }
  v28 = (unsigned int *)v174;
LABEL_68:
  if ( ClientToken
    && (v171 || !(_DWORD)v208 && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 && v25 >= 0 && (v173 < 0 || HIBYTE(v208))) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
    v81 = v173 >= 0;
    v82 = a8 | v175;
    TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)&SubjectContext);
    SeLogAccessFailure((__int64)ClientToken, v84, v85, TokenTrustLevel, (ULONGLONG)v174, v82, v81);
    ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v86, v87, v88);
    v39 = a8;
    v28 = (unsigned int *)v174;
    v42 = v175;
    v48 = v159;
  }
  if ( v181 )
    goto LABEL_84;
  v52 = v189;
  if ( v189 == 2 )
  {
    if ( v48 )
    {
      LOBYTE(HandleInformation) = 0;
      v165 = SepAdtAuditObjectAccessWithContext(0LL, v194, v48, 0LL, &SubjectContext, HandleInformation, v176);
    }
    if ( v161 )
    {
      LOBYTE(HandleInformation) = 0;
      v53 = SepAdtAuditObjectAccessWithContext(0LL, v194, 0LL, v161, &SubjectContext, HandleInformation, v176);
      v162 = v53;
    }
    else
    {
LABEL_77:
      v53 = v162;
    }
  }
  else
  {
    if ( v48 )
    {
      v176[0] = 152;
      v165 = SepAdtAuditThisEventWithContext(152LL, v48, 0, (__int64)&SubjectContext);
    }
    if ( !v161 )
    {
      v52 = v189;
      goto LABEL_77;
    }
    v176[0] = 152;
    v53 = SepAdtAuditThisEventWithContext(152LL, 0, v161, (__int64)&SubjectContext);
    v162 = v53;
    v52 = v189;
  }
  v54 = v165;
  if ( v165 || v53 )
  {
    PrimaryToken = (int)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = (int)SubjectContext.ClientToken;
    v135 = *((_WORD *)v28 + 1);
    if ( (v135 & 0x10) != 0 )
    {
      if ( v135 < 0 )
      {
        v137 = v28[3];
        if ( v137 )
          LODWORD(v136) = (_DWORD)v28 + v137;
        else
          LODWORD(v136) = 0;
      }
      else
      {
        v136 = *((_QWORD *)v28 + 3);
      }
    }
    else
    {
      LODWORD(v136) = 0;
    }
    if ( (v135 & 0x10) != 0 )
    {
      if ( v135 < 0 )
      {
        v139 = v28[3];
        if ( v139 )
          LODWORD(v138) = (_DWORD)v28 + v139;
        else
          LODWORD(v138) = 0;
      }
      else
      {
        v138 = *((_QWORD *)v28 + 3);
      }
    }
    else
    {
      LODWORD(v138) = 0;
    }
    v140 = v39 | v42;
    v141 = v187;
    v142 = a17;
    SepExamineSaclEx(
      v138,
      v136,
      PrimaryToken,
      v140,
      v191,
      a12,
      a17,
      (__int64)v187,
      (__int64)v167,
      v199,
      v160,
      (__int64)v172,
      (__int64)&v168);
    v143 = (int)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      v143 = (int)SubjectContext.ClientToken;
    v144 = *((_WORD *)v28 + 1);
    if ( (v144 & 0x10) != 0 )
    {
      if ( v144 < 0 )
      {
        v146 = v28[3];
        if ( v146 )
          LODWORD(v145) = (_DWORD)v28 + v146;
        else
          LODWORD(v145) = 0;
      }
      else
      {
        v145 = *((_QWORD *)v28 + 3);
      }
    }
    else
    {
      LODWORD(v145) = 0;
    }
    v55 = (int *)v167;
    v154 = v142;
    v56 = a12;
    SepExamineGlobalSaclEx(
      (__int64)v194,
      v145,
      v143,
      v140,
      v191,
      a12,
      v154,
      (__int64)v141,
      (__int64)v167,
      v199,
      v160,
      (__int64)v172,
      &v168);
    v54 = v165;
    v52 = v189;
    v53 = v162;
  }
  else
  {
    v55 = (int *)v167;
    v56 = a12;
  }
  if ( v172[0] || v168 )
  {
    v147 = (unsigned __int8)v186;
    if ( v48 )
      v147 = 1;
    v186 = v147;
    v57 = a17;
    if ( v172[0] && v54 )
    {
      v148 = 0LL;
      if ( a17 )
        v148 = (__int64)v55;
      v149 = &v220;
      if ( !v48 )
        LODWORD(v149) = 0;
      v28 = (unsigned int *)v174;
      SepAdtOpenObjectAuditAlarm(
        v176[0],
        (int)P,
        (int)v149,
        (int)v194,
        (__int64)v204,
        v174,
        (__int64)SubjectContext.ClientToken,
        (__int64)SubjectContext.PrimaryToken,
        *v55,
        *v55,
        (__int64)v201,
        1,
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink,
        v52,
        v191,
        v56,
        v148,
        0LL,
        0LL);
      v48 = v159;
      v53 = v162;
    }
    if ( v168 && v53 )
    {
      v150 = 0LL;
      if ( v57 )
        v150 = (__int64)v55;
      v151 = &v220;
      if ( !v48 )
        LODWORD(v151) = 0;
      v28 = (unsigned int *)v174;
      SepAdtOpenObjectAuditAlarm(
        v176[0],
        (int)P,
        (int)v151,
        (int)v194,
        (__int64)v204,
        v174,
        (__int64)SubjectContext.ClientToken,
        (__int64)SubjectContext.PrimaryToken,
        a8,
        a8,
        (__int64)v201,
        0,
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink,
        v52,
        v191,
        v56,
        v150,
        0LL,
        0LL);
    }
    goto LABEL_85;
  }
  if ( !v201 || !v48 )
  {
LABEL_84:
    v57 = a17;
LABEL_85:
    v58 = v186;
    goto LABEL_86;
  }
  SepAdtPrivilegeObjectAuditAlarm(
    (const int *)P,
    (unsigned __int16 *)v194,
    (unsigned __int16 *)v204,
    (__int64)&v220,
    (__int64)SubjectContext.ClientToken,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink,
    a8,
    (int *)v201,
    v159);
  v58 = 0;
  v28 = (unsigned int *)v174;
  v57 = a17;
LABEL_86:
  SeUnlockSubjectContext(&SubjectContext);
  if ( v57 )
  {
    v62 = v187;
    v197 = 0;
    v63 = v164;
    if ( v187 )
    {
      v68 = 0;
      v69 = Address;
      v20 = (char *)v167;
      v70 = a14;
      v61 = (char *)v170;
      while ( v68 < a12 )
      {
        v71 = v68;
        v69[v71] = *(_DWORD *)&v62[v71 * 4];
        v70[v71] = *(_DWORD *)&v20[v71 * 4];
        if ( SepRmEnforceCap && v63 && *(int *)&v62[v71 * 4] >= 0 )
        {
          v69[v71] = v193[v71];
          v70[v71] &= *(_DWORD *)&v61[v71 * 4];
        }
        v197 = ++v68;
        v28 = (unsigned int *)v174;
      }
      goto LABEL_109;
    }
    v64 = 0;
    v65 = Address;
    v66 = a14;
    while ( v64 < a12 )
    {
      v67 = v64;
      v65[v67] = v173;
      v66[v67] = v183;
      if ( SepRmEnforceCap && v63 && v173 >= 0 )
      {
        v65[v67] = v173;
        v66[v67] &= v183;
      }
      v197 = ++v64;
      v28 = (unsigned int *)v174;
    }
LABEL_89:
    v61 = (char *)v170;
    goto LABEL_90;
  }
  v59 = Address;
  *Address = v173;
  v60 = a14;
  *a14 = v183;
  if ( !SepRmEnforceCap || !v164 || v173 < 0 )
  {
    v28 = (unsigned int *)v174;
    goto LABEL_89;
  }
  *v59 = *v193;
  v61 = (char *)v170;
  *v60 &= *(_DWORD *)v170;
  v28 = (unsigned int *)v174;
LABEL_90:
  v20 = (char *)v167;
LABEL_109:
  *a16 = v58;
  v25 = 0;
  v166 = 0;
  PreviousMode = v157;
  v72 = v158;
LABEL_110:
  if ( v182 )
  {
    ObfDereferenceObject(v209);
    SubjectContext.ClientToken = v215;
  }
  if ( v201 )
    ExFreePoolWithTag(v201, 0);
  SeReleaseSubjectContext(&SubjectContext);
  SeReleaseSecurityDescriptor(v28, PreviousMode, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v194 )
    ExFreePoolWithTag(v194, 0);
  if ( v204 )
    ExFreePoolWithTag(v204, 0);
  if ( v199 )
    SeReleaseSid((void *)v199, PreviousMode, 1);
  if ( v191 )
    SeFreeCapturedObjectTypeList((void *)v191);
  if ( v169 )
  {
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    if ( v61 )
      ExFreePoolWithTag(v61, 0);
  }
  if ( v72 )
    SepRmDereferenceCap(v202);
  if ( v205 )
    ExFreePoolWithTag(v205, 0);
  SepFreeResourceInfo(v200);
  if ( v25 == -1073741670 || v184 )
    SepAuditFailed((unsigned int)v25);
  return (unsigned int)v25;
}
