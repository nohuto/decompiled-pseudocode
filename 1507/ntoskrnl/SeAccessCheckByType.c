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
  _WORD *v37; // r15
  __int64 v38; // rsi
  unsigned int v39; // edi
  unsigned int v40; // r15d
  PERESOURCE *v41; // r13
  int v42; // eax
  _BYTE *v43; // rcx
  int *v44; // rsi
  char v45; // r15
  unsigned int *v46; // r13
  struct _KTHREAD *v47; // rcx
  __int16 v48; // ax
  unsigned int v49; // r14d
  int v50; // edi
  int v51; // eax
  int *v52; // rsi
  unsigned int *v53; // rcx
  __int64 v54; // rax
  unsigned int *v55; // rdx
  unsigned int v56; // r10d
  unsigned __int64 v57; // rcx
  PVOID v58; // rbx
  unsigned int v59; // eax
  unsigned int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rdx
  int v63; // eax
  unsigned int v64; // ecx
  unsigned int *v65; // rax
  unsigned int v66; // ecx
  unsigned int *v67; // rdx
  struct _KTHREAD *v68; // rcx
  __int16 v69; // ax
  struct _KTHREAD *v70; // rax
  PVOID v71; // rdi
  int v72; // edx
  int v73; // r8d
  __int64 v74; // r9
  struct _KTHREAD *v75; // rcx
  __int16 v76; // ax
  unsigned int v77; // ecx
  int *v78; // r9
  int v79; // eax
  int v80; // edx
  unsigned int v81; // ecx
  unsigned int v82; // eax
  __int64 v83; // rax
  unsigned int v84; // ecx
  unsigned int *v85; // r8
  struct _KTHREAD *v86; // rcx
  __int16 v87; // ax
  __int64 v88; // rdx
  ACL *v89; // rdx
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v92; // rdx
  __int64 v93; // rsi
  _BYTE *PoolWithTag; // rax
  struct _KTHREAD *v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rdi
  char *v98; // rax
  struct _KTHREAD *v99; // rdx
  __int64 v100; // rcx
  int v101; // r10d
  int v102; // edi
  __int64 i; // rax
  __int64 v104; // r13
  int v105; // r10d
  int v106; // eax
  int v107; // ecx
  _QWORD *v108; // rax
  __int64 v109; // r8
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r9
  int v113; // eax
  int v114; // edi
  _QWORD *v115; // rax
  __int64 v116; // r8
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r9
  unsigned int v120; // edx
  unsigned int v121; // ecx
  PVOID v122; // r13
  struct _KTHREAD *v123; // rcx
  __int16 v124; // ax
  __int16 v125; // ax
  int v126; // [rsp+20h] [rbp-208h]
  int v127; // [rsp+A0h] [rbp-188h]
  unsigned __int8 v128; // [rsp+A5h] [rbp-183h]
  char v129; // [rsp+A6h] [rbp-182h]
  char v130; // [rsp+A7h] [rbp-181h]
  char v131; // [rsp+A8h] [rbp-180h]
  char v132; // [rsp+A9h] [rbp-17Fh] BYREF
  char v133[6]; // [rsp+AAh] [rbp-17Eh] BYREF
  unsigned int *v134; // [rsp+B0h] [rbp-178h]
  int v135; // [rsp+B8h] [rbp-170h]
  unsigned int v136; // [rsp+BCh] [rbp-16Ch]
  PVOID Object; // [rsp+C0h] [rbp-168h] BYREF
  unsigned int v138; // [rsp+C8h] [rbp-160h] BYREF
  __int64 v139; // [rsp+D0h] [rbp-158h] BYREF
  int v140; // [rsp+D8h] [rbp-150h]
  char v141; // [rsp+DCh] [rbp-14Ch]
  PVOID Src; // [rsp+E0h] [rbp-148h] BYREF
  PVOID v143; // [rsp+E8h] [rbp-140h]
  PVOID P; // [rsp+F0h] [rbp-138h] BYREF
  unsigned int v145; // [rsp+F8h] [rbp-130h]
  int v146; // [rsp+FCh] [rbp-12Ch] BYREF
  char *v147; // [rsp+100h] [rbp-128h]
  int v148; // [rsp+108h] [rbp-120h] BYREF
  _WORD *v149; // [rsp+110h] [rbp-118h]
  ACL *v150; // [rsp+118h] [rbp-110h]
  __int64 v151; // [rsp+120h] [rbp-108h]
  __int64 v152; // [rsp+128h] [rbp-100h] BYREF
  _QWORD *v153; // [rsp+130h] [rbp-F8h] BYREF
  int v154; // [rsp+138h] [rbp-F0h] BYREF
  __int64 v155; // [rsp+13Ch] [rbp-ECh]
  __int64 v156; // [rsp+144h] [rbp-E4h]
  __int64 v157; // [rsp+150h] [rbp-D8h] BYREF
  PVOID v158; // [rsp+158h] [rbp-D0h] BYREF
  int v159; // [rsp+160h] [rbp-C8h] BYREF
  __int64 v160; // [rsp+164h] [rbp-C4h]
  unsigned int v161; // [rsp+16Ch] [rbp-BCh]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+170h] [rbp-B8h] BYREF
  char v163; // [rsp+190h] [rbp-98h] BYREF
  __int128 v164; // [rsp+198h] [rbp-90h] BYREF
  char v165; // [rsp+1B0h] [rbp-78h] BYREF
  _BYTE v166[4]; // [rsp+1B4h] [rbp-74h] BYREF
  char v167; // [rsp+1B8h] [rbp-70h] BYREF
  _BYTE SecurityDescriptor[96]; // [rsp+1C8h] [rbp-60h] BYREF
  int v169; // [rsp+230h] [rbp+8h]
  unsigned int v171; // [rsp+248h] [rbp+20h] BYREF

  v171 = a4;
  v169 = a1;
  v12 = (char *)a3;
  v134 = 0LL;
  v143 = 0LL;
  v147 = 0LL;
  Object = 0LL;
  v139 = 0LL;
  v152 = 0LL;
  v138 = 0;
  v135 = 0;
  v153 = 0LL;
  Src = 0LL;
  v145 = 0;
  v136 = 0;
  v159 = 0;
  v160 = 0LL;
  v161 = 0;
  v128 = 0;
  P = 0LL;
  v154 = 0;
  v155 = 0LL;
  v156 = 0LL;
  v150 = 0LL;
  memset(SecurityDescriptor, 0, 40);
  v151 = 0LL;
  v131 = 0;
  v130 = 0;
  LOBYTE(a1) = 0;
  v140 = a1;
  v141 = 0;
  v158 = 0LL;
  v132 = 0;
  v133[0] = 0;
  v157 = 0LL;
  v148 = -1;
  v13 = KeGetCurrentThread()->gap0[10];
  if ( !v13 )
  {
    *a11 = 0;
    *a10 = v171;
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
  v145 = *v17;
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
  v164 = *(_OWORD *)a7;
  result = 0LL;
LABEL_22:
  if ( (int)result < 0 )
    return result;
  v23 = v171;
  if ( (v171 & 0xF0000000) != 0 )
  {
    v24 = -1073741594;
    goto LABEL_174;
  }
  v24 = SepReferenceTokenByHandle(v12, 8u, v13, &Object, &v132, &v157);
  v127 = v24;
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
    v127 = v24;
    goto LABEL_175;
  }
LABEL_28:
  v24 = SeCaptureObjectTypeList(a5, a6, v13, &v153);
  v127 = v24;
  if ( v24 < 0 )
  {
LABEL_175:
    v25 = 1;
    goto LABEL_171;
  }
  v25 = 1;
  v24 = SeCaptureSecurityDescriptor(v169, v13, 1, 0, (__int64)&v139);
  v127 = v24;
  if ( v24 < 0 )
    goto LABEL_171;
  if ( !v139 )
    goto LABEL_177;
  v149 = (_WORD *)(v139 + 2);
  a3 = 0x8000LL;
  v26 = *(_WORD *)(v139 + 2) & 0x8000;
  if ( v26 )
  {
    v27 = *(unsigned int *)(v139 + 4);
    if ( !(_DWORD)v27 )
      goto LABEL_177;
    v28 = v139 + v27;
  }
  else
  {
    v28 = *(_QWORD *)(v139 + 8);
  }
  if ( !v28 )
    goto LABEL_177;
  if ( v26 )
  {
    v29 = *(unsigned int *)(v139 + 8);
    if ( (_DWORD)v29 )
    {
      v30 = v139 + v29;
      goto LABEL_38;
    }
LABEL_177:
    v24 = -1073741703;
    v127 = -1073741703;
    goto LABEL_171;
  }
  v30 = *(_QWORD *)(v139 + 16);
LABEL_38:
  if ( !v30 )
    goto LABEL_177;
  if ( v132 )
    LODWORD(v31) = v157;
  else
    v31 = *((_QWORD *)Object + 138);
  v126 = v31;
  v24 = SepTrustLevelCheck(&v148, v139, 0LL, Object);
  v127 = v24;
  if ( v24 < 0 )
    goto LABEL_171;
  if ( (v148 & v23 & 0xFDFFFFFF) != (v23 & 0xFDFFFFFF) )
  {
    v32 = -1073741790;
    v133[0] = 1;
LABEL_48:
    a3 = v128;
    goto LABEL_49;
  }
  v24 = SepMandatoryIntegrityCheck(&v164, v139, 0, (__int64)Object, 1, (__int64)&v159);
  v127 = v24;
  if ( v24 < 0 )
  {
LABEL_171:
    v45 = a12;
LABEL_172:
    v52 = a11;
LABEL_162:
    v46 = v134;
    goto LABEL_85;
  }
  v128 = 0;
  v32 = SepMandatoryToDiscretionary(&v159, v23);
  if ( (v32 < 0 || (v23 & 0x2000000) != 0) && (*((_DWORD *)Object + 50) & 0x4000) != 0 && v161 <= 0x2000 )
  {
    a3 = 1LL;
    v128 = 1;
  }
  if ( v32 >= 0 || (_BYTE)a3 )
  {
    v32 = SePrivilegePolicyCheck((unsigned int)&v171, (unsigned int)&v138, 0, (_DWORD)Object, (__int64)&Src, v13);
    if ( !v171 )
    {
      v79 = (unsigned __int8)v140;
      if ( v138 )
        v79 = 1;
      v140 = v79;
    }
    goto LABEL_48;
  }
LABEL_49:
  if ( v32 < 0 && !(_BYTE)a3 )
  {
    v45 = a12;
    if ( a12 )
    {
      v77 = 0;
      v136 = 0;
      a3 = (__int64)a10;
      v78 = a11;
      while ( v77 < a6 )
      {
        v78[v77] = v32;
        *(_DWORD *)(a3 + 4LL * v77++) = 0;
        v136 = v77;
      }
    }
    else
    {
      *a11 = v32;
      *a10 = 0;
    }
    v24 = 0;
    v127 = 0;
    goto LABEL_172;
  }
  v33 = Src;
  if ( Src )
  {
    v80 = *(_DWORD *)Src;
    if ( *(_DWORD *)Src )
    {
      v81 = 12 * (v80 - 1) + 20;
      v82 = 8;
    }
    else
    {
      v82 = 8;
      v81 = 8;
    }
    if ( v81 > v145 )
    {
      if ( v80 )
        v82 = 12 * (v80 - 1) + 20;
      *v16 = v82;
      v24 = -1073741789;
      v127 = -1073741789;
      ExFreePoolWithTag(v33, 0);
      goto LABEL_171;
    }
    if ( v80 )
      v82 = 12 * (v80 - 1) + 20;
    memmove(v20, Src, v82);
    ExFreePoolWithTag(v33, 0);
  }
  else
  {
    if ( v145 < 0x14 )
    {
      *v16 = 20;
      v24 = -1073741789;
      v127 = -1073741789;
      goto LABEL_171;
    }
    *(_QWORD *)v20 = Src;
  }
  if ( a2 )
  {
    v24 = SeCaptureSid(a2, v126, 1, (__int64)&v152);
    v127 = v24;
    if ( v24 < 0 )
    {
      v152 = 0LL;
      goto LABEL_171;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v35 = Object;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  IsOwner = SepTokenIsOwner((__int64)v35, v139);
  v129 = IsOwner;
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)v35 + 50) & 0x20) == 0 )
  {
    v83 = *((_QWORD *)v35 + 27);
    if ( v83 )
    {
      if ( (*(_DWORD *)(v83 + 32) & 0x20) != 0 )
      {
        v45 = a12;
        v52 = a11;
        if ( a12 )
        {
          v84 = 0;
          v136 = 0;
          v85 = a10;
          while ( v84 < a6 )
          {
            v52[v84] = -1073741790;
            v85[v84++] = 0;
            v136 = v84;
          }
        }
        else
        {
          *a11 = -1073741790;
          *a10 = 0;
        }
        v127 = 0;
        ExReleaseResourceLite(*((PERESOURCE *)v35 + 6));
        v86 = KeGetCurrentThread();
        v87 = v86->KernelApcDisable + 1;
        v86->KernelApcDisable = v87;
        if ( !v87
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v86->ApcState.ApcListHead[0].Flink != &v86->152
          && !v86->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery(v86);
        }
        SeReleaseSubjectContext(&SubjectContext);
        v24 = 0;
        v25 = 1;
        goto LABEL_162;
      }
    }
  }
  v37 = v149;
  if ( !SepRmEnforceCap || (*v149 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
  {
    v38 = v139;
    goto LABEL_57;
  }
  v38 = v139;
  if ( (__int16)*v149 >= 0 )
  {
    v89 = *(ACL **)(v139 + 24);
  }
  else
  {
    v88 = *(unsigned int *)(v139 + 12);
    if ( !(_DWORD)v88 )
    {
      v150 = 0LL;
      goto LABEL_57;
    }
    v89 = (ACL *)(v139 + v88);
  }
  v150 = v89;
  if ( v89 )
  {
    ScopedPolicySid = (void *)SepGetScopedPolicySid(v89);
    if ( ScopedPolicySid )
    {
      Cap = SepRmReferenceFindCap(ScopedPolicySid);
      v92 = v151;
      if ( Cap < 0 )
        v92 = SepRmDefaultCap;
      v151 = v92;
      v131 = 1;
    }
    IsOwner = v129;
  }
LABEL_57:
  v39 = v171;
  if ( (v171 & 0x2060000) != 0
    && IsOwner
    && ((*v37 & 4) == 0
      ? (v62 = 0LL)
      : (*v37 & 0x8000) == 0
      ? (v62 = *(_QWORD *)(v38 + 32))
      : (v61 = *(unsigned int *)(v139 + 16), !(_DWORD)v61)
      ? (v62 = 0LL)
      : (v62 = v139 + v61),
        !RtlpOwnerAcesPresent(0, v62)) )
  {
    if ( (v39 & 0x2000000) != 0 )
      v63 = 393216;
    else
      v63 = v39 & 0x60000;
    v40 = v63 | v138;
    v138 |= v63;
    v135 = v63;
    v39 &= 0xFFF9FFFF;
    v171 = v39;
  }
  else
  {
    v40 = v138;
  }
  if ( v39 || v131 && !(_BYTE)v140 )
  {
    v41 = (PERESOURCE *)Object;
    v42 = v135;
  }
  else
  {
    v41 = (PERESOURCE *)Object;
    if ( (*((_DWORD *)Object + 50) & 0x2000) != 0 || (v42 = v135) == 0 )
    {
      v52 = a11;
      if ( a12 )
      {
        v66 = 0;
        v136 = 0;
        v67 = a10;
        while ( v66 < a6 )
        {
          if ( v40 )
          {
            v52[v66] = 0;
            v67[v66] = v40;
          }
          else
          {
            v52[v66] = -1073741790;
            v67[v66] = 0;
          }
          v136 = ++v66;
        }
      }
      else
      {
        v65 = a10;
        if ( v40 )
        {
          *a11 = 0;
          *v65 = v40;
        }
        else
        {
          *a11 = -1073741790;
          *v65 = 0;
        }
      }
      v127 = 0;
      v25 = 1;
      ExReleaseResourceLite(v41[6]);
      v68 = KeGetCurrentThread();
      v69 = v68->KernelApcDisable + 1;
      v68->KernelApcDisable = v69;
      if ( !v69
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v68->ApcState.ApcListHead[0].Flink != &v68->152
        && !v68->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v68);
      }
      SeReleaseSubjectContext(&SubjectContext);
      v24 = 0;
      v45 = a12;
      goto LABEL_162;
    }
  }
  if ( a12 )
  {
    v93 = a6;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a6, 0x61476553u);
    v43 = PoolWithTag;
    v134 = (unsigned int *)PoolWithTag;
    if ( PoolWithTag )
    {
      v44 = (int *)&PoolWithTag[4 * v93];
      v42 = v135;
      goto LABEL_63;
    }
    ExReleaseResourceLite(*((PERESOURCE *)v35 + 6));
    v95 = KeGetCurrentThread();
    v96 = (unsigned int)++v95->KernelApcDisable;
    if ( !(_WORD)v96
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v95->ApcState.ApcListHead[0].Flink != &v95->152
      && !v95->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v96);
    }
    SeReleaseSubjectContext(&SubjectContext);
    v24 = -1073741670;
    goto LABEL_174;
  }
  v43 = v166;
  v134 = (unsigned int *)v166;
  v44 = (int *)&v163;
LABEL_63:
  v154 = v42;
  SepAccessCheck(
    v139,
    v152,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)v41,
    v39,
    v153,
    a6,
    &v164,
    v40,
    v13,
    v43,
    0LL,
    v44,
    a12,
    v129,
    &v154,
    (__int64)&P,
    0LL,
    0LL);
  v45 = a12;
  if ( !SepRmEnforceCap || *v44 < 0 || !v131 )
  {
    v46 = v134;
LABEL_65:
    ExpReleaseResourceForThreadLite(*((_QWORD *)v35 + 6), (ULONG_PTR)KeGetCurrentThread());
    v47 = KeGetCurrentThread();
    v48 = v47->KernelApcDisable + 1;
    v47->KernelApcDisable = v48;
    if ( !v48
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v47->ApcState.ApcListHead[0].Flink != &v47->152
      && !v47->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v47);
    }
    SeReleaseSubjectContext(&SubjectContext);
    v49 = v171;
    v50 = v171 & 0x2000000;
    if ( (v171 & 0x2000000) != 0 )
    {
      if ( !v128 || !BYTE5(v156) && !BYTE6(v156) )
      {
        if ( v45 )
          v59 = a6;
        else
          v59 = 0;
        SepConstrainByMandatory((unsigned int)&v159, v171, (_DWORD)v46, (_DWORD)v44, 0LL, v59);
      }
    }
    else if ( v128 && !BYTE6(v156) && !BYTE5(v156) )
    {
      v52 = a11;
      if ( v45 )
      {
        v64 = 0;
        v136 = 0;
        a3 = (__int64)a10;
        while ( v64 < a6 )
        {
          v52[v64] = -1073741790;
          *(_DWORD *)(a3 + 4LL * v64++) = 0;
          v136 = v64;
        }
      }
      else
      {
        *a11 = -1073741790;
        *a10 = 0;
      }
      v24 = 0;
      v127 = 0;
      v25 = 1;
      goto LABEL_85;
    }
    if ( v50 )
    {
      if ( v45 )
        v60 = a6;
      else
        v60 = 0;
      SepConstrainByTrust((unsigned int)&v148, v49, (_DWORD)v46, (_DWORD)v44, 0LL, v60, (__int64)v133);
    }
    if ( v45 )
    {
      v54 = 0LL;
      v55 = a10;
      a3 = (__int64)a11;
      v56 = a6;
      while ( 1 )
      {
        v136 = v54;
        if ( (unsigned int)v54 >= v56 )
          break;
        v57 = 4 * v54;
        *(_DWORD *)(v57 + a3) = v44[v54];
        v55[v57 / 4] = v46[v54];
        if ( SepRmEnforceCap && v130 && *(int *)(v57 + a3) >= 0 )
        {
          *(_DWORD *)(v57 + a3) = *(_DWORD *)&v147[v57];
          v55[v57 / 4] &= *(_DWORD *)((char *)v143 + v57);
        }
        v54 = v136 + 1;
      }
      v52 = (int *)a3;
    }
    else
    {
      v51 = *v44;
      v52 = a11;
      *a11 = v51;
      v53 = a10;
      *a10 = *v46;
      if ( SepRmEnforceCap && v130 && *v52 >= 0 )
      {
        *v52 = *(_DWORD *)v147;
        *v53 &= *(_DWORD *)v143;
      }
    }
    v24 = 0;
    v127 = 0;
    v25 = 1;
    goto LABEL_85;
  }
  if ( a12 )
  {
    v97 = a6;
    v98 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a6, 0x61476553u);
    v143 = v98;
    if ( !v98 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v35 + 6));
      v99 = KeGetCurrentThread();
      v100 = (unsigned int)++v99->KernelApcDisable;
      if ( !(_WORD)v100
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v99->ApcState.ApcListHead[0].Flink != &v99->152
        && !v99->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v100);
      }
      SeReleaseSubjectContext(&SubjectContext);
      v24 = -1073741670;
      v127 = -1073741670;
      v25 = 1;
      goto LABEL_172;
    }
    v147 = &v98[4 * v97];
  }
  else
  {
    v143 = &v165;
    v147 = &v167;
  }
  v101 = *v44;
  v140 = *v44;
  v46 = v134;
  v102 = *v134;
  v135 = *v134;
  LOBYTE(Src) = 0;
  if ( !a6 )
    goto LABEL_266;
  v24 = SepCopyObjectTypeList(v153, a6, &v158);
  v127 = v24;
  if ( v24 >= 0 )
  {
    v101 = v140;
    v102 = v135;
LABEL_266:
    for ( i = 0LL; ; i = (unsigned int)((_DWORD)v149 + 1) )
    {
      LODWORD(v149) = i;
      if ( (unsigned int)i >= *(_DWORD *)(v151 + 60) )
      {
LABEL_331:
        *v44 = v101;
        v46 = v134;
        *v134 &= v102;
        goto LABEL_65;
      }
      v104 = *(_QWORD *)(v151 + 8 * i + 64);
      if ( *(_QWORD *)(v104 + 24) )
      {
        v105 = (int)P;
        if ( !P )
        {
          v106 = AuthzBasepInitializeResourceClaimsFromSacl(v150, &P);
          v107 = (unsigned __int8)Src;
          if ( v106 < 0 )
            v107 = 1;
          LODWORD(Src) = v107;
          v105 = (int)P;
        }
        v108 = (_QWORD *)*((_QWORD *)Object + 137);
        if ( v108 )
          v109 = v108[75];
        else
          v109 = 0LL;
        if ( v108 )
          v110 = v108[73];
        else
          v110 = 0LL;
        if ( v108 )
          v111 = v108[74];
        else
          v111 = 0LL;
        if ( v108 )
          v112 = v108[72];
        else
          LODWORD(v112) = 0;
        v113 = AuthzBasepEvaluateAceCondition(
                 (_DWORD)Object,
                 *((_QWORD *)Object + 97),
                 v105,
                 v112,
                 v111,
                 v110,
                 v109,
                 *(_QWORD *)(v104 + 24),
                 *(_DWORD *)(v104 + 16),
                 1,
                 0,
                 (__int64)&v146);
        v127 = v113;
        v114 = v146;
        if ( v146 != 1 )
        {
          if ( v113 < 0 )
            goto LABEL_327;
          if ( SeTokenIsRestricted(Object) )
          {
            v115 = (_QWORD *)*((_QWORD *)Object + 137);
            if ( v115 )
              v116 = v115[75];
            else
              v116 = 0LL;
            if ( v115 )
              v117 = v115[73];
            else
              v117 = 0LL;
            if ( v115 )
              v118 = v115[74];
            else
              v118 = 0LL;
            if ( v115 )
              v119 = v115[72];
            else
              LODWORD(v119) = 0;
            v127 = AuthzBasepEvaluateAceCondition(
                     (_DWORD)Object,
                     *((_QWORD *)Object + 97),
                     (_DWORD)P,
                     v119,
                     v118,
                     v117,
                     v116,
                     *(_QWORD *)(v104 + 24),
                     *(_DWORD *)(v104 + 16),
                     1,
                     1,
                     (__int64)&v146);
            if ( v127 < 0 )
            {
              ExReleaseResourceLite(*((PERESOURCE *)v35 + 6));
              v123 = KeGetCurrentThread();
              v124 = v123->KernelApcDisable + 1;
              v123->KernelApcDisable = v124;
              if ( !v124
                && ($CD287064E7C9F7953DE243E927CFCB99 *)v123->ApcState.ApcListHead[0].Flink != &v123->152
                && !v123->SpecialApcDisable )
              {
LABEL_325:
                KiCheckForKernelApcDelivery(v123);
              }
LABEL_326:
              SeReleaseSubjectContext(&SubjectContext);
              v24 = v127;
              v25 = 1;
              goto LABEL_172;
            }
            v114 = v146;
          }
          if ( !(_BYTE)Src && v114 != 1 )
          {
            v101 = v140;
            v102 = v135;
            continue;
          }
        }
        v102 = v135;
      }
      v127 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
      if ( v127 < 0 )
      {
LABEL_327:
        ExReleaseResourceLite(*((PERESOURCE *)v35 + 6));
        v123 = KeGetCurrentThread();
        v125 = v123->KernelApcDisable + 1;
        v123->KernelApcDisable = v125;
        if ( !v125
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v123->ApcState.ApcListHead[0].Flink != &v123->152
          && !v123->SpecialApcDisable )
        {
          goto LABEL_325;
        }
        goto LABEL_326;
      }
      if ( (*(_DWORD *)(v104 + 48) & 1) != 0 )
      {
        v120 = 0;
        if ( (v171 & 0x2000000) != 0 )
          v121 = v171;
        else
          v121 = v171 | v138;
      }
      else
      {
        v121 = v171;
        v120 = v138;
      }
      v122 = v158;
      SepAccessCheck(
        (__int64)SecurityDescriptor,
        v152,
        (__int64)SubjectContext.PrimaryToken,
        (__int64)Object,
        v121,
        v158,
        a6,
        &v164,
        v120,
        v13,
        v143,
        0LL,
        (int *)v147,
        v45,
        v129,
        &v154,
        (__int64)&P,
        0LL,
        0LL);
      if ( v130 )
        v102 &= *(_DWORD *)v143;
      else
        v102 = *(_DWORD *)v143;
      v135 = v102;
      if ( v102 )
        v101 = *(_DWORD *)v147;
      else
        v101 = -1073741790;
      v140 = v101;
      v130 = 1;
      if ( v122 )
        SepMergeObjectTypeListAccesses(v153, v122, a6);
      if ( v101 < 0 )
        goto LABEL_331;
    }
  }
  v52 = a11;
  v25 = 1;
LABEL_85:
  if ( v139
    && Object
    && (v133[0] || !(_DWORD)v156 && (*((_DWORD *)Object + 50) & 0x4000) != 0 && v24 >= 0 && (*v52 < 0 || HIBYTE(v156))) )
  {
    v70 = KeGetCurrentThread();
    --v70->KernelApcDisable;
    v71 = Object;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
    if ( *v52 < 0 )
      v25 = 0;
    if ( v132 )
      LODWORD(v74) = v157;
    else
      v74 = *((_QWORD *)v71 + 138);
    SeLogAccessFailure((_DWORD)v71, v72, v73, v74, v139, v171 | v138, v25);
    ExReleaseResourceLite(*((PERESOURCE *)v71 + 6));
    v75 = KeGetCurrentThread();
    v76 = v75->KernelApcDisable + 1;
    v75->KernelApcDisable = v76;
    if ( !v76
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v75->ApcState.ApcListHead[0].Flink != &v75->152
      && !v75->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v75);
    }
    v24 = v127;
  }
  if ( v45 )
  {
    if ( v46 )
      ExFreePoolWithTag(v46, 0);
    if ( v143 )
      ExFreePoolWithTag(v143, 0);
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  if ( v153 )
    SeFreeCapturedObjectTypeList();
  if ( v152 )
  {
    LOBYTE(a3) = 1;
    SeReleaseSid(v152, v13, a3);
  }
  if ( v139 )
    SeReleaseSecurityDescriptor(v139, v13, 0LL);
  if ( v131 )
    SepRmDereferenceCap(v151);
  if ( v158 )
    ExFreePoolWithTag(v158, 0);
  v58 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(v58, 0);
  }
  return (unsigned int)v24;
}
