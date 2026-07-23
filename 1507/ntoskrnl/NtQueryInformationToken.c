/*
 * XREFs of NtQueryInformationToken @ 0x140482E10
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1402453EC (RtlGetAppContainerNamedObjectPath.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14002C088 (AuthzBasepQuerySecurityAttributesToken.c)
 *     SepCopyTokenIntegrity @ 0x14002D93C (SepCopyTokenIntegrity.c)
 *     RtlSubAuthorityCountSid @ 0x140044DF4 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x140044DFC (RtlSubAuthoritySid.c)
 *     SepReferenceTokenByHandle @ 0x140045160 (SepReferenceTokenByHandle.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SepConvertTokenPrivileges @ 0x14010D9E4 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x14010DA00 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SeQueryMandatoryPolicyToken @ 0x14010DD44 (SeQueryMandatoryPolicyToken.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 *     RtlCopySid @ 0x140438C64 (RtlCopySid.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     SepReferenceLogonSessionSilo @ 0x14046E22C (SepReferenceLogonSessionSilo.c)
 *     RtlCopySidAndAttributesArray @ 0x1404709F0 (RtlCopySidAndAttributesArray.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     SepCopyTokenAccessInformation @ 0x140526F7C (SepCopyTokenAccessInformation.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x14052745C (SepGetTokenAccessInformationBufferSize.c)
 *     SepDeReferenceLogonSession @ 0x14052E368 (SepDeReferenceLogonSession.c)
 *     SeQuerySessionIdToken @ 0x14052FB1C (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x14053CEC0 (AuthzBasepQueryClaimAttributesToken.c)
 *     ExRaiseAccessViolation @ 0x1406F7890 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // r12
  __int64 v9; // rbx
  KPROCESSOR_MODE PreviousMode; // r13
  unsigned __int64 v11; // rcx
  ULONG64 v12; // rdx
  unsigned __int64 v13; // rdx
  PULONG v14; // rdi
  _DWORD *v15; // rcx
  NTSTATUS result; // eax
  _DWORD *v17; // rcx
  struct _KTHREAD *v18; // rax
  PVOID v19; // r13
  unsigned int v20; // r14d
  char *v21; // rdi
  const void **v22; // r12
  unsigned int v23; // ecx
  unsigned int v24; // r15d
  unsigned int v25; // eax
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  struct _KTHREAD *v28; // rax
  PVOID v29; // rdi
  int v30; // edx
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rcx
  struct _ERESOURCE *v34; // rcx
  unsigned int v35; // r15d
  struct _KTHREAD *v36; // rax
  unsigned int *v37; // rbx
  unsigned __int8 *v38; // rdx
  __int16 v39; // ax
  struct _KTHREAD *v40; // rax
  unsigned __int8 *Sid; // rdx
  unsigned int v42; // eax
  _DWORD *v43; // rbx
  struct _KTHREAD *v44; // rax
  unsigned int v45; // ecx
  struct _ERESOURCE *v46; // rcx
  struct _KTHREAD *v47; // rcx
  __int16 v48; // ax
  struct _ERESOURCE *v49; // rcx
  struct _KTHREAD *v50; // rcx
  __int16 v51; // ax
  struct _KTHREAD *v52; // rax
  PVOID v53; // r14
  __int64 v54; // rax
  unsigned int v55; // eax
  char *v56; // rcx
  struct _ERESOURCE *v57; // rcx
  unsigned int v58; // r15d
  struct _KTHREAD *v59; // rax
  unsigned __int8 v60; // cl
  void *v61; // r8
  unsigned __int8 *v62; // rdx
  struct _KTHREAD *v63; // rcx
  __int16 v64; // ax
  struct _KTHREAD *v65; // rax
  PVOID v66; // r15
  __int64 v67; // rax
  unsigned int v68; // r14d
  int *v69; // r13
  struct _KTHREAD *v70; // rcx
  __int16 v71; // ax
  struct _KTHREAD *v72; // rax
  unsigned int v73; // ecx
  int v74; // edx
  struct _KTHREAD *v75; // rax
  PVOID v76; // r13
  bool v77; // r15
  unsigned int v78; // r14d
  unsigned int v79; // r12d
  __int64 v80; // rdi
  PUCHAR v81; // rax
  ULONG v82; // edx
  unsigned int v83; // ecx
  _DWORD *v84; // rax
  struct _KTHREAD *v85; // rcx
  __int16 v86; // ax
  struct _KTHREAD *v87; // rax
  ULONG v88; // r8d
  struct _KTHREAD *v89; // rax
  __int64 v90; // rax
  ULONG v91; // r11d
  ULONG v92; // r8d
  struct _KTHREAD *v93; // rax
  unsigned int *v94; // r13
  int v95; // r11d
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // r10
  __int64 v99; // r10
  int v100; // edx
  unsigned int v101; // eax
  unsigned int v102; // r8d
  __int64 v103; // rdx
  __int64 v104; // r9
  unsigned int v105; // r14d
  unsigned int v106; // r15d
  unsigned int v107; // ecx
  _SID_AND_ATTRIBUTES *v108; // r9
  _SID_AND_ATTRIBUTES *v109; // rdi
  __int64 v110; // rbx
  __int16 v111; // ax
  struct _KTHREAD *v112; // rax
  PVOID v113; // r15
  _DWORD *v114; // rcx
  unsigned int v115; // r14d
  struct _KTHREAD *v116; // rax
  unsigned int v117; // ecx
  __int64 v118; // rdx
  __int64 v119; // rax
  __int64 v120; // r10
  __int64 v121; // r10
  int v122; // r10d
  struct _KTHREAD *v123; // rcx
  __int16 v124; // ax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v126; // eax
  ULONG v127; // r8d
  __int64 v128; // rdx
  __int64 v129; // r9
  struct _KTHREAD *v130; // rax
  void *v131; // r14
  char v132; // r15
  unsigned int TokenAccessInformationBufferSize; // eax
  struct _KTHREAD *v134; // rax
  unsigned int v135; // eax
  ULONG v136; // r8d
  __int64 v137; // rdx
  __int64 v138; // r9
  int v139; // r15d
  PVOID v140; // rdi
  NTSTATUS v141; // r14d
  _QWORD *v142; // rdi
  signed __int64 v143; // rax
  signed __int64 v144; // rtt
  NTSTATUS v145; // edi
  NTSTATUS inserted; // ebx
  struct _KTHREAD *v147; // rax
  unsigned int v148; // edx
  unsigned int v149; // r9d
  __int64 v150; // r8
  __int64 v151; // r8
  unsigned int v152; // eax
  __int64 v153; // rdx
  __int64 v154; // r9
  __int64 v155; // rdx
  __int64 v156; // r9
  PVOID v157; // rcx
  struct _KTHREAD *v158; // rax
  struct _KTHREAD *v159; // rax
  PVOID v160; // rdi
  __int64 v161; // rax
  struct _KTHREAD *v162; // rcx
  __int16 v163; // ax
  struct _KTHREAD *v164; // rcx
  __int16 v165; // ax
  __int64 v166; // rdx
  __int64 v167; // r9
  PSID SidArea; // [rsp+20h] [rbp-1A8h]
  unsigned __int8 v169[8]; // [rsp+80h] [rbp-148h] BYREF
  PVOID Object; // [rsp+88h] [rbp-140h] BYREF
  void *v171; // [rsp+90h] [rbp-138h] BYREF
  int v172; // [rsp+98h] [rbp-130h] BYREF
  PSID RemainingSidArea; // [rsp+A0h] [rbp-128h] BYREF
  NTSTATUS v174; // [rsp+A8h] [rbp-120h]
  unsigned int v175; // [rsp+ACh] [rbp-11Ch]
  int v176; // [rsp+B0h] [rbp-118h] BYREF
  int v177; // [rsp+B4h] [rbp-114h] BYREF
  ULONG SessionId; // [rsp+B8h] [rbp-110h] BYREF
  int v179; // [rsp+BCh] [rbp-10Ch] BYREF
  int v180; // [rsp+C0h] [rbp-108h] BYREF
  int v181; // [rsp+C4h] [rbp-104h] BYREF
  unsigned int v182; // [rsp+C8h] [rbp-100h]
  int v183; // [rsp+CCh] [rbp-FCh] BYREF
  int v184; // [rsp+D0h] [rbp-F8h]
  int v185; // [rsp+D4h] [rbp-F4h]
  int v186; // [rsp+D8h] [rbp-F0h]
  int v187; // [rsp+DCh] [rbp-ECh] BYREF
  int v188; // [rsp+E0h] [rbp-E8h] BYREF
  int v189; // [rsp+E4h] [rbp-E4h] BYREF
  int v190; // [rsp+E8h] [rbp-E0h] BYREF
  PVOID v191; // [rsp+F0h] [rbp-D8h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp-D0h] BYREF
  int v193; // [rsp+100h] [rbp-C8h] BYREF
  _QWORD v194[5]; // [rsp+108h] [rbp-C0h] BYREF
  char *v195; // [rsp+130h] [rbp-98h]
  __int64 v196; // [rsp+138h] [rbp-90h] BYREF
  PSID_AND_ATTRIBUTES Dest; // [rsp+140h] [rbp-88h]
  _QWORD *v198; // [rsp+148h] [rbp-80h] BYREF
  _SID_AND_ATTRIBUTES Src; // [rsp+150h] [rbp-78h] BYREF
  int v200; // [rsp+160h] [rbp-68h] BYREF
  __int64 v201; // [rsp+168h] [rbp-60h]
  __int64 v202; // [rsp+170h] [rbp-58h]
  int v203; // [rsp+178h] [rbp-50h]
  __int128 v204; // [rsp+180h] [rbp-48h]
  __int64 v205; // [rsp+190h] [rbp-38h]

  v5 = TokenInformationLength;
  v9 = 0LL;
  v205 = 0LL;
  Dest = 0LL;
  v176 = 0;
  v193 = 0;
  memset(v194, 0, sizeof(v194));
  v169[0] = 0;
  v171 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (_DWORD)v5 )
    {
      v11 = (unsigned __int64)TokenInformation;
      if ( ((unsigned __int8)TokenInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (ULONG64)TokenInformation + v5 - 1;
      if ( (unsigned __int64)TokenInformation > v12 || v12 >= MmUserProbeAddress )
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
    v15 = ReturnLength;
    if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
      v15 = (_DWORD *)MmUserProbeAddress;
    *v15 = *v15;
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
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v37 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v126 = v37[31];
          v127 = 16 * (v126 - 2) + 24;
          if ( v126 > 1 )
          {
            v128 = *((_QWORD *)v37 + 19) + 16LL;
            v129 = v126 - 1;
            do
            {
              v127 += 4 * *(unsigned __int8 *)(*(_QWORD *)v128 + 1LL) + 8;
              v128 += 16LL;
              --v129;
            }
            while ( v129 );
          }
          *v14 = v127;
          if ( (unsigned int)v5 >= v127 )
          {
            *(_DWORD *)TokenInformation = v37[31] - 1;
            RtlCopySidAndAttributesArray(
              v37[31] - 1,
              (PSID_AND_ATTRIBUTES)(*((_QWORD *)v37 + 19) + 16LL),
              v127,
              (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
              (char *)TokenInformation + 16 * v37[31] - 8,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            goto LABEL_52;
          }
          goto LABEL_132;
        }
        return result;
      case TokenPrivileges:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result >= 0 )
        {
          v116 = KeGetCurrentThread();
          --v116->KernelApcDisable;
          v53 = Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v117 = 0;
          v118 = *((_QWORD *)v53 + 8);
          v119 = 18LL;
          v120 = 1LL;
          do
          {
            if ( (v118 & v120) != 0 )
              ++v117;
            v121 = __ROL8__(v120, 1);
            if ( (v118 & v121) != 0 )
              ++v117;
            v120 = __ROL8__(v121, 1);
            --v119;
          }
          while ( v119 );
          if ( v117 > 1 )
            LODWORD(v9) = 12 * (v117 - 1);
          *v14 = v9 + 16;
          if ( (unsigned int)v5 >= (int)v9 + 16 )
          {
            SepConvertTokenPrivileges((__int64)v53, TokenInformation);
            goto LABEL_82;
          }
          v49 = (struct _ERESOURCE *)*((_QWORD *)v53 + 6);
          goto LABEL_70;
        }
        return result;
      case TokenOwner:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result >= 0 )
        {
          v72 = KeGetCurrentThread();
          --v72->KernelApcDisable;
          v37 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v73 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v37 + 19) + 16LL * v37[36]) + 1LL) + 16;
          *v14 = v73;
          if ( (unsigned int)v5 < v73 )
            goto LABEL_132;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v73 - 8, (char *)TokenInformation + 8, *(PSID *)(*((_QWORD *)v37 + 19) + 16LL * v37[36]));
          goto LABEL_95;
        }
        return result;
      case TokenPrimaryGroup:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result >= 0 )
        {
          v44 = KeGetCurrentThread();
          --v44->KernelApcDisable;
          v37 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v45 = 4 * *(unsigned __int8 *)(*((_QWORD *)v37 + 21) + 1LL) + 16;
          *v14 = v45;
          if ( (unsigned int)v5 < v45 )
            goto LABEL_65;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v45 - 8, (char *)TokenInformation + 8, *((PSID *)v37 + 21));
          goto LABEL_52;
        }
        return result;
      case TokenDefaultDacl:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result >= 0 )
        {
          v172 = 8;
          v52 = KeGetCurrentThread();
          --v52->KernelApcDisable;
          v53 = Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v54 = *((_QWORD *)v53 + 23);
          if ( v54 )
            v55 = *(unsigned __int16 *)(v54 + 2) + 8;
          else
            v55 = v172;
          *v14 = v55;
          if ( (unsigned int)v5 < v55 )
          {
            v46 = (struct _ERESOURCE *)*((_QWORD *)v53 + 6);
            goto LABEL_66;
          }
          v56 = (char *)TokenInformation + 8;
          if ( *((_QWORD *)v53 + 23) )
          {
            *(_QWORD *)TokenInformation = v56;
            memmove(v56, *((const void **)v53 + 23), *(unsigned __int16 *)(*((_QWORD *)v53 + 23) + 2LL));
          }
          else
          {
            *(_QWORD *)TokenInformation = 0LL;
          }
          goto LABEL_82;
        }
        return result;
      case TokenSource:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 0x10u, PreviousMode, &Object, v169, &v171);
        if ( result >= 0 )
        {
          *v14 = 16;
          if ( (unsigned int)v5 < 0x10 )
            goto LABEL_72;
          v17 = Object;
          *(_OWORD *)TokenInformation = *(_OWORD *)Object;
          goto LABEL_32;
        }
        return result;
      case TokenType:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_72;
          v17 = Object;
          *(_DWORD *)TokenInformation = *((_DWORD *)Object + 48);
          goto LABEL_32;
        }
        return result;
      case TokenImpersonationLevel:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result >= 0 )
        {
          v17 = Object;
          if ( *((_DWORD *)Object + 48) != 2 )
          {
            ObfDereferenceObject(Object);
            return -1073741821;
          }
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_73;
          *(_DWORD *)TokenInformation = v17[49];
          goto LABEL_32;
        }
        return result;
      case TokenStatistics:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result >= 0 )
        {
          *v14 = 56;
          if ( (unsigned int)v5 < 0x38 )
            goto LABEL_72;
          v28 = KeGetCurrentThread();
          --v28->KernelApcDisable;
          v29 = Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          *(_QWORD *)TokenInformation = *((_QWORD *)v29 + 2);
          *((_QWORD *)TokenInformation + 1) = *((_QWORD *)v29 + 3);
          *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v29 + 5);
          *((_DWORD *)TokenInformation + 6) = *((_DWORD *)v29 + 48);
          *((_DWORD *)TokenInformation + 7) = *((_DWORD *)v29 + 49);
          *((_DWORD *)TokenInformation + 8) = *((_DWORD *)v29 + 34);
          v30 = *((_DWORD *)v29 + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)v29 + 21) + 1LL) - 8;
          v185 = v30;
          v31 = *((_QWORD *)v29 + 23);
          if ( v31 )
          {
            v30 -= *(unsigned __int16 *)(v31 + 2);
            v185 = v30;
          }
          *((_DWORD *)TokenInformation + 9) = v30;
          *((_DWORD *)TokenInformation + 10) = *((_DWORD *)v29 + 31) - 1;
          v186 = 0;
          v32 = 0;
          v175 = 0;
          while ( v32 <= 0x23 )
          {
            v33 = *((_QWORD *)v29 + 8);
            if ( _bittest64(&v33, v32) )
            {
              LODWORD(v9) = v9 + 1;
              v186 = v9;
            }
            v175 = ++v32;
          }
          *((_DWORD *)TokenInformation + 11) = v9;
          *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v29 + 7);
          v34 = (struct _ERESOURCE *)*((_QWORD *)v29 + 6);
          goto LABEL_53;
        }
        return result;
      case TokenRestrictedSids:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result >= 0 )
        {
          v87 = KeGetCurrentThread();
          --v87->KernelApcDisable;
          v37 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v88 = 16 * v37[32] + 8;
          if ( v37[32] )
          {
            v155 = *((_QWORD *)v37 + 20);
            v156 = v37[32];
            do
            {
              v88 += 4 * *(unsigned __int8 *)(*(_QWORD *)v155 + 1LL) + 8;
              v155 += 16LL;
              --v156;
            }
            while ( v156 );
          }
          *v14 = v88;
          if ( (unsigned int)v5 >= v88 )
          {
            *(_DWORD *)TokenInformation = v37[32];
            RtlCopySidAndAttributesArray(
              v37[32],
              *((PSID_AND_ATTRIBUTES *)v37 + 20),
              v88,
              (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
              (char *)TokenInformation + 16 * v37[32] + 8,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            goto LABEL_95;
          }
          goto LABEL_132;
        }
        return result;
      case TokenSessionId:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_72;
          v43 = Object;
          SeQuerySessionIdToken(Object, &SessionId);
          *(_DWORD *)TokenInformation = SessionId;
          *v14 = 4;
          v17 = v43;
          goto LABEL_32;
        }
        return result;
      case TokenGroupsAndPrivileges:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result >= 0 )
        {
          v93 = KeGetCurrentThread();
          --v93->KernelApcDisable;
          v94 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v95 = 0;
          v96 = *((_QWORD *)v94 + 8);
          v97 = 18LL;
          v98 = 1LL;
          do
          {
            if ( (v96 & v98) != 0 )
              ++v95;
            v99 = __ROL8__(v98, 1);
            if ( (v96 & v99) != 0 )
              ++v95;
            v98 = __ROL8__(v99, 1);
            --v97;
          }
          while ( v97 );
          v100 = 12 * v95;
          v172 = 12 * v95;
          v101 = v94[31];
          v102 = 16 * v101;
          if ( v101 )
          {
            v103 = *((_QWORD *)v94 + 19);
            v104 = v101;
            do
            {
              v102 += (4 * *(unsigned __int8 *)(*(_QWORD *)v103 + 1LL) + 15) & 0xFFFFFFF8;
              v103 += 16LL;
              --v104;
            }
            while ( v104 );
            v100 = v172;
          }
          v105 = 16 * v94[32];
          v106 = v105;
          if ( v94[32] )
          {
            v153 = *((_QWORD *)v94 + 20);
            v154 = v94[32];
            do
            {
              v106 += (4 * *(unsigned __int8 *)(*(_QWORD *)v153 + 1LL) + 15) & 0xFFFFFFF8;
              v153 += 16LL;
              --v154;
            }
            while ( v154 );
            v100 = v172;
          }
          v107 = v106 + v102 + v100 + 56;
          *v14 = v107;
          if ( (unsigned int)v5 < v107 )
          {
            v49 = (struct _ERESOURCE *)*((_QWORD *)v94 + 6);
            goto LABEL_70;
          }
          *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v94 + 3);
          *((_DWORD *)TokenInformation + 1) = v102;
          *(_DWORD *)TokenInformation = v94[31];
          v108 = (_SID_AND_ATTRIBUTES *)((char *)TokenInformation + 56);
          *((_QWORD *)TokenInformation + 1) = (char *)TokenInformation + 56;
          *((_DWORD *)TokenInformation + 5) = v106;
          *((_DWORD *)TokenInformation + 4) = v94[32];
          if ( v94[32] )
          {
            v109 = (_SID_AND_ATTRIBUTES *)((char *)v108 + ((v102 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
            *((_QWORD *)TokenInformation + 3) = v109;
          }
          else
          {
            *((_QWORD *)TokenInformation + 3) = 0LL;
            v109 = Dest;
          }
          *((_DWORD *)TokenInformation + 9) = v100;
          *((_DWORD *)TokenInformation + 8) = v95;
          v110 = (__int64)v108 + v106 + v102;
          *((_QWORD *)TokenInformation + 5) = v110;
          RtlCopySidAndAttributesArray(
            v94[31],
            *((PSID_AND_ATTRIBUTES *)v94 + 19),
            v102 - 16 * v101,
            v108,
            &v108[v101],
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          if ( v109 )
            RtlCopySidAndAttributesArray(
              v94[32],
              *((PSID_AND_ATTRIBUTES *)v94 + 20),
              v106 - v105,
              v109,
              &v109[v105 / 0x10],
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
          SepConvertTokenPrivilegesToLuidAndAttributes(v94, v110);
          v57 = (struct _ERESOURCE *)*((_QWORD *)v94 + 6);
          goto LABEL_96;
        }
        return result;
      case TokenSandBoxInert:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            return -1073741789;
          v17 = Object;
          *(_DWORD *)TokenInformation = (*((_DWORD *)Object + 50) & 0x40) != 0;
          goto LABEL_32;
        }
        return result;
      case TokenAuditPolicy:
        if ( !SeSinglePrivilegeCheck(SeSecurityPrivilege, PreviousMode) )
          return -1073741727;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result >= 0 )
        {
          *v14 = 30;
          if ( (unsigned int)v5 < 0x1E )
            goto LABEL_72;
          v158 = KeGetCurrentThread();
          --v158->KernelApcDisable;
          v37 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          *(_OWORD *)TokenInformation = *(_OWORD *)(v37 + 22);
          *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v37 + 13);
          *((_DWORD *)TokenInformation + 6) = v37[28];
          *((_WORD *)TokenInformation + 14) = *((_WORD *)v37 + 58);
          goto LABEL_95;
        }
        return result;
      case TokenOrigin:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result >= 0 )
        {
          *v14 = 8;
          if ( (unsigned int)v5 < 8 )
            goto LABEL_72;
          v17 = Object;
          *(_QWORD *)TokenInformation = *((_QWORD *)Object + 28);
          goto LABEL_32;
        }
        return result;
      case TokenElevationType:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_72;
          v17 = Object;
          v74 = *(_DWORD *)(*((_QWORD *)Object + 27) + 32LL);
          if ( (v74 & 4) != 0 )
          {
            *(_DWORD *)TokenInformation = 3;
          }
          else
          {
            LOBYTE(v9) = (v74 & 2) != 0;
            *(_DWORD *)TokenInformation = v9 + 1;
          }
          goto LABEL_32;
        }
        return result;
      case TokenLinkedToken:
        v191 = 0LL;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result < 0 )
          return result;
        *v14 = 8;
        if ( (_DWORD)v5 != 8 )
        {
          ObfDereferenceObject(Object);
          return -1073741820;
        }
        v139 = -(SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) != 0);
        v140 = Object;
        v141 = SepReferenceLogonSessionSilo(
                 (_DWORD *)(*((_QWORD *)Object + 27) + 16LL),
                 *(_QWORD *)(*((_QWORD *)Object + 27) + 160LL),
                 (__int64 *)&v198);
        if ( v141 < 0 )
        {
          ObfDereferenceObject(v140);
          return v141;
        }
        v200 = 48;
        v201 = 0LL;
        if ( PreviousMode )
          v203 = 0;
        else
          v203 = 512;
        v202 = 0LL;
        v204 = 0LL;
        v142 = v198;
        v174 = SepDuplicateToken(v198[6], (int)&v200, 0, v139 + 2, 1u, 0, 0, &v191);
        _m_prefetchw(v142 + 3);
        v143 = v142[3];
        while ( v143 - 1 > 0 )
        {
          v144 = v143;
          v143 = _InterlockedCompareExchange64(v142 + 3, v143 - 1, v143);
          if ( v144 == v143 )
            goto LABEL_232;
        }
        if ( v143 != 1 )
          __fastfail(0xEu);
        v196 = v142[1];
        SepDeReferenceLogonSession(&v196, v142[20]);
LABEL_232:
        v145 = v174;
        if ( v174 >= 0 )
        {
          inserted = ObInsertObject(v191, 0LL, 0xF01FFu, 0, 0LL, &Handle);
          if ( inserted >= 0 )
          {
            *(_QWORD *)TokenInformation = Handle;
            goto LABEL_31;
          }
          v157 = Object;
          goto LABEL_258;
        }
        ObfDereferenceObject(Object);
        return v145;
      case TokenElevation:
        *v14 = 4;
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result >= 0 )
        {
          v75 = KeGetCurrentThread();
          --v75->KernelApcDisable;
          v76 = Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v77 = (*((_QWORD *)v76 + 8) & 0x120160684LL) != 0;
          v78 = 0;
          v79 = *((_DWORD *)v76 + 31);
          if ( !v79 )
          {
LABEL_125:
            ExReleaseResourceLite(*((PERESOURCE *)v76 + 6));
            v85 = KeGetCurrentThread();
            v86 = v85->KernelApcDisable + 1;
            v85->KernelApcDisable = v86;
            if ( !v86
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v85->ApcState.ApcListHead[0].Flink != &v85->152
              && !v85->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            *(_DWORD *)TokenInformation = v77;
            goto LABEL_31;
          }
          while ( 1 )
          {
            if ( v77 )
              goto LABEL_125;
            v80 = *((_QWORD *)v76 + 19) + 16LL * v78;
            if ( (*(_DWORD *)(v80 + 8) & 0x30) == 0 )
            {
              if ( !*RtlSubAuthorityCountSid(*(PSID *)v80) )
              {
                v82 = 0;
LABEL_121:
                v83 = 0;
                v84 = &SepLUARids;
                while ( v82 != *v84 )
                {
                  ++v83;
                  ++v84;
                  if ( v83 >= 0x13 )
                    goto LABEL_124;
                }
                v77 = 1;
                goto LABEL_124;
              }
              v81 = RtlSubAuthorityCountSid(*(PSID *)v80);
              v82 = *RtlSubAuthoritySid(*(PSID *)v80, (unsigned int)*v81 - 1);
              if ( v82 <= 0x239 )
                goto LABEL_121;
            }
LABEL_124:
            if ( ++v78 >= v79 )
              goto LABEL_125;
          }
        }
        return result;
      case TokenHasRestrictions:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result < 0 )
          return result;
        *v14 = 1;
        if ( !(_DWORD)v5 )
          goto LABEL_72;
        v17 = Object;
        *(_BYTE *)TokenInformation = (*((_DWORD *)Object + 50) & 0x810) != 0;
        goto LABEL_32;
      case TokenAccessInformation:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result < 0 )
          return result;
        v130 = KeGetCurrentThread();
        --v130->KernelApcDisable;
        v37 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v131 = v171;
        v132 = v169[0];
        TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                             (_DWORD)v37,
                                             v169[0],
                                             (_DWORD)v171,
                                             (unsigned int)&v176,
                                             (__int64)&v189,
                                             (__int64)&v177,
                                             (__int64)&v187,
                                             (__int64)&v183,
                                             (__int64)&v190,
                                             (__int64)&v181,
                                             (__int64)&v188,
                                             (__int64)&v179,
                                             (__int64)&v180);
        *v14 = TokenAccessInformationBufferSize;
        if ( (unsigned int)v5 < TokenAccessInformationBufferSize )
          goto LABEL_132;
        SepCopyTokenAccessInformation(
          (int)v37,
          (int)TokenInformation,
          v5,
          v176,
          v189,
          v177,
          v187,
          v183,
          v190,
          v181,
          v188,
          v179,
          v180,
          v132,
          v131);
        goto LABEL_52;
      case TokenVirtualizationAllowed:
      case TokenVirtualizationEnabled:
      case TokenUIAccess:
      case TokenIsRestricted:
      case TokenPrivateNameSpace:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_72;
        v17 = Object;
        if ( TokenInformationClass == TokenVirtualizationAllowed )
        {
          v122 = (*((_DWORD *)Object + 50) >> 9) & 1;
        }
        else if ( TokenInformationClass == TokenVirtualizationEnabled )
        {
          v122 = (*((_DWORD *)Object + 50) >> 10) & 1;
        }
        else
        {
          if ( TokenInformationClass == TokenUIAccess )
          {
            if ( (*((_DWORD *)Object + 50) & 0x1000) == 0 )
              goto LABEL_194;
          }
          else
          {
            if ( TokenInformationClass == TokenIsRestricted )
            {
              LOBYTE(v9) = (*((_BYTE *)Object + 200) & 0x18) != 0;
              goto LABEL_194;
            }
            if ( (*((_DWORD *)Object + 50) & 0x10000) == 0 )
            {
LABEL_194:
              v122 = v9;
              goto LABEL_195;
            }
          }
          v122 = 1;
        }
LABEL_195:
        *(_DWORD *)TokenInformation = v122;
        break;
      case TokenIntegrityLevel:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result < 0 )
          return result;
        v40 = KeGetCurrentThread();
        --v40->KernelApcDisable;
        v37 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        SepCopyTokenIntegrity((__int64)v37);
        Sid = (unsigned __int8 *)Src.Sid;
        v42 = 4 * *((unsigned __int8 *)Src.Sid + 1) + 24;
        *v14 = v42;
        if ( (unsigned int)v5 < v42 )
        {
LABEL_65:
          v46 = (struct _ERESOURCE *)*((_QWORD *)v37 + 6);
          goto LABEL_66;
        }
        RtlCopySidAndAttributesArray(
          1u,
          &Src,
          4 * Sid[1] + 8,
          (PSID_AND_ATTRIBUTES)TokenInformation,
          (char *)TokenInformation + 16,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
LABEL_52:
        v34 = (struct _ERESOURCE *)*((_QWORD *)v37 + 6);
LABEL_53:
        ExReleaseResourceLite(v34);
        v26 = KeGetCurrentThread();
        v39 = v26->KernelApcDisable + 1;
        v26->KernelApcDisable = v39;
        if ( !v39 && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
          goto LABEL_250;
        goto LABEL_31;
      case TokenMandatoryPolicy:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_72;
        inserted = SeQueryMandatoryPolicyToken((__int64)Object, TokenInformation);
        v174 = inserted;
LABEL_258:
        ObfDereferenceObject(v157);
        return inserted;
      case TokenLogonSid:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result < 0 )
          return result;
        v147 = KeGetCurrentThread();
        --v147->KernelApcDisable;
        v53 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v148 = 0;
        v149 = *((_DWORD *)v53 + 31);
        if ( !v149 )
          goto LABEL_243;
        v150 = *((_QWORD *)v53 + 19);
        while ( (*(_DWORD *)(v150 + 16LL * v148 + 8) & 0xC0000000) != 0xC0000000 )
        {
          if ( ++v148 >= v149 )
            goto LABEL_243;
        }
        v9 = *(_QWORD *)(v150 + 16LL * v148);
LABEL_243:
        if ( !v9 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)v53 + 6));
          v164 = KeGetCurrentThread();
          v165 = v164->KernelApcDisable + 1;
          v164->KernelApcDisable = v165;
          if ( !v165
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v164->ApcState.ApcListHead[0].Flink != &v164->152
            && !v164->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          ObfDereferenceObject(Object);
          return -1073741275;
        }
        v151 = 16LL * v148;
        v152 = 4 * *(unsigned __int8 *)(*(_QWORD *)(v151 + *((_QWORD *)v53 + 19)) + 1LL) + 32;
        *v14 = v152;
        if ( (unsigned int)v5 < v152 )
        {
          v49 = (struct _ERESOURCE *)*((_QWORD *)v53 + 6);
LABEL_70:
          ExReleaseResourceLite(v49);
          v50 = KeGetCurrentThread();
          v51 = v50->KernelApcDisable + 1;
          v50->KernelApcDisable = v51;
          if ( v51
            || ($CD287064E7C9F7953DE243E927CFCB99 *)v50->ApcState.ApcListHead[0].Flink == &v50->152
            || v50->SpecialApcDisable )
          {
            goto LABEL_72;
          }
          goto LABEL_260;
        }
        *(_DWORD *)TokenInformation = 1;
        RtlCopySidAndAttributesArray(
          1u,
          (PSID_AND_ATTRIBUTES)(v151 + *((_QWORD *)v53 + 19)),
          4 * *(unsigned __int8 *)(*(_QWORD *)(v151 + *((_QWORD *)v53 + 19)) + 1LL) + 8,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 24,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
LABEL_82:
        v57 = (struct _ERESOURCE *)*((_QWORD *)v53 + 6);
LABEL_96:
        ExReleaseResourceLite(v57);
        v63 = KeGetCurrentThread();
        v64 = v63->KernelApcDisable + 1;
        v63->KernelApcDisable = v64;
        if ( v64
          || ($CD287064E7C9F7953DE243E927CFCB99 *)v63->ApcState.ApcListHead[0].Flink == &v63->152
          || v63->SpecialApcDisable )
        {
          goto LABEL_31;
        }
        goto LABEL_251;
      case TokenIsAppContainer:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result < 0 )
          return result;
        *v14 = 4;
        v17 = Object;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_73;
        *(_DWORD *)TokenInformation = (*((_DWORD *)Object + 50) >> 14) & 1;
        goto LABEL_32;
      case TokenCapabilities:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result < 0 )
          return result;
        v134 = KeGetCurrentThread();
        --v134->KernelApcDisable;
        v37 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v135 = v37[200];
        v136 = 16 * v135 + 8;
        if ( v135 )
        {
          v137 = *((_QWORD *)v37 + 99);
          v138 = v135;
          do
          {
            v136 += 4 * *(unsigned __int8 *)(*(_QWORD *)v137 + 1LL) + 8;
            v137 += 16LL;
            --v138;
          }
          while ( v138 );
        }
        *v14 = v136;
        if ( (unsigned int)v5 < v136 )
          goto LABEL_132;
        *(_DWORD *)TokenInformation = v37[200];
        RtlCopySidAndAttributesArray(
          v37[200],
          *((PSID_AND_ATTRIBUTES *)v37 + 99),
          v136,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 16 * v37[200] + 8,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_95;
      case TokenAppContainerSid:
        v35 = 8;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result < 0 )
          return result;
        v36 = KeGetCurrentThread();
        --v36->KernelApcDisable;
        v37 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v38 = (unsigned __int8 *)*((_QWORD *)v37 + 98);
        if ( v38 )
          v35 = 4 * v38[1] + 16;
        *v14 = v35;
        if ( (unsigned int)v5 < v35 )
          goto LABEL_132;
        if ( v38 )
          v38 = (unsigned __int8 *)TokenInformation + 8;
        *(_QWORD *)TokenInformation = v38;
        if ( v38 )
          RtlCopySid(v35 - 8, v38, *((PSID *)v37 + 98));
        goto LABEL_52;
      case TokenAppContainerNumber:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_72;
        v159 = KeGetCurrentThread();
        --v159->KernelApcDisable;
        v160 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v161 = *((_QWORD *)v160 + 135);
        if ( v161 )
          LODWORD(v9) = *(_DWORD *)(v161 + 40);
        ExReleaseResourceLite(*((PERESOURCE *)v160 + 6));
        v162 = KeGetCurrentThread();
        v163 = v162->KernelApcDisable + 1;
        v162->KernelApcDisable = v163;
        if ( !v163
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v162->ApcState.ApcListHead[0].Flink != &v162->152
          && !v162->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        *(_DWORD *)TokenInformation = v9;
        goto LABEL_31;
      case TokenUserClaimAttributes:
      case TokenDeviceClaimAttributes:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result < 0 )
          return result;
        v65 = KeGetCurrentThread();
        --v65->KernelApcDisable;
        v66 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v67 = *((_QWORD *)v66 + 137);
        if ( v67
          && (*(_QWORD *)(v67 + 576) || TokenInformationClass != TokenUserClaimAttributes)
          && ((v69 = *(int **)(v67 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v69 = *(int **)(v67 + 576);
          AuthzBasepQueryClaimAttributesToken(v69, 0LL, 0LL, &v172);
          v68 = v172;
        }
        else
        {
          v68 = 16;
          v193 = 0;
          v194[1] = v194;
          v194[0] = v194;
          LODWORD(v194[2]) = 0;
          v194[4] = &v194[3];
          v194[3] = &v194[3];
          v69 = &v193;
        }
        *v14 = v68;
        if ( (unsigned int)v5 < v68 )
        {
          v49 = (struct _ERESOURCE *)*((_QWORD *)v66 + 6);
          goto LABEL_70;
        }
        v174 = AuthzBasepQueryClaimAttributesToken(v69, TokenInformation, (unsigned int)v5, &v172);
        ExReleaseResourceLite(*((PERESOURCE *)v66 + 6));
        v70 = KeGetCurrentThread();
        v71 = v70->KernelApcDisable + 1;
        v70->KernelApcDisable = v71;
        if ( !v71
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v70->ApcState.ApcListHead[0].Flink != &v70->152
          && !v70->SpecialApcDisable )
        {
          goto LABEL_265;
        }
        goto LABEL_105;
      case TokenDeviceGroups:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result < 0 )
          return result;
        v89 = KeGetCurrentThread();
        --v89->KernelApcDisable;
        v53 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v90 = *((_QWORD *)v53 + 137);
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
          v166 = *(_QWORD *)(v90 + 8);
          v167 = v91;
          do
          {
            v92 += 4 * *(unsigned __int8 *)(*(_QWORD *)v166 + 1LL) + 8;
            v166 += 16LL;
            --v167;
          }
          while ( v167 );
        }
        *v14 = v92;
        if ( (unsigned int)v5 < v92 )
        {
          v49 = (struct _ERESOURCE *)*((_QWORD *)v53 + 6);
          goto LABEL_70;
        }
        *(_QWORD *)TokenInformation = 0LL;
        *((_QWORD *)TokenInformation + 1) = 0LL;
        *((_QWORD *)TokenInformation + 2) = 0LL;
        *(_DWORD *)TokenInformation = v91;
        if ( v91 )
          RtlCopySidAndAttributesArray(
            v91,
            *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)v53 + 137) + 8LL),
            v92,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + 16 * v91 + 8,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        goto LABEL_82;
      case TokenSecurityAttributes:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result < 0 )
          return result;
        v112 = KeGetCurrentThread();
        --v112->KernelApcDisable;
        v113 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v114 = (_DWORD *)*((_QWORD *)v113 + 97);
        if ( v114 )
        {
          LODWORD(SidArea) = 0;
          AuthzBasepQuerySecurityAttributesToken(v114, 0LL, 0, 0LL, (size_t)SidArea, &v172);
          v115 = v172;
        }
        else
        {
          v115 = 16;
        }
        *v14 = v115;
        if ( (unsigned int)v5 >= v115 )
        {
          LODWORD(SidArea) = v5;
          v174 = AuthzBasepQuerySecurityAttributesToken(
                   *((_DWORD **)v113 + 97),
                   0LL,
                   0,
                   TokenInformation,
                   (size_t)SidArea,
                   &v172);
          ExReleaseResourceLite(*((PERESOURCE *)v113 + 6));
          v123 = KeGetCurrentThread();
          v124 = v123->KernelApcDisable + 1;
          v123->KernelApcDisable = v124;
          if ( !v124
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v123->ApcState.ApcListHead[0].Flink != &v123->152
            && !v123->SpecialApcDisable )
          {
LABEL_265:
            KiCheckForKernelApcDelivery();
          }
LABEL_105:
          ObfDereferenceObject(Object);
          return v174;
        }
        v46 = (struct _ERESOURCE *)*((_QWORD *)v113 + 6);
LABEL_66:
        ExReleaseResourceLite(v46);
        v47 = KeGetCurrentThread();
        v48 = v47->KernelApcDisable + 1;
        v47->KernelApcDisable = v48;
        if ( !v48 && ($CD287064E7C9F7953DE243E927CFCB99 *)v47->ApcState.ApcListHead[0].Flink != &v47->152 )
          goto LABEL_259;
        goto LABEL_72;
      case TokenProcessTrustLevel:
        v58 = 8;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
        if ( result < 0 )
          return result;
        v59 = KeGetCurrentThread();
        --v59->KernelApcDisable;
        v37 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v60 = v169[0];
        v61 = v171;
        if ( v169[0] )
          v62 = (unsigned __int8 *)v171;
        else
          v62 = (unsigned __int8 *)*((_QWORD *)v37 + 138);
        if ( v62 )
          v58 = 4 * v62[1] + 16;
        *v14 = v58;
        if ( (unsigned int)v5 < v58 )
        {
LABEL_132:
          v49 = (struct _ERESOURCE *)*((_QWORD *)v37 + 6);
          goto LABEL_70;
        }
        if ( v62 )
          v62 = (unsigned __int8 *)TokenInformation + 8;
        *(_QWORD *)TokenInformation = v62;
        if ( v62 )
        {
          if ( !v60 )
            v61 = (void *)*((_QWORD *)v37 + 138);
          RtlCopySid(v58 - 8, v62, v61);
        }
LABEL_95:
        v57 = (struct _ERESOURCE *)*((_QWORD *)v37 + 6);
        goto LABEL_96;
      default:
        return -1073741821;
    }
    goto LABEL_32;
  }
  result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v169, &v171);
  if ( result < 0 )
    return result;
  v18 = KeGetCurrentThread();
  --v18->KernelApcDisable;
  v19 = Object;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  v20 = 4 * *(unsigned __int8 *)(**((_QWORD **)v19 + 19) + 1LL) + 24;
  *v14 = v20;
  if ( (unsigned int)v5 >= v20 )
  {
    v21 = (char *)TokenInformation + 16;
    v22 = (const void **)*((_QWORD *)v19 + 19);
    v184 = 0;
    v195 = (char *)TokenInformation + 16;
    v182 = v20;
    while ( !(_DWORD)v9 )
    {
      v23 = 4 * *((unsigned __int8 *)*v22 + 1) + 8;
      v24 = (4 * *((unsigned __int8 *)*v22 + 1) + 11) & 0xFFFFFFFC;
      if ( v23 > v20 )
        goto LABEL_29;
      v20 -= v24;
      v182 = v20;
      *(_QWORD *)TokenInformation = v21;
      *((_DWORD *)TokenInformation + 2) = *((_DWORD *)v22 + 2);
      v25 = 4 * *((unsigned __int8 *)*v22 + 1) + 8;
      if ( v25 <= v23 )
        memmove(v21, *v22, v25);
      v21 += v24;
      v195 = v21;
      LODWORD(v9) = 1;
      v184 = 1;
    }
    RemainingSidArea = (PSID)__PAIR64__(HIDWORD(v21), v20);
LABEL_29:
    ExReleaseResourceLite(*((PERESOURCE *)v19 + 6));
    v26 = KeGetCurrentThread();
    v27 = v26->KernelApcDisable + 1;
    v26->KernelApcDisable = v27;
    if ( !v27 && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
    {
LABEL_250:
      if ( !v26->SpecialApcDisable )
LABEL_251:
        KiCheckForKernelApcDelivery();
    }
LABEL_31:
    v17 = Object;
LABEL_32:
    ObfDereferenceObject(v17);
    return 0;
  }
  ExReleaseResourceLite(*((PERESOURCE *)v19 + 6));
  v47 = KeGetCurrentThread();
  v111 = v47->KernelApcDisable + 1;
  v47->KernelApcDisable = v111;
  if ( !v111 && ($CD287064E7C9F7953DE243E927CFCB99 *)v47->ApcState.ApcListHead[0].Flink != &v47->152 )
  {
LABEL_259:
    if ( !v47->SpecialApcDisable )
LABEL_260:
      KiCheckForKernelApcDelivery();
  }
LABEL_72:
  v17 = Object;
LABEL_73:
  ObfDereferenceObject(v17);
  return -1073741789;
}
