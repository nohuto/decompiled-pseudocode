/*
 * XREFs of SeQueryInformationToken @ 0x1403FE580
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140001854 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     RtlpQueryLowBoxId @ 0x140038774 (RtlpQueryLowBoxId.c)
 *     IopIsProcessAppContainer @ 0x1400EFD88 (IopIsProcessAppContainer.c)
 *     SepCheckCapabilities @ 0x1403B47E4 (SepCheckCapabilities.c)
 *     NtCompareTokens @ 0x1403BE070 (NtCompareTokens.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1403ECA98 (PspAllocateAndQueryNotificationChannel.c)
 *     CmpIsVirtEnabled @ 0x1403FBDC0 (CmpIsVirtEnabled.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     SeQuerySigningPolicyWorker @ 0x140448AFC (SeQuerySigningPolicyWorker.c)
 *     EtwpBuildProcessEvent @ 0x140449F40 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x14044A4A8 (EtwpPsProvTraceProcess.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     AlpcpCheckConnectionSecurity @ 0x14046ACE4 (AlpcpCheckConnectionSecurity.c)
 *     CmpBuildAdminInformation @ 0x140497598 (CmpBuildAdminInformation.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404AA488 (ObpCaptureBoundaryDescriptor.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1404AA73C (ObpVerifyCreatorAccessCheck.c)
 *     SeTokenIsElevated @ 0x1404ABED0 (SeTokenIsElevated.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1404CF5BC (EtwpAcquireTokenAccessInformation.c)
 *     PiDqOpenUserObjectRegKey @ 0x1404F8E2C (PiDqOpenUserObjectRegKey.c)
 * Callees:
 *     SepConvertTokenPrivileges @ 0x140004B64 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x140004B80 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepTokenPrivilegeCount @ 0x140004C10 (SepTokenPrivilegeCount.c)
 *     SepCopyTokenIntegrity @ 0x140004E6C (SepCopyTokenIntegrity.c)
 *     RtlSubAuthoritySid @ 0x14003D36C (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x14003D378 (RtlSubAuthorityCountSid.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepCopyTokenAccessInformation @ 0x1403C1B30 (SepCopyTokenAccessInformation.c)
 *     RtlCopySidAndAttributesArray @ 0x1403C1E10 (RtlCopySidAndAttributesArray.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x1403C1EE0 (SepGetTokenAccessInformationBufferSize.c)
 *     RtlCopySid @ 0x1404793FC (RtlCopySid.c)
 *     SeQuerySessionIdToken @ 0x1404A6B4C (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x1404ADE78 (AuthzBasepQueryClaimAttributesToken.c)
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
  char *v11; // rax
  char *v12; // rbx
  struct _KTHREAD *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  struct _KTHREAD *v16; // rax
  unsigned int v17; // r13d
  unsigned int v18; // r15d
  bool v19; // r12
  __int64 v20; // rdx
  PSID v21; // rbx
  UCHAR v22; // cl
  ULONG v23; // edx
  unsigned int v24; // ecx
  _DWORD *v25; // rax
  void *v26; // rcx
  struct _KTHREAD *v27; // rax
  UCHAR v28; // cl
  _DWORD *v29; // rax
  int v30; // edx
  struct _KTHREAD *CurrentThread; // rax
  ULONG v32; // r15d
  _SID_AND_ATTRIBUTES *PoolWithTag; // rax
  _SID_AND_ATTRIBUTES *v34; // rdi
  struct _KTHREAD *v35; // rax
  unsigned int v36; // ecx
  ULONG v37; // edi
  __int64 v38; // r8
  __int64 *v39; // rdx
  __int64 v40; // rax
  char *v41; // rax
  struct _KTHREAD *v42; // rax
  char *v43; // rdi
  unsigned int v44; // r15d
  char *v45; // rax
  _DWORD *v46; // rcx
  struct _KTHREAD *v47; // rax
  unsigned int TokenAccessInformationBufferSize; // r15d
  char *v49; // rax
  struct _KTHREAD *v50; // rax
  unsigned int v51; // eax
  ULONG v52; // edi
  __int64 *v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rax
  char *v56; // rax
  struct _KTHREAD *v57; // rax
  unsigned int v58; // edi
  char *v59; // rax
  struct _KTHREAD *v60; // rax
  unsigned int v61; // edi
  char *v62; // rax
  struct _KTHREAD *v63; // rax
  unsigned int v64; // eax
  char *v65; // rax
  struct _KTHREAD *v66; // rax
  int v67; // eax
  unsigned int v68; // ecx
  int v69; // r9d
  unsigned int v70; // r12d
  __int64 *v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rax
  unsigned int v74; // eax
  unsigned int v75; // r13d
  unsigned int v76; // r15d
  __int64 *v77; // rdx
  __int64 v78; // r8
  __int64 v79; // rax
  char *v80; // rax
  _SID_AND_ATTRIBUTES *v81; // r9
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
  int v108; // eax
  PSID RemainingSidArea; // [rsp+80h] [rbp-49h] BYREF
  unsigned int v110; // [rsp+88h] [rbp-41h] BYREF
  unsigned int v111; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v112; // [rsp+90h] [rbp-39h] BYREF
  unsigned int v113; // [rsp+94h] [rbp-35h] BYREF
  unsigned int v114; // [rsp+98h] [rbp-31h] BYREF
  unsigned int v115; // [rsp+9Ch] [rbp-2Dh] BYREF
  int v116; // [rsp+A0h] [rbp-29h] BYREF
  unsigned int v117; // [rsp+A4h] [rbp-25h] BYREF
  int v118; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v119; // [rsp+B0h] [rbp-19h] BYREF
  __int64 *v120; // [rsp+B8h] [rbp-11h]
  __int64 v121; // [rsp+C0h] [rbp-9h]
  __int64 v122; // [rsp+C8h] [rbp-1h] BYREF
  __int64 *v123; // [rsp+D0h] [rbp+7h]
  _DWORD *v124; // [rsp+D8h] [rbp+Fh]
  PSID Sid; // [rsp+E0h] [rbp+17h]
  int v126; // [rsp+130h] [rbp+67h] BYREF
  SIZE_T NumberOfBytes; // [rsp+138h] [rbp+6Fh] BYREF
  int v128; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = 0;
  v118 = 0;
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  if ( TokenInformationClass != TokenVirtualizationEnabled )
  {
    switch ( TokenInformationClass )
    {
      case TokenUser:
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v32 = 4 * *(unsigned __int8 *)(**((_QWORD **)Token + 19) + 1LL) + 24;
        PoolWithTag = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, v32, 0x20206553u);
        v34 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_74;
        RtlCopySidAndAttributesArray(
          1u,
          *((PSID_AND_ATTRIBUTES *)Token + 19),
          v32,
          PoolWithTag,
          &PoolWithTag[1],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *TokenInformation = v34;
        return 0;
      case TokenGroups:
        v35 = KeGetCurrentThread();
        --v35->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v36 = *((_DWORD *)Token + 31);
        v37 = 16 * (v36 - 2) + 24;
        if ( v36 > 1 )
        {
          v38 = v36 - 1;
          v39 = (__int64 *)(*((_QWORD *)Token + 19) + 16LL);
          do
          {
            v40 = *v39;
            v39 += 2;
            v37 += 4 * *(unsigned __int8 *)(v40 + 1) + 8;
            --v38;
          }
          while ( v38 );
        }
        v41 = (char *)ExAllocatePoolWithTag(PagedPool, v37, 0x20206553u);
        v12 = v41;
        if ( !v41 )
          goto LABEL_74;
        *(_DWORD *)v41 = *((_DWORD *)Token + 31) - 1;
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 31) - 1,
          (PSID_AND_ATTRIBUTES)(*((_QWORD *)Token + 19) + 16LL),
          v37,
          (PSID_AND_ATTRIBUTES)(v41 + 8),
          &v41[16 * (*((_DWORD *)Token + 31) - 2) + 24],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_16;
      case TokenPrivileges:
        v63 = KeGetCurrentThread();
        --v63->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v64 = SepTokenPrivilegeCount((__int64)Token);
        if ( v64 > 1 )
          v3 = 12 * (v64 - 1);
        v65 = (char *)ExAllocatePoolWithTag(PagedPool, v3 + 16, 0x20206553u);
        v12 = v65;
        if ( !v65 )
          goto LABEL_74;
        SepConvertTokenPrivileges((__int64)Token, v65);
        goto LABEL_16;
      case TokenOwner:
        v60 = KeGetCurrentThread();
        --v60->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v61 = 4
            * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)) + 1LL)
            + 16;
        v62 = (char *)ExAllocatePoolWithTag(PagedPool, v61, 0x20206553u);
        v12 = v62;
        if ( !v62 )
          goto LABEL_74;
        *(_QWORD *)v62 = v62 + 8;
        RtlCopySid(v61 - 8, v62 + 8, *(PSID *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)));
        goto LABEL_16;
      case TokenPrimaryGroup:
        v57 = KeGetCurrentThread();
        --v57->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v58 = 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) + 16;
        v59 = (char *)ExAllocatePoolWithTag(PagedPool, v58, 0x20206553u);
        v12 = v59;
        if ( !v59 )
          goto LABEL_74;
        *(_QWORD *)v59 = v59 + 8;
        RtlCopySid(v58 - 8, v59 + 8, *((PSID *)Token + 21));
        goto LABEL_16;
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
        v12 = v85;
        if ( !v85 )
          goto LABEL_74;
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
        goto LABEL_16;
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
        v46 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v46 )
          return -1073741670;
        *v46 = *((_DWORD *)Token + 49);
        *TokenInformation = v46;
        return 0;
      case TokenStatistics:
        v11 = (char *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x20206553u);
        v12 = v11;
        if ( !v11 )
          return -1073741670;
        *(_QWORD *)v11 = *((_QWORD *)Token + 2);
        *((_QWORD *)v11 + 1) = *((_QWORD *)Token + 3);
        *((_DWORD *)v11 + 6) = *((_DWORD *)Token + 48);
        *((_DWORD *)v11 + 7) = *((_DWORD *)Token + 49);
        *((_QWORD *)v11 + 2) = *((_QWORD *)Token + 5);
        v13 = KeGetCurrentThread();
        --v13->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        *((_DWORD *)v12 + 8) = *((_DWORD *)Token + 34);
        v14 = *((_QWORD *)Token + 23);
        v15 = *((_DWORD *)Token + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) - 8;
        if ( v14 )
          v15 -= *(unsigned __int16 *)(v14 + 2);
        *((_DWORD *)v12 + 9) = v15;
        *((_DWORD *)v12 + 9) = *((_DWORD *)Token + 35);
        *((_DWORD *)v12 + 10) = *((_DWORD *)Token + 31) - 1;
        *((_DWORD *)v12 + 11) = SepTokenPrivilegeCount((__int64)Token);
        *((_QWORD *)v12 + 6) = *((_QWORD *)Token + 7);
        goto LABEL_16;
      case TokenSessionId:
        SeQuerySessionIdToken(Token, (PULONG)TokenInformation);
        return 0;
      case TokenGroupsAndPrivileges:
        v66 = KeGetCurrentThread();
        --v66->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v67 = SepTokenPrivilegeCount((__int64)Token);
        v68 = *((_DWORD *)Token + 31);
        v126 = v67;
        v69 = 12 * v67;
        v70 = 16 * v68;
        LODWORD(NumberOfBytes) = 12 * v67;
        v128 = 16 * v68;
        if ( v68 )
        {
          v71 = (__int64 *)*((_QWORD *)Token + 19);
          v72 = v68;
          do
          {
            v73 = *v71;
            v71 += 2;
            v70 += (4 * *(unsigned __int8 *)(v73 + 1) + 15) & 0xFFFFFFF8;
            --v72;
          }
          while ( v72 );
        }
        v74 = *((_DWORD *)Token + 32);
        v75 = 16 * v74;
        v76 = 16 * v74;
        if ( v74 )
        {
          v77 = (__int64 *)*((_QWORD *)Token + 20);
          v78 = v74;
          do
          {
            v79 = *v77;
            v77 += 2;
            v76 += (4 * *(unsigned __int8 *)(v79 + 1) + 15) & 0xFFFFFFF8;
            --v78;
          }
          while ( v78 );
        }
        v80 = (char *)ExAllocatePoolWithTag(PagedPool, v76 + v70 + v69 + 56, 0x20206553u);
        v12 = v80;
        if ( !v80 )
          goto LABEL_74;
        v81 = (_SID_AND_ATTRIBUTES *)(v80 + 56);
        *((_QWORD *)v80 + 6) = *((_QWORD *)Token + 3);
        *((_DWORD *)v80 + 1) = v70;
        *(_DWORD *)v80 = *((_DWORD *)Token + 31);
        *((_QWORD *)v80 + 1) = v80 + 56;
        *((_DWORD *)v80 + 5) = v76;
        *((_DWORD *)v80 + 4) = *((_DWORD *)Token + 32);
        if ( *((_DWORD *)Token + 32) )
          *((_QWORD *)v80 + 3) = (char *)v81 + ((v70 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
        else
          *((_QWORD *)v80 + 3) = 0LL;
        *((_DWORD *)v80 + 9) = NumberOfBytes;
        *((_DWORD *)v80 + 8) = v126;
        *((_QWORD *)v80 + 5) = (char *)v81 + v76 + v70;
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 31),
          *((PSID_AND_ATTRIBUTES *)Token + 19),
          v70 - v128,
          v81,
          (char *)v81 + (unsigned int)v128,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        if ( *((_DWORD *)v12 + 4) )
          RtlCopySidAndAttributesArray(
            *((_DWORD *)Token + 32),
            *((PSID_AND_ATTRIBUTES *)Token + 20),
            v76 - v75,
            *((PSID_AND_ATTRIBUTES *)v12 + 3),
            (PSID)(*((_QWORD *)v12 + 3) + v75),
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        SepConvertTokenPrivilegesToLuidAndAttributes(Token, *((_QWORD *)v12 + 5));
        goto LABEL_16;
      case TokenElevationType:
        v29 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v29 )
          return -1073741670;
        v30 = *(_DWORD *)(*((_QWORD *)Token + 27) + 32LL);
        if ( (v30 & 4) != 0 )
        {
          *v29 = 3;
        }
        else
        {
          LOBYTE(v3) = (v30 & 2) != 0;
          *v29 = v3 + 1;
        }
        *TokenInformation = v29;
        return 0;
      case TokenElevation:
        v124 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v124 )
          return -1073741670;
        v16 = KeGetCurrentThread();
        --v16->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v17 = *((_DWORD *)Token + 31);
        v18 = 0;
        v19 = (*((_QWORD *)Token + 8) & 0x120160684LL) != 0;
        if ( !v17 )
          goto LABEL_28;
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
                                             (__int64)Token,
                                             0,
                                             0LL,
                                             &v112,
                                             (int *)&v111,
                                             (int *)&v110,
                                             (int *)&v117,
                                             (int *)&v113,
                                             (unsigned int *)&v116,
                                             (int *)&v114,
                                             (int *)&v115,
                                             (unsigned int *)&v128,
                                             &v126);
        v49 = (char *)ExAllocatePoolWithTag(PagedPool, TokenAccessInformationBufferSize, 0x20206553u);
        v12 = v49;
        if ( !v49 )
          goto LABEL_74;
        SepCopyTokenAccessInformation(
          (__int64)Token,
          (__int64)v49,
          TokenAccessInformationBufferSize,
          v112,
          v111,
          v110,
          v117,
          v113,
          v116,
          v114,
          v115,
          v128,
          v126,
          0,
          0LL);
        goto LABEL_16;
      case TokenIntegrityLevel:
        v27 = KeGetCurrentThread();
        --v27->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        SepCopyTokenIntegrity();
        v28 = *RtlSubAuthorityCountSid(Sid);
        if ( v28 )
          v3 = *RtlSubAuthoritySid(Sid, (unsigned int)v28 - 1);
        *(_DWORD *)TokenInformation = v3;
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        return 0;
      case TokenCapabilities:
        v50 = KeGetCurrentThread();
        --v50->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v51 = *((_DWORD *)Token + 200);
        v52 = 16 * v51 + 24;
        if ( v51 )
        {
          v53 = (__int64 *)*((_QWORD *)Token + 99);
          v54 = v51;
          do
          {
            v55 = *v53;
            v53 += 2;
            v52 += 4 * *(unsigned __int8 *)(v55 + 1) + 8;
            --v54;
          }
          while ( v54 );
        }
        v56 = (char *)ExAllocatePoolWithTag(PagedPool, v52, 0x20206553u);
        v12 = v56;
        if ( !v56 )
          goto LABEL_74;
        *(_DWORD *)v56 = *((_DWORD *)Token + 200);
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 200),
          *((PSID_AND_ATTRIBUTES *)Token + 99),
          v52,
          (PSID_AND_ATTRIBUTES)(v56 + 8),
          &v56[16 * *((_DWORD *)Token + 200) + 24],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_16;
      case TokenAppContainerSid:
        v42 = KeGetCurrentThread();
        --v42->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v43 = (char *)*((_QWORD *)Token + 98);
        if ( v43 )
          v44 = 4 * (unsigned __int8)v43[1] + 16;
        else
          v44 = 8;
        v45 = (char *)ExAllocatePoolWithTag(PagedPool, v44, 0x20206553u);
        v12 = v45;
        if ( !v45 )
          goto LABEL_74;
        if ( v43 )
        {
          v43 = v45 + 8;
          RtlCopySid(v44 - 8, v45 + 8, *((PSID *)Token + 98));
        }
        goto LABEL_53;
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
          v118 = 0;
          v120 = &v119;
          v92 = &v118;
          LODWORD(v121) = 0;
          v119 = (__int64)&v119;
          v93 = 16;
          v123 = &v122;
          v122 = (__int64)&v122;
        }
        v94 = ExAllocatePoolWithTag(PagedPool, v93, 0x20206553u);
        v95 = v94;
        if ( !v94 )
          goto LABEL_74;
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
        v12 = (char *)ExAllocatePoolWithTag(PagedPool, v100, 0x20206553u);
        if ( !v12 )
          goto LABEL_74;
        *(_QWORD *)v12 = 0LL;
        *((_QWORD *)v12 + 1) = 0LL;
        *((_QWORD *)v12 + 2) = 0LL;
        *(_DWORD *)v12 = v99;
        if ( v99 )
          RtlCopySidAndAttributesArray(
            **((_DWORD **)Token + 137),
            *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)Token + 137) + 8LL),
            v100,
            (PSID_AND_ATTRIBUTES)(v12 + 8),
            &v12[16 * v99 + 8],
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        goto LABEL_16;
      case TokenProcessTrustLevel:
        v104 = KeGetCurrentThread();
        --v104->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v43 = (char *)*((_QWORD *)Token + 138);
        if ( v43 )
          v105 = 4 * (unsigned __int8)v43[1] + 16;
        else
          v105 = 8;
        v106 = (char *)ExAllocatePoolWithTag(PagedPool, v105, 0x20206553u);
        v12 = v106;
        if ( !v106 )
        {
LABEL_74:
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          return -1073741670;
        }
        if ( v43 )
        {
          v107 = v106 + 8;
          RtlCopySid(v105 - 8, v106 + 8, *((PSID *)Token + 138));
          *(_QWORD *)v12 = v107;
        }
        else
        {
LABEL_53:
          *(_QWORD *)v12 = v43;
        }
LABEL_16:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *TokenInformation = v12;
        return 0;
      default:
        return -1073741821;
    }
    while ( 1 )
    {
      if ( v19 )
      {
LABEL_28:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        v26 = v124;
        *v124 = v19;
        *TokenInformation = v26;
        return 0;
      }
      v20 = *((_QWORD *)Token + 19) + 16LL * v18;
      if ( (*(_DWORD *)(v20 + 8) & 0x30) == 0 )
      {
        v21 = *(PSID *)v20;
        v22 = *RtlSubAuthorityCountSid(*(PSID *)v20);
        if ( !v22 )
        {
          v23 = 0;
LABEL_24:
          v24 = 0;
          v25 = &SepLUARids;
          while ( v23 != *v25 )
          {
            ++v24;
            ++v25;
            if ( v24 >= 0x13 )
              goto LABEL_27;
          }
          v19 = 1;
          goto LABEL_27;
        }
        v23 = *RtlSubAuthoritySid(v21, (unsigned int)v22 - 1);
        if ( v23 <= 0x239 )
          goto LABEL_24;
      }
LABEL_27:
      if ( ++v18 >= v17 )
        goto LABEL_28;
    }
  }
LABEL_2:
  switch ( TokenInformationClass )
  {
    case TokenVirtualizationAllowed:
      v108 = *((_DWORD *)Token + 50) >> 9;
      goto LABEL_139;
    case TokenVirtualizationEnabled:
      if ( (*((_DWORD *)Token + 50) & 0x400) != 0 )
      {
        v7 = 1;
        goto LABEL_6;
      }
      goto LABEL_5;
    case TokenUIAccess:
      if ( (*((_DWORD *)Token + 50) & 0x1000) != 0 )
      {
        v7 = 1;
        goto LABEL_6;
      }
      goto LABEL_5;
  }
  if ( TokenInformationClass != TokenIsAppContainer )
  {
    if ( TokenInformationClass == TokenHasRestrictions )
    {
      *(_BYTE *)TokenInformation = (*((_DWORD *)Token + 50) & 0x810) != 0;
      return 0;
    }
    v108 = HIWORD(*((_DWORD *)Token + 50));
LABEL_139:
    *(_DWORD *)TokenInformation = v108 & 1;
    return 0;
  }
  if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
  {
    v7 = 1;
    goto LABEL_6;
  }
LABEL_5:
  v7 = 0;
LABEL_6:
  *(_DWORD *)TokenInformation = v7;
  return 0;
}
