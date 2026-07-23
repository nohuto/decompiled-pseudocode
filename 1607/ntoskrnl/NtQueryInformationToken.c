/*
 * XREFs of NtQueryInformationToken @ 0x14040E6D0
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x140210748 (RtlGetAppContainerNamedObjectPath.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14000CF3C (AuthzBasepQuerySecurityAttributesToken.c)
 *     RtlSubAuthoritySid @ 0x14000D278 (RtlSubAuthoritySid.c)
 *     SepCopyTokenIntegrity @ 0x14000DC90 (SepCopyTokenIntegrity.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14000DF60 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepReferenceTokenByHandle @ 0x14000E3F0 (SepReferenceTokenByHandle.c)
 *     SepTokenPrivilegeCount @ 0x14000E6F0 (SepTokenPrivilegeCount.c)
 *     RtlSubAuthorityCountSid @ 0x14002CDC8 (RtlSubAuthorityCountSid.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1400807E0 (SepDeReferenceLogonSessionDirect.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     SepConvertTokenPrivileges @ 0x14010BF78 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x14010BFA0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SeQueryMandatoryPolicyToken @ 0x14010C0A4 (SeQueryMandatoryPolicyToken.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlCopySidAndAttributesArray @ 0x14040DD10 (RtlCopySidAndAttributesArray.c)
 *     RtlCopySid @ 0x14041154C (RtlCopySid.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     SepReferenceLogonSessionSilo @ 0x1404785A4 (SepReferenceLogonSessionSilo.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x1404B6B0C (AuthzBasepQueryClaimAttributesToken.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     SepCopyTokenAccessInformation @ 0x140518A04 (SepCopyTokenAccessInformation.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x140518DDC (SepGetTokenAccessInformationBufferSize.c)
 *     ExRaiseAccessViolation @ 0x1406B6180 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // r14
  __int64 v9; // rdi
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  PULONG v14; // rbx
  __int64 v15; // rcx
  NTSTATUS result; // eax
  struct _KTHREAD *v17; // rax
  PVOID v18; // rdi
  int v19; // r14d
  _DWORD *v20; // rcx
  struct _KTHREAD *v21; // rax
  PVOID v22; // r13
  unsigned int v23; // r15d
  char *v24; // rbx
  const void **v25; // r12
  unsigned int v26; // ecx
  unsigned int v27; // r14d
  unsigned int v28; // eax
  struct _KTHREAD *v29; // rcx
  __int16 v30; // ax
  unsigned int v31; // r15d
  struct _KTHREAD *v32; // rax
  unsigned int *v33; // rdi
  unsigned __int8 *v34; // rdx
  struct _ERESOURCE *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  struct _KTHREAD *v39; // rax
  char *v40; // rbx
  int v41; // edx
  __int64 v42; // rax
  struct _KTHREAD *v43; // rax
  unsigned int v44; // ecx
  struct _ERESOURCE *v45; // rcx
  struct _KTHREAD *v46; // rax
  unsigned int *v47; // r15
  __int64 v48; // rax
  unsigned int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned int v53; // r15d
  struct _KTHREAD *v54; // rax
  unsigned __int8 v55; // cl
  void *v56; // r8
  unsigned __int8 *v57; // rdx
  struct _KTHREAD *v58; // rax
  unsigned __int8 *Sid; // rdx
  unsigned int v60; // eax
  struct _KTHREAD *v61; // rax
  unsigned int v62; // ecx
  struct _KTHREAD *v63; // rax
  __int64 v64; // rax
  unsigned int v65; // r12d
  int *v66; // rdi
  struct _ERESOURCE *v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  char *v71; // rcx
  int v72; // edx
  struct _KTHREAD *v73; // rax
  PVOID v74; // r15
  bool v75; // r12
  unsigned int v76; // r14d
  unsigned int v77; // r13d
  __int64 v78; // rbx
  PUCHAR v79; // rax
  ULONG v80; // edx
  unsigned int v81; // ecx
  _DWORD *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  struct _KTHREAD *v86; // rax
  _DWORD *v87; // rcx
  unsigned int v88; // r12d
  struct _KTHREAD *v89; // rax
  __int64 v90; // rax
  ULONG v91; // r11d
  ULONG v92; // r8d
  struct _KTHREAD *v93; // rax
  int v94; // r11d
  unsigned int v95; // ecx
  unsigned int v96; // r10d
  __int64 v97; // rdx
  __int64 v98; // r8
  unsigned int v99; // r12d
  unsigned int v100; // r13d
  unsigned int v101; // ecx
  _SID_AND_ATTRIBUTES *v102; // r9
  _SID_AND_ATTRIBUTES *v103; // rdi
  __int64 v104; // rbx
  struct _KTHREAD *v105; // rax
  ULONG v106; // r8d
  _BOOL8 v107; // r10
  struct _KTHREAD *v108; // rax
  unsigned int v109; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v111; // eax
  ULONG v112; // r8d
  __int64 v113; // rdx
  __int64 v114; // r9
  struct _KTHREAD *v115; // rax
  void *v116; // r15
  char v117; // r12
  unsigned int TokenAccessInformationBufferSize; // eax
  struct _KTHREAD *v119; // rax
  unsigned int v120; // eax
  ULONG v121; // r8d
  __int64 v122; // rdx
  __int64 v123; // r9
  int v124; // ebx
  _DWORD *v125; // r14
  NTSTATUS v126; // r15d
  int v127; // r9d
  _QWORD *v128; // rbx
  NTSTATUS inserted; // ebx
  struct _KTHREAD *v130; // rax
  unsigned int v131; // edx
  unsigned int v132; // r9d
  __int64 v133; // r8
  __int64 v134; // r8
  unsigned int v135; // eax
  __int64 v136; // rdx
  __int64 v137; // r8
  __int64 v138; // rdx
  __int64 v139; // r9
  void *v140; // rcx
  struct _KTHREAD *v141; // rax
  struct _KTHREAD *v142; // rax
  PVOID v143; // rbx
  __int64 v144; // rax
  __int64 v145; // rdx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rdx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rdx
  __int64 v152; // r9
  struct _KTHREAD *v153; // rax
  PVOID v154; // rdi
  char v155; // dl
  PSID SidArea; // [rsp+20h] [rbp-188h]
  PULONG RemainingSidAreaSize; // [rsp+30h] [rbp-178h]
  unsigned __int8 v158[8]; // [rsp+80h] [rbp-128h] BYREF
  PVOID Object; // [rsp+88h] [rbp-120h] BYREF
  void *v160; // [rsp+90h] [rbp-118h] BYREF
  unsigned int v161; // [rsp+98h] [rbp-110h] BYREF
  PSID RemainingSidArea; // [rsp+A0h] [rbp-108h] BYREF
  NTSTATUS SecurityAttributesToken; // [rsp+A8h] [rbp-100h]
  int v164; // [rsp+ACh] [rbp-FCh] BYREF
  int v165; // [rsp+B0h] [rbp-F8h]
  int v166; // [rsp+B4h] [rbp-F4h] BYREF
  int v167; // [rsp+B8h] [rbp-F0h] BYREF
  int v168; // [rsp+BCh] [rbp-ECh] BYREF
  int v169; // [rsp+C0h] [rbp-E8h] BYREF
  int v170; // [rsp+C4h] [rbp-E4h] BYREF
  int v171; // [rsp+C8h] [rbp-E0h] BYREF
  int v172; // [rsp+CCh] [rbp-DCh] BYREF
  int v173; // [rsp+D0h] [rbp-D8h] BYREF
  int v174; // [rsp+D4h] [rbp-D4h] BYREF
  unsigned int v175; // [rsp+D8h] [rbp-D0h]
  int v176; // [rsp+DCh] [rbp-CCh]
  _QWORD *v177; // [rsp+E0h] [rbp-C8h] BYREF
  PVOID v178; // [rsp+E8h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+F0h] [rbp-B8h] BYREF
  int v180; // [rsp+F8h] [rbp-B0h] BYREF
  _QWORD v181[5]; // [rsp+100h] [rbp-A8h] BYREF
  PSID_AND_ATTRIBUTES Dest; // [rsp+128h] [rbp-80h]
  char *v183; // [rsp+130h] [rbp-78h]
  _SID_AND_ATTRIBUTES Src; // [rsp+138h] [rbp-70h] BYREF
  int v185; // [rsp+148h] [rbp-60h] BYREF
  __int64 v186; // [rsp+150h] [rbp-58h]
  __int64 v187; // [rsp+158h] [rbp-50h]
  int v188; // [rsp+160h] [rbp-48h]
  __int128 v189; // [rsp+168h] [rbp-40h]
  __int64 v190; // [rsp+178h] [rbp-30h]

  v5 = TokenInformationLength;
  v9 = 0LL;
  v190 = 0LL;
  Dest = 0LL;
  v164 = 0;
  v180 = 0;
  memset(v181, 0, sizeof(v181));
  v158[0] = 0;
  v160 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (_DWORD)v5 )
    {
      v11 = (unsigned __int64)TokenInformation;
      if ( ((unsigned __int8)TokenInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (unsigned __int64)TokenInformation + v5 - 1;
      if ( (unsigned __int64)TokenInformation > v12 || v12 >= 0x7FFFFFFF0000LL )
      {
        if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
          ExRaiseAccessViolation();
      }
      else
      {
        v13 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v11 = *(_BYTE *)v11;
          v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v11 != v13 );
      }
    }
    v14 = ReturnLength;
    v15 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
  }
  else
  {
    v14 = ReturnLength;
  }
  if ( TokenInformationClass != TokenUser )
  {
    switch ( TokenInformationClass )
    {
      case TokenGroups:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v33 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v111 = v33[31];
          v112 = 16 * (v111 - 2) + 24;
          if ( v111 > 1 )
          {
            v113 = *((_QWORD *)v33 + 19) + 16LL;
            v114 = v111 - 1;
            do
            {
              v112 += 4 * *(unsigned __int8 *)(*(_QWORD *)v113 + 1LL) + 8;
              v113 += 16LL;
              --v114;
            }
            while ( v114 );
          }
          *v14 = v112;
          if ( (unsigned int)v5 >= v112 )
          {
            *(_DWORD *)TokenInformation = v33[31] - 1;
            RtlCopySidAndAttributesArray(
              v33[31] - 1,
              (PSID_AND_ATTRIBUTES)(*((_QWORD *)v33 + 19) + 16LL),
              v112,
              (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
              (char *)TokenInformation + 16 * v33[31] - 8,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            goto LABEL_41;
          }
          goto LABEL_58;
        }
        return result;
      case TokenPrivileges:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result >= 0 )
        {
          v108 = KeGetCurrentThread();
          --v108->KernelApcDisable;
          v47 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v109 = SepTokenPrivilegeCount((__int64)v47);
          if ( v109 > 1 )
            LODWORD(v9) = 12 * (v109 - 1);
          *v14 = v9 + 16;
          if ( (unsigned int)v5 >= (int)v9 + 16 )
          {
            SepConvertTokenPrivileges((__int64)v47, TokenInformation);
            goto LABEL_101;
          }
          goto LABEL_63;
        }
        return result;
      case TokenOwner:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result >= 0 )
        {
          v61 = KeGetCurrentThread();
          --v61->KernelApcDisable;
          v33 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v62 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v33 + 19) + 16LL * v33[36]) + 1LL) + 16;
          *v14 = v62;
          if ( (unsigned int)v5 < v62 )
            goto LABEL_58;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v62 - 8, (char *)TokenInformation + 8, *(PSID *)(*((_QWORD *)v33 + 19) + 16LL * v33[36]));
          goto LABEL_41;
        }
        return result;
      case TokenPrimaryGroup:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result >= 0 )
        {
          v43 = KeGetCurrentThread();
          --v43->KernelApcDisable;
          v33 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v44 = 4 * *(unsigned __int8 *)(*((_QWORD *)v33 + 21) + 1LL) + 16;
          *v14 = v44;
          if ( (unsigned int)v5 < v44 )
            goto LABEL_58;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v44 - 8, (char *)TokenInformation + 8, *((PSID *)v33 + 21));
          goto LABEL_41;
        }
        return result;
      case TokenDefaultDacl:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result >= 0 )
        {
          v161 = 8;
          v46 = KeGetCurrentThread();
          --v46->KernelApcDisable;
          v47 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v48 = *((_QWORD *)v47 + 23);
          if ( v48 )
            v49 = *(unsigned __int16 *)(v48 + 2) + 8;
          else
            v49 = v161;
          *v14 = v49;
          if ( (unsigned int)v5 >= v49 )
          {
            v71 = (char *)TokenInformation + 8;
            if ( *((_QWORD *)v47 + 23) )
            {
              *(_QWORD *)TokenInformation = v71;
              memmove(v71, *((const void **)v47 + 23), *(unsigned __int16 *)(*((_QWORD *)v47 + 23) + 2LL));
            }
            else
            {
              *(_QWORD *)TokenInformation = 0LL;
            }
            goto LABEL_101;
          }
          goto LABEL_63;
        }
        return result;
      case TokenSource:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 0x10u, PreviousMode, &Object, v158, &v160);
        if ( result >= 0 )
        {
          *v14 = 16;
          if ( (unsigned int)v5 < 0x10 )
            goto LABEL_65;
          v20 = Object;
          *(_OWORD *)TokenInformation = *(_OWORD *)Object;
          goto LABEL_44;
        }
        return result;
      case TokenType:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_65;
          v20 = Object;
          *(_DWORD *)TokenInformation = *((_DWORD *)Object + 48);
          goto LABEL_44;
        }
        return result;
      case TokenImpersonationLevel:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result >= 0 )
        {
          v20 = Object;
          if ( *((_DWORD *)Object + 48) != 2 )
          {
            ObfDereferenceObject(Object);
            return -1073741821;
          }
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_66;
          *(_DWORD *)TokenInformation = v20[49];
          goto LABEL_44;
        }
        return result;
      case TokenStatistics:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result >= 0 )
        {
          *v14 = 56;
          if ( (unsigned int)v5 < 0x38 )
            goto LABEL_65;
          v39 = KeGetCurrentThread();
          --v39->KernelApcDisable;
          v40 = (char *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          *(_QWORD *)TokenInformation = *((_QWORD *)v40 + 2);
          *((_QWORD *)TokenInformation + 1) = *((_QWORD *)v40 + 3);
          *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v40 + 5);
          *((_DWORD *)TokenInformation + 6) = *((_DWORD *)v40 + 48);
          *((_DWORD *)TokenInformation + 7) = *((_DWORD *)v40 + 49);
          *((_DWORD *)TokenInformation + 8) = *((_DWORD *)v40 + 34);
          v41 = *((_DWORD *)v40 + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)v40 + 21) + 1LL) - 8;
          v165 = v41;
          v42 = *((_QWORD *)v40 + 23);
          if ( v42 )
          {
            v41 -= *(unsigned __int16 *)(v42 + 2);
            v165 = v41;
          }
          *((_DWORD *)TokenInformation + 9) = v41;
          *((_DWORD *)TokenInformation + 10) = *((_DWORD *)v40 + 31) - 1;
          *((_DWORD *)TokenInformation + 11) = SepTokenPrivilegeCount((__int64)v40);
          *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v40 + 7);
          goto LABEL_55;
        }
        return result;
      case TokenRestrictedSids:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result >= 0 )
        {
          v105 = KeGetCurrentThread();
          --v105->KernelApcDisable;
          v33 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v106 = 16 * v33[32] + 8;
          if ( v33[32] )
          {
            v138 = *((_QWORD *)v33 + 20);
            v139 = v33[32];
            do
            {
              v106 += 4 * *(unsigned __int8 *)(*(_QWORD *)v138 + 1LL) + 8;
              v138 += 16LL;
              --v139;
            }
            while ( v139 );
          }
          *v14 = v106;
          if ( (unsigned int)v5 >= v106 )
          {
            *(_DWORD *)TokenInformation = v33[32];
            RtlCopySidAndAttributesArray(
              v33[32],
              *((PSID_AND_ATTRIBUTES *)v33 + 20),
              v106,
              (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
              (char *)TokenInformation + 16 * v33[32] + 8,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            goto LABEL_41;
          }
          goto LABEL_58;
        }
        return result;
      case TokenSessionId:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_65;
          v17 = KeGetCurrentThread();
          --v17->KernelApcDisable;
          v18 = Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v19 = *((_DWORD *)v18 + 30);
          ExReleaseResourceLite(*((PERESOURCE *)v18 + 6));
          KeLeaveCriticalRegion();
          *(_DWORD *)TokenInformation = v19;
          *v14 = 4;
          v20 = v18;
          goto LABEL_44;
        }
        return result;
      case TokenGroupsAndPrivileges:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result >= 0 )
        {
          v93 = KeGetCurrentThread();
          --v93->KernelApcDisable;
          v47 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v164 = SepTokenPrivilegeCount((__int64)v47);
          v94 = 12 * v164;
          v95 = v47[31];
          v161 = 16 * v95;
          v96 = 16 * v95;
          if ( v95 )
          {
            v97 = *((_QWORD *)v47 + 19);
            v98 = v95;
            do
            {
              v96 += (4 * *(unsigned __int8 *)(*(_QWORD *)v97 + 1LL) + 15) & 0xFFFFFFF8;
              v97 += 16LL;
              --v98;
            }
            while ( v98 );
          }
          v99 = 16 * v47[32];
          v100 = v99;
          if ( v47[32] )
          {
            v136 = *((_QWORD *)v47 + 20);
            v137 = v47[32];
            do
            {
              v100 += (4 * *(unsigned __int8 *)(*(_QWORD *)v136 + 1LL) + 15) & 0xFFFFFFF8;
              v136 += 16LL;
              --v137;
            }
            while ( v137 );
          }
          v101 = v96 + v100 + v94 + 56;
          *v14 = v101;
          if ( (unsigned int)v5 >= v101 )
          {
            *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v47 + 3);
            *((_DWORD *)TokenInformation + 1) = v96;
            *(_DWORD *)TokenInformation = v47[31];
            v102 = (_SID_AND_ATTRIBUTES *)((char *)TokenInformation + 56);
            *((_QWORD *)TokenInformation + 1) = (char *)TokenInformation + 56;
            *((_DWORD *)TokenInformation + 5) = v100;
            *((_DWORD *)TokenInformation + 4) = v47[32];
            if ( v47[32] )
            {
              v103 = (_SID_AND_ATTRIBUTES *)((char *)v102 + ((v96 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
              *((_QWORD *)TokenInformation + 3) = v103;
            }
            else
            {
              *((_QWORD *)TokenInformation + 3) = 0LL;
              v103 = Dest;
            }
            *((_DWORD *)TokenInformation + 9) = v94;
            *((_DWORD *)TokenInformation + 8) = v164;
            v104 = (__int64)v102 + v100 + v96;
            *((_QWORD *)TokenInformation + 5) = v104;
            RtlCopySidAndAttributesArray(
              v47[31],
              *((PSID_AND_ATTRIBUTES *)v47 + 19),
              v96 - v161,
              v102,
              (char *)v102 + v161,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            if ( v103 )
              RtlCopySidAndAttributesArray(
                v47[32],
                *((PSID_AND_ATTRIBUTES *)v47 + 20),
                v100 - v99,
                v103,
                &v103[v99 / 0x10],
                &RemainingSidArea,
                (PULONG)&RemainingSidArea);
            SepConvertTokenPrivilegesToLuidAndAttributes(v47, v104);
            goto LABEL_101;
          }
          goto LABEL_63;
        }
        return result;
      case TokenSandBoxInert:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            return -1073741789;
          v20 = Object;
          *(_DWORD *)TokenInformation = (*((_DWORD *)Object + 50) & 0x40) != 0;
          goto LABEL_44;
        }
        return result;
      case TokenAuditPolicy:
        if ( !SeSinglePrivilegeCheck(SeSecurityPrivilege, PreviousMode) )
          return -1073741727;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result >= 0 )
        {
          *v14 = 31;
          if ( (unsigned int)v5 < 0x1F )
            goto LABEL_65;
          v141 = KeGetCurrentThread();
          --v141->KernelApcDisable;
          v40 = (char *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          *(_OWORD *)TokenInformation = *(_OWORD *)(v40 + 88);
          *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v40 + 13);
          *((_DWORD *)TokenInformation + 6) = *((_DWORD *)v40 + 28);
          *((_WORD *)TokenInformation + 14) = *((_WORD *)v40 + 58);
          *((_BYTE *)TokenInformation + 30) = v40[118];
LABEL_55:
          v35 = (struct _ERESOURCE *)*((_QWORD *)v40 + 6);
          goto LABEL_42;
        }
        return result;
      case TokenOrigin:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result >= 0 )
        {
          *v14 = 8;
          if ( (unsigned int)v5 < 8 )
            goto LABEL_65;
          v20 = Object;
          *(_QWORD *)TokenInformation = *((_QWORD *)Object + 28);
          goto LABEL_44;
        }
        return result;
      case TokenElevationType:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_65;
          v20 = Object;
          v72 = *(_DWORD *)(*((_QWORD *)Object + 27) + 32LL);
          if ( (v72 & 4) != 0 )
          {
            *(_DWORD *)TokenInformation = 3;
          }
          else
          {
            LOBYTE(v9) = (v72 & 2) != 0;
            *(_DWORD *)TokenInformation = v9 + 1;
          }
          goto LABEL_44;
        }
        return result;
      case TokenLinkedToken:
        v178 = 0LL;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result >= 0 )
        {
          *v14 = 8;
          if ( (_DWORD)v5 != 8 )
          {
            ObfDereferenceObject(Object);
            return -1073741820;
          }
          v124 = -(SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) != 0);
          v125 = Object;
          v126 = SepReferenceLogonSessionSilo(
                   *((_QWORD *)Object + 27) + 16LL,
                   *(_QWORD *)(*((_QWORD *)Object + 27) + 160LL),
                   &v177);
          if ( v126 >= 0 )
          {
            v185 = 48;
            v186 = 0LL;
            v188 = PreviousMode ? 0 : 512;
            v187 = 0LL;
            v189 = 0LL;
            v127 = v124 + 2;
            v128 = v177;
            v126 = SepDuplicateToken(v177[6], (unsigned int)&v185, 0, v127, 1, 0, 0, (__int64)&v178);
            SepDeReferenceLogonSessionDirect(v128);
            if ( v126 >= 0 )
            {
              inserted = ObInsertObject(v178, 0LL, 0xF01FFu, 0, 0LL, &Handle);
              if ( inserted >= 0 )
              {
                *(_QWORD *)TokenInformation = Handle;
                v20 = v125;
                goto LABEL_44;
              }
              v140 = v125;
              goto LABEL_218;
            }
          }
          ObfDereferenceObject(v125);
          return v126;
        }
        return result;
      case TokenElevation:
        *v14 = 4;
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result >= 0 )
        {
          v73 = KeGetCurrentThread();
          --v73->KernelApcDisable;
          v74 = Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v75 = (*((_QWORD *)v74 + 8) & 0x1120160684LL) != 0;
          v76 = 0;
          v77 = *((_DWORD *)v74 + 31);
          if ( !v77 )
          {
LABEL_118:
            ExReleaseResourceLite(*((PERESOURCE *)v74 + 6));
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v83, v84, v85);
            *(_DWORD *)TokenInformation = v75;
            goto LABEL_43;
          }
          while ( 1 )
          {
            if ( v75 )
              goto LABEL_118;
            v78 = *((_QWORD *)v74 + 19) + 16LL * v76;
            if ( (*(_DWORD *)(v78 + 8) & 0x30) == 0 )
            {
              if ( !*RtlSubAuthorityCountSid(*(PSID *)v78) )
              {
                v80 = 0;
LABEL_114:
                v81 = 0;
                v82 = &SepLUARids;
                while ( v80 != *v82 )
                {
                  ++v81;
                  ++v82;
                  if ( v81 >= 0x13 )
                    goto LABEL_117;
                }
                v75 = 1;
                goto LABEL_117;
              }
              v79 = RtlSubAuthorityCountSid(*(PSID *)v78);
              v80 = *RtlSubAuthoritySid(*(PSID *)v78, (unsigned int)*v79 - 1);
              if ( v80 <= 0x239 )
                goto LABEL_114;
            }
LABEL_117:
            if ( ++v76 >= v77 )
              goto LABEL_118;
          }
        }
        return result;
      case TokenHasRestrictions:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result < 0 )
          return result;
        *v14 = 1;
        if ( !(_DWORD)v5 )
          goto LABEL_65;
        v20 = Object;
        *(_BYTE *)TokenInformation = (*((_DWORD *)Object + 50) & 0x810) != 0;
        goto LABEL_44;
      case TokenAccessInformation:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result < 0 )
          return result;
        v115 = KeGetCurrentThread();
        --v115->KernelApcDisable;
        v33 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v116 = v160;
        v117 = v158[0];
        TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                             (_DWORD)v33,
                                             v158[0],
                                             (_DWORD)v160,
                                             (unsigned int)&v164,
                                             (__int64)&v174,
                                             (__int64)&v173,
                                             (__int64)&v172,
                                             (__int64)&v171,
                                             (__int64)&v170,
                                             (__int64)&v169,
                                             (__int64)&v168,
                                             (__int64)&v167,
                                             (__int64)&v166);
        *v14 = TokenAccessInformationBufferSize;
        if ( (unsigned int)v5 < TokenAccessInformationBufferSize )
          goto LABEL_58;
        SepCopyTokenAccessInformation(
          (int)v33,
          (int)TokenInformation,
          v5,
          v164,
          v174,
          v173,
          v172,
          v171,
          v170,
          v169,
          v168,
          v167,
          v166,
          v117,
          v116);
        goto LABEL_41;
      case TokenVirtualizationAllowed:
      case TokenVirtualizationEnabled:
      case TokenUIAccess:
      case TokenIsRestricted:
      case TokenPrivateNameSpace:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_65;
        v20 = Object;
        switch ( TokenInformationClass )
        {
          case TokenVirtualizationAllowed:
            LODWORD(v107) = (*((_DWORD *)Object + 50) >> 9) & 1;
            break;
          case TokenVirtualizationEnabled:
            LODWORD(v107) = (*((_DWORD *)Object + 50) >> 10) & 1;
            break;
          case TokenUIAccess:
            if ( (*((_DWORD *)Object + 50) & 0x1000) == 0 )
              goto LABEL_156;
LABEL_208:
            LODWORD(v107) = 1;
            break;
          case TokenIsRestricted:
            v107 = (*((_BYTE *)Object + 200) & 0x18) != 0;
            break;
          default:
            if ( (*((_DWORD *)Object + 50) & 0x10000) == 0 )
            {
LABEL_156:
              LODWORD(v107) = 0;
              break;
            }
            goto LABEL_208;
        }
        *(_DWORD *)TokenInformation = v107;
        break;
      case TokenIntegrityLevel:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result < 0 )
          return result;
        v58 = KeGetCurrentThread();
        --v58->KernelApcDisable;
        v33 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        SepCopyTokenIntegrity();
        Sid = (unsigned __int8 *)Src.Sid;
        v60 = 4 * *((unsigned __int8 *)Src.Sid + 1) + 24;
        *v14 = v60;
        if ( (unsigned int)v5 < v60 )
          goto LABEL_58;
        RtlCopySidAndAttributesArray(
          1u,
          &Src,
          4 * Sid[1] + 8,
          (PSID_AND_ATTRIBUTES)TokenInformation,
          (char *)TokenInformation + 16,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_41;
      case TokenMandatoryPolicy:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_65;
        inserted = SeQueryMandatoryPolicyToken((__int64)Object, TokenInformation);
        SecurityAttributesToken = inserted;
LABEL_218:
        ObfDereferenceObject(v140);
        return inserted;
      case TokenLogonSid:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result < 0 )
          return result;
        v130 = KeGetCurrentThread();
        --v130->KernelApcDisable;
        v47 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v131 = 0;
        v132 = v47[31];
        if ( !v132 )
          goto LABEL_205;
        v133 = *((_QWORD *)v47 + 19);
        while ( (*(_DWORD *)(v133 + 16LL * v131 + 8) & 0xC0000000) != 0xC0000000 )
        {
          if ( ++v131 >= v132 )
            goto LABEL_205;
        }
        v9 = *(_QWORD *)(v133 + 16LL * v131);
LABEL_205:
        if ( !v9 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)v47 + 6));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v148, v149, v150);
          ObfDereferenceObject(Object);
          return -1073741275;
        }
        v134 = 16LL * v131;
        v135 = 4 * *(unsigned __int8 *)(*(_QWORD *)(v134 + *((_QWORD *)v47 + 19)) + 1LL) + 32;
        *v14 = v135;
        if ( (unsigned int)v5 < v135 )
        {
LABEL_63:
          v45 = (struct _ERESOURCE *)*((_QWORD *)v47 + 6);
          goto LABEL_64;
        }
        *(_DWORD *)TokenInformation = 1;
        RtlCopySidAndAttributesArray(
          1u,
          (PSID_AND_ATTRIBUTES)(v134 + *((_QWORD *)v47 + 19)),
          4 * *(unsigned __int8 *)(*(_QWORD *)(v134 + *((_QWORD *)v47 + 19)) + 1LL) + 8,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 24,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
LABEL_101:
        v35 = (struct _ERESOURCE *)*((_QWORD *)v47 + 6);
LABEL_42:
        ExReleaseResourceLite(v35);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v36, v37, v38);
        goto LABEL_43;
      case TokenIsAppContainer:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result < 0 )
          return result;
        *v14 = 4;
        v20 = Object;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_66;
        *(_DWORD *)TokenInformation = (*((_DWORD *)Object + 50) >> 14) & 1;
        goto LABEL_44;
      case TokenCapabilities:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result < 0 )
          return result;
        v119 = KeGetCurrentThread();
        --v119->KernelApcDisable;
        v33 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v120 = v33[200];
        v121 = 16 * v120 + 8;
        if ( v120 )
        {
          v122 = *((_QWORD *)v33 + 99);
          v123 = v120;
          do
          {
            v121 += 4 * *(unsigned __int8 *)(*(_QWORD *)v122 + 1LL) + 8;
            v122 += 16LL;
            --v123;
          }
          while ( v123 );
        }
        *v14 = v121;
        if ( (unsigned int)v5 < v121 )
          goto LABEL_58;
        *(_DWORD *)TokenInformation = v33[200];
        RtlCopySidAndAttributesArray(
          v33[200],
          *((PSID_AND_ATTRIBUTES *)v33 + 99),
          v121,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 16 * v33[200] + 8,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_41;
      case TokenAppContainerSid:
        v31 = 8;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result < 0 )
          return result;
        v32 = KeGetCurrentThread();
        --v32->KernelApcDisable;
        v33 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v34 = (unsigned __int8 *)*((_QWORD *)v33 + 98);
        if ( v34 )
          v31 = 4 * v34[1] + 16;
        *v14 = v31;
        if ( (unsigned int)v5 < v31 )
          goto LABEL_58;
        if ( v34 )
          v34 = (unsigned __int8 *)TokenInformation + 8;
        *(_QWORD *)TokenInformation = v34;
        if ( v34 )
          RtlCopySid(v31 - 8, v34, *((PSID *)v33 + 98));
        goto LABEL_41;
      case TokenAppContainerNumber:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_65;
        v142 = KeGetCurrentThread();
        --v142->KernelApcDisable;
        v143 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v144 = *((_QWORD *)v143 + 135);
        if ( v144 )
          LODWORD(v9) = *(_DWORD *)(v144 + 40);
        ExReleaseResourceLite(*((PERESOURCE *)v143 + 6));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v145, v146, v147);
        *(_DWORD *)TokenInformation = v9;
        goto LABEL_43;
      case TokenUserClaimAttributes:
      case TokenDeviceClaimAttributes:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result < 0 )
          return result;
        v63 = KeGetCurrentThread();
        --v63->KernelApcDisable;
        v47 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v64 = *((_QWORD *)v47 + 137);
        if ( v64
          && (*(_QWORD *)(v64 + 576) || TokenInformationClass != TokenUserClaimAttributes)
          && (*(_QWORD *)(v64 + 584) || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          v66 = *(int **)(v64 + 584);
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v66 = *(int **)(v64 + 576);
          AuthzBasepQueryClaimAttributesToken(v66, 0LL, 0LL, &v161);
          v65 = v161;
        }
        else
        {
          v65 = 16;
          v180 = 0;
          v181[1] = v181;
          v181[0] = v181;
          LODWORD(v181[2]) = 0;
          v181[4] = &v181[3];
          v181[3] = &v181[3];
          v66 = &v180;
        }
        *v14 = v65;
        if ( (unsigned int)v5 < v65 )
          goto LABEL_63;
        SecurityAttributesToken = AuthzBasepQueryClaimAttributesToken(v66, TokenInformation, (unsigned int)v5, &v161);
        goto LABEL_95;
      case TokenDeviceGroups:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result < 0 )
          return result;
        v89 = KeGetCurrentThread();
        --v89->KernelApcDisable;
        v47 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v90 = *((_QWORD *)v47 + 137);
        if ( v90 && (v91 = *(_DWORD *)v90) != 0 )
        {
          v92 = 16 * (v91 - 1) + 24;
        }
        else
        {
          v91 = 0;
          v92 = 24;
        }
        if ( v91 )
        {
          v151 = *(_QWORD *)(v90 + 8);
          v152 = v91;
          do
          {
            v92 += 4 * *(unsigned __int8 *)(*(_QWORD *)v151 + 1LL) + 8;
            v151 += 16LL;
            --v152;
          }
          while ( v152 );
        }
        *v14 = v92;
        if ( (unsigned int)v5 < v92 )
          goto LABEL_63;
        *(_QWORD *)TokenInformation = 0LL;
        *((_QWORD *)TokenInformation + 1) = 0LL;
        *((_QWORD *)TokenInformation + 2) = 0LL;
        *(_DWORD *)TokenInformation = v91;
        if ( v91 )
          RtlCopySidAndAttributesArray(
            v91,
            *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)v47 + 137) + 8LL),
            v92,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + 16 * v91 + 8,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        goto LABEL_101;
      case TokenSecurityAttributes:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result < 0 )
          return result;
        v86 = KeGetCurrentThread();
        --v86->KernelApcDisable;
        v47 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v87 = (_DWORD *)*((_QWORD *)v47 + 97);
        if ( v87 )
        {
          LODWORD(SidArea) = 0;
          AuthzBasepQuerySecurityAttributesToken(v87, 0LL, 0, 0LL, (size_t)SidArea, &v161);
          v88 = v161;
        }
        else
        {
          v88 = 16;
        }
        *v14 = v88;
        if ( (unsigned int)v5 < v88 )
          goto LABEL_63;
        LODWORD(SidArea) = v5;
        SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(
                                    *((_DWORD **)v47 + 97),
                                    0LL,
                                    0,
                                    TokenInformation,
                                    (size_t)SidArea,
                                    &v161);
LABEL_95:
        v67 = (struct _ERESOURCE *)*((_QWORD *)v47 + 6);
        goto LABEL_96;
      case TokenProcessTrustLevel:
        v53 = 8;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result < 0 )
          return result;
        v54 = KeGetCurrentThread();
        --v54->KernelApcDisable;
        v33 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v55 = v158[0];
        v56 = v160;
        if ( v158[0] )
          v57 = (unsigned __int8 *)v160;
        else
          v57 = (unsigned __int8 *)*((_QWORD *)v33 + 138);
        if ( v57 )
          v53 = 4 * v57[1] + 16;
        *v14 = v53;
        if ( (unsigned int)v5 < v53 )
        {
LABEL_58:
          v45 = (struct _ERESOURCE *)*((_QWORD *)v33 + 6);
          goto LABEL_64;
        }
        if ( v57 )
          v57 = (unsigned __int8 *)TokenInformation + 8;
        *(_QWORD *)TokenInformation = v57;
        if ( v57 )
        {
          if ( !v55 )
            v56 = (void *)*((_QWORD *)v33 + 138);
          RtlCopySid(v53 - 8, v57, v56);
        }
LABEL_41:
        v35 = (struct _ERESOURCE *)*((_QWORD *)v33 + 6);
        goto LABEL_42;
      case TokenSingletonAttributes:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
        if ( result < 0 )
          return result;
        v153 = KeGetCurrentThread();
        --v153->KernelApcDisable;
        v154 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        LODWORD(RemainingSidAreaSize) = v5;
        SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                                    (__int64)v154,
                                    v155,
                                    0LL,
                                    0,
                                    1,
                                    TokenInformation,
                                    (size_t)RemainingSidAreaSize,
                                    v14);
        v67 = (struct _ERESOURCE *)*((_QWORD *)v154 + 6);
LABEL_96:
        ExReleaseResourceLite(v67);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v68, v69, v70);
        ObfDereferenceObject(Object);
        return SecurityAttributesToken;
      default:
        return -1073741821;
    }
    goto LABEL_44;
  }
  result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v158, &v160);
  if ( result < 0 )
    return result;
  v21 = KeGetCurrentThread();
  --v21->KernelApcDisable;
  v22 = Object;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  v23 = 4 * *(unsigned __int8 *)(**((_QWORD **)v22 + 19) + 1LL) + 24;
  *v14 = v23;
  if ( (unsigned int)v5 >= v23 )
  {
    v24 = (char *)TokenInformation + 16;
    v25 = (const void **)*((_QWORD *)v22 + 19);
    v176 = 0;
    v183 = (char *)TokenInformation + 16;
    v175 = v23;
    while ( !(_DWORD)v9 )
    {
      v26 = 4 * *((unsigned __int8 *)*v25 + 1) + 8;
      v27 = (4 * *((unsigned __int8 *)*v25 + 1) + 11) & 0xFFFFFFFC;
      if ( v26 > v23 )
        goto LABEL_30;
      v23 -= v27;
      v175 = v23;
      *(_QWORD *)TokenInformation = v24;
      *((_DWORD *)TokenInformation + 2) = *((_DWORD *)v25 + 2);
      v28 = 4 * *((unsigned __int8 *)*v25 + 1) + 8;
      if ( v28 <= v26 )
        memmove(v24, *v25, v28);
      v24 += v27;
      v183 = v24;
      LODWORD(v9) = 1;
      v176 = 1;
    }
    RemainingSidArea = (PSID)__PAIR64__(HIDWORD(v24), v23);
LABEL_30:
    ExReleaseResourceLite(*((PERESOURCE *)v22 + 6));
    v29 = KeGetCurrentThread();
    v30 = v29->KernelApcDisable + 1;
    v29->KernelApcDisable = v30;
    if ( !v30
      && ($2B8565053CDC740D4E4887693DD8AC9E *)v29->ApcState.ApcListHead[0].Flink != &v29->152
      && !v29->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v29);
    }
LABEL_43:
    v20 = Object;
LABEL_44:
    ObfDereferenceObject(v20);
    return 0;
  }
  v45 = (struct _ERESOURCE *)*((_QWORD *)v22 + 6);
LABEL_64:
  ExReleaseResourceLite(v45);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v50, v51, v52);
LABEL_65:
  v20 = Object;
LABEL_66:
  ObfDereferenceObject(v20);
  return -1073741789;
}
