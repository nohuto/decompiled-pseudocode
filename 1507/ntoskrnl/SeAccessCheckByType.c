/*
 * XREFs of SeAccessCheckByType @ 0x1400CD4D0
 * Callers:
 *     NtAccessCheck @ 0x14011985C (NtAccessCheck.c)
 *     NtAccessCheckByType @ 0x140123ECC (NtAccessCheckByType.c)
 *     NtAccessCheckByTypeResultList @ 0x14024F294 (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x140007C40 (SeTokenIsRestricted.c)
 *     RtlpOwnerAcesPresent @ 0x1400150CC (RtlpOwnerAcesPresent.c)
 *     SepReferenceTokenByHandle @ 0x140045160 (SepReferenceTokenByHandle.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400C92E0 (ExpReleaseResourceForThreadLite.c)
 *     SepAccessCheck @ 0x1400CB700 (SepAccessCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x1400CC5F0 (SepMandatoryIntegrityCheck.c)
 *     SepTokenIsOwner @ 0x1400CD420 (SepTokenIsOwner.c)
 *     SeCaptureObjectTypeList @ 0x1400CE500 (SeCaptureObjectTypeList.c)
 *     SepMandatoryToDiscretionary @ 0x1400CE714 (SepMandatoryToDiscretionary.c)
 *     SepTrustLevelCheck @ 0x1400CE734 (SepTrustLevelCheck.c)
 *     SePrivilegePolicyCheck @ 0x1400CE840 (SePrivilegePolicyCheck.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140109210 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepConstrainByTrust @ 0x14010D760 (SepConstrainByTrust.c)
 *     SepConstrainByMandatory @ 0x14010D79C (SepConstrainByMandatory.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14011C690 (AuthzBasepEvaluateAceCondition.c)
 *     SeLogAccessFailure @ 0x140124240 (SeLogAccessFailure.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14012A2E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SeFreeCapturedObjectTypeList @ 0x14015B31C (SeFreeCapturedObjectTypeList.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14024F4BC (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x14024F55C (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x14024F610 (SepGetScopedPolicySid.c)
 *     SepMergeObjectTypeListAccesses @ 0x14024F650 (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCap @ 0x14024F67C (SepRmDereferenceCap.c)
 *     SepRmReferenceFindCap @ 0x140250B38 (SepRmReferenceFindCap.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeCaptureSid @ 0x140470AC8 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140470E00 (SeReleaseSid.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8F88 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C9790 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeAccessCheckByType(
        int a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        _DWORD *Address,
        ULONG64 a9,
        unsigned int *a10,
        int *a11,
        char a12)
{
  char *v12; // r14
  unsigned __int8 v13; // r12
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  _DWORD *v16; // r13
  unsigned int *v17; // rcx
  SIZE_T v18; // rdi
  _DWORD *v19; // rcx
  _DWORD *v20; // r15
  __int64 result; // rax
  SIZE_T v22; // rdi
  unsigned int v23; // esi
  int v24; // edi
  char v25; // r14
  __int16 v26; // dx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // edx
  PVOID v33; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PVOID v35; // r14
  bool IsOwner; // cl
  __int64 v37; // r8
  _WORD *v38; // r15
  __int64 v39; // rsi
  unsigned int v40; // edi
  unsigned int v41; // r15d
  PERESOURCE *v42; // r13
  int v43; // eax
  _BYTE *v44; // rcx
  int *v45; // rsi
  char v46; // r15
  unsigned int *v47; // r13
  struct _KTHREAD *v48; // rcx
  __int16 v49; // ax
  unsigned int v50; // r14d
  int v51; // edi
  int v52; // eax
  int *v53; // rsi
  unsigned int *v54; // rcx
  __int64 v55; // rax
  unsigned int *v56; // rdx
  unsigned int v57; // r10d
  unsigned __int64 v58; // rcx
  PVOID v59; // rbx
  unsigned int v60; // eax
  unsigned int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rdx
  int v64; // eax
  unsigned int v65; // ecx
  unsigned int *v66; // rax
  unsigned int v67; // ecx
  unsigned int *v68; // rdx
  struct _KTHREAD *v69; // rcx
  __int16 v70; // ax
  struct _KTHREAD *v71; // rax
  PVOID v72; // rdi
  int v73; // edx
  int v74; // r8d
  __int64 v75; // r9
  struct _KTHREAD *v76; // rcx
  __int16 v77; // ax
  unsigned int v78; // ecx
  int *v79; // r9
  int v80; // eax
  int v81; // edx
  unsigned int v82; // ecx
  unsigned int v83; // eax
  __int64 v84; // rax
  unsigned int v85; // ecx
  unsigned int *v86; // r8
  struct _KTHREAD *v87; // rcx
  __int16 v88; // ax
  __int64 v89; // rdx
  __int64 v90; // rdx
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v93; // rdx
  __int64 v94; // rsi
  _BYTE *PoolWithTag; // rax
  struct _KTHREAD *v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rdi
  char *v99; // rax
  struct _KTHREAD *v100; // rdx
  __int64 v101; // rcx
  int v102; // r10d
  int v103; // edi
  __int64 i; // rax
  __int64 v105; // r13
  int v106; // r10d
  int v107; // eax
  int v108; // ecx
  _QWORD *v109; // rax
  __int64 v110; // r8
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r9
  int v114; // eax
  int v115; // edi
  _QWORD *v116; // rax
  __int64 v117; // r8
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r9
  unsigned int v121; // edx
  unsigned int v122; // ecx
  PVOID v123; // r13
  struct _KTHREAD *v124; // rcx
  __int16 v125; // ax
  __int16 v126; // ax
  int v127; // [rsp+20h] [rbp-208h]
  int v128; // [rsp+A0h] [rbp-188h]
  unsigned __int8 v129; // [rsp+A5h] [rbp-183h]
  char v130; // [rsp+A6h] [rbp-182h]
  char v131; // [rsp+A7h] [rbp-181h]
  char v132; // [rsp+A8h] [rbp-180h]
  char v133; // [rsp+A9h] [rbp-17Fh] BYREF
  char v134[6]; // [rsp+AAh] [rbp-17Eh] BYREF
  unsigned int *v135; // [rsp+B0h] [rbp-178h]
  int v136; // [rsp+B8h] [rbp-170h]
  unsigned int v137; // [rsp+BCh] [rbp-16Ch]
  PVOID Object; // [rsp+C0h] [rbp-168h] BYREF
  unsigned int v139; // [rsp+C8h] [rbp-160h] BYREF
  __int64 v140; // [rsp+D0h] [rbp-158h] BYREF
  int v141; // [rsp+D8h] [rbp-150h]
  char v142; // [rsp+DCh] [rbp-14Ch]
  PVOID Src; // [rsp+E0h] [rbp-148h] BYREF
  PVOID v144; // [rsp+E8h] [rbp-140h]
  PVOID P; // [rsp+F0h] [rbp-138h] BYREF
  unsigned int v146; // [rsp+F8h] [rbp-130h]
  int v147; // [rsp+FCh] [rbp-12Ch] BYREF
  char *v148; // [rsp+100h] [rbp-128h]
  int v149; // [rsp+108h] [rbp-120h] BYREF
  _WORD *v150; // [rsp+110h] [rbp-118h]
  __int64 v151; // [rsp+118h] [rbp-110h]
  __int64 v152; // [rsp+120h] [rbp-108h]
  __int64 v153; // [rsp+128h] [rbp-100h] BYREF
  _QWORD *v154; // [rsp+130h] [rbp-F8h] BYREF
  int v155; // [rsp+138h] [rbp-F0h] BYREF
  __int64 v156; // [rsp+13Ch] [rbp-ECh]
  __int64 v157; // [rsp+144h] [rbp-E4h]
  __int64 v158; // [rsp+150h] [rbp-D8h] BYREF
  PVOID v159; // [rsp+158h] [rbp-D0h] BYREF
  int v160; // [rsp+160h] [rbp-C8h] BYREF
  __int64 v161; // [rsp+164h] [rbp-C4h]
  unsigned int v162; // [rsp+16Ch] [rbp-BCh]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+170h] [rbp-B8h] BYREF
  char v164; // [rsp+190h] [rbp-98h] BYREF
  __int128 v165; // [rsp+198h] [rbp-90h] BYREF
  char v166; // [rsp+1B0h] [rbp-78h] BYREF
  _BYTE v167[4]; // [rsp+1B4h] [rbp-74h] BYREF
  char v168; // [rsp+1B8h] [rbp-70h] BYREF
  _BYTE SecurityDescriptor[96]; // [rsp+1C8h] [rbp-60h] BYREF
  int v170; // [rsp+230h] [rbp+8h]
  unsigned int v172; // [rsp+248h] [rbp+20h] BYREF

  v172 = a4;
  v170 = a1;
  v12 = (char *)a3;
  v135 = 0LL;
  v144 = 0LL;
  v148 = 0LL;
  Object = 0LL;
  v140 = 0LL;
  v153 = 0LL;
  v139 = 0;
  v136 = 0;
  v154 = 0LL;
  Src = 0LL;
  v146 = 0;
  v137 = 0;
  v160 = 0;
  v161 = 0LL;
  v162 = 0;
  v129 = 0;
  P = 0LL;
  v155 = 0;
  v156 = 0LL;
  v157 = 0LL;
  v151 = 0LL;
  memset(SecurityDescriptor, 0, 40);
  v152 = 0LL;
  v132 = 0;
  v131 = 0;
  LOBYTE(a1) = 0;
  v141 = a1;
  v142 = 0;
  v159 = 0LL;
  v133 = 0;
  v134[0] = 0;
  v158 = 0LL;
  v149 = -1;
  v13 = KeGetCurrentThread()->gap0[10];
  if ( !v13 )
  {
    *a11 = 0;
    *a10 = v172;
    return 0LL;
  }
  if ( a12 )
  {
    if ( !a6 || a6 >= (unsigned __int64)-(__int64)MmSystemRangeStart >> 4 )
    {
      result = 3221225485LL;
      v16 = (_DWORD *)a9;
      v20 = Address;
      goto LABEL_22;
    }
    v22 = 4LL * a6;
    ProbeForWrite(a11, v22, 4u);
    ProbeForWrite(a10, v22, 4u);
  }
  else
  {
    v14 = a11;
    if ( (unsigned __int64)a11 >= MmUserProbeAddress )
      v14 = (_DWORD *)MmUserProbeAddress;
    *v14 = *v14;
    v15 = a10;
    if ( (unsigned __int64)a10 >= MmUserProbeAddress )
      v15 = (_DWORD *)MmUserProbeAddress;
    *v15 = *v15;
  }
  v16 = (_DWORD *)a9;
  v17 = (unsigned int *)a9;
  if ( a9 >= MmUserProbeAddress )
    v17 = (unsigned int *)MmUserProbeAddress;
  v18 = *v17;
  v146 = *v17;
  v19 = (_DWORD *)a9;
  if ( a9 >= MmUserProbeAddress )
    v19 = (_DWORD *)MmUserProbeAddress;
  *v19 = *v19;
  v20 = Address;
  ProbeForWrite(Address, v18, 4u);
  if ( v20 && (unsigned int)v18 >= 0x14 )
    *v20 = 0;
  if ( (a7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v165 = *(_OWORD *)a7;
  result = 0LL;
LABEL_22:
  if ( (int)result < 0 )
    return result;
  v23 = v172;
  if ( (v172 & 0xF0000000) != 0 )
  {
    v24 = -1073741594;
    goto LABEL_174;
  }
  v24 = SepReferenceTokenByHandle(v12, 8u, v13, &Object, &v133, &v158);
  v128 = v24;
  if ( v24 < 0 )
  {
    Object = 0LL;
    goto LABEL_175;
  }
  if ( (unsigned __int64)(v12 + 6) > 2 )
  {
    if ( *((_DWORD *)Object + 48) == 2 )
    {
      if ( *((int *)Object + 49) >= 1 )
        goto LABEL_28;
      v24 = -1073741659;
    }
    else
    {
      v24 = -1073741732;
    }
LABEL_174:
    v128 = v24;
    goto LABEL_175;
  }
LABEL_28:
  v24 = SeCaptureObjectTypeList(a5, a6, v13, &v154);
  v128 = v24;
  if ( v24 < 0 )
  {
LABEL_175:
    v25 = 1;
    goto LABEL_171;
  }
  v25 = 1;
  v24 = SeCaptureSecurityDescriptor(v170, v13, 1, 0, (__int64)&v140);
  v128 = v24;
  if ( v24 < 0 )
    goto LABEL_171;
  if ( !v140 )
    goto LABEL_177;
  v150 = (_WORD *)(v140 + 2);
  a3 = 0x8000LL;
  v26 = *(_WORD *)(v140 + 2) & 0x8000;
  if ( v26 )
  {
    v27 = *(unsigned int *)(v140 + 4);
    if ( !(_DWORD)v27 )
      goto LABEL_177;
    v28 = v140 + v27;
  }
  else
  {
    v28 = *(_QWORD *)(v140 + 8);
  }
  if ( !v28 )
    goto LABEL_177;
  if ( v26 )
  {
    v29 = *(unsigned int *)(v140 + 8);
    if ( (_DWORD)v29 )
    {
      v30 = v140 + v29;
      goto LABEL_38;
    }
LABEL_177:
    v24 = -1073741703;
    v128 = -1073741703;
    goto LABEL_171;
  }
  v30 = *(_QWORD *)(v140 + 16);
LABEL_38:
  if ( !v30 )
    goto LABEL_177;
  if ( v133 )
    LODWORD(v31) = v158;
  else
    v31 = *((_QWORD *)Object + 138);
  v127 = v31;
  v24 = SepTrustLevelCheck(&v149, v140, 0LL, Object);
  v128 = v24;
  if ( v24 < 0 )
    goto LABEL_171;
  if ( (v149 & v23 & 0xFDFFFFFF) != (v23 & 0xFDFFFFFF) )
  {
    v32 = -1073741790;
    v134[0] = 1;
LABEL_48:
    a3 = v129;
    goto LABEL_49;
  }
  v24 = SepMandatoryIntegrityCheck(&v165, v140, 0, (__int64)Object, 1, (__int64)&v160);
  v128 = v24;
  if ( v24 < 0 )
  {
LABEL_171:
    v46 = a12;
LABEL_172:
    v53 = a11;
LABEL_162:
    v47 = v135;
    goto LABEL_85;
  }
  v129 = 0;
  v32 = SepMandatoryToDiscretionary(&v160, v23);
  if ( (v32 < 0 || (v23 & 0x2000000) != 0) && (*((_DWORD *)Object + 50) & 0x4000) != 0 && v162 <= 0x2000 )
  {
    a3 = 1LL;
    v129 = 1;
  }
  if ( v32 >= 0 || (_BYTE)a3 )
  {
    v32 = SePrivilegePolicyCheck((unsigned int)&v172, (unsigned int)&v139, 0, (_DWORD)Object, (__int64)&Src, v13);
    if ( !v172 )
    {
      v80 = (unsigned __int8)v141;
      if ( v139 )
        v80 = 1;
      v141 = v80;
    }
    goto LABEL_48;
  }
LABEL_49:
  if ( v32 < 0 && !(_BYTE)a3 )
  {
    v46 = a12;
    if ( a12 )
    {
      v78 = 0;
      v137 = 0;
      a3 = (__int64)a10;
      v79 = a11;
      while ( v78 < a6 )
      {
        v79[v78] = v32;
        *(_DWORD *)(a3 + 4LL * v78++) = 0;
        v137 = v78;
      }
    }
    else
    {
      *a11 = v32;
      *a10 = 0;
    }
    v24 = 0;
    v128 = 0;
    goto LABEL_172;
  }
  v33 = Src;
  if ( Src )
  {
    v81 = *(_DWORD *)Src;
    if ( *(_DWORD *)Src )
    {
      v82 = 12 * (v81 - 1) + 20;
      v83 = 8;
    }
    else
    {
      v83 = 8;
      v82 = 8;
    }
    if ( v82 > v146 )
    {
      if ( v81 )
        v83 = 12 * (v81 - 1) + 20;
      *v16 = v83;
      v24 = -1073741789;
      v128 = -1073741789;
      ExFreePoolWithTag(v33, 0);
      goto LABEL_171;
    }
    if ( v81 )
      v83 = 12 * (v81 - 1) + 20;
    memmove(v20, Src, v83);
    ExFreePoolWithTag(v33, 0);
  }
  else
  {
    if ( v146 < 0x14 )
    {
      *v16 = 20;
      v24 = -1073741789;
      v128 = -1073741789;
      goto LABEL_171;
    }
    *(_QWORD *)v20 = Src;
  }
  if ( a2 )
  {
    v24 = SeCaptureSid(a2, v127, 1, (__int64)&v153);
    v128 = v24;
    if ( v24 < 0 )
    {
      v153 = 0LL;
      goto LABEL_171;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v35 = Object;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  IsOwner = SepTokenIsOwner((__int64)v35, v140);
  v130 = IsOwner;
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)v35 + 50) & 0x20) == 0 )
  {
    v84 = *((_QWORD *)v35 + 27);
    if ( v84 )
    {
      if ( (*(_DWORD *)(v84 + 32) & 0x20) != 0 )
      {
        v46 = a12;
        v53 = a11;
        if ( a12 )
        {
          v85 = 0;
          v137 = 0;
          v86 = a10;
          while ( v85 < a6 )
          {
            v53[v85] = -1073741790;
            v86[v85++] = 0;
            v137 = v85;
          }
        }
        else
        {
          *a11 = -1073741790;
          *a10 = 0;
        }
        v128 = 0;
        ExReleaseResourceLite(*((PERESOURCE *)v35 + 6));
        v87 = KeGetCurrentThread();
        v88 = v87->KernelApcDisable + 1;
        v87->KernelApcDisable = v88;
        if ( !v88
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v87->ApcState.ApcListHead[0].Flink != &v87->152
          && !v87->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery(v87);
        }
        SeReleaseSubjectContext(&SubjectContext);
        v24 = 0;
        v25 = 1;
        goto LABEL_162;
      }
    }
  }
  v38 = v150;
  if ( !SepRmEnforceCap || (*v150 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
  {
    v39 = v140;
    goto LABEL_57;
  }
  v39 = v140;
  if ( (__int16)*v150 >= 0 )
  {
    v90 = *(_QWORD *)(v140 + 24);
  }
  else
  {
    v89 = *(unsigned int *)(v140 + 12);
    if ( !(_DWORD)v89 )
    {
      v151 = 0LL;
      goto LABEL_57;
    }
    v90 = v140 + v89;
  }
  v151 = v90;
  if ( v90 )
  {
    ScopedPolicySid = (void *)SepGetScopedPolicySid(v90, v90, v37);
    if ( ScopedPolicySid )
    {
      Cap = SepRmReferenceFindCap(ScopedPolicySid);
      v93 = v152;
      if ( Cap < 0 )
        v93 = SepRmDefaultCap;
      v152 = v93;
      v132 = 1;
    }
    IsOwner = v130;
  }
LABEL_57:
  v40 = v172;
  if ( (v172 & 0x2060000) != 0
    && IsOwner
    && ((*v38 & 4) == 0
      ? (v63 = 0LL)
      : (*v38 & 0x8000) == 0
      ? (v63 = *(_QWORD *)(v39 + 32))
      : (v62 = *(unsigned int *)(v140 + 16), !(_DWORD)v62)
      ? (v63 = 0LL)
      : (v63 = v140 + v62),
        !RtlpOwnerAcesPresent(0, v63)) )
  {
    if ( (v40 & 0x2000000) != 0 )
      v64 = 393216;
    else
      v64 = v40 & 0x60000;
    v41 = v64 | v139;
    v139 |= v64;
    v136 = v64;
    v40 &= 0xFFF9FFFF;
    v172 = v40;
  }
  else
  {
    v41 = v139;
  }
  if ( v40 || v132 && !(_BYTE)v141 )
  {
    v42 = (PERESOURCE *)Object;
    v43 = v136;
  }
  else
  {
    v42 = (PERESOURCE *)Object;
    if ( (*((_DWORD *)Object + 50) & 0x2000) != 0 || (v43 = v136) == 0 )
    {
      v53 = a11;
      if ( a12 )
      {
        v67 = 0;
        v137 = 0;
        v68 = a10;
        while ( v67 < a6 )
        {
          if ( v41 )
          {
            v53[v67] = 0;
            v68[v67] = v41;
          }
          else
          {
            v53[v67] = -1073741790;
            v68[v67] = 0;
          }
          v137 = ++v67;
        }
      }
      else
      {
        v66 = a10;
        if ( v41 )
        {
          *a11 = 0;
          *v66 = v41;
        }
        else
        {
          *a11 = -1073741790;
          *v66 = 0;
        }
      }
      v128 = 0;
      v25 = 1;
      ExReleaseResourceLite(v42[6]);
      v69 = KeGetCurrentThread();
      v70 = v69->KernelApcDisable + 1;
      v69->KernelApcDisable = v70;
      if ( !v70
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v69->ApcState.ApcListHead[0].Flink != &v69->152
        && !v69->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v69);
      }
      SeReleaseSubjectContext(&SubjectContext);
      v24 = 0;
      v46 = a12;
      goto LABEL_162;
    }
  }
  if ( a12 )
  {
    v94 = a6;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a6, 0x61476553u);
    v44 = PoolWithTag;
    v135 = (unsigned int *)PoolWithTag;
    if ( PoolWithTag )
    {
      v45 = (int *)&PoolWithTag[4 * v94];
      v43 = v136;
      goto LABEL_63;
    }
    ExReleaseResourceLite(*((PERESOURCE *)v35 + 6));
    v96 = KeGetCurrentThread();
    v97 = (unsigned int)++v96->KernelApcDisable;
    if ( !(_WORD)v97
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v96->ApcState.ApcListHead[0].Flink != &v96->152
      && !v96->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v97);
    }
    SeReleaseSubjectContext(&SubjectContext);
    v24 = -1073741670;
    goto LABEL_174;
  }
  v44 = v167;
  v135 = (unsigned int *)v167;
  v45 = (int *)&v164;
LABEL_63:
  v155 = v43;
  SepAccessCheck(
    v140,
    v153,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)v42,
    v40,
    v154,
    a6,
    &v165,
    v41,
    v13,
    v44,
    0LL,
    v45,
    a12,
    v130,
    &v155,
    (__int64)&P,
    0LL,
    0LL);
  v46 = a12;
  if ( !SepRmEnforceCap || *v45 < 0 || !v132 )
  {
    v47 = v135;
LABEL_65:
    ExpReleaseResourceForThreadLite(*((_QWORD *)v35 + 6), (ULONG_PTR)KeGetCurrentThread());
    v48 = KeGetCurrentThread();
    v49 = v48->KernelApcDisable + 1;
    v48->KernelApcDisable = v49;
    if ( !v49
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v48->ApcState.ApcListHead[0].Flink != &v48->152
      && !v48->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v48);
    }
    SeReleaseSubjectContext(&SubjectContext);
    v50 = v172;
    v51 = v172 & 0x2000000;
    if ( (v172 & 0x2000000) != 0 )
    {
      if ( !v129 || !BYTE5(v157) && !BYTE6(v157) )
      {
        if ( v46 )
          v60 = a6;
        else
          v60 = 0;
        SepConstrainByMandatory((unsigned int)&v160, v172, (_DWORD)v47, (_DWORD)v45, 0LL, v60);
      }
    }
    else if ( v129 && !BYTE6(v157) && !BYTE5(v157) )
    {
      v53 = a11;
      if ( v46 )
      {
        v65 = 0;
        v137 = 0;
        a3 = (__int64)a10;
        while ( v65 < a6 )
        {
          v53[v65] = -1073741790;
          *(_DWORD *)(a3 + 4LL * v65++) = 0;
          v137 = v65;
        }
      }
      else
      {
        *a11 = -1073741790;
        *a10 = 0;
      }
      v24 = 0;
      v128 = 0;
      v25 = 1;
      goto LABEL_85;
    }
    if ( v51 )
    {
      if ( v46 )
        v61 = a6;
      else
        v61 = 0;
      SepConstrainByTrust((unsigned int)&v149, v50, (_DWORD)v47, (_DWORD)v45, 0LL, v61, (__int64)v134);
    }
    if ( v46 )
    {
      v55 = 0LL;
      v56 = a10;
      a3 = (__int64)a11;
      v57 = a6;
      while ( 1 )
      {
        v137 = v55;
        if ( (unsigned int)v55 >= v57 )
          break;
        v58 = 4 * v55;
        *(_DWORD *)(v58 + a3) = v45[v55];
        v56[v58 / 4] = v47[v55];
        if ( SepRmEnforceCap && v131 && *(int *)(v58 + a3) >= 0 )
        {
          *(_DWORD *)(v58 + a3) = *(_DWORD *)&v148[v58];
          v56[v58 / 4] &= *(_DWORD *)((char *)v144 + v58);
        }
        v55 = v137 + 1;
      }
      v53 = (int *)a3;
    }
    else
    {
      v52 = *v45;
      v53 = a11;
      *a11 = v52;
      v54 = a10;
      *a10 = *v47;
      if ( SepRmEnforceCap && v131 && *v53 >= 0 )
      {
        *v53 = *(_DWORD *)v148;
        *v54 &= *(_DWORD *)v144;
      }
    }
    v24 = 0;
    v128 = 0;
    v25 = 1;
    goto LABEL_85;
  }
  if ( a12 )
  {
    v98 = a6;
    v99 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a6, 0x61476553u);
    v144 = v99;
    if ( !v99 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v35 + 6));
      v100 = KeGetCurrentThread();
      v101 = (unsigned int)++v100->KernelApcDisable;
      if ( !(_WORD)v101
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v100->ApcState.ApcListHead[0].Flink != &v100->152
        && !v100->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v101);
      }
      SeReleaseSubjectContext(&SubjectContext);
      v24 = -1073741670;
      v128 = -1073741670;
      v25 = 1;
      goto LABEL_172;
    }
    v148 = &v99[4 * v98];
  }
  else
  {
    v144 = &v166;
    v148 = &v168;
  }
  v102 = *v45;
  v141 = *v45;
  v47 = v135;
  v103 = *v135;
  v136 = *v135;
  LOBYTE(Src) = 0;
  if ( !a6 )
    goto LABEL_266;
  v24 = SepCopyObjectTypeList(v154, a6, &v159);
  v128 = v24;
  if ( v24 >= 0 )
  {
    v102 = v141;
    v103 = v136;
LABEL_266:
    for ( i = 0LL; ; i = (unsigned int)((_DWORD)v150 + 1) )
    {
      LODWORD(v150) = i;
      if ( (unsigned int)i >= *(_DWORD *)(v152 + 60) )
      {
LABEL_331:
        *v45 = v102;
        v47 = v135;
        *v135 &= v103;
        goto LABEL_65;
      }
      v105 = *(_QWORD *)(v152 + 8 * i + 64);
      if ( *(_QWORD *)(v105 + 24) )
      {
        v106 = (int)P;
        if ( !P )
        {
          v107 = AuthzBasepInitializeResourceClaimsFromSacl(v151, &P);
          v108 = (unsigned __int8)Src;
          if ( v107 < 0 )
            v108 = 1;
          LODWORD(Src) = v108;
          v106 = (int)P;
        }
        v109 = (_QWORD *)*((_QWORD *)Object + 137);
        if ( v109 )
          v110 = v109[75];
        else
          v110 = 0LL;
        if ( v109 )
          v111 = v109[73];
        else
          v111 = 0LL;
        if ( v109 )
          v112 = v109[74];
        else
          v112 = 0LL;
        if ( v109 )
          v113 = v109[72];
        else
          LODWORD(v113) = 0;
        v114 = AuthzBasepEvaluateAceCondition(
                 (_DWORD)Object,
                 *((_QWORD *)Object + 97),
                 v106,
                 v113,
                 v112,
                 v111,
                 v110,
                 *(_QWORD *)(v105 + 24),
                 *(_DWORD *)(v105 + 16),
                 1,
                 0,
                 (__int64)&v147);
        v128 = v114;
        v115 = v147;
        if ( v147 != 1 )
        {
          if ( v114 < 0 )
            goto LABEL_327;
          if ( SeTokenIsRestricted(Object) )
          {
            v116 = (_QWORD *)*((_QWORD *)Object + 137);
            if ( v116 )
              v117 = v116[75];
            else
              v117 = 0LL;
            if ( v116 )
              v118 = v116[73];
            else
              v118 = 0LL;
            if ( v116 )
              v119 = v116[74];
            else
              v119 = 0LL;
            if ( v116 )
              v120 = v116[72];
            else
              LODWORD(v120) = 0;
            v128 = AuthzBasepEvaluateAceCondition(
                     (_DWORD)Object,
                     *((_QWORD *)Object + 97),
                     (_DWORD)P,
                     v120,
                     v119,
                     v118,
                     v117,
                     *(_QWORD *)(v105 + 24),
                     *(_DWORD *)(v105 + 16),
                     1,
                     1,
                     (__int64)&v147);
            if ( v128 < 0 )
            {
              ExReleaseResourceLite(*((PERESOURCE *)v35 + 6));
              v124 = KeGetCurrentThread();
              v125 = v124->KernelApcDisable + 1;
              v124->KernelApcDisable = v125;
              if ( !v125
                && ($CD287064E7C9F7953DE243E927CFCB99 *)v124->ApcState.ApcListHead[0].Flink != &v124->152
                && !v124->SpecialApcDisable )
              {
LABEL_325:
                KiCheckForKernelApcDelivery(v124);
              }
LABEL_326:
              SeReleaseSubjectContext(&SubjectContext);
              v24 = v128;
              v25 = 1;
              goto LABEL_172;
            }
            v115 = v147;
          }
          if ( !(_BYTE)Src && v115 != 1 )
          {
            v102 = v141;
            v103 = v136;
            continue;
          }
        }
        v103 = v136;
      }
      v128 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
      if ( v128 < 0 )
      {
LABEL_327:
        ExReleaseResourceLite(*((PERESOURCE *)v35 + 6));
        v124 = KeGetCurrentThread();
        v126 = v124->KernelApcDisable + 1;
        v124->KernelApcDisable = v126;
        if ( !v126
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v124->ApcState.ApcListHead[0].Flink != &v124->152
          && !v124->SpecialApcDisable )
        {
          goto LABEL_325;
        }
        goto LABEL_326;
      }
      if ( (*(_DWORD *)(v105 + 48) & 1) != 0 )
      {
        v121 = 0;
        if ( (v172 & 0x2000000) != 0 )
          v122 = v172;
        else
          v122 = v172 | v139;
      }
      else
      {
        v122 = v172;
        v121 = v139;
      }
      v123 = v159;
      SepAccessCheck(
        (__int64)SecurityDescriptor,
        v153,
        (__int64)SubjectContext.PrimaryToken,
        (__int64)Object,
        v122,
        v159,
        a6,
        &v165,
        v121,
        v13,
        v144,
        0LL,
        (int *)v148,
        v46,
        v130,
        &v155,
        (__int64)&P,
        0LL,
        0LL);
      if ( v131 )
        v103 &= *(_DWORD *)v144;
      else
        v103 = *(_DWORD *)v144;
      v136 = v103;
      if ( v103 )
        v102 = *(_DWORD *)v148;
      else
        v102 = -1073741790;
      v141 = v102;
      v131 = 1;
      if ( v123 )
        SepMergeObjectTypeListAccesses(v154, v123, a6);
      if ( v102 < 0 )
        goto LABEL_331;
    }
  }
  v53 = a11;
  v25 = 1;
LABEL_85:
  if ( v140
    && Object
    && (v134[0] || !(_DWORD)v157 && (*((_DWORD *)Object + 50) & 0x4000) != 0 && v24 >= 0 && (*v53 < 0 || HIBYTE(v157))) )
  {
    v71 = KeGetCurrentThread();
    --v71->KernelApcDisable;
    v72 = Object;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
    if ( *v53 < 0 )
      v25 = 0;
    if ( v133 )
      LODWORD(v75) = v158;
    else
      v75 = *((_QWORD *)v72 + 138);
    SeLogAccessFailure((_DWORD)v72, v73, v74, v75, v140, v172 | v139, v25);
    ExReleaseResourceLite(*((PERESOURCE *)v72 + 6));
    v76 = KeGetCurrentThread();
    v77 = v76->KernelApcDisable + 1;
    v76->KernelApcDisable = v77;
    if ( !v77
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v76->ApcState.ApcListHead[0].Flink != &v76->152
      && !v76->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v76);
    }
    v24 = v128;
  }
  if ( v46 )
  {
    if ( v47 )
      ExFreePoolWithTag(v47, 0);
    if ( v144 )
      ExFreePoolWithTag(v144, 0);
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  if ( v154 )
    SeFreeCapturedObjectTypeList();
  if ( v153 )
  {
    LOBYTE(a3) = 1;
    SeReleaseSid(v153, v13, a3);
  }
  if ( v140 )
    SeReleaseSecurityDescriptor(v140, v13, 0LL);
  if ( v132 )
    SepRmDereferenceCap(v152);
  if ( v159 )
    ExFreePoolWithTag(v159, 0);
  v59 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(v59, 0);
  }
  return (unsigned int)v24;
}
