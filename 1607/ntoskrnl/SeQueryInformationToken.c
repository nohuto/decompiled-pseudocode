/*
 * XREFs of SeQueryInformationToken @ 0x140438EC0
 * Callers:
 *     RtlpQueryLowBoxId @ 0x14000EE48 (RtlpQueryLowBoxId.c)
 *     IopIsProcessAppContainer @ 0x1400B06B4 (IopIsProcessAppContainer.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1401B4DC4 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     RtlCheckTokenCapability @ 0x140210438 (RtlCheckTokenCapability.c)
 *     SepCheckCapabilities @ 0x1403E1D20 (SepCheckCapabilities.c)
 *     AlpcpCheckConnectionSecurity @ 0x1403FF660 (AlpcpCheckConnectionSecurity.c)
 *     CmpIsVirtEnabled @ 0x14040E088 (CmpIsVirtEnabled.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     SeQuerySigningPolicyWorker @ 0x14045C0CC (SeQuerySigningPolicyWorker.c)
 *     EtwpBuildProcessEvent @ 0x14045C730 (EtwpBuildProcessEvent.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     NtCompareTokens @ 0x1404748F0 (NtCompareTokens.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140476830 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140477664 (ObpCaptureBoundaryDescriptor.c)
 *     SeTokenIsElevated @ 0x1404B6E88 (SeTokenIsElevated.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404D4B6C (PspAllocateAndQueryNotificationChannel.c)
 *     EtwpPsProvTraceProcess @ 0x14054BA48 (EtwpPsProvTraceProcess.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140575BE4 (EtwpAcquireTokenAccessInformation.c)
 *     CmpBuildAdminInformation @ 0x140600550 (CmpBuildAdminInformation.c)
 *     PiDqOpenUserObjectRegKey @ 0x140631E3C (PiDqOpenUserObjectRegKey.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000D278 (RtlSubAuthoritySid.c)
 *     SepCopyTokenIntegrity @ 0x14000DC90 (SepCopyTokenIntegrity.c)
 *     SepTokenPrivilegeCount @ 0x14000E6F0 (SepTokenPrivilegeCount.c)
 *     RtlSubAuthorityCountSid @ 0x14002CDC8 (RtlSubAuthorityCountSid.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     SepConvertTokenPrivileges @ 0x14010BF78 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x14010BFA0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCopySidAndAttributesArray @ 0x14040DD10 (RtlCopySidAndAttributesArray.c)
 *     RtlCopySid @ 0x14041154C (RtlCopySid.c)
 *     SeQuerySessionIdToken @ 0x1404B1528 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x1404B6B0C (AuthzBasepQueryClaimAttributesToken.c)
 *     SepCopyTokenAccessInformation @ 0x140518A04 (SepCopyTokenAccessInformation.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x140518DDC (SepGetTokenAccessInformationBufferSize.c)
 */

NTSTATUS __stdcall SeQueryInformationToken(
        PACCESS_TOKEN Token,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID *TokenInformation)
{
  ULONG v3; // edi
  int v7; // ebx
  struct _KTHREAD *v9; // rax
  __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG v12; // r15d
  _SID_AND_ATTRIBUTES *PoolWithTag; // rax
  _SID_AND_ATTRIBUTES *v14; // rdi
  _DWORD *v15; // r15
  struct _KTHREAD *v16; // rax
  unsigned int v17; // r13d
  bool v18; // r12
  unsigned int v19; // ebx
  __int64 v20; // rdx
  PSID v21; // r15
  UCHAR v22; // cl
  ULONG v23; // edx
  unsigned int v24; // ecx
  _DWORD *v25; // rax
  struct _KTHREAD *v26; // rax
  UCHAR v27; // cl
  _DWORD *v28; // rax
  int v29; // edx
  char *v30; // rax
  char *v31; // rbx
  struct _KTHREAD *v32; // rax
  __int64 v33; // rax
  int v34; // edx
  struct _KTHREAD *v35; // rax
  char *v36; // rdi
  unsigned int v37; // r15d
  char *v38; // rax
  _DWORD *v39; // rcx
  struct _KTHREAD *v40; // rax
  unsigned int v41; // eax
  ULONG v42; // edi
  __int64 *v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rax
  char *v46; // rax
  struct _KTHREAD *v47; // rax
  unsigned int TokenAccessInformationBufferSize; // r15d
  char *v49; // rax
  struct _KTHREAD *v50; // rax
  unsigned int v51; // edi
  char *v52; // rax
  struct _KTHREAD *v53; // rax
  unsigned int v54; // ecx
  ULONG v55; // edi
  __int64 v56; // r8
  __int64 *v57; // rdx
  __int64 v58; // rax
  char *v59; // rax
  struct _KTHREAD *v60; // rax
  unsigned int v61; // eax
  char *v62; // rax
  struct _KTHREAD *v63; // rax
  int v64; // eax
  unsigned int v65; // ecx
  int v66; // r9d
  unsigned int v67; // r12d
  __int64 *v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rax
  unsigned int v71; // eax
  unsigned int v72; // r13d
  unsigned int v73; // r15d
  __int64 *v74; // rdx
  __int64 v75; // r8
  __int64 v76; // rax
  char *v77; // rax
  _SID_AND_ATTRIBUTES *v78; // r9
  struct _KTHREAD *v79; // rax
  unsigned int v80; // edi
  char *v81; // rax
  struct _KTHREAD *v82; // rax
  __int64 v83; // rax
  unsigned int v84; // eax
  char *v85; // rax
  void *v86; // rcx
  _OWORD *v87; // rax
  _DWORD *v88; // rcx
  struct _KTHREAD *v89; // rax
  __int64 v90; // r15
  int *v91; // rax
  int *v92; // r15
  unsigned int v93; // r12d
  PVOID v94; // rax
  void *v95; // rbx
  NTSTATUS v96; // edi
  struct _KTHREAD *v97; // rax
  unsigned int *v98; // rdx
  unsigned int v99; // r15d
  ULONG v100; // edi
  __int64 *v101; // rdx
  __int64 v102; // r8
  __int64 v103; // rax
  struct _KTHREAD *v104; // rax
  unsigned int v105; // r15d
  char *v106; // rax
  char *v107; // rdi
  PSID RemainingSidArea; // [rsp+80h] [rbp-49h] BYREF
  int v109; // [rsp+88h] [rbp-41h] BYREF
  int v110; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v111; // [rsp+90h] [rbp-39h] BYREF
  int v112; // [rsp+94h] [rbp-35h] BYREF
  int v113; // [rsp+98h] [rbp-31h] BYREF
  int v114; // [rsp+9Ch] [rbp-2Dh] BYREF
  int v115; // [rsp+A0h] [rbp-29h] BYREF
  int v116; // [rsp+A4h] [rbp-25h] BYREF
  int v117; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v118; // [rsp+B0h] [rbp-19h] BYREF
  __int64 *v119; // [rsp+B8h] [rbp-11h]
  __int64 v120; // [rsp+C0h] [rbp-9h]
  __int64 v121; // [rsp+C8h] [rbp-1h] BYREF
  __int64 *v122; // [rsp+D0h] [rbp+7h]
  _DWORD *v123; // [rsp+D8h] [rbp+Fh]
  PSID Sid; // [rsp+E0h] [rbp+17h]
  int v125; // [rsp+130h] [rbp+67h] BYREF
  SIZE_T NumberOfBytes; // [rsp+138h] [rbp+6Fh] BYREF
  int v127; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = 0;
  v117 = 0;
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  if ( TokenInformationClass != TokenVirtualizationEnabled )
  {
    switch ( TokenInformationClass )
    {
      case TokenUser:
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v12 = 4 * *(unsigned __int8 *)(**((_QWORD **)Token + 19) + 1LL) + 24;
        PoolWithTag = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, v12, 0x20206553u);
        v14 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_70;
        RtlCopySidAndAttributesArray(
          1u,
          *((PSID_AND_ATTRIBUTES *)Token + 19),
          v12,
          PoolWithTag,
          &PoolWithTag[1],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *TokenInformation = v14;
        return 0;
      case TokenGroups:
        v53 = KeGetCurrentThread();
        --v53->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v54 = *((_DWORD *)Token + 31);
        v55 = 16 * (v54 - 2) + 24;
        if ( v54 > 1 )
        {
          v56 = v54 - 1;
          v57 = (__int64 *)(*((_QWORD *)Token + 19) + 16LL);
          do
          {
            v58 = *v57;
            v57 += 2;
            v55 += 4 * *(unsigned __int8 *)(v58 + 1) + 8;
            --v56;
          }
          while ( v56 );
        }
        v59 = (char *)ExAllocatePoolWithTag(PagedPool, v55, 0x20206553u);
        v31 = v59;
        if ( !v59 )
          goto LABEL_70;
        *(_DWORD *)v59 = *((_DWORD *)Token + 31) - 1;
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 31) - 1,
          (PSID_AND_ATTRIBUTES)(*((_QWORD *)Token + 19) + 16LL),
          v55,
          (PSID_AND_ATTRIBUTES)(v59 + 8),
          &v59[16 * (*((_DWORD *)Token + 31) - 2) + 24],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_42;
      case TokenPrivileges:
        v60 = KeGetCurrentThread();
        --v60->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v61 = SepTokenPrivilegeCount((__int64)Token);
        if ( v61 > 1 )
          v3 = 12 * (v61 - 1);
        v62 = (char *)ExAllocatePoolWithTag(PagedPool, v3 + 16, 0x20206553u);
        v31 = v62;
        if ( !v62 )
          goto LABEL_70;
        SepConvertTokenPrivileges((__int64)Token, v62);
        goto LABEL_42;
      case TokenOwner:
        v79 = KeGetCurrentThread();
        --v79->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v80 = 4
            * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)) + 1LL)
            + 16;
        v81 = (char *)ExAllocatePoolWithTag(PagedPool, v80, 0x20206553u);
        v31 = v81;
        if ( !v81 )
          goto LABEL_70;
        *(_QWORD *)v81 = v81 + 8;
        RtlCopySid(v80 - 8, v81 + 8, *(PSID *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)));
        goto LABEL_42;
      case TokenPrimaryGroup:
        v50 = KeGetCurrentThread();
        --v50->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v51 = 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) + 16;
        v52 = (char *)ExAllocatePoolWithTag(PagedPool, v51, 0x20206553u);
        v31 = v52;
        if ( !v52 )
          goto LABEL_70;
        *(_QWORD *)v52 = v52 + 8;
        RtlCopySid(v51 - 8, v52 + 8, *((PSID *)Token + 21));
        goto LABEL_42;
      case TokenDefaultDacl:
        v82 = KeGetCurrentThread();
        LODWORD(NumberOfBytes) = 8;
        --v82->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v83 = *((_QWORD *)Token + 23);
        if ( v83 )
          v84 = *(unsigned __int16 *)(v83 + 2) + 8;
        else
          v84 = NumberOfBytes;
        v85 = (char *)ExAllocatePoolWithTag(PagedPool, v84, 0x20206553u);
        v31 = v85;
        if ( !v85 )
          goto LABEL_70;
        v86 = v85 + 8;
        if ( *((_QWORD *)Token + 23) )
        {
          *(_QWORD *)v85 = v86;
          memmove(v86, *((const void **)Token + 23), *(unsigned __int16 *)(*((_QWORD *)Token + 23) + 2LL));
        }
        else
        {
          *(_QWORD *)v85 = 0LL;
        }
        goto LABEL_42;
      case TokenSource:
        v87 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x20206553u);
        if ( !v87 )
          return -1073741670;
        *v87 = *(_OWORD *)Token;
        *TokenInformation = v87;
        return 0;
      case TokenType:
        v88 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v88 )
          return -1073741670;
        *v88 = *((_DWORD *)Token + 48);
        *TokenInformation = v88;
        return 0;
      case TokenImpersonationLevel:
        if ( *((_DWORD *)Token + 48) != 2 )
          return -1073741821;
        v39 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v39 )
          return -1073741670;
        *v39 = *((_DWORD *)Token + 49);
        *TokenInformation = v39;
        return 0;
      case TokenStatistics:
        v30 = (char *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x20206553u);
        v31 = v30;
        if ( !v30 )
          return -1073741670;
        *(_QWORD *)v30 = *((_QWORD *)Token + 2);
        *((_QWORD *)v30 + 1) = *((_QWORD *)Token + 3);
        *((_DWORD *)v30 + 6) = *((_DWORD *)Token + 48);
        *((_DWORD *)v30 + 7) = *((_DWORD *)Token + 49);
        *((_QWORD *)v30 + 2) = *((_QWORD *)Token + 5);
        v32 = KeGetCurrentThread();
        --v32->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        *((_DWORD *)v31 + 8) = *((_DWORD *)Token + 34);
        v33 = *((_QWORD *)Token + 23);
        v34 = *((_DWORD *)Token + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) - 8;
        if ( v33 )
          v34 -= *(unsigned __int16 *)(v33 + 2);
        *((_DWORD *)v31 + 9) = v34;
        *((_DWORD *)v31 + 9) = *((_DWORD *)Token + 35);
        *((_DWORD *)v31 + 10) = *((_DWORD *)Token + 31) - 1;
        *((_DWORD *)v31 + 11) = SepTokenPrivilegeCount((__int64)Token);
        *((_QWORD *)v31 + 6) = *((_QWORD *)Token + 7);
        goto LABEL_42;
      case TokenSessionId:
        SeQuerySessionIdToken(Token, (PULONG)TokenInformation);
        return 0;
      case TokenGroupsAndPrivileges:
        v63 = KeGetCurrentThread();
        --v63->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v64 = SepTokenPrivilegeCount((__int64)Token);
        v65 = *((_DWORD *)Token + 31);
        v125 = v64;
        v66 = 12 * v64;
        v67 = 16 * v65;
        LODWORD(NumberOfBytes) = 12 * v64;
        v127 = 16 * v65;
        if ( v65 )
        {
          v68 = (__int64 *)*((_QWORD *)Token + 19);
          v69 = v65;
          do
          {
            v70 = *v68;
            v68 += 2;
            v67 += (4 * *(unsigned __int8 *)(v70 + 1) + 15) & 0xFFFFFFF8;
            --v69;
          }
          while ( v69 );
        }
        v71 = *((_DWORD *)Token + 32);
        v72 = 16 * v71;
        v73 = 16 * v71;
        if ( v71 )
        {
          v74 = (__int64 *)*((_QWORD *)Token + 20);
          v75 = v71;
          do
          {
            v76 = *v74;
            v74 += 2;
            v73 += (4 * *(unsigned __int8 *)(v76 + 1) + 15) & 0xFFFFFFF8;
            --v75;
          }
          while ( v75 );
        }
        v77 = (char *)ExAllocatePoolWithTag(PagedPool, v73 + v67 + v66 + 56, 0x20206553u);
        v31 = v77;
        if ( !v77 )
          goto LABEL_70;
        v78 = (_SID_AND_ATTRIBUTES *)(v77 + 56);
        *((_QWORD *)v77 + 6) = *((_QWORD *)Token + 3);
        *((_DWORD *)v77 + 1) = v67;
        *(_DWORD *)v77 = *((_DWORD *)Token + 31);
        *((_QWORD *)v77 + 1) = v77 + 56;
        *((_DWORD *)v77 + 5) = v73;
        *((_DWORD *)v77 + 4) = *((_DWORD *)Token + 32);
        if ( *((_DWORD *)Token + 32) )
          *((_QWORD *)v77 + 3) = (char *)v78 + ((v67 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
        else
          *((_QWORD *)v77 + 3) = 0LL;
        *((_DWORD *)v77 + 9) = NumberOfBytes;
        *((_DWORD *)v77 + 8) = v125;
        *((_QWORD *)v77 + 5) = (char *)v78 + v73 + v67;
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 31),
          *((PSID_AND_ATTRIBUTES *)Token + 19),
          v67 - v127,
          v78,
          (char *)v78 + (unsigned int)v127,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        if ( *((_DWORD *)v31 + 4) )
          RtlCopySidAndAttributesArray(
            *((_DWORD *)Token + 32),
            *((PSID_AND_ATTRIBUTES *)Token + 20),
            v73 - v72,
            *((PSID_AND_ATTRIBUTES *)v31 + 3),
            (PSID)(*((_QWORD *)v31 + 3) + v72),
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        SepConvertTokenPrivilegesToLuidAndAttributes(Token, *((_QWORD *)v31 + 5));
        goto LABEL_42;
      case TokenElevationType:
        v28 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v28 )
          return -1073741670;
        v29 = *(_DWORD *)(*((_QWORD *)Token + 27) + 32LL);
        if ( (v29 & 4) != 0 )
        {
          *v28 = 3;
        }
        else
        {
          LOBYTE(v3) = (v29 & 2) != 0;
          *v28 = v3 + 1;
        }
        *TokenInformation = v28;
        return 0;
      case TokenElevation:
        v123 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        v15 = v123;
        if ( !v123 )
          return -1073741670;
        v16 = KeGetCurrentThread();
        --v16->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v17 = *((_DWORD *)Token + 31);
        v18 = (*((_QWORD *)Token + 8) & 0x1120160684LL) != 0;
        v19 = 0;
        if ( !v17 )
          goto LABEL_26;
        break;
      case TokenHasRestrictions:
      case TokenVirtualizationAllowed:
      case TokenUIAccess:
      case TokenIsAppContainer:
      case TokenPrivateNameSpace:
        goto LABEL_2;
      case TokenAccessInformation:
        v47 = KeGetCurrentThread();
        --v47->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                             (_DWORD)Token,
                                             0,
                                             0,
                                             (unsigned int)&v116,
                                             (__int64)&v115,
                                             (__int64)&v114,
                                             (__int64)&v113,
                                             (__int64)&v112,
                                             (__int64)&v111,
                                             (__int64)&v110,
                                             (__int64)&v109,
                                             (__int64)&v127,
                                             (__int64)&v125);
        v49 = (char *)ExAllocatePoolWithTag(PagedPool, TokenAccessInformationBufferSize, 0x20206553u);
        v31 = v49;
        if ( !v49 )
          goto LABEL_70;
        SepCopyTokenAccessInformation(
          (int)Token,
          (int)v49,
          TokenAccessInformationBufferSize,
          v116,
          v115,
          v114,
          v113,
          v112,
          v111,
          v110,
          v109,
          v127,
          v125,
          0,
          0LL);
        goto LABEL_42;
      case TokenIntegrityLevel:
        v26 = KeGetCurrentThread();
        --v26->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        SepCopyTokenIntegrity();
        v27 = *RtlSubAuthorityCountSid(Sid);
        if ( v27 )
          v3 = *RtlSubAuthoritySid(Sid, (unsigned int)v27 - 1);
        *(_DWORD *)TokenInformation = v3;
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        return 0;
      case TokenCapabilities:
        v40 = KeGetCurrentThread();
        --v40->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v41 = *((_DWORD *)Token + 200);
        v42 = 16 * v41 + 24;
        if ( v41 )
        {
          v43 = (__int64 *)*((_QWORD *)Token + 99);
          v44 = v41;
          do
          {
            v45 = *v43;
            v43 += 2;
            v42 += 4 * *(unsigned __int8 *)(v45 + 1) + 8;
            --v44;
          }
          while ( v44 );
        }
        v46 = (char *)ExAllocatePoolWithTag(PagedPool, v42, 0x20206553u);
        v31 = v46;
        if ( !v46 )
          goto LABEL_70;
        *(_DWORD *)v46 = *((_DWORD *)Token + 200);
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 200),
          *((PSID_AND_ATTRIBUTES *)Token + 99),
          v42,
          (PSID_AND_ATTRIBUTES)(v46 + 8),
          &v46[16 * *((_DWORD *)Token + 200) + 24],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_42;
      case TokenAppContainerSid:
        v35 = KeGetCurrentThread();
        --v35->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v36 = (char *)*((_QWORD *)Token + 98);
        if ( v36 )
          v37 = 4 * (unsigned __int8)v36[1] + 16;
        else
          v37 = 8;
        v38 = (char *)ExAllocatePoolWithTag(PagedPool, v37, 0x20206553u);
        v31 = v38;
        if ( !v38 )
          goto LABEL_70;
        if ( v36 )
        {
          v36 = v38 + 8;
          RtlCopySid(v37 - 8, v38 + 8, *((PSID *)Token + 98));
        }
        goto LABEL_48;
      case TokenAppContainerNumber:
        v9 = KeGetCurrentThread();
        --v9->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v10 = *((_QWORD *)Token + 135);
        if ( v10 )
          v3 = *(_DWORD *)(v10 + 40);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *(_DWORD *)TokenInformation = v3;
        return 0;
      case TokenUserClaimAttributes:
      case TokenDeviceClaimAttributes:
        *TokenInformation = 0LL;
        v89 = KeGetCurrentThread();
        --v89->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v90 = *((_QWORD *)Token + 137);
        if ( v90
          && ((v91 = *(int **)(v90 + 576)) != 0LL || TokenInformationClass != TokenUserClaimAttributes)
          && ((v92 = *(int **)(v90 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v92 = v91;
          AuthzBasepQueryClaimAttributesToken(v92, 0LL, 0LL, &NumberOfBytes);
          v93 = NumberOfBytes;
        }
        else
        {
          v117 = 0;
          v119 = &v118;
          v92 = &v117;
          LODWORD(v120) = 0;
          v118 = (__int64)&v118;
          v93 = 16;
          v122 = &v121;
          v121 = (__int64)&v121;
        }
        v94 = ExAllocatePoolWithTag(PagedPool, v93, 0x20206553u);
        v95 = v94;
        if ( !v94 )
          goto LABEL_70;
        v96 = AuthzBasepQueryClaimAttributesToken(v92, v94, v93, &NumberOfBytes);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        if ( v96 >= 0 )
          *TokenInformation = v95;
        else
          ExFreePoolWithTag(v95, 0);
        return v96;
      case TokenDeviceGroups:
        v97 = KeGetCurrentThread();
        --v97->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v98 = (unsigned int *)*((_QWORD *)Token + 137);
        if ( v98 && (v99 = *v98) != 0 )
        {
          v100 = 16 * (v99 - 1) + 24;
        }
        else
        {
          v99 = 0;
          v100 = 24;
        }
        if ( v99 )
        {
          v101 = (__int64 *)*((_QWORD *)v98 + 1);
          v102 = v99;
          do
          {
            v103 = *v101;
            v101 += 2;
            v100 += 4 * *(unsigned __int8 *)(v103 + 1) + 8;
            --v102;
          }
          while ( v102 );
        }
        v31 = (char *)ExAllocatePoolWithTag(PagedPool, v100, 0x20206553u);
        if ( !v31 )
          goto LABEL_70;
        *(_QWORD *)v31 = 0LL;
        *((_QWORD *)v31 + 1) = 0LL;
        *((_QWORD *)v31 + 2) = 0LL;
        *(_DWORD *)v31 = v99;
        if ( v99 )
          RtlCopySidAndAttributesArray(
            **((_DWORD **)Token + 137),
            *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)Token + 137) + 8LL),
            v100,
            (PSID_AND_ATTRIBUTES)(v31 + 8),
            &v31[16 * v99 + 8],
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        goto LABEL_42;
      case TokenProcessTrustLevel:
        v104 = KeGetCurrentThread();
        --v104->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v36 = (char *)*((_QWORD *)Token + 138);
        if ( v36 )
          v105 = 4 * (unsigned __int8)v36[1] + 16;
        else
          v105 = 8;
        v106 = (char *)ExAllocatePoolWithTag(PagedPool, v105, 0x20206553u);
        v31 = v106;
        if ( !v106 )
        {
LABEL_70:
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          return -1073741670;
        }
        if ( v36 )
        {
          v107 = v106 + 8;
          RtlCopySid(v105 - 8, v106 + 8, *((PSID *)Token + 138));
          *(_QWORD *)v31 = v107;
        }
        else
        {
LABEL_48:
          *(_QWORD *)v31 = v36;
        }
LABEL_42:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *TokenInformation = v31;
        return 0;
      default:
        return -1073741821;
    }
    while ( 1 )
    {
      if ( v18 )
      {
LABEL_25:
        v15 = v123;
LABEL_26:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *v15 = v18;
        *TokenInformation = v15;
        return 0;
      }
      v20 = *((_QWORD *)Token + 19) + 16LL * v19;
      if ( (*(_DWORD *)(v20 + 8) & 0x30) == 0 )
      {
        v21 = *(PSID *)v20;
        v22 = *RtlSubAuthorityCountSid(*(PSID *)v20);
        if ( !v22 )
        {
          v23 = 0;
LABEL_21:
          v24 = 0;
          v25 = &SepLUARids;
          while ( v23 != *v25 )
          {
            ++v24;
            ++v25;
            if ( v24 >= 0x13 )
              goto LABEL_24;
          }
          v18 = 1;
          goto LABEL_24;
        }
        v23 = *RtlSubAuthoritySid(v21, (unsigned int)v22 - 1);
        if ( v23 <= 0x239 )
          goto LABEL_21;
      }
LABEL_24:
      if ( ++v19 >= v17 )
        goto LABEL_25;
    }
  }
LABEL_2:
  if ( TokenInformationClass == TokenVirtualizationAllowed )
  {
    if ( (*((_DWORD *)Token + 50) & 0x200) != 0 )
    {
      v7 = 1;
      goto LABEL_6;
    }
  }
  else if ( TokenInformationClass == TokenVirtualizationEnabled )
  {
    if ( (*((_DWORD *)Token + 50) & 0x400) != 0 )
    {
      v7 = 1;
      goto LABEL_6;
    }
  }
  else if ( TokenInformationClass == TokenUIAccess )
  {
    if ( (*((_DWORD *)Token + 50) & 0x1000) != 0 )
    {
      v7 = 1;
      goto LABEL_6;
    }
  }
  else
  {
    if ( TokenInformationClass != TokenIsAppContainer )
    {
      if ( TokenInformationClass == TokenHasRestrictions )
        *(_BYTE *)TokenInformation = (*((_DWORD *)Token + 50) & 0x810) != 0;
      else
        *(_DWORD *)TokenInformation = HIWORD(*((_DWORD *)Token + 50)) & 1;
      return 0;
    }
    if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
    {
      v7 = 1;
      goto LABEL_6;
    }
  }
  v7 = 0;
LABEL_6:
  *(_DWORD *)TokenInformation = v7;
  return 0;
}
