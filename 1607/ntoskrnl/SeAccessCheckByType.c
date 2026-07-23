/*
 * XREFs of SeAccessCheckByType @ 0x14005FA70
 * Callers:
 *     NtAccessCheck @ 0x14009DA84 (NtAccessCheck.c)
 *     NtAccessCheckByType @ 0x1400A5804 (NtAccessCheckByType.c)
 *     NtAccessCheckByTypeResultList @ 0x140219690 (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     SeCaptureObjectTypeList @ 0x140060ACC (SeCaptureObjectTypeList.c)
 *     SepTokenIsOwner @ 0x140060CE0 (SepTokenIsOwner.c)
 *     SeLogAccessFailure @ 0x140061150 (SeLogAccessFailure.c)
 *     SepMandatoryIntegrityCheck @ 0x1400631D0 (SepMandatoryIntegrityCheck.c)
 *     SepAccessCheck @ 0x140063630 (SepAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     SeTokenIsRestricted @ 0x14007F7C0 (SeTokenIsRestricted.c)
 *     SePrivilegePolicyCheck @ 0x14008D030 (SePrivilegePolicyCheck.c)
 *     SepTrustLevelCheck @ 0x14008D160 (SepTrustLevelCheck.c)
 *     RtlpOwnerAcesPresent @ 0x14008D270 (RtlpOwnerAcesPresent.c)
 *     SepConstrainByTrust @ 0x14008D36C (SepConstrainByTrust.c)
 *     SepConstrainByMandatory @ 0x14008D3A8 (SepConstrainByMandatory.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400A3100 (SepReferenceTokenUsingPseudoHandle.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400AAE9C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14010C930 (AuthzBasepFreeSecurityAttributesList.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SeFreeCapturedObjectTypeList @ 0x1402197D4 (SeFreeCapturedObjectTypeList.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402198D0 (SepBuildCapeSecurityDescriptor.c)
 *     SepCopyObjectTypeList @ 0x140219970 (SepCopyObjectTypeList.c)
 *     SepGetScopedPolicySid @ 0x140219A24 (SepGetScopedPolicySid.c)
 *     SepMergeObjectTypeListAccesses @ 0x140219A64 (SepMergeObjectTypeListAccesses.c)
 *     SepRmDereferenceCap @ 0x140219A90 (SepRmDereferenceCap.c)
 *     SepRmReferenceFindCap @ 0x14021B49C (SepRmReferenceFindCap.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     SeCaptureSecurityDescriptor @ 0x14041FD80 (SeCaptureSecurityDescriptor.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     SeReleaseSecurityDescriptor @ 0x14044CA54 (SeReleaseSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     SeCaptureSid @ 0x14047807C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140478424 (SeReleaseSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeAccessCheckByType(
        int a1,
        void *a2,
        void *a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        __int128 *a7,
        volatile void *Address,
        _DWORD *a9,
        volatile void *a10,
        volatile void *a11,
        char a12)
{
  int v13; // esi
  __int64 v14; // r8
  int v15; // ecx
  unsigned __int8 v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  SIZE_T v20; // rsi
  __int64 v21; // rcx
  _DWORD *v22; // r12
  __int64 result; // rax
  SIZE_T v24; // rdi
  int v25; // r15d
  NTSTATUS v26; // edi
  char v27; // r14
  __int16 v28; // dx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  char v34; // cl
  int v35; // edx
  PVOID v36; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v38; // r14
  char IsOwner; // cl
  _WORD *v40; // rsi
  __int64 v41; // r12
  int v42; // edi
  int v43; // r15d
  PERESOURCE *v44; // r13
  int v45; // eax
  _BYTE *v46; // rcx
  int *v47; // rsi
  char v48; // r15
  _DWORD *v49; // r12
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // r14d
  int v54; // edi
  int v55; // eax
  int *v56; // rsi
  _DWORD *v57; // rcx
  __int64 v58; // rax
  char *v59; // rdx
  unsigned int v60; // r10d
  __int64 v61; // rcx
  PVOID v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rdx
  int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // eax
  int v68; // eax
  unsigned int v69; // ecx
  struct _KTHREAD *v70; // rax
  PVOID v71; // rdi
  int v72; // edx
  int v73; // r8d
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  _DWORD *v78; // rax
  unsigned int v79; // ecx
  _DWORD *v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  unsigned int v84; // ecx
  _DWORD *v85; // r9
  int v86; // eax
  int v87; // edx
  size_t v88; // r8
  unsigned int v89; // ecx
  PERESOURCE v90; // rax
  unsigned int v91; // ecx
  _DWORD *v92; // r8
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  ACL *v97; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v100; // rdx
  __int64 v101; // rsi
  _BYTE *PoolWithTag; // rax
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdi
  char *v107; // rax
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // r9
  int v111; // r10d
  int v112; // edi
  __int64 v113; // rax
  __int64 v114; // r12
  int v115; // r10d
  int v116; // eax
  int v117; // ecx
  _QWORD *v118; // rax
  __int64 v119; // r8
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r9
  int v123; // eax
  int v124; // edi
  _QWORD *v125; // rax
  __int64 v126; // r8
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r9
  int v130; // edx
  int v131; // ecx
  PVOID v132; // r12
  __int64 v133; // rdx
  __int64 v134; // r8
  __int64 v135; // r9
  int Object; // [rsp+20h] [rbp-208h]
  char v137; // [rsp+A0h] [rbp-188h]
  int v138; // [rsp+A4h] [rbp-184h]
  char v139; // [rsp+A8h] [rbp-180h]
  char v140; // [rsp+AAh] [rbp-17Eh]
  char v141; // [rsp+ABh] [rbp-17Dh]
  char v142; // [rsp+ACh] [rbp-17Ch]
  char v143; // [rsp+ADh] [rbp-17Bh] BYREF
  char v144[2]; // [rsp+AEh] [rbp-17Ah] BYREF
  _DWORD *v145; // [rsp+B0h] [rbp-178h]
  int v146; // [rsp+B8h] [rbp-170h]
  unsigned int v147; // [rsp+BCh] [rbp-16Ch]
  PVOID Token; // [rsp+C0h] [rbp-168h] BYREF
  int v149; // [rsp+C8h] [rbp-160h] BYREF
  int v150; // [rsp+CCh] [rbp-15Ch]
  char v151; // [rsp+D1h] [rbp-157h]
  __int64 v152; // [rsp+D8h] [rbp-150h] BYREF
  PVOID Src; // [rsp+E0h] [rbp-148h] BYREF
  PVOID v154; // [rsp+E8h] [rbp-140h]
  unsigned int v155; // [rsp+F0h] [rbp-138h]
  int v156; // [rsp+F4h] [rbp-134h] BYREF
  int v157; // [rsp+F8h] [rbp-130h] BYREF
  _WORD *v158; // [rsp+100h] [rbp-128h]
  int *v159; // [rsp+108h] [rbp-120h]
  PVOID P; // [rsp+110h] [rbp-118h] BYREF
  ACL *v161; // [rsp+118h] [rbp-110h]
  __int64 v162; // [rsp+120h] [rbp-108h] BYREF
  __int64 v163; // [rsp+128h] [rbp-100h] BYREF
  __int64 v164; // [rsp+130h] [rbp-F8h]
  __int64 v165; // [rsp+138h] [rbp-F0h] BYREF
  int v166; // [rsp+140h] [rbp-E8h] BYREF
  __int64 v167; // [rsp+144h] [rbp-E4h]
  __int64 v168; // [rsp+14Ch] [rbp-DCh]
  PVOID v169; // [rsp+158h] [rbp-D0h] BYREF
  int v170; // [rsp+160h] [rbp-C8h] BYREF
  __int64 v171; // [rsp+164h] [rbp-C4h]
  unsigned int v172; // [rsp+16Ch] [rbp-BCh]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+170h] [rbp-B8h] BYREF
  char v174; // [rsp+190h] [rbp-98h] BYREF
  char v175; // [rsp+194h] [rbp-94h] BYREF
  _BYTE v176[4]; // [rsp+198h] [rbp-90h] BYREF
  char v177; // [rsp+19Ch] [rbp-8Ch] BYREF
  PVOID v178; // [rsp+1B0h] [rbp-78h] BYREF
  __int128 v179; // [rsp+1B8h] [rbp-70h] BYREF
  _BYTE SecurityDescriptor[96]; // [rsp+1C8h] [rbp-60h] BYREF
  int v183; // [rsp+248h] [rbp+20h] BYREF

  v183 = a4;
  v13 = a1;
  v145 = 0LL;
  v154 = 0LL;
  v159 = 0LL;
  Token = 0LL;
  v152 = 0LL;
  v163 = 0LL;
  v149 = 0;
  v146 = 0;
  v162 = 0LL;
  Src = 0LL;
  v155 = 0;
  v147 = 0;
  v170 = 0;
  v171 = 0LL;
  v172 = 0;
  v139 = 0;
  P = 0LL;
  v166 = 0;
  v167 = 0LL;
  v168 = 0LL;
  v161 = 0LL;
  memset(SecurityDescriptor, 0, 0x28uLL);
  v164 = 0LL;
  v142 = 0;
  v141 = 0;
  LOBYTE(v15) = 0;
  v150 = v15;
  v151 = 0;
  v169 = 0LL;
  v143 = 0;
  v144[0] = 0;
  v165 = 0LL;
  v157 = -1;
  v16 = KeGetCurrentThread()->gap0[10];
  v137 = v16;
  if ( !v16 )
  {
    *(_DWORD *)a11 = 0;
    *(_DWORD *)a10 = v183;
    return 0LL;
  }
  if ( a12 )
  {
    if ( !a6 )
    {
      result = 3221225485LL;
      v22 = Address;
      goto LABEL_21;
    }
    v24 = 4LL * a6;
    ProbeForWrite(a11, v24, 4u);
    ProbeForWrite(a10, v24, 4u);
  }
  else
  {
    v17 = (__int64)a11;
    if ( (unsigned __int64)a11 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v17 = *(_DWORD *)v17;
    v18 = (__int64)a10;
    if ( (unsigned __int64)a10 >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v18 = *(_DWORD *)v18;
  }
  v19 = (__int64)a9;
  if ( (unsigned __int64)a9 >= 0x7FFFFFFF0000LL )
    v19 = 0x7FFFFFFF0000LL;
  v20 = *(unsigned int *)v19;
  v155 = *(_DWORD *)v19;
  v21 = (__int64)a9;
  if ( (unsigned __int64)a9 >= 0x7FFFFFFF0000LL )
    v21 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v21 = *(_DWORD *)v21;
  v22 = Address;
  ProbeForWrite(Address, v20, 4u);
  if ( v22 && (unsigned int)v20 >= 0x14 )
    *v22 = 0;
  if ( ((unsigned __int8)a7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v179 = *a7;
  result = 0LL;
  v13 = a1;
LABEL_21:
  if ( (int)result < 0 )
    return result;
  v25 = v183;
  if ( (v183 & 0xF0000000) != 0 )
  {
    v26 = -1073741594;
    goto LABEL_173;
  }
  v143 = 0;
  v165 = 0LL;
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    v26 = ObReferenceObjectByHandle(a3, 8u, (POBJECT_TYPE)SeTokenObjectType, v16, &v178, 0LL);
    Token = v178;
LABEL_25:
    v138 = v26;
    goto LABEL_26;
  }
  v68 = SepReferenceTokenUsingPseudoHandle(a3, &Token, &v143, &v165);
  v26 = v68;
  if ( v68 >= 0 )
    goto LABEL_25;
  v138 = v68;
LABEL_26:
  if ( v26 < 0 )
  {
    Token = 0LL;
    goto LABEL_174;
  }
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    if ( *((_DWORD *)Token + 48) == 2 )
    {
      if ( *((int *)Token + 49) >= 1 )
        goto LABEL_30;
      v26 = -1073741659;
    }
    else
    {
      v26 = -1073741732;
    }
LABEL_173:
    v138 = v26;
    goto LABEL_174;
  }
LABEL_30:
  v26 = SeCaptureObjectTypeList(a5, a6, v16, &v162);
  v138 = v26;
  if ( v26 < 0 )
  {
LABEL_174:
    v27 = 1;
    goto LABEL_170;
  }
  v27 = 1;
  v26 = SeCaptureSecurityDescriptor(v13, v16, 1, 0, (__int64)&v152);
  v138 = v26;
  if ( v26 < 0 )
    goto LABEL_170;
  if ( !v152 )
    goto LABEL_187;
  v158 = (_WORD *)(v152 + 2);
  v14 = 0x8000LL;
  v28 = *(_WORD *)(v152 + 2) & 0x8000;
  if ( v28 )
  {
    v29 = *(unsigned int *)(v152 + 4);
    if ( !(_DWORD)v29 )
      goto LABEL_187;
    v30 = v152 + v29;
  }
  else
  {
    v30 = *(_QWORD *)(v152 + 8);
  }
  if ( !v30 )
    goto LABEL_187;
  if ( v28 )
  {
    v31 = *(unsigned int *)(v152 + 8);
    if ( (_DWORD)v31 )
    {
      v32 = v152 + v31;
      goto LABEL_40;
    }
LABEL_187:
    v26 = -1073741703;
    v138 = -1073741703;
    goto LABEL_170;
  }
  v32 = *(_QWORD *)(v152 + 16);
LABEL_40:
  if ( !v32 )
    goto LABEL_187;
  if ( v143 )
    LODWORD(v33) = v165;
  else
    v33 = *((_QWORD *)Token + 138);
  Object = v33;
  v26 = SepTrustLevelCheck(&v157, v152, 0LL, Token);
  v138 = v26;
  if ( v26 < 0 )
    goto LABEL_170;
  if ( (v157 & v25 & 0xFDFFFFFF) != (v25 & 0xFDFFFFFF) )
  {
    v35 = -1073741790;
    v144[0] = 1;
LABEL_51:
    v34 = v139;
    goto LABEL_52;
  }
  v26 = SepMandatoryIntegrityCheck((unsigned int)&v179, v152, 0, (_DWORD)Token, 1, (__int64)&v170);
  v138 = v26;
  if ( v26 < 0 )
  {
LABEL_170:
    v48 = a12;
LABEL_171:
    v56 = (int *)a11;
LABEL_168:
    v49 = v145;
    goto LABEL_86;
  }
  v34 = 0;
  v139 = 0;
  if ( HIDWORD(v171) && (v170 & v25 & 0xFDFFFFFF) != (v25 & 0xFDFFFFFF) )
  {
    v35 = -1073741790;
  }
  else
  {
    v35 = 0;
    if ( (v25 & 0x2000000) == 0 )
      goto LABEL_49;
  }
  if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 && v172 <= 0x2000 )
  {
    v34 = 1;
    v139 = 1;
  }
  else
  {
    v34 = 0;
  }
LABEL_49:
  if ( v35 >= 0 || v34 )
  {
    v35 = SePrivilegePolicyCheck((unsigned int)&v183, (unsigned int)&v149, 0, (_DWORD)Token, (__int64)&Src, v16);
    if ( !v183 )
    {
      v86 = (unsigned __int8)v150;
      if ( v149 )
        v86 = 1;
      v150 = v86;
    }
    goto LABEL_51;
  }
LABEL_52:
  if ( v35 < 0 && !v34 )
  {
    v48 = a12;
    if ( a12 )
    {
      v84 = 0;
      v147 = 0;
      v14 = (__int64)a10;
      v85 = a11;
      while ( v84 < a6 )
      {
        v85[v84] = v35;
        *(_DWORD *)(v14 + 4LL * v84++) = 0;
        v147 = v84;
      }
    }
    else
    {
      *(_DWORD *)a11 = v35;
      *(_DWORD *)a10 = 0;
    }
    v26 = 0;
    v138 = 0;
    goto LABEL_171;
  }
  v36 = Src;
  if ( Src )
  {
    v87 = *(_DWORD *)Src;
    v88 = 8LL;
    if ( *(_DWORD *)Src )
      v89 = 12 * (v87 - 1) + 20;
    else
      v89 = 8;
    if ( v89 > v155 )
    {
      if ( v87 )
        LODWORD(v88) = 12 * (v87 - 1) + 20;
      *a9 = v88;
      v26 = -1073741789;
      v138 = -1073741789;
      ExFreePoolWithTag(v36, 0);
      goto LABEL_170;
    }
    if ( v87 )
      v88 = (unsigned int)(12 * (v87 - 1) + 20);
    memmove(v22, Src, v88);
    ExFreePoolWithTag(v36, 0);
  }
  else
  {
    if ( v155 < 0x14 )
    {
      *a9 = 20;
      v26 = -1073741789;
      v138 = -1073741789;
      goto LABEL_170;
    }
    *(_QWORD *)v22 = Src;
  }
  if ( a2 )
  {
    v26 = SeCaptureSid(a2, Object, 1, (__int64)&v163);
    v138 = v26;
    if ( v26 < 0 )
    {
      v163 = 0LL;
      goto LABEL_170;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v38 = (PERESOURCE *)Token;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  IsOwner = SepTokenIsOwner(v38, v152);
  v140 = IsOwner;
  if ( !SepAllowAccessUponLogoff && ((_DWORD)v38[25] & 0x20) == 0 )
  {
    v90 = v38[27];
    if ( v90 )
    {
      if ( ((__int64)v90->SharedWaiters & 0x20) != 0 )
      {
        v48 = a12;
        v56 = (int *)a11;
        if ( a12 )
        {
          v91 = 0;
          v147 = 0;
          v92 = a10;
          while ( v91 < a6 )
          {
            v56[v91] = -1073741790;
            v92[v91++] = 0;
            v147 = v91;
          }
        }
        else
        {
          *(_DWORD *)a11 = -1073741790;
          *(_DWORD *)a10 = 0;
        }
        v138 = 0;
        ExReleaseResourceLite(v38[6]);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v93, v94, v95);
        SeReleaseSubjectContext(&SubjectContext);
        v26 = 0;
        v27 = 1;
        goto LABEL_168;
      }
    }
  }
  v40 = v158;
  if ( !SepRmEnforceCap || (*v158 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
  {
    v41 = v152;
    goto LABEL_60;
  }
  v41 = v152;
  if ( (__int16)*v158 >= 0 )
  {
    v97 = *(ACL **)(v152 + 24);
  }
  else
  {
    v96 = *(unsigned int *)(v152 + 12);
    if ( !(_DWORD)v96 )
    {
      v161 = 0LL;
      goto LABEL_60;
    }
    v97 = (ACL *)(v152 + v96);
  }
  v161 = v97;
  if ( v97 )
  {
    ScopedPolicySid = (void *)SepGetScopedPolicySid(v97);
    if ( ScopedPolicySid )
    {
      Cap = SepRmReferenceFindCap(ScopedPolicySid);
      v100 = v164;
      if ( Cap < 0 )
        v100 = SepRmDefaultCap;
      v164 = v100;
      v142 = 1;
    }
    IsOwner = v140;
  }
LABEL_60:
  v42 = v183;
  if ( (v183 & 0x2060000) != 0
    && IsOwner
    && ((*v40 & 4) == 0
      ? (v64 = 0LL)
      : (*v40 & 0x8000) == 0
      ? (v64 = *(_QWORD *)(v41 + 32))
      : (v63 = *(unsigned int *)(v41 + 16), !(_DWORD)v63)
      ? (v64 = 0LL)
      : (v64 = v41 + v63),
        !(unsigned __int8)RtlpOwnerAcesPresent(0LL, v64)) )
  {
    if ( (v42 & 0x2000000) != 0 )
      v65 = 393216;
    else
      v65 = v42 & 0x60000;
    v43 = v65 | v149;
    v149 |= v65;
    v146 = v65;
    v42 &= 0xFFF9FFFF;
    v183 = v42;
  }
  else
  {
    v43 = v149;
  }
  if ( v42 || v142 && !(_BYTE)v150 )
  {
    LODWORD(v44) = (_DWORD)Token;
    v45 = v146;
  }
  else
  {
    v44 = (PERESOURCE *)Token;
    if ( (*((_DWORD *)Token + 50) & 0x2000) != 0 || (v45 = v146) == 0 )
    {
      v56 = (int *)a11;
      if ( a12 )
      {
        v79 = 0;
        v147 = 0;
        v80 = a10;
        while ( v79 < a6 )
        {
          if ( v43 )
          {
            v56[v79] = 0;
            v80[v79] = v43;
          }
          else
          {
            v56[v79] = -1073741790;
            v80[v79] = 0;
          }
          v147 = ++v79;
        }
      }
      else
      {
        v78 = a10;
        if ( v43 )
        {
          *(_DWORD *)a11 = 0;
          *v78 = v43;
        }
        else
        {
          *(_DWORD *)a11 = -1073741790;
          *v78 = 0;
        }
      }
      v138 = 0;
      v27 = 1;
      ExReleaseResourceLite(v44[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v81, v82, v83);
      SeReleaseSubjectContext(&SubjectContext);
      v26 = 0;
      v16 = v137;
      v48 = a12;
      goto LABEL_168;
    }
  }
  if ( !a12 )
  {
    v46 = v176;
    v145 = v176;
    v47 = (int *)&v175;
    goto LABEL_66;
  }
  v101 = a6;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a6, 0x61476553u);
  v46 = PoolWithTag;
  v145 = PoolWithTag;
  if ( !PoolWithTag )
  {
    ExReleaseResourceLite(v38[6]);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v103, v104, v105);
    SeReleaseSubjectContext(&SubjectContext);
    v26 = -1073741670;
    v16 = v137;
    goto LABEL_173;
  }
  v47 = (int *)&PoolWithTag[4 * v101];
  v45 = v146;
LABEL_66:
  v166 = v45;
  SepAccessCheck(
    v41,
    v163,
    SubjectContext.PrimaryToken,
    (_DWORD)v44,
    v42,
    v162,
    a6,
    (__int64)&v179,
    v43,
    v137,
    (__int64)v46,
    0LL,
    (__int64)v47,
    a12,
    v140,
    (__int64)&v166,
    (__int64)&P,
    0LL,
    0LL);
  v48 = a12;
  if ( !SepRmEnforceCap || *v47 < 0 || !v142 )
  {
    v16 = v137;
    v49 = v145;
    goto LABEL_68;
  }
  if ( a12 )
  {
    v106 = a6;
    v107 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * a6, 0x61476553u);
    v154 = v107;
    if ( !v107 )
    {
      ExReleaseResourceLite(v38[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v108, v109, v110);
      SeReleaseSubjectContext(&SubjectContext);
      v26 = -1073741670;
      v138 = -1073741670;
      v16 = v137;
      v27 = 1;
      goto LABEL_171;
    }
    v159 = (int *)&v107[4 * v106];
  }
  else
  {
    v154 = &v177;
    v159 = (int *)&v174;
  }
  v111 = *v47;
  v150 = *v47;
  v49 = v145;
  v112 = *v145;
  v146 = *v145;
  LOBYTE(Src) = 0;
  if ( a6 )
  {
    v26 = SepCopyObjectTypeList(v162, a6, &v169);
    v138 = v26;
    if ( v26 < 0 )
    {
      v16 = v137;
      v56 = (int *)a11;
      v27 = 1;
      goto LABEL_86;
    }
    v111 = v150;
    v112 = v146;
  }
  v113 = 0LL;
  v16 = v137;
  while ( 1 )
  {
    LODWORD(v158) = v113;
    if ( (unsigned int)v113 >= *(_DWORD *)(v164 + 60) )
      break;
    v114 = *(_QWORD *)(v164 + 8 * v113 + 64);
    if ( *(_QWORD *)(v114 + 24) )
    {
      v115 = (int)P;
      if ( !P )
      {
        v116 = AuthzBasepInitializeResourceClaimsFromSacl(v161, &P);
        v117 = (unsigned __int8)Src;
        if ( v116 < 0 )
          v117 = 1;
        LODWORD(Src) = v117;
        v115 = (int)P;
      }
      v118 = (_QWORD *)*((_QWORD *)Token + 137);
      if ( v118 )
        v119 = v118[75];
      else
        v119 = 0LL;
      if ( v118 )
        v120 = v118[73];
      else
        v120 = 0LL;
      if ( v118 )
        v121 = v118[74];
      else
        v121 = 0LL;
      if ( v118 )
        v122 = v118[72];
      else
        LODWORD(v122) = 0;
      v123 = AuthzBasepEvaluateAceCondition(
               (_DWORD)Token,
               *((_QWORD *)Token + 97),
               v115,
               v122,
               v121,
               v120,
               v119,
               *(_QWORD *)(v114 + 24),
               *(_DWORD *)(v114 + 16),
               1,
               0,
               (__int64)&v156);
      v138 = v123;
      v124 = v156;
      if ( v156 != 1 )
      {
        if ( v123 < 0 )
          goto LABEL_305;
        if ( SeTokenIsRestricted(Token) )
        {
          v125 = (_QWORD *)*((_QWORD *)Token + 137);
          if ( v125 )
            v126 = v125[75];
          else
            v126 = 0LL;
          if ( v125 )
            v127 = v125[73];
          else
            v127 = 0LL;
          if ( v125 )
            v128 = v125[74];
          else
            v128 = 0LL;
          if ( v125 )
            v129 = v125[72];
          else
            LODWORD(v129) = 0;
          v138 = AuthzBasepEvaluateAceCondition(
                   (_DWORD)Token,
                   *((_QWORD *)Token + 97),
                   (_DWORD)P,
                   v129,
                   v128,
                   v127,
                   v126,
                   *(_QWORD *)(v114 + 24),
                   *(_DWORD *)(v114 + 16),
                   1,
                   1,
                   (__int64)&v156);
          if ( v138 < 0 )
          {
LABEL_305:
            ExReleaseResourceLite(v38[6]);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v133, v134, v135);
            SeReleaseSubjectContext(&SubjectContext);
            v26 = v138;
            v27 = 1;
            goto LABEL_171;
          }
          v124 = v156;
        }
        if ( !(_BYTE)Src && v124 != 1 )
        {
          v111 = v150;
          v112 = v146;
          goto LABEL_304;
        }
      }
      v112 = v146;
    }
    v138 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
    if ( v138 < 0 )
      goto LABEL_305;
    if ( (*(_DWORD *)(v114 + 48) & 1) != 0 )
    {
      v130 = 0;
      if ( (v183 & 0x2000000) != 0 )
        v131 = v183;
      else
        v131 = v183 | v149;
    }
    else
    {
      v131 = v183;
      v130 = v149;
    }
    v132 = v169;
    SepAccessCheck(
      (unsigned int)SecurityDescriptor,
      v163,
      SubjectContext.PrimaryToken,
      (_DWORD)Token,
      v131,
      (__int64)v169,
      a6,
      (__int64)&v179,
      v130,
      v137,
      (__int64)v154,
      0LL,
      (__int64)v159,
      v48,
      v140,
      (__int64)&v166,
      (__int64)&P,
      0LL,
      0LL);
    if ( v141 )
      v112 &= *(_DWORD *)v154;
    else
      v112 = *(_DWORD *)v154;
    v146 = v112;
    if ( v112 )
      v111 = *v159;
    else
      v111 = -1073741790;
    v150 = v111;
    v141 = 1;
    if ( v132 )
      SepMergeObjectTypeListAccesses(v162, v132, a6);
    if ( v111 < 0 )
      break;
LABEL_304:
    v113 = (unsigned int)((_DWORD)v158 + 1);
  }
  *v47 = v111;
  v49 = v145;
  *v145 &= v112;
LABEL_68:
  ExpReleaseResourceForThreadLite((ULONG_PTR)v38[6], (ULONG_PTR)KeGetCurrentThread());
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v50, v51, v52);
  SeReleaseSubjectContext(&SubjectContext);
  v53 = v183;
  v54 = v183 & 0x2000000;
  if ( (v183 & 0x2000000) != 0 )
  {
    if ( !v139 || !BYTE5(v168) && !BYTE6(v168) )
    {
      if ( v48 )
        v66 = a6;
      else
        v66 = 0;
      SepConstrainByMandatory((unsigned int)&v170, v183, (_DWORD)v49, (_DWORD)v47, 0LL, v66);
    }
  }
  else if ( v139 && !BYTE6(v168) && !BYTE5(v168) )
  {
    v56 = (int *)a11;
    if ( v48 )
    {
      v69 = 0;
      v147 = 0;
      v14 = (__int64)a10;
      while ( v69 < a6 )
      {
        v56[v69] = -1073741790;
        *(_DWORD *)(v14 + 4LL * v69++) = 0;
        v147 = v69;
      }
    }
    else
    {
      *(_DWORD *)a11 = -1073741790;
      *(_DWORD *)a10 = 0;
    }
    v26 = 0;
    v138 = 0;
    v27 = 1;
    goto LABEL_86;
  }
  if ( v54 )
  {
    if ( v48 )
      v67 = a6;
    else
      v67 = 0;
    SepConstrainByTrust((unsigned int)&v157, v53, (_DWORD)v49, (_DWORD)v47, 0LL, v67, (__int64)v144);
  }
  if ( v48 )
  {
    v58 = 0LL;
    v59 = (char *)a10;
    v14 = (__int64)a11;
    v60 = a6;
    while ( 1 )
    {
      v147 = v58;
      if ( (unsigned int)v58 >= v60 )
        break;
      v61 = 4 * v58;
      *(_DWORD *)(v61 + v14) = v47[v58];
      *(_DWORD *)&v59[v61] = v49[v58];
      if ( SepRmEnforceCap && v141 && *(int *)(v61 + v14) >= 0 )
      {
        *(_DWORD *)(v61 + v14) = v159[(unsigned __int64)v61 / 4];
        *(_DWORD *)&v59[v61] &= *(_DWORD *)((char *)v154 + v61);
      }
      v58 = v147 + 1;
    }
    v56 = (int *)v14;
  }
  else
  {
    v55 = *v47;
    v56 = (int *)a11;
    *(_DWORD *)a11 = v55;
    v57 = a10;
    *(_DWORD *)a10 = *v49;
    if ( SepRmEnforceCap && v141 && *v56 >= 0 )
    {
      *v56 = *v159;
      *v57 &= *(_DWORD *)v154;
    }
  }
  v26 = 0;
  v138 = 0;
  v27 = 1;
LABEL_86:
  if ( v152
    && Token
    && (v144[0] || !(_DWORD)v168 && (*((_DWORD *)Token + 50) & 0x4000) != 0 && v26 >= 0 && (*v56 < 0 || HIBYTE(v168))) )
  {
    v70 = KeGetCurrentThread();
    --v70->KernelApcDisable;
    v71 = Token;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
    if ( *v56 < 0 )
      v27 = 0;
    if ( v143 )
      LODWORD(v74) = v165;
    else
      v74 = *((_QWORD *)v71 + 138);
    SeLogAccessFailure((_DWORD)v71, v72, v73, v74, v152, v183 | v149, v27);
    ExReleaseResourceLite(*((PERESOURCE *)v71 + 6));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v75, v76, v77);
    v26 = v138;
  }
  if ( v48 )
  {
    if ( v49 )
      ExFreePoolWithTag(v49, 0);
    if ( v154 )
      ExFreePoolWithTag(v154, 0);
  }
  if ( Token )
    ObfDereferenceObjectWithTag(Token, 0x746C6644u);
  if ( v162 )
    SeFreeCapturedObjectTypeList();
  if ( v163 )
  {
    LOBYTE(v14) = 1;
    SeReleaseSid(v163, v16, v14);
  }
  if ( v152 )
    SeReleaseSecurityDescriptor(v152, v16, 0LL);
  if ( v142 )
    SepRmDereferenceCap(v164);
  if ( v169 )
    ExFreePoolWithTag(v169, 0);
  v62 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(v62, 0);
  }
  return (unsigned int)v26;
}
