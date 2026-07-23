/*
 * XREFs of NtQueryInformationToken @ 0x140431390
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1401F66E8 (RtlGetAppContainerNamedObjectPath.c)
 * Callees:
 *     SepConvertTokenPrivileges @ 0x140004B64 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x140004B80 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepTokenPrivilegeCount @ 0x140004C10 (SepTokenPrivilegeCount.c)
 *     SeQueryMandatoryPolicyToken @ 0x140004D74 (SeQueryMandatoryPolicyToken.c)
 *     SepCopyTokenIntegrity @ 0x140004E6C (SepCopyTokenIntegrity.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     RtlSubAuthoritySid @ 0x14003D36C (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x14003D378 (RtlSubAuthorityCountSid.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SepReferenceTokenByHandle @ 0x14008A010 (SepReferenceTokenByHandle.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1400E6034 (AuthzBasepQuerySecurityAttributesToken.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1400EF720 (SepDeReferenceLogonSessionDirect.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SepCopyTokenAccessInformation @ 0x1403C1B30 (SepCopyTokenAccessInformation.c)
 *     RtlCopySidAndAttributesArray @ 0x1403C1E10 (RtlCopySidAndAttributesArray.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x1403C1EE0 (SepGetTokenAccessInformationBufferSize.c)
 *     SepReferenceLogonSessionSilo @ 0x1403C24A4 (SepReferenceLogonSessionSilo.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     SepDuplicateToken @ 0x140477C00 (SepDuplicateToken.c)
 *     RtlCopySid @ 0x1404793FC (RtlCopySid.c)
 *     SeQuerySessionIdToken @ 0x1404A6B4C (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x1404ADE78 (AuthzBasepQueryClaimAttributesToken.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     ExRaiseAccessViolation @ 0x140673340 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // r15
  __int64 v9; // rdi
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned __int64 v11; // rax
  ULONG64 v12; // rdx
  unsigned __int64 v13; // rdx
  PULONG v14; // rbx
  _DWORD *v15; // rcx
  NTSTATUS result; // eax
  struct _KTHREAD *v17; // rax
  unsigned int *v18; // rdi
  unsigned int v19; // ecx
  struct _KTHREAD *v20; // rax
  PVOID v21; // r13
  unsigned int v22; // r14d
  char *v23; // rbx
  const void **v24; // r12
  unsigned int v25; // ecx
  unsigned int v26; // r15d
  unsigned int v27; // eax
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  unsigned int v30; // r14d
  struct _KTHREAD *v31; // rax
  char v32; // cl
  unsigned __int8 *v33; // r8
  unsigned __int8 *v34; // rdx
  struct _ERESOURCE *v35; // rcx
  _DWORD *v36; // rcx
  struct _KTHREAD *v37; // rax
  unsigned int *v38; // r14
  __int64 v39; // rax
  unsigned int v40; // eax
  struct _ERESOURCE *v41; // rcx
  unsigned int v42; // r14d
  struct _KTHREAD *v43; // rax
  unsigned __int8 *v44; // rdx
  struct _KTHREAD *v45; // rax
  char *v46; // rbx
  int v47; // edx
  __int64 v48; // rax
  struct _KTHREAD *v49; // rax
  unsigned __int8 *Sid; // rdx
  unsigned int v51; // eax
  struct _KTHREAD *v52; // rax
  unsigned int v53; // ecx
  char *v54; // rcx
  _DWORD *v55; // rdi
  int v56; // edx
  struct _KTHREAD *v57; // rax
  __int64 v58; // rax
  unsigned int v59; // r12d
  int *v60; // rdi
  struct _KTHREAD *v61; // rax
  PVOID v62; // rbx
  bool v63; // r13
  unsigned int v64; // r14d
  unsigned int v65; // r12d
  __int64 v66; // r15
  PUCHAR v67; // rax
  ULONG v68; // edx
  unsigned int v69; // ecx
  _DWORD *v70; // rax
  struct _KTHREAD *v71; // rax
  ULONG v72; // r8d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v74; // eax
  ULONG v75; // r8d
  __int64 v76; // rdx
  __int64 v77; // r9
  struct _KTHREAD *v78; // rax
  __int64 v79; // rax
  ULONG v80; // r11d
  ULONG v81; // r8d
  struct _KTHREAD *v82; // rax
  ULONG v83; // r10d
  unsigned int v84; // ecx
  unsigned int v85; // r11d
  unsigned int v86; // r8d
  __int64 v87; // rdx
  __int64 v88; // r9
  unsigned int v89; // r12d
  unsigned int v90; // r13d
  unsigned int v91; // ecx
  _SID_AND_ATTRIBUTES *v92; // r9
  _SID_AND_ATTRIBUTES *v93; // rdi
  __int64 v94; // rbx
  struct _KTHREAD *v95; // rax
  unsigned int v96; // eax
  struct _KTHREAD *v97; // rax
  unsigned int *v98; // rcx
  unsigned int v99; // r12d
  _BOOL8 v100; // r10
  struct _KTHREAD *v101; // rax
  unsigned int v102; // eax
  ULONG v103; // r8d
  __int64 v104; // rdx
  __int64 v105; // r9
  struct _KTHREAD *v106; // rax
  unsigned __int8 *v107; // r14
  char v108; // r12
  unsigned int TokenAccessInformationBufferSize; // eax
  int v110; // ebx
  _DWORD *v111; // r14
  NTSTATUS v112; // r15d
  int v113; // r9d
  _QWORD *v114; // rbx
  NTSTATUS inserted; // ebx
  struct _KTHREAD *v116; // rax
  unsigned int v117; // edx
  unsigned int v118; // r9d
  __int64 v119; // r8
  __int64 v120; // r8
  unsigned int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // r9
  void *v126; // rcx
  struct _KTHREAD *v127; // rax
  struct _KTHREAD *v128; // rax
  PVOID v129; // rbx
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // r9
  PSID SidArea; // [rsp+20h] [rbp-198h]
  char v134[8]; // [rsp+80h] [rbp-138h] BYREF
  PVOID Object; // [rsp+88h] [rbp-130h] BYREF
  unsigned __int8 *v136; // [rsp+90h] [rbp-128h] BYREF
  PSID RemainingSidArea; // [rsp+98h] [rbp-120h] BYREF
  int v138; // [rsp+A0h] [rbp-118h] BYREF
  NTSTATUS v139; // [rsp+A4h] [rbp-114h]
  ULONG SessionId; // [rsp+A8h] [rbp-110h] BYREF
  int v141; // [rsp+ACh] [rbp-10Ch] BYREF
  unsigned int v142; // [rsp+B0h] [rbp-108h] BYREF
  int v143; // [rsp+B4h] [rbp-104h] BYREF
  unsigned int v144; // [rsp+B8h] [rbp-100h] BYREF
  int v145; // [rsp+BCh] [rbp-FCh] BYREF
  int v146; // [rsp+C0h] [rbp-F8h]
  _QWORD *v147; // [rsp+C8h] [rbp-F0h] BYREF
  int v148; // [rsp+D0h] [rbp-E8h] BYREF
  int v149; // [rsp+D4h] [rbp-E4h]
  unsigned int v150; // [rsp+D8h] [rbp-E0h] BYREF
  unsigned int v151; // [rsp+DCh] [rbp-DCh] BYREF
  unsigned int v152; // [rsp+E0h] [rbp-D8h] BYREF
  unsigned int v153; // [rsp+E4h] [rbp-D4h]
  unsigned int v154; // [rsp+E8h] [rbp-D0h] BYREF
  PVOID v155; // [rsp+F0h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp-C0h] BYREF
  int v157; // [rsp+100h] [rbp-B8h] BYREF
  _QWORD v158[5]; // [rsp+108h] [rbp-B0h] BYREF
  char *v159; // [rsp+130h] [rbp-88h]
  PSID_AND_ATTRIBUTES Dest; // [rsp+138h] [rbp-80h]
  _SID_AND_ATTRIBUTES Src; // [rsp+140h] [rbp-78h] BYREF
  int v162; // [rsp+150h] [rbp-68h] BYREF
  __int64 v163; // [rsp+158h] [rbp-60h]
  __int64 v164; // [rsp+160h] [rbp-58h]
  int v165; // [rsp+168h] [rbp-50h]
  __int128 v166; // [rsp+170h] [rbp-48h]
  __int64 v167; // [rsp+180h] [rbp-38h]

  v5 = TokenInformationLength;
  v9 = 0LL;
  v167 = 0LL;
  Dest = 0LL;
  v141 = 0;
  v157 = 0;
  memset(v158, 0, sizeof(v158));
  v134[0] = 0;
  v136 = 0LL;
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
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v18 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v74 = v18[31];
          v75 = 16 * (v74 - 2) + 24;
          if ( v74 > 1 )
          {
            v76 = *((_QWORD *)v18 + 19) + 16LL;
            v77 = v74 - 1;
            do
            {
              v75 += 4 * *(unsigned __int8 *)(*(_QWORD *)v76 + 1LL) + 8;
              v76 += 16LL;
              --v77;
            }
            while ( v77 );
          }
          *v14 = v75;
          if ( (unsigned int)v5 >= v75 )
          {
            *(_DWORD *)TokenInformation = v18[31] - 1;
            RtlCopySidAndAttributesArray(
              v18[31] - 1,
              (PSID_AND_ATTRIBUTES)(*((_QWORD *)v18 + 19) + 16LL),
              v75,
              (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
              (char *)TokenInformation + 16 * v18[31] - 8,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            goto LABEL_44;
          }
          goto LABEL_80;
        }
        return result;
      case TokenPrivileges:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result >= 0 )
        {
          v95 = KeGetCurrentThread();
          --v95->KernelApcDisable;
          v38 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v96 = SepTokenPrivilegeCount((__int64)v38);
          if ( v96 > 1 )
            LODWORD(v9) = 12 * (v96 - 1);
          *v14 = v9 + 16;
          if ( (unsigned int)v5 >= (int)v9 + 16 )
          {
            SepConvertTokenPrivileges((__int64)v38, TokenInformation);
            goto LABEL_87;
          }
          goto LABEL_53;
        }
        return result;
      case TokenOwner:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result >= 0 )
        {
          v52 = KeGetCurrentThread();
          --v52->KernelApcDisable;
          v18 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v53 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v18 + 19) + 16LL * v18[36]) + 1LL) + 16;
          *v14 = v53;
          if ( (unsigned int)v5 < v53 )
            goto LABEL_80;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v53 - 8, (char *)TokenInformation + 8, *(PSID *)(*((_QWORD *)v18 + 19) + 16LL * v18[36]));
          goto LABEL_44;
        }
        return result;
      case TokenPrimaryGroup:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result >= 0 )
        {
          v17 = KeGetCurrentThread();
          --v17->KernelApcDisable;
          v18 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v19 = 4 * *(unsigned __int8 *)(*((_QWORD *)v18 + 21) + 1LL) + 16;
          *v14 = v19;
          if ( (unsigned int)v5 < v19 )
            goto LABEL_80;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v19 - 8, (char *)TokenInformation + 8, *((PSID *)v18 + 21));
          goto LABEL_44;
        }
        return result;
      case TokenDefaultDacl:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result >= 0 )
        {
          v138 = 8;
          v37 = KeGetCurrentThread();
          --v37->KernelApcDisable;
          v38 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v39 = *((_QWORD *)v38 + 23);
          if ( v39 )
            v40 = *(unsigned __int16 *)(v39 + 2) + 8;
          else
            v40 = v138;
          *v14 = v40;
          if ( (unsigned int)v5 >= v40 )
          {
            v54 = (char *)TokenInformation + 8;
            if ( *((_QWORD *)v38 + 23) )
            {
              *(_QWORD *)TokenInformation = v54;
              memmove(v54, *((const void **)v38 + 23), *(unsigned __int16 *)(*((_QWORD *)v38 + 23) + 2LL));
            }
            else
            {
              *(_QWORD *)TokenInformation = 0LL;
            }
            goto LABEL_87;
          }
          goto LABEL_53;
        }
        return result;
      case TokenSource:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 0x10u, PreviousMode, &Object, v134, &v136);
        if ( result >= 0 )
        {
          *v14 = 16;
          if ( (unsigned int)v5 < 0x10 )
            goto LABEL_55;
          v36 = Object;
          *(_OWORD *)TokenInformation = *(_OWORD *)Object;
          goto LABEL_47;
        }
        return result;
      case TokenType:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_55;
          v36 = Object;
          *(_DWORD *)TokenInformation = *((_DWORD *)Object + 48);
          goto LABEL_47;
        }
        return result;
      case TokenImpersonationLevel:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result >= 0 )
        {
          v36 = Object;
          if ( *((_DWORD *)Object + 48) != 2 )
          {
            ObfDereferenceObject(Object);
            return -1073741821;
          }
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_56;
          *(_DWORD *)TokenInformation = v36[49];
          goto LABEL_47;
        }
        return result;
      case TokenStatistics:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result >= 0 )
        {
          *v14 = 56;
          if ( (unsigned int)v5 < 0x38 )
            goto LABEL_55;
          v45 = KeGetCurrentThread();
          --v45->KernelApcDisable;
          v46 = (char *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          *(_QWORD *)TokenInformation = *((_QWORD *)v46 + 2);
          *((_QWORD *)TokenInformation + 1) = *((_QWORD *)v46 + 3);
          *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v46 + 5);
          *((_DWORD *)TokenInformation + 6) = *((_DWORD *)v46 + 48);
          *((_DWORD *)TokenInformation + 7) = *((_DWORD *)v46 + 49);
          *((_DWORD *)TokenInformation + 8) = *((_DWORD *)v46 + 34);
          v47 = *((_DWORD *)v46 + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)v46 + 21) + 1LL) - 8;
          v149 = v47;
          v48 = *((_QWORD *)v46 + 23);
          if ( v48 )
          {
            v47 -= *(unsigned __int16 *)(v48 + 2);
            v149 = v47;
          }
          *((_DWORD *)TokenInformation + 9) = v47;
          *((_DWORD *)TokenInformation + 10) = *((_DWORD *)v46 + 31) - 1;
          *((_DWORD *)TokenInformation + 11) = SepTokenPrivilegeCount((__int64)v46);
          *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v46 + 7);
          goto LABEL_75;
        }
        return result;
      case TokenRestrictedSids:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result >= 0 )
        {
          v71 = KeGetCurrentThread();
          --v71->KernelApcDisable;
          v18 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v72 = 16 * v18[32] + 8;
          if ( v18[32] )
          {
            v124 = *((_QWORD *)v18 + 20);
            v125 = v18[32];
            do
            {
              v72 += 4 * *(unsigned __int8 *)(*(_QWORD *)v124 + 1LL) + 8;
              v124 += 16LL;
              --v125;
            }
            while ( v125 );
          }
          *v14 = v72;
          if ( (unsigned int)v5 >= v72 )
          {
            *(_DWORD *)TokenInformation = v18[32];
            RtlCopySidAndAttributesArray(
              v18[32],
              *((PSID_AND_ATTRIBUTES *)v18 + 20),
              v72,
              (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
              (char *)TokenInformation + 16 * v18[32] + 8,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            goto LABEL_44;
          }
          goto LABEL_80;
        }
        return result;
      case TokenSessionId:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_55;
          v55 = Object;
          SeQuerySessionIdToken(Object, &SessionId);
          *(_DWORD *)TokenInformation = SessionId;
          *v14 = 4;
          v36 = v55;
          goto LABEL_47;
        }
        return result;
      case TokenGroupsAndPrivileges:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result >= 0 )
        {
          v82 = KeGetCurrentThread();
          --v82->KernelApcDisable;
          v38 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          SessionId = SepTokenPrivilegeCount((__int64)v38);
          v83 = 12 * SessionId;
          v84 = v38[31];
          v85 = v84;
          v86 = 16 * v84;
          if ( v84 )
          {
            v87 = *((_QWORD *)v38 + 19);
            v88 = v84;
            do
            {
              v86 += (4 * *(unsigned __int8 *)(*(_QWORD *)v87 + 1LL) + 15) & 0xFFFFFFF8;
              v87 += 16LL;
              --v88;
            }
            while ( v88 );
          }
          v89 = 16 * v38[32];
          v90 = v89;
          if ( v38[32] )
          {
            v122 = *((_QWORD *)v38 + 20);
            v123 = v38[32];
            do
            {
              v90 += (4 * *(unsigned __int8 *)(*(_QWORD *)v122 + 1LL) + 15) & 0xFFFFFFF8;
              v122 += 16LL;
              --v123;
            }
            while ( v123 );
          }
          v91 = v86 + v90 + v83 + 56;
          *v14 = v91;
          if ( (unsigned int)v5 >= v91 )
          {
            *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v38 + 3);
            *((_DWORD *)TokenInformation + 1) = v86;
            *(_DWORD *)TokenInformation = v38[31];
            v92 = (_SID_AND_ATTRIBUTES *)((char *)TokenInformation + 56);
            *((_QWORD *)TokenInformation + 1) = (char *)TokenInformation + 56;
            *((_DWORD *)TokenInformation + 5) = v90;
            *((_DWORD *)TokenInformation + 4) = v38[32];
            if ( v38[32] )
            {
              v93 = (_SID_AND_ATTRIBUTES *)((char *)v92 + ((v86 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
              *((_QWORD *)TokenInformation + 3) = v93;
            }
            else
            {
              *((_QWORD *)TokenInformation + 3) = 0LL;
              v93 = Dest;
            }
            *((_DWORD *)TokenInformation + 9) = v83;
            *((_DWORD *)TokenInformation + 8) = SessionId;
            v94 = (__int64)v92 + v90 + v86;
            *((_QWORD *)TokenInformation + 5) = v94;
            RtlCopySidAndAttributesArray(
              v38[31],
              *((PSID_AND_ATTRIBUTES *)v38 + 19),
              v86 - v85 * 16,
              v92,
              &v92[v85],
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            if ( v93 )
              RtlCopySidAndAttributesArray(
                v38[32],
                *((PSID_AND_ATTRIBUTES *)v38 + 20),
                v90 - v89,
                v93,
                &v93[v89 / 0x10],
                &RemainingSidArea,
                (PULONG)&RemainingSidArea);
            SepConvertTokenPrivilegesToLuidAndAttributes(v38, v94);
            goto LABEL_87;
          }
          goto LABEL_53;
        }
        return result;
      case TokenSandBoxInert:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            return -1073741789;
          v36 = Object;
          *(_DWORD *)TokenInformation = (*((_DWORD *)Object + 50) & 0x40) != 0;
          goto LABEL_47;
        }
        return result;
      case TokenAuditPolicy:
        if ( !SeSinglePrivilegeCheck(SeSecurityPrivilege, PreviousMode) )
          return -1073741727;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result >= 0 )
        {
          *v14 = 30;
          if ( (unsigned int)v5 < 0x1E )
            goto LABEL_55;
          v127 = KeGetCurrentThread();
          --v127->KernelApcDisable;
          v46 = (char *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          *(_OWORD *)TokenInformation = *(_OWORD *)(v46 + 88);
          *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v46 + 13);
          *((_DWORD *)TokenInformation + 6) = *((_DWORD *)v46 + 28);
          *((_WORD *)TokenInformation + 14) = *((_WORD *)v46 + 58);
LABEL_75:
          v35 = (struct _ERESOURCE *)*((_QWORD *)v46 + 6);
          goto LABEL_45;
        }
        return result;
      case TokenOrigin:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result >= 0 )
        {
          *v14 = 8;
          if ( (unsigned int)v5 < 8 )
            goto LABEL_55;
          v36 = Object;
          *(_QWORD *)TokenInformation = *((_QWORD *)Object + 28);
          goto LABEL_47;
        }
        return result;
      case TokenElevationType:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_55;
          v36 = Object;
          v56 = *(_DWORD *)(*((_QWORD *)Object + 27) + 32LL);
          if ( (v56 & 4) != 0 )
          {
            *(_DWORD *)TokenInformation = 3;
          }
          else if ( (v56 & 2) != 0 )
          {
            *(_DWORD *)TokenInformation = 2;
          }
          else
          {
            *(_DWORD *)TokenInformation = 1;
          }
          goto LABEL_47;
        }
        return result;
      case TokenLinkedToken:
        v155 = 0LL;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result >= 0 )
        {
          *v14 = 8;
          if ( (_DWORD)v5 != 8 )
          {
            ObfDereferenceObject(Object);
            return -1073741820;
          }
          v110 = -(SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) != 0);
          v111 = Object;
          v112 = SepReferenceLogonSessionSilo(
                   (_DWORD *)(*((_QWORD *)Object + 27) + 16LL),
                   *(_QWORD *)(*((_QWORD *)Object + 27) + 160LL),
                   (__int64 *)&v147);
          if ( v112 >= 0 )
          {
            v162 = 48;
            v163 = 0LL;
            v165 = PreviousMode ? 0 : 512;
            v164 = 0LL;
            v166 = 0LL;
            v113 = v110 + 2;
            v114 = v147;
            v112 = SepDuplicateToken(v147[6], (unsigned int)&v162, 0, v113, 1, 0, 0, (__int64)&v155);
            SepDeReferenceLogonSessionDirect(v114);
            if ( v112 >= 0 )
            {
              inserted = ObInsertObject(v155, 0LL, 0xF01FFu, 0, 0LL, &Handle);
              if ( inserted >= 0 )
              {
                *(_QWORD *)TokenInformation = Handle;
                v36 = v111;
                goto LABEL_47;
              }
              v126 = v111;
              goto LABEL_218;
            }
          }
          ObfDereferenceObject(v111);
          return v112;
        }
        return result;
      case TokenElevation:
        *v14 = 4;
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result >= 0 )
        {
          v61 = KeGetCurrentThread();
          --v61->KernelApcDisable;
          v62 = Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v63 = (*((_QWORD *)v62 + 8) & 0x120160684LL) != 0;
          v64 = 0;
          v65 = *((_DWORD *)v62 + 31);
          if ( !v65 )
          {
LABEL_118:
            ExReleaseResourceLite(*((PERESOURCE *)v62 + 6));
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            *(_DWORD *)TokenInformation = v63;
            goto LABEL_46;
          }
          while ( 1 )
          {
            if ( v63 )
              goto LABEL_118;
            v66 = *((_QWORD *)v62 + 19) + 16LL * v64;
            if ( (*(_DWORD *)(v66 + 8) & 0x30) == 0 )
            {
              if ( !*RtlSubAuthorityCountSid(*(PSID *)v66) )
              {
                v68 = 0;
LABEL_114:
                v69 = 0;
                v70 = &SepLUARids;
                while ( v68 != *v70 )
                {
                  ++v69;
                  ++v70;
                  if ( v69 >= 0x13 )
                    goto LABEL_117;
                }
                v63 = 1;
                goto LABEL_117;
              }
              v67 = RtlSubAuthorityCountSid(*(PSID *)v66);
              v68 = *RtlSubAuthoritySid(*(PSID *)v66, (unsigned int)*v67 - 1);
              if ( v68 <= 0x239 )
                goto LABEL_114;
            }
LABEL_117:
            if ( ++v64 >= v65 )
              goto LABEL_118;
          }
        }
        return result;
      case TokenHasRestrictions:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result < 0 )
          return result;
        *v14 = 1;
        if ( !(_DWORD)v5 )
          goto LABEL_55;
        v36 = Object;
        *(_BYTE *)TokenInformation = (*((_DWORD *)Object + 50) & 0x810) != 0;
        goto LABEL_47;
      case TokenAccessInformation:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result < 0 )
          return result;
        v106 = KeGetCurrentThread();
        --v106->KernelApcDisable;
        v18 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v107 = v136;
        v108 = v134[0];
        TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                             (__int64)v18,
                                             v134[0],
                                             (__int64)v136,
                                             &v141,
                                             (int *)&v142,
                                             (int *)&v151,
                                             (int *)&v154,
                                             (int *)&v152,
                                             (unsigned int *)&v145,
                                             (int *)&v150,
                                             (int *)&v144,
                                             (unsigned int *)&v143,
                                             &v148);
        *v14 = TokenAccessInformationBufferSize;
        if ( (unsigned int)v5 < TokenAccessInformationBufferSize )
          goto LABEL_80;
        SepCopyTokenAccessInformation(
          (__int64)v18,
          (__int64)TokenInformation,
          v5,
          v141,
          v142,
          v151,
          v154,
          v152,
          v145,
          v150,
          v144,
          v143,
          v148,
          v108,
          v107);
        goto LABEL_44;
      case TokenVirtualizationAllowed:
      case TokenVirtualizationEnabled:
      case TokenUIAccess:
      case TokenIsRestricted:
      case TokenPrivateNameSpace:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_55;
        v36 = Object;
        switch ( TokenInformationClass )
        {
          case TokenVirtualizationAllowed:
            LODWORD(v100) = (*((_DWORD *)Object + 50) >> 9) & 1;
            break;
          case TokenVirtualizationEnabled:
            LODWORD(v100) = (*((_DWORD *)Object + 50) >> 10) & 1;
            break;
          case TokenUIAccess:
            if ( (*((_DWORD *)Object + 50) & 0x1000) == 0 )
              goto LABEL_167;
LABEL_208:
            LODWORD(v100) = 1;
            break;
          case TokenIsRestricted:
            v100 = (*((_BYTE *)Object + 200) & 0x18) != 0;
            break;
          default:
            if ( (*((_DWORD *)Object + 50) & 0x10000) == 0 )
            {
LABEL_167:
              LODWORD(v100) = 0;
              break;
            }
            goto LABEL_208;
        }
        *(_DWORD *)TokenInformation = v100;
        break;
      case TokenIntegrityLevel:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result < 0 )
          return result;
        v49 = KeGetCurrentThread();
        --v49->KernelApcDisable;
        v18 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        SepCopyTokenIntegrity();
        Sid = (unsigned __int8 *)Src.Sid;
        v51 = 4 * *((unsigned __int8 *)Src.Sid + 1) + 24;
        *v14 = v51;
        if ( (unsigned int)v5 < v51 )
          goto LABEL_80;
        RtlCopySidAndAttributesArray(
          1u,
          &Src,
          4 * Sid[1] + 8,
          (PSID_AND_ATTRIBUTES)TokenInformation,
          (char *)TokenInformation + 16,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_44;
      case TokenMandatoryPolicy:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_55;
        inserted = SeQueryMandatoryPolicyToken((__int64)Object, TokenInformation);
        v139 = inserted;
LABEL_218:
        ObfDereferenceObject(v126);
        return inserted;
      case TokenLogonSid:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result < 0 )
          return result;
        v116 = KeGetCurrentThread();
        --v116->KernelApcDisable;
        v38 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v117 = 0;
        v118 = v38[31];
        if ( !v118 )
          goto LABEL_203;
        v119 = *((_QWORD *)v38 + 19);
        while ( (*(_DWORD *)(v119 + 16LL * v117 + 8) & 0xC0000000) != 0xC0000000 )
        {
          if ( ++v117 >= v118 )
            goto LABEL_203;
        }
        v9 = *(_QWORD *)(v119 + 16LL * v117);
LABEL_203:
        if ( !v9 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)v38 + 6));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ObfDereferenceObject(Object);
          return -1073741275;
        }
        v120 = 16LL * v117;
        v121 = 4 * *(unsigned __int8 *)(*(_QWORD *)(v120 + *((_QWORD *)v38 + 19)) + 1LL) + 32;
        *v14 = v121;
        if ( (unsigned int)v5 < v121 )
        {
LABEL_53:
          v41 = (struct _ERESOURCE *)*((_QWORD *)v38 + 6);
          goto LABEL_54;
        }
        *(_DWORD *)TokenInformation = 1;
        RtlCopySidAndAttributesArray(
          1u,
          (PSID_AND_ATTRIBUTES)(v120 + *((_QWORD *)v38 + 19)),
          4 * *(unsigned __int8 *)(*(_QWORD *)(v120 + *((_QWORD *)v38 + 19)) + 1LL) + 8,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 24,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
LABEL_87:
        v35 = (struct _ERESOURCE *)*((_QWORD *)v38 + 6);
LABEL_45:
        ExReleaseResourceLite(v35);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        goto LABEL_46;
      case TokenIsAppContainer:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result < 0 )
          return result;
        *v14 = 4;
        v36 = Object;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_56;
        *(_DWORD *)TokenInformation = (*((_DWORD *)Object + 50) >> 14) & 1;
        goto LABEL_47;
      case TokenCapabilities:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result < 0 )
          return result;
        v101 = KeGetCurrentThread();
        --v101->KernelApcDisable;
        v18 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v102 = v18[200];
        v103 = 16 * v102 + 8;
        if ( v102 )
        {
          v104 = *((_QWORD *)v18 + 99);
          v105 = v102;
          do
          {
            v103 += 4 * *(unsigned __int8 *)(*(_QWORD *)v104 + 1LL) + 8;
            v104 += 16LL;
            --v105;
          }
          while ( v105 );
        }
        *v14 = v103;
        if ( (unsigned int)v5 < v103 )
          goto LABEL_80;
        *(_DWORD *)TokenInformation = v18[200];
        RtlCopySidAndAttributesArray(
          v18[200],
          *((PSID_AND_ATTRIBUTES *)v18 + 99),
          v103,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 16 * v18[200] + 8,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_44;
      case TokenAppContainerSid:
        v42 = 8;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result < 0 )
          return result;
        v43 = KeGetCurrentThread();
        --v43->KernelApcDisable;
        v18 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v44 = (unsigned __int8 *)*((_QWORD *)v18 + 98);
        if ( v44 )
          v42 = 4 * v44[1] + 16;
        *v14 = v42;
        if ( (unsigned int)v5 < v42 )
          goto LABEL_80;
        if ( v44 )
          v44 = (unsigned __int8 *)TokenInformation + 8;
        *(_QWORD *)TokenInformation = v44;
        if ( v44 )
          RtlCopySid(v42 - 8, v44, *((PSID *)v18 + 98));
        goto LABEL_44;
      case TokenAppContainerNumber:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_55;
        v128 = KeGetCurrentThread();
        --v128->KernelApcDisable;
        v129 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v130 = *((_QWORD *)v129 + 135);
        if ( v130 )
          LODWORD(v9) = *(_DWORD *)(v130 + 40);
        ExReleaseResourceLite(*((PERESOURCE *)v129 + 6));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        *(_DWORD *)TokenInformation = v9;
        goto LABEL_46;
      case TokenUserClaimAttributes:
      case TokenDeviceClaimAttributes:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result < 0 )
          return result;
        v57 = KeGetCurrentThread();
        --v57->KernelApcDisable;
        v38 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v58 = *((_QWORD *)v38 + 137);
        if ( v58
          && (*(_QWORD *)(v58 + 576) || TokenInformationClass != TokenUserClaimAttributes)
          && (*(_QWORD *)(v58 + 584) || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          v60 = *(int **)(v58 + 584);
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v60 = *(int **)(v58 + 576);
          AuthzBasepQueryClaimAttributesToken(v60, 0LL, 0LL, &v138);
          v59 = v138;
        }
        else
        {
          v59 = 16;
          v157 = 0;
          v158[1] = v158;
          v158[0] = v158;
          LODWORD(v158[2]) = 0;
          v158[4] = &v158[3];
          v158[3] = &v158[3];
          v60 = &v157;
        }
        *v14 = v59;
        if ( (unsigned int)v5 < v59 )
          goto LABEL_53;
        v139 = AuthzBasepQueryClaimAttributesToken(v60, TokenInformation, (unsigned int)v5, &v138);
        goto LABEL_106;
      case TokenDeviceGroups:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result < 0 )
          return result;
        v78 = KeGetCurrentThread();
        --v78->KernelApcDisable;
        v38 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v79 = *((_QWORD *)v38 + 137);
        if ( v79 && (v80 = *(_DWORD *)v79) != 0 )
        {
          v81 = 16 * (v80 - 1) + 24;
        }
        else
        {
          v80 = 0;
          v81 = 24;
        }
        if ( v80 )
        {
          v131 = *(_QWORD *)(v79 + 8);
          v132 = v80;
          do
          {
            v81 += 4 * *(unsigned __int8 *)(*(_QWORD *)v131 + 1LL) + 8;
            v131 += 16LL;
            --v132;
          }
          while ( v132 );
        }
        *v14 = v81;
        if ( (unsigned int)v5 < v81 )
          goto LABEL_53;
        *(_QWORD *)TokenInformation = 0LL;
        *((_QWORD *)TokenInformation + 1) = 0LL;
        *((_QWORD *)TokenInformation + 2) = 0LL;
        *(_DWORD *)TokenInformation = v80;
        if ( v80 )
          RtlCopySidAndAttributesArray(
            v80,
            *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)v38 + 137) + 8LL),
            v81,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + 16 * v80 + 8,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        goto LABEL_87;
      case TokenSecurityAttributes:
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result < 0 )
          return result;
        v97 = KeGetCurrentThread();
        --v97->KernelApcDisable;
        v38 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v98 = (unsigned int *)*((_QWORD *)v38 + 97);
        if ( v98 )
        {
          LODWORD(SidArea) = 0;
          AuthzBasepQuerySecurityAttributesToken(v98, 0LL, 0, 0LL, (size_t)SidArea, &v138);
          v99 = v138;
        }
        else
        {
          v99 = 16;
        }
        *v14 = v99;
        if ( (unsigned int)v5 < v99 )
          goto LABEL_53;
        LODWORD(SidArea) = v5;
        v139 = AuthzBasepQuerySecurityAttributesToken(
                 *((unsigned int **)v38 + 97),
                 0LL,
                 0,
                 TokenInformation,
                 (size_t)SidArea,
                 &v138);
LABEL_106:
        ExReleaseResourceLite(*((PERESOURCE *)v38 + 6));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Object);
        return v139;
      case TokenProcessTrustLevel:
        v30 = 8;
        result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
        if ( result < 0 )
          return result;
        v31 = KeGetCurrentThread();
        --v31->KernelApcDisable;
        v18 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v32 = v134[0];
        v33 = v136;
        if ( v134[0] )
          v34 = v136;
        else
          v34 = (unsigned __int8 *)*((_QWORD *)v18 + 138);
        if ( v34 )
          v30 = 4 * v34[1] + 16;
        *v14 = v30;
        if ( (unsigned int)v5 < v30 )
        {
LABEL_80:
          v41 = (struct _ERESOURCE *)*((_QWORD *)v18 + 6);
          goto LABEL_54;
        }
        if ( v34 )
          v34 = (unsigned __int8 *)TokenInformation + 8;
        *(_QWORD *)TokenInformation = v34;
        if ( v34 )
        {
          if ( !v32 )
            v33 = (unsigned __int8 *)*((_QWORD *)v18 + 138);
          RtlCopySid(v30 - 8, v34, v33);
        }
LABEL_44:
        v35 = (struct _ERESOURCE *)*((_QWORD *)v18 + 6);
        goto LABEL_45;
      default:
        return -1073741821;
    }
    goto LABEL_47;
  }
  result = SepReferenceTokenByHandle((char *)TokenHandle, 8u, PreviousMode, &Object, v134, &v136);
  if ( result < 0 )
    return result;
  v20 = KeGetCurrentThread();
  --v20->KernelApcDisable;
  v21 = Object;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  v22 = 4 * *(unsigned __int8 *)(**((_QWORD **)v21 + 19) + 1LL) + 24;
  *v14 = v22;
  if ( (unsigned int)v5 >= v22 )
  {
    v23 = (char *)TokenInformation + 16;
    v24 = (const void **)*((_QWORD *)v21 + 19);
    v146 = 0;
    v159 = (char *)TokenInformation + 16;
    v153 = v22;
    while ( !(_DWORD)v9 )
    {
      v25 = 4 * *((unsigned __int8 *)*v24 + 1) + 8;
      v26 = (4 * *((unsigned __int8 *)*v24 + 1) + 11) & 0xFFFFFFFC;
      if ( v25 > v22 )
        goto LABEL_29;
      v22 -= v26;
      v153 = v22;
      *(_QWORD *)TokenInformation = v23;
      *((_DWORD *)TokenInformation + 2) = *((_DWORD *)v24 + 2);
      v27 = 4 * *((unsigned __int8 *)*v24 + 1) + 8;
      if ( v27 <= v25 )
        memmove(v23, *v24, v27);
      v23 += v26;
      v159 = v23;
      LODWORD(v9) = 1;
      v146 = 1;
    }
    RemainingSidArea = (PSID)__PAIR64__(HIDWORD(v23), v22);
LABEL_29:
    ExReleaseResourceLite(*((PERESOURCE *)v21 + 6));
    v28 = KeGetCurrentThread();
    v29 = v28->KernelApcDisable + 1;
    v28->KernelApcDisable = v29;
    if ( !v29
      && ($E81C3296F15336D9BF9B2D43BB137B25 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
      && !v28->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v28);
    }
LABEL_46:
    v36 = Object;
LABEL_47:
    ObfDereferenceObject(v36);
    return 0;
  }
  v41 = (struct _ERESOURCE *)*((_QWORD *)v21 + 6);
LABEL_54:
  ExReleaseResourceLite(v41);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_55:
  v36 = Object;
LABEL_56:
  ObfDereferenceObject(v36);
  return -1073741789;
}
