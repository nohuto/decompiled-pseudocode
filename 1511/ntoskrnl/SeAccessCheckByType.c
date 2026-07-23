/*
 * XREFs of SeAccessCheckByType @ 0x14008CBF0
 * Callers:
 *     NtAccessCheck @ 0x14008E00C (NtAccessCheck.c)
 *     NtAccessCheckByType @ 0x1400E689C (NtAccessCheckByType.c)
 *     NtAccessCheckByTypeResultList @ 0x14020037C (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x1400038F0 (SeTokenIsRestricted.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400050D4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140006054 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000D930 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SepTokenIsOwner @ 0x14008A540 (SepTokenIsOwner.c)
 *     SepAccessCheck @ 0x14008B8F0 (SepAccessCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x14008C7D0 (SepMandatoryIntegrityCheck.c)
 *     SeCaptureObjectTypeList @ 0x14008DC20 (SeCaptureObjectTypeList.c)
 *     SepTrustLevelCheck @ 0x14008DE30 (SepTrustLevelCheck.c)
 *     SePrivilegePolicyCheck @ 0x14008DF10 (SePrivilegePolicyCheck.c)
 *     RtlpOwnerAcesPresent @ 0x1400D1D40 (RtlpOwnerAcesPresent.c)
 *     SepConstrainByMandatory @ 0x1400E5A20 (SepConstrainByMandatory.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400E6284 (SepReferenceTokenUsingPseudoHandle.c)
 *     SeLogAccessFailure @ 0x1400E6334 (SeLogAccessFailure.c)
 *     SepConstrainByTrust @ 0x1400E6D30 (SepConstrainByTrust.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SeFreeCapturedObjectTypeList @ 0x1402004C0 (SeFreeCapturedObjectTypeList.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402005BC (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x14020065C (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x140200710 (SepGetScopedPolicySid.c)
 *     SepMergeObjectTypeListAccesses @ 0x140200750 (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCap @ 0x14020077C (SepRmDereferenceCap.c)
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
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeAccessCheckByType(
        int a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int128 *a7,
        volatile void *Address,
        ULONG64 a9,
        volatile void *a10,
        volatile void *a11,
        char a12)
{
  void *v12; // rsi
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
  unsigned int v23; // r14d
  int v24; // edi
  __int16 v25; // dx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  char v31; // cl
  int v32; // edx
  char v33; // r14
  PVOID v34; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PVOID v36; // r14
  bool IsOwner; // cl
  _WORD *v38; // rsi
  __int64 v39; // r13
  unsigned int v40; // edi
  PERESOURCE *v41; // r15
  int v42; // eax
  unsigned int *v43; // rcx
  int *v44; // rsi
  ULONG_PTR v45; // r9
  char v46; // r15
  unsigned int *v47; // r13
  unsigned int v48; // r14d
  int v49; // edi
  int v50; // eax
  int *v51; // rsi
  _DWORD *v52; // rcx
  __int64 v53; // rax
  char *v54; // rdx
  unsigned int v55; // r10d
  unsigned __int64 v56; // rcx
  PVOID v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rdx
  int v60; // eax
  unsigned int v61; // eax
  unsigned int v62; // eax
  int v63; // eax
  unsigned int v64; // ecx
  _DWORD *v65; // rax
  unsigned int v66; // edx
  unsigned int v67; // ecx
  _DWORD *v68; // r8
  unsigned int v69; // ecx
  struct _KTHREAD *v70; // rax
  PVOID v71; // rdi
  int v72; // edx
  int v73; // r8d
  __int64 v74; // r9
  unsigned int v75; // ecx
  _DWORD *v76; // r9
  int v77; // eax
  int v78; // edx
  unsigned int v79; // ecx
  unsigned int v80; // eax
  __int64 v81; // rax
  unsigned int v82; // ecx
  _DWORD *v83; // r8
  __int64 v84; // rax
  ACL *v85; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v88; // rdx
  __int64 v89; // rsi
  unsigned int *PoolWithTag; // rax
  __int64 v91; // rdi
  char *v92; // rax
  int v93; // r10d
  int v94; // edi
  __int64 i; // rax
  __int64 v96; // r13
  PVOID v97; // r10
  int v98; // eax
  int v99; // ecx
  _QWORD *v100; // rax
  __int64 v101; // r8
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r9
  int v105; // eax
  int v106; // edi
  _QWORD *v107; // rax
  __int64 v108; // r8
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r9
  unsigned int v112; // edx
  unsigned int v113; // ecx
  PVOID v114; // r13
  int Object; // [rsp+20h] [rbp-218h]
  int v116; // [rsp+A0h] [rbp-198h]
  char v117; // [rsp+A5h] [rbp-193h]
  char v118; // [rsp+A6h] [rbp-192h]
  unsigned __int8 v119; // [rsp+A7h] [rbp-191h]
  char v120; // [rsp+A8h] [rbp-190h]
  char v121; // [rsp+A9h] [rbp-18Fh] BYREF
  char v122[6]; // [rsp+AAh] [rbp-18Eh] BYREF
  unsigned int *v123; // [rsp+B0h] [rbp-188h]
  int v124; // [rsp+B8h] [rbp-180h]
  unsigned int v125; // [rsp+BCh] [rbp-17Ch] BYREF
  unsigned int v126; // [rsp+C0h] [rbp-178h]
  PVOID Token; // [rsp+C8h] [rbp-170h] BYREF
  int v128; // [rsp+D0h] [rbp-168h]
  char v129; // [rsp+D4h] [rbp-164h]
  __int64 v130; // [rsp+D8h] [rbp-160h] BYREF
  PVOID Src; // [rsp+E0h] [rbp-158h] BYREF
  PVOID v132; // [rsp+E8h] [rbp-150h]
  PVOID P; // [rsp+F0h] [rbp-148h] BYREF
  unsigned int v134; // [rsp+F8h] [rbp-140h]
  int v135; // [rsp+FCh] [rbp-13Ch] BYREF
  char *v136; // [rsp+100h] [rbp-138h]
  int v137; // [rsp+108h] [rbp-130h] BYREF
  _WORD *v138; // [rsp+110h] [rbp-128h]
  ACL *v139; // [rsp+118h] [rbp-120h]
  __int64 v140; // [rsp+120h] [rbp-118h]
  _QWORD *v141; // [rsp+128h] [rbp-110h] BYREF
  __int64 v142; // [rsp+130h] [rbp-108h] BYREF
  __int64 v143; // [rsp+138h] [rbp-100h] BYREF
  int v144; // [rsp+140h] [rbp-F8h] BYREF
  __int64 v145; // [rsp+144h] [rbp-F4h]
  __int64 v146; // [rsp+14Ch] [rbp-ECh]
  PVOID v147; // [rsp+158h] [rbp-E0h] BYREF
  int v148; // [rsp+160h] [rbp-D8h] BYREF
  __int64 v149; // [rsp+164h] [rbp-D4h]
  unsigned int v150; // [rsp+16Ch] [rbp-CCh]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+170h] [rbp-C8h] BYREF
  char v152; // [rsp+190h] [rbp-A8h] BYREF
  char v153; // [rsp+194h] [rbp-A4h] BYREF
  __int128 v154; // [rsp+198h] [rbp-A0h] BYREF
  _BYTE v155[16]; // [rsp+1B0h] [rbp-88h] BYREF
  char v156; // [rsp+1C0h] [rbp-78h] BYREF
  PVOID v157; // [rsp+1C8h] [rbp-70h] BYREF
  _BYTE SecurityDescriptor[104]; // [rsp+1D0h] [rbp-68h] BYREF
  int v159; // [rsp+240h] [rbp+8h]
  unsigned int v161; // [rsp+258h] [rbp+20h] BYREF

  v161 = a4;
  v159 = a1;
  v12 = (void *)a3;
  v123 = 0LL;
  v132 = 0LL;
  v136 = 0LL;
  Token = 0LL;
  v130 = 0LL;
  v142 = 0LL;
  v125 = 0;
  v124 = 0;
  v141 = 0LL;
  Src = 0LL;
  v134 = 0;
  v126 = 0;
  v148 = 0;
  v149 = 0LL;
  v150 = 0;
  v117 = 0;
  P = 0LL;
  v144 = 0;
  v145 = 0LL;
  v146 = 0LL;
  v139 = 0LL;
  memset(SecurityDescriptor, 0, 40);
  v140 = 0LL;
  v120 = 0;
  v119 = 0;
  LOBYTE(a1) = 0;
  v128 = a1;
  v129 = 0;
  v147 = 0LL;
  v121 = 0;
  v122[0] = 0;
  v143 = 0LL;
  v137 = -1;
  v13 = KeGetCurrentThread()->gap0[10];
  if ( !v13 )
  {
    *(_DWORD *)a11 = 0;
    *(_DWORD *)a10 = v161;
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
  v134 = *v17;
  v19 = (_DWORD *)a9;
  if ( a9 >= MmUserProbeAddress )
    v19 = (_DWORD *)MmUserProbeAddress;
  *v19 = *v19;
  v20 = Address;
  ProbeForWrite(Address, v18, 4u);
  if ( v20 && (unsigned int)v18 >= 0x14 )
    *v20 = 0;
  if ( ((unsigned __int8)a7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v154 = *a7;
  result = 0LL;
LABEL_22:
  if ( (int)result < 0 )
    return result;
  v23 = v161;
  if ( (v161 & 0xF0000000) != 0 )
  {
    v24 = -1073741594;
    goto LABEL_172;
  }
  v121 = 0;
  v143 = 0LL;
  if ( (unsigned __int64)v12 + 6 > 2 )
  {
    v24 = ObReferenceObjectByHandle(v12, 8u, (POBJECT_TYPE)SeTokenObjectType, v13, &v157, 0LL);
    Token = v157;
LABEL_26:
    v116 = v24;
    goto LABEL_27;
  }
  v63 = SepReferenceTokenUsingPseudoHandle(v12, &Token, &v121, &v143);
  v24 = v63;
  if ( v63 >= 0 )
    goto LABEL_26;
  v116 = v63;
LABEL_27:
  if ( v24 < 0 )
  {
    Token = 0LL;
    goto LABEL_173;
  }
  if ( (unsigned __int64)v12 + 6 > 2 )
  {
    if ( *((_DWORD *)Token + 48) != 2 )
    {
      v24 = -1073741732;
LABEL_172:
      v116 = v24;
      goto LABEL_173;
    }
    if ( *((int *)Token + 49) < 1 )
    {
      v24 = -1073741659;
      goto LABEL_172;
    }
  }
  v24 = SeCaptureObjectTypeList(a5, a6, v13, &v141);
  v116 = v24;
  if ( v24 < 0 )
    goto LABEL_173;
  v24 = SeCaptureSecurityDescriptor(v159, v13, 1, 0, (__int64)&v130);
  v116 = v24;
  if ( v24 < 0 )
    goto LABEL_173;
  if ( !v130 )
    goto LABEL_187;
  v138 = (_WORD *)(v130 + 2);
  a3 = 0x8000LL;
  v25 = *(_WORD *)(v130 + 2) & 0x8000;
  if ( v25 )
  {
    v26 = *(unsigned int *)(v130 + 4);
    if ( !(_DWORD)v26 )
      goto LABEL_187;
    v27 = v130 + v26;
  }
  else
  {
    v27 = *(_QWORD *)(v130 + 8);
  }
  if ( !v27 )
    goto LABEL_187;
  if ( v25 )
  {
    v28 = *(unsigned int *)(v130 + 8);
    if ( (_DWORD)v28 )
    {
      v29 = v130 + v28;
      goto LABEL_41;
    }
LABEL_187:
    v24 = -1073741703;
    goto LABEL_172;
  }
  v29 = *(_QWORD *)(v130 + 16);
LABEL_41:
  if ( !v29 )
    goto LABEL_187;
  if ( v121 )
    LODWORD(v30) = v143;
  else
    v30 = *((_QWORD *)Token + 138);
  Object = v30;
  v24 = SepTrustLevelCheck(&v137, v130, 0LL, Token);
  v116 = v24;
  if ( v24 < 0 )
    goto LABEL_173;
  if ( (v137 & v23 & 0xFDFFFFFF) != (v23 & 0xFDFFFFFF) )
  {
    v32 = -1073741790;
    v122[0] = 1;
    v31 = 0;
LABEL_179:
    v33 = 1;
    goto LABEL_52;
  }
  v24 = SepMandatoryIntegrityCheck(&v154, v130, 0LL, (ULONG_PTR)Token, 1, (__int64)&v148);
  v116 = v24;
  if ( v24 < 0 )
  {
LABEL_173:
    v33 = 1;
    goto LABEL_169;
  }
  v31 = 0;
  v117 = 0;
  if ( HIDWORD(v149) && (v148 & v23 & 0xFDFFFFFF) != (v23 & 0xFDFFFFFF) )
  {
    v32 = -1073741790;
  }
  else
  {
    v32 = 0;
    if ( (v23 & 0x2000000) == 0 )
      goto LABEL_50;
  }
  if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 && v150 <= 0x2000 )
  {
    v31 = 1;
    v117 = 1;
  }
  else
  {
    v31 = 0;
  }
LABEL_50:
  if ( v32 < 0 && !v31 )
    goto LABEL_179;
  v32 = SePrivilegePolicyCheck((unsigned int)&v161, (unsigned int)&v125, 0, (_DWORD)Token, (__int64)&Src, v13);
  v33 = 1;
  v31 = v117;
  if ( !v161 )
  {
    v77 = (unsigned __int8)v128;
    if ( v125 )
      v77 = 1;
    v128 = v77;
  }
LABEL_52:
  if ( v32 < 0 && !v31 )
  {
    v46 = a12;
    if ( a12 )
    {
      v75 = 0;
      v126 = 0;
      a3 = (__int64)a10;
      v76 = a11;
      while ( v75 < a6 )
      {
        v76[v75] = v32;
        *(_DWORD *)(a3 + 4LL * v75++) = 0;
        v126 = v75;
      }
    }
    else
    {
      *(_DWORD *)a11 = v32;
      *(_DWORD *)a10 = 0;
    }
    v24 = 0;
    v116 = 0;
    goto LABEL_170;
  }
  v34 = Src;
  if ( Src )
  {
    v78 = *(_DWORD *)Src;
    if ( *(_DWORD *)Src )
    {
      v79 = 12 * (v78 - 1) + 20;
      v80 = 8;
    }
    else
    {
      v80 = 8;
      v79 = 8;
    }
    if ( v79 > v134 )
    {
      if ( v78 )
        v80 = 12 * (v78 - 1) + 20;
      *v16 = v80;
      v24 = -1073741789;
      v116 = -1073741789;
      ExFreePoolWithTag(v34, 0);
      goto LABEL_169;
    }
    if ( v78 )
      v80 = 12 * (v78 - 1) + 20;
    memmove(v20, Src, v80);
    ExFreePoolWithTag(v34, 0);
  }
  else
  {
    if ( v134 < 0x14 )
    {
      *v16 = 20;
      v24 = -1073741789;
      v116 = -1073741789;
      goto LABEL_169;
    }
    *(_QWORD *)v20 = Src;
  }
  if ( a2 )
  {
    v24 = SeCaptureSid(a2, Object, 1, (__int64)&v142);
    v116 = v24;
    if ( v24 < 0 )
    {
      v142 = 0LL;
LABEL_169:
      v46 = a12;
LABEL_170:
      v51 = (int *)a11;
LABEL_146:
      v47 = v123;
      goto LABEL_85;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v36 = Token;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  IsOwner = SepTokenIsOwner((__int64)v36, v130);
  v118 = IsOwner;
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)v36 + 50) & 0x20) == 0 )
  {
    v81 = *((_QWORD *)v36 + 27);
    if ( v81 )
    {
      if ( (*(_DWORD *)(v81 + 32) & 0x20) != 0 )
      {
        v46 = a12;
        v51 = (int *)a11;
        if ( a12 )
        {
          v82 = 0;
          v126 = 0;
          v83 = a10;
          while ( v82 < a6 )
          {
            v51[v82] = -1073741790;
            v83[v82++] = 0;
            v126 = v82;
          }
        }
        else
        {
          *(_DWORD *)a11 = -1073741790;
          *(_DWORD *)a10 = 0;
        }
        v116 = 0;
        ExReleaseResourceLite(*((PERESOURCE *)v36 + 6));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v24 = 0;
        v33 = 1;
        goto LABEL_146;
      }
    }
  }
  v38 = v138;
  if ( !SepRmEnforceCap || (*v138 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
  {
    v39 = v130;
    goto LABEL_60;
  }
  v39 = v130;
  if ( (__int16)*v138 >= 0 )
  {
    v85 = *(ACL **)(v130 + 24);
  }
  else
  {
    v84 = *(unsigned int *)(v130 + 12);
    if ( !(_DWORD)v84 )
    {
      v139 = 0LL;
      goto LABEL_60;
    }
    v85 = (ACL *)(v130 + v84);
  }
  v139 = v85;
  if ( v85 )
  {
    ScopedPolicySid = (void *)SepGetScopedPolicySid(v85);
    if ( ScopedPolicySid )
    {
      Cap = SepRmReferenceFindCap(ScopedPolicySid);
      v88 = v140;
      if ( Cap < 0 )
        v88 = SepRmDefaultCap;
      v140 = v88;
      v120 = 1;
    }
    IsOwner = v118;
  }
LABEL_60:
  v40 = v161;
  if ( (v161 & 0x2060000) != 0 && IsOwner )
  {
    if ( (*v38 & 4) != 0 )
    {
      if ( (*v38 & 0x8000) != 0 )
      {
        v58 = *(unsigned int *)(v39 + 16);
        v59 = (_DWORD)v58 ? v58 + v39 : 0LL;
      }
      else
      {
        v59 = *(_QWORD *)(v39 + 32);
      }
    }
    else
    {
      v59 = 0LL;
    }
    if ( !(unsigned __int8)RtlpOwnerAcesPresent(0LL, v59) )
    {
      if ( (v40 & 0x2000000) != 0 )
        v60 = 393216;
      else
        v60 = v40 & 0x60000;
      v125 |= v60;
      v124 = v60;
      v40 &= 0xFFF9FFFF;
      v161 = v40;
    }
  }
  if ( v40 || v120 && !(_BYTE)v128 )
  {
    v41 = (PERESOURCE *)Token;
    v42 = v124;
  }
  else
  {
    v41 = (PERESOURCE *)Token;
    if ( (*((_DWORD *)Token + 50) & 0x2000) != 0 || (v42 = v124) == 0 )
    {
      v51 = (int *)a11;
      if ( a12 )
      {
        v66 = 0;
        v126 = 0;
        v67 = v125;
        v68 = a10;
        while ( v66 < a6 )
        {
          if ( v67 )
          {
            v51[v66] = 0;
            v68[v66] = v67;
          }
          else
          {
            v51[v66] = -1073741790;
            v68[v66] = 0;
          }
          v126 = ++v66;
        }
      }
      else
      {
        v64 = v125;
        v65 = a10;
        if ( v125 )
        {
          *(_DWORD *)a11 = 0;
          *v65 = v64;
        }
        else
        {
          *(_DWORD *)a11 = -1073741790;
          *v65 = 0;
        }
      }
      v116 = 0;
      v33 = 1;
      ExReleaseResourceLite(v41[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      SeReleaseSubjectContext(&SubjectContext);
      v24 = 0;
      v46 = a12;
      goto LABEL_146;
    }
  }
  if ( !a12 )
  {
    v43 = (unsigned int *)v155;
    v123 = (unsigned int *)v155;
    v44 = (int *)&v153;
    goto LABEL_65;
  }
  v89 = a6;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8LL * a6, 0x61476553u);
  v43 = PoolWithTag;
  v123 = PoolWithTag;
  if ( !PoolWithTag )
  {
    ExReleaseResourceLite(*((PERESOURCE *)v36 + 6));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    SeReleaseSubjectContext(&SubjectContext);
    v24 = -1073741670;
    goto LABEL_172;
  }
  v44 = (int *)&PoolWithTag[v89];
  v42 = v124;
LABEL_65:
  v144 = v42;
  SepAccessCheck(
    v39,
    v142,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)v41,
    v40,
    v141,
    a6,
    &v154,
    v125,
    v13,
    v43,
    0LL,
    v44,
    a12,
    v118,
    &v144,
    (__int64 *)&P,
    0LL,
    0LL);
  v46 = a12;
  if ( !SepRmEnforceCap || *v44 < 0 || !v120 )
  {
    v47 = v123;
    goto LABEL_67;
  }
  if ( a12 )
  {
    v91 = a6;
    v92 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a6, 0x61476553u);
    v132 = v92;
    if ( !v92 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v36 + 6));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      SeReleaseSubjectContext(&SubjectContext);
      v24 = -1073741670;
      v116 = -1073741670;
      v33 = 1;
      goto LABEL_170;
    }
    v136 = &v92[4 * v91];
  }
  else
  {
    v132 = &v152;
    v136 = &v156;
  }
  v93 = *v44;
  v128 = *v44;
  v47 = v123;
  v94 = *v123;
  v124 = *v123;
  LOBYTE(Src) = 0;
  if ( a6 )
  {
    v24 = SepCopyObjectTypeList(v141, a6, &v147);
    v116 = v24;
    if ( v24 < 0 )
    {
      v51 = (int *)a11;
      v33 = 1;
      goto LABEL_85;
    }
    v93 = v128;
    v94 = v124;
  }
  for ( i = 0LL; ; i = (unsigned int)((_DWORD)v138 + 1) )
  {
    LODWORD(v138) = i;
    if ( (unsigned int)i >= *(_DWORD *)(v140 + 60) )
      break;
    v96 = *(_QWORD *)(v140 + 8 * i + 64);
    if ( *(_QWORD *)(v96 + 24) )
    {
      v97 = P;
      if ( !P )
      {
        v98 = AuthzBasepInitializeResourceClaimsFromSacl((__int64)v139, &P);
        v99 = (unsigned __int8)Src;
        if ( v98 < 0 )
          v99 = 1;
        LODWORD(Src) = v99;
        v97 = P;
      }
      v100 = (_QWORD *)*((_QWORD *)Token + 137);
      if ( v100 )
        v101 = v100[75];
      else
        v101 = 0LL;
      if ( v100 )
        v102 = v100[73];
      else
        v102 = 0LL;
      if ( v100 )
        v103 = v100[74];
      else
        v103 = 0LL;
      if ( v100 )
        v104 = v100[72];
      else
        v104 = 0LL;
      v105 = AuthzBasepEvaluateAceCondition(
               (__int64)Token,
               *((_QWORD *)Token + 97),
               (__int64)v97,
               v104,
               v103,
               v102,
               v101,
               *(_DWORD **)(v96 + 24),
               *(_DWORD *)(v96 + 16),
               1,
               0,
               &v135);
      v116 = v105;
      v106 = v135;
      if ( v135 != 1 )
      {
        if ( v105 < 0 )
          goto LABEL_305;
        if ( SeTokenIsRestricted(Token) )
        {
          v107 = (_QWORD *)*((_QWORD *)Token + 137);
          if ( v107 )
            v108 = v107[75];
          else
            v108 = 0LL;
          if ( v107 )
            v109 = v107[73];
          else
            v109 = 0LL;
          if ( v107 )
            v110 = v107[74];
          else
            v110 = 0LL;
          if ( v107 )
            v111 = v107[72];
          else
            v111 = 0LL;
          v116 = AuthzBasepEvaluateAceCondition(
                   (__int64)Token,
                   *((_QWORD *)Token + 97),
                   (__int64)P,
                   v111,
                   v110,
                   v109,
                   v108,
                   *(_DWORD **)(v96 + 24),
                   *(_DWORD *)(v96 + 16),
                   1,
                   1,
                   &v135);
          if ( v116 < 0 )
          {
LABEL_305:
            ExReleaseResourceLite(*((PERESOURCE *)v36 + 6));
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            SeReleaseSubjectContext(&SubjectContext);
            v24 = v116;
            v33 = 1;
            goto LABEL_170;
          }
          v106 = v135;
        }
        if ( !(_BYTE)Src && v106 != 1 )
        {
          v93 = v128;
          v94 = v124;
          continue;
        }
      }
      v94 = v124;
    }
    v116 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
    if ( v116 < 0 )
      goto LABEL_305;
    if ( (*(_DWORD *)(v96 + 48) & 1) != 0 )
    {
      v112 = 0;
      if ( (v161 & 0x2000000) != 0 )
        v113 = v161;
      else
        v113 = v161 | v125;
    }
    else
    {
      v113 = v161;
      v112 = v125;
    }
    v114 = v147;
    SepAccessCheck(
      (__int64)SecurityDescriptor,
      v142,
      (__int64)SubjectContext.PrimaryToken,
      (__int64)Token,
      v113,
      v147,
      a6,
      &v154,
      v112,
      v13,
      (unsigned int *)v132,
      0LL,
      (int *)v136,
      v46,
      v118,
      &v144,
      (__int64 *)&P,
      0LL,
      0LL);
    v45 = v119;
    if ( v119 )
      v94 &= *(_DWORD *)v132;
    else
      v94 = *(_DWORD *)v132;
    v124 = v94;
    if ( v94 )
      v93 = *(_DWORD *)v136;
    else
      v93 = -1073741790;
    v128 = v93;
    v119 = 1;
    if ( v114 )
      SepMergeObjectTypeListAccesses(v141, v114, a6);
    if ( v93 < 0 )
      break;
  }
  *v44 = v93;
  v47 = v123;
  *v123 &= v94;
LABEL_67:
  ExpReleaseResourceForThreadLite(*((_QWORD *)v36 + 6), (ULONG_PTR)KeGetCurrentThread(), a3, v45);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  SeReleaseSubjectContext(&SubjectContext);
  v48 = v161;
  v49 = v161 & 0x2000000;
  if ( (v161 & 0x2000000) != 0 )
  {
    if ( !v117 || !BYTE5(v146) && !BYTE6(v146) )
    {
      if ( v46 )
        v61 = a6;
      else
        v61 = 0;
      SepConstrainByMandatory((unsigned int)&v148, v161, (_DWORD)v47, (_DWORD)v44, 0LL, v61);
    }
  }
  else if ( v117 && !BYTE6(v146) && !BYTE5(v146) )
  {
    v51 = (int *)a11;
    if ( v46 )
    {
      v69 = 0;
      v126 = 0;
      a3 = (__int64)a10;
      while ( v69 < a6 )
      {
        v51[v69] = -1073741790;
        *(_DWORD *)(a3 + 4LL * v69++) = 0;
        v126 = v69;
      }
    }
    else
    {
      *(_DWORD *)a11 = -1073741790;
      *(_DWORD *)a10 = 0;
    }
    v24 = 0;
    v116 = 0;
    v33 = 1;
    goto LABEL_85;
  }
  if ( v49 )
  {
    if ( v46 )
      v62 = a6;
    else
      v62 = 0;
    SepConstrainByTrust((unsigned int)&v137, v48, (_DWORD)v47, (_DWORD)v44, 0LL, v62, (__int64)v122);
  }
  if ( v46 )
  {
    v53 = 0LL;
    v54 = (char *)a10;
    a3 = (__int64)a11;
    v55 = a6;
    while ( 1 )
    {
      v126 = v53;
      if ( (unsigned int)v53 >= v55 )
        break;
      v56 = 4 * v53;
      *(_DWORD *)(v56 + a3) = v44[v53];
      *(_DWORD *)&v54[v56] = v47[v53];
      if ( SepRmEnforceCap && v119 && *(int *)(v56 + a3) >= 0 )
      {
        *(_DWORD *)(v56 + a3) = *(_DWORD *)&v136[v56];
        *(_DWORD *)&v54[v56] &= *(_DWORD *)((char *)v132 + v56);
      }
      v53 = v126 + 1;
    }
    v51 = (int *)a3;
  }
  else
  {
    v50 = *v44;
    v51 = (int *)a11;
    *(_DWORD *)a11 = v50;
    v52 = a10;
    *(_DWORD *)a10 = *v47;
    if ( SepRmEnforceCap && v119 && *v51 >= 0 )
    {
      *v51 = *(_DWORD *)v136;
      *v52 &= *(_DWORD *)v132;
    }
  }
  v24 = 0;
  v116 = 0;
  v33 = 1;
LABEL_85:
  if ( v130
    && Token
    && (v122[0] || !(_DWORD)v146 && (*((_DWORD *)Token + 50) & 0x4000) != 0 && v24 >= 0 && (*v51 < 0 || HIBYTE(v146))) )
  {
    v70 = KeGetCurrentThread();
    --v70->KernelApcDisable;
    v71 = Token;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
    if ( *v51 < 0 )
      v33 = 0;
    if ( v121 )
      LODWORD(v74) = v143;
    else
      v74 = *((_QWORD *)v71 + 138);
    SeLogAccessFailure((_DWORD)v71, v72, v73, v74, v130, v161 | v125, v33);
    ExReleaseResourceLite(*((PERESOURCE *)v71 + 6));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v24 = v116;
  }
  if ( v46 )
  {
    if ( v47 )
      ExFreePoolWithTag(v47, 0);
    if ( v132 )
      ExFreePoolWithTag(v132, 0);
  }
  if ( Token )
    ObfDereferenceObjectWithTag(Token, 0x746C6644u);
  if ( v141 )
    SeFreeCapturedObjectTypeList();
  if ( v142 )
  {
    LOBYTE(a3) = 1;
    SeReleaseSid(v142, v13, a3);
  }
  if ( v130 )
    SeReleaseSecurityDescriptor(v130, v13, 0LL);
  if ( v120 )
    SepRmDereferenceCap(v140);
  if ( v147 )
    ExFreePoolWithTag(v147, 0);
  v57 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(v57, 0);
  }
  return (unsigned int)v24;
}
