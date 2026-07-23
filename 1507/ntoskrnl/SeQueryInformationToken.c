/*
 * XREFs of SeQueryInformationToken @ 0x140481E90
 * Callers:
 *     RtlpQueryLowBoxId @ 0x140010304 (RtlpQueryLowBoxId.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14015D52C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     IoRevokeHandlesForProcess @ 0x1401F7200 (IoRevokeHandlesForProcess.c)
 *     RtlCheckTokenCapability @ 0x1402450DC (RtlCheckTokenCapability.c)
 *     SepCheckCapabilities @ 0x140408A80 (SepCheckCapabilities.c)
 *     NtCompareTokens @ 0x1404107DC (NtCompareTokens.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x1404128C8 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404156FC (PspAllocateAndQueryNotificationChannel.c)
 *     PiDqOpenUserObjectRegKey @ 0x140415D2C (PiDqOpenUserObjectRegKey.c)
 *     NtQueryVolumeInformationFile @ 0x140457400 (NtQueryVolumeInformationFile.c)
 *     NtFlushBuffersFileEx @ 0x140459AD0 (NtFlushBuffersFileEx.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     ObpCaptureBoundaryDescriptor @ 0x14046FBA0 (ObpCaptureBoundaryDescriptor.c)
 *     CmpIsVirtEnabled @ 0x140481D80 (CmpIsVirtEnabled.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtReadFile @ 0x14048EFE0 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     NtLockFile @ 0x1404A4FE4 (NtLockFile.c)
 *     NtCancelIoFile @ 0x1404A81DC (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x1404A83A4 (NtCancelIoFileEx.c)
 *     BuildQueryDirectoryIrp @ 0x1404BC130 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x1404BCA70 (NtWriteFile.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     SeQuerySigningPolicyWorker @ 0x14050B8C8 (SeQuerySigningPolicyWorker.c)
 *     AlpcpCheckConnectionSecurity @ 0x14050BAF0 (AlpcpCheckConnectionSecurity.c)
 *     EtwpPsProvTraceProcess @ 0x14050BCA8 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x14050CB64 (EtwpBuildProcessEvent.c)
 *     NtQueryEaFile @ 0x140534134 (NtQueryEaFile.c)
 *     SeTokenIsElevated @ 0x14053E684 (SeTokenIsElevated.c)
 *     NtNotifyChangeDirectoryFile @ 0x14053E7A0 (NtNotifyChangeDirectoryFile.c)
 *     NtWriteFileGather @ 0x140540320 (NtWriteFileGather.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14054467C (ObpVerifyCreatorAccessCheck.c)
 *     NtReadFileScatter @ 0x140549CBC (NtReadFileScatter.c)
 *     EtwpAcquireTokenAccessInformation @ 0x14055A838 (EtwpAcquireTokenAccessInformation.c)
 *     NtSetVolumeInformationFile @ 0x14055F21C (NtSetVolumeInformationFile.c)
 *     CmpBuildAdminInformation @ 0x140657B40 (CmpBuildAdminInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406728FC (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x14067350C (IopValidateJunctionTarget.c)
 *     NtSetEaFile @ 0x140675B58 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140676310 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x14002D93C (SepCopyTokenIntegrity.c)
 *     RtlSubAuthorityCountSid @ 0x140044DF4 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x140044DFC (RtlSubAuthoritySid.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SepConvertTokenPrivileges @ 0x14010D9E4 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x14010DA00 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlCopySid @ 0x140438C64 (RtlCopySid.c)
 *     RtlCopySidAndAttributesArray @ 0x1404709F0 (RtlCopySidAndAttributesArray.c)
 *     SepCopyTokenAccessInformation @ 0x140526F7C (SepCopyTokenAccessInformation.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x14052745C (SepGetTokenAccessInformationBufferSize.c)
 *     SeQuerySessionIdToken @ 0x14052FB1C (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x14053CEC0 (AuthzBasepQueryClaimAttributesToken.c)
 */

NTSTATUS __stdcall SeQueryInformationToken(
        PACCESS_TOKEN Token,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID *TokenInformation)
{
  ULONG v3; // edi
  bool v7; // zf
  int v8; // ebx
  struct _KTHREAD *v10; // rax
  __int64 v11; // rax
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  __int64 v14; // rbx
  _QWORD *v15; // rax
  _DWORD *v16; // r15
  struct _KTHREAD *v17; // rax
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rbx
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  _DWORD *v25; // r15
  struct _KTHREAD *v26; // rax
  unsigned int v27; // r13d
  bool v28; // r12
  unsigned int v29; // ebx
  __int64 v30; // rdx
  PSID v31; // r15
  UCHAR v32; // cl
  ULONG v33; // edx
  unsigned int v34; // ecx
  _DWORD *v35; // rax
  struct _KTHREAD *v36; // rcx
  __int16 v37; // ax
  struct _KTHREAD *v38; // rax
  UCHAR v39; // cl
  struct _KTHREAD *v40; // rcx
  __int16 v41; // ax
  _DWORD *v42; // rax
  int v43; // edx
  struct _KTHREAD *CurrentThread; // rax
  ULONG v45; // r15d
  _SID_AND_ATTRIBUTES *PoolWithTag; // rax
  _SID_AND_ATTRIBUTES *v47; // rdi
  struct _KTHREAD *v48; // rcx
  __int16 v49; // ax
  struct _KTHREAD *v50; // rax
  unsigned int v51; // ecx
  ULONG v52; // edi
  __int64 v53; // r8
  __int64 *v54; // rdx
  __int64 v55; // rax
  char *v56; // rax
  char *v57; // rbx
  struct _KTHREAD *v58; // rcx
  __int16 v59; // ax
  struct _KTHREAD *v60; // rax
  char *v61; // rdi
  unsigned int v62; // r15d
  char *v63; // rax
  _DWORD *v64; // rcx
  struct _KTHREAD *v65; // rax
  unsigned int TokenAccessInformationBufferSize; // r15d
  char *v67; // rax
  struct _KTHREAD *v68; // rcx
  __int16 v69; // ax
  bool v70; // zf
  struct _KTHREAD *v71; // rax
  unsigned int v72; // edi
  char *v73; // rax
  struct _KTHREAD *v74; // rax
  unsigned int v75; // eax
  ULONG v76; // edi
  __int64 *v77; // rdx
  __int64 v78; // r8
  __int64 v79; // rax
  char *v80; // rax
  struct _KTHREAD *v81; // rax
  unsigned int v82; // edi
  char *v83; // rax
  struct _KTHREAD *v84; // rcx
  __int16 v85; // ax
  bool v86; // zf
  struct _KTHREAD *v87; // rax
  __int64 v88; // r8
  unsigned int v89; // ecx
  unsigned int i; // edx
  char *v91; // rax
  struct _KTHREAD *v92; // rax
  __int64 v93; // rdx
  unsigned int v94; // ecx
  int v95; // r13d
  unsigned int v96; // eax
  int v97; // r8d
  unsigned int v98; // r12d
  __int64 *v99; // rdx
  __int64 v100; // r8
  __int64 v101; // rax
  unsigned int v102; // ecx
  unsigned int v103; // r15d
  __int64 *v104; // rdx
  __int64 v105; // r9
  __int64 v106; // rax
  char *v107; // rax
  _SID_AND_ATTRIBUTES *v108; // r9
  struct _KTHREAD *v109; // rcx
  __int16 v110; // ax
  struct _KTHREAD *v111; // rax
  __int64 v112; // rax
  unsigned int v113; // eax
  char *v114; // rax
  void *v115; // rcx
  _OWORD *v116; // rax
  _DWORD *v117; // rcx
  struct _KTHREAD *v118; // rax
  __int64 v119; // r15
  int *v120; // rax
  int *v121; // r15
  unsigned int v122; // r12d
  PVOID v123; // rax
  void *v124; // rbx
  NTSTATUS v125; // edi
  struct _KTHREAD *v126; // rdx
  __int16 v127; // cx
  struct _KTHREAD *v128; // rax
  unsigned int *v129; // rdx
  unsigned int v130; // r15d
  ULONG v131; // edi
  __int64 *v132; // rdx
  __int64 v133; // r8
  __int64 v134; // rax
  struct _KTHREAD *v135; // rax
  unsigned int v136; // r15d
  char *v137; // rax
  char *v138; // rdi
  PSID RemainingSidArea; // [rsp+80h] [rbp-49h] BYREF
  int v140; // [rsp+88h] [rbp-41h] BYREF
  int v141; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v142; // [rsp+90h] [rbp-39h] BYREF
  int v143; // [rsp+94h] [rbp-35h] BYREF
  int v144; // [rsp+98h] [rbp-31h] BYREF
  int v145; // [rsp+9Ch] [rbp-2Dh] BYREF
  int v146; // [rsp+A0h] [rbp-29h] BYREF
  int v147; // [rsp+A4h] [rbp-25h] BYREF
  int v148; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v149; // [rsp+B0h] [rbp-19h] BYREF
  __int64 *v150; // [rsp+B8h] [rbp-11h]
  __int64 v151; // [rsp+C0h] [rbp-9h]
  __int64 v152; // [rsp+C8h] [rbp-1h] BYREF
  __int64 *v153; // [rsp+D0h] [rbp+7h]
  _DWORD *v154; // [rsp+D8h] [rbp+Fh]
  PSID Sid; // [rsp+E0h] [rbp+17h]
  int v156; // [rsp+130h] [rbp+67h] BYREF
  SIZE_T NumberOfBytes; // [rsp+138h] [rbp+6Fh] BYREF
  int v158; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = 0;
  v148 = 0;
  v149 = 0LL;
  v150 = 0LL;
  v151 = 0LL;
  v152 = 0LL;
  v153 = 0LL;
  if ( TokenInformationClass != TokenVirtualizationEnabled )
  {
    switch ( TokenInformationClass )
    {
      case TokenUser:
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v45 = 4 * *(unsigned __int8 *)(**((_QWORD **)Token + 19) + 1LL) + 24;
        PoolWithTag = (_SID_AND_ATTRIBUTES *)ExAllocatePoolWithTag(PagedPool, v45, 0x20206553u);
        v47 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_108;
        RtlCopySidAndAttributesArray(
          1u,
          *((PSID_AND_ATTRIBUTES *)Token + 19),
          v45,
          PoolWithTag,
          &PoolWithTag[1],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        v48 = KeGetCurrentThread();
        v49 = v48->KernelApcDisable + 1;
        v48->KernelApcDisable = v49;
        if ( !v49
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v48->ApcState.ApcListHead[0].Flink != &v48->152
          && !v48->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        *TokenInformation = v47;
        return 0;
      case TokenGroups:
        v50 = KeGetCurrentThread();
        --v50->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v51 = *((_DWORD *)Token + 31);
        v52 = 16 * (v51 - 2) + 24;
        if ( v51 > 1 )
        {
          v53 = v51 - 1;
          v54 = (__int64 *)(*((_QWORD *)Token + 19) + 16LL);
          do
          {
            v55 = *v54;
            v54 += 2;
            v52 += 4 * *(unsigned __int8 *)(v55 + 1) + 8;
            --v53;
          }
          while ( v53 );
        }
        v56 = (char *)ExAllocatePoolWithTag(PagedPool, v52, 0x20206553u);
        v57 = v56;
        if ( !v56 )
          goto LABEL_108;
        *(_DWORD *)v56 = *((_DWORD *)Token + 31) - 1;
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 31) - 1,
          (PSID_AND_ATTRIBUTES)(*((_QWORD *)Token + 19) + 16LL),
          v52,
          (PSID_AND_ATTRIBUTES)(v56 + 8),
          &v56[16 * (*((_DWORD *)Token + 31) - 2) + 24],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_64;
      case TokenPrivileges:
        v87 = KeGetCurrentThread();
        --v87->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v89 = 0;
        for ( i = 0; i <= 0x23; ++i )
        {
          v88 = *((_QWORD *)Token + 8);
          if ( _bittest64(&v88, i) )
            ++v89;
        }
        if ( v89 > 1 )
          v3 = 12 * (v89 - 1);
        v91 = (char *)ExAllocatePoolWithTag(PagedPool, v3 + 16, 0x20206553u);
        v57 = v91;
        if ( !v91 )
          goto LABEL_108;
        SepConvertTokenPrivileges((__int64)Token, v91);
        goto LABEL_64;
      case TokenOwner:
        v81 = KeGetCurrentThread();
        --v81->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v82 = 4
            * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)) + 1LL)
            + 16;
        v83 = (char *)ExAllocatePoolWithTag(PagedPool, v82, 0x20206553u);
        v57 = v83;
        if ( !v83 )
          goto LABEL_108;
        *(_QWORD *)v83 = v83 + 8;
        RtlCopySid(v82 - 8, v83 + 8, *(PSID *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)));
        goto LABEL_64;
      case TokenPrimaryGroup:
        v71 = KeGetCurrentThread();
        --v71->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v72 = 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) + 16;
        v73 = (char *)ExAllocatePoolWithTag(PagedPool, v72, 0x20206553u);
        v57 = v73;
        if ( !v73 )
          goto LABEL_108;
        *(_QWORD *)v73 = v73 + 8;
        RtlCopySid(v72 - 8, v73 + 8, *((PSID *)Token + 21));
        goto LABEL_64;
      case TokenDefaultDacl:
        v111 = KeGetCurrentThread();
        LODWORD(NumberOfBytes) = 8;
        --v111->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v112 = *((_QWORD *)Token + 23);
        if ( v112 )
          v113 = *(unsigned __int16 *)(v112 + 2) + 8;
        else
          v113 = NumberOfBytes;
        v114 = (char *)ExAllocatePoolWithTag(PagedPool, v113, 0x20206553u);
        v57 = v114;
        if ( !v114 )
          goto LABEL_136;
        v115 = v114 + 8;
        if ( *((_QWORD *)Token + 23) )
        {
          *(_QWORD *)v114 = v115;
          memmove(v115, *((const void **)Token + 23), *(unsigned __int16 *)(*((_QWORD *)Token + 23) + 2LL));
        }
        else
        {
          *(_QWORD *)v114 = 0LL;
        }
        goto LABEL_83;
      case TokenSource:
        v116 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x20206553u);
        if ( !v116 )
          return -1073741670;
        *v116 = *(_OWORD *)Token;
        *TokenInformation = v116;
        return 0;
      case TokenType:
        v117 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v117 )
          return -1073741670;
        *v117 = *((_DWORD *)Token + 48);
        *TokenInformation = v117;
        return 0;
      case TokenImpersonationLevel:
        if ( *((_DWORD *)Token + 48) != 2 )
          return -1073741821;
        v64 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v64 )
          return -1073741670;
        *v64 = *((_DWORD *)Token + 49);
        *TokenInformation = v64;
        return 0;
      case TokenStatistics:
        v14 = 1LL;
        v15 = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x20206553u);
        v16 = v15;
        if ( !v15 )
          return -1073741670;
        *v15 = *((_QWORD *)Token + 2);
        v15[1] = *((_QWORD *)Token + 3);
        *((_DWORD *)v15 + 6) = *((_DWORD *)Token + 48);
        *((_DWORD *)v15 + 7) = *((_DWORD *)Token + 49);
        v15[2] = *((_QWORD *)Token + 5);
        v17 = KeGetCurrentThread();
        --v17->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v16[8] = *((_DWORD *)Token + 34);
        v18 = *((_QWORD *)Token + 23);
        v19 = *((_DWORD *)Token + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) - 8;
        if ( v18 )
          v19 -= *(unsigned __int16 *)(v18 + 2);
        v16[9] = v19;
        v20 = 18LL;
        v16[9] = *((_DWORD *)Token + 35);
        v16[10] = *((_DWORD *)Token + 31) - 1;
        v21 = *((_QWORD *)Token + 8);
        do
        {
          if ( (v21 & v14) != 0 )
            ++v3;
          v22 = __ROL8__(v14, 1);
          if ( (v21 & v22) != 0 )
            ++v3;
          v14 = __ROL8__(v22, 1);
          --v20;
        }
        while ( v20 );
        v16[11] = v3;
        *((_QWORD *)v16 + 6) = *((_QWORD *)Token + 7);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        v23 = KeGetCurrentThread();
        v24 = v23->KernelApcDisable + 1;
        v23->KernelApcDisable = v24;
        if ( !v24
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
          && !v23->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        *TokenInformation = v16;
        return 0;
      case TokenSessionId:
        SeQuerySessionIdToken(Token, (PULONG)TokenInformation);
        return 0;
      case TokenGroupsAndPrivileges:
        v92 = KeGetCurrentThread();
        --v92->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v94 = 0;
        v95 = 0;
        do
        {
          v93 = *((_QWORD *)Token + 8);
          if ( _bittest64(&v93, v94) )
            ++v95;
          ++v94;
        }
        while ( v94 <= 0x23 );
        v96 = *((_DWORD *)Token + 31);
        v97 = 12 * v95;
        v98 = 16 * v96;
        LODWORD(NumberOfBytes) = 12 * v95;
        v156 = 16 * v96;
        if ( v96 )
        {
          v99 = (__int64 *)*((_QWORD *)Token + 19);
          v100 = v96;
          do
          {
            v101 = *v99;
            v99 += 2;
            v98 += (4 * *(unsigned __int8 *)(v101 + 1) + 15) & 0xFFFFFFF8;
            --v100;
          }
          while ( v100 );
          v97 = NumberOfBytes;
        }
        v102 = *((_DWORD *)Token + 32);
        v158 = 16 * v102;
        v103 = 16 * v102;
        if ( v102 )
        {
          v104 = (__int64 *)*((_QWORD *)Token + 20);
          v105 = v102;
          do
          {
            v106 = *v104;
            v104 += 2;
            v103 += (4 * *(unsigned __int8 *)(v106 + 1) + 15) & 0xFFFFFFF8;
            --v105;
          }
          while ( v105 );
        }
        v107 = (char *)ExAllocatePoolWithTag(PagedPool, v103 + v98 + v97 + 56, 0x20206553u);
        v57 = v107;
        if ( !v107 )
          goto LABEL_136;
        v108 = (_SID_AND_ATTRIBUTES *)(v107 + 56);
        *((_QWORD *)v107 + 6) = *((_QWORD *)Token + 3);
        *((_DWORD *)v107 + 1) = v98;
        *(_DWORD *)v107 = *((_DWORD *)Token + 31);
        *((_QWORD *)v107 + 1) = v107 + 56;
        *((_DWORD *)v107 + 5) = v103;
        *((_DWORD *)v107 + 4) = *((_DWORD *)Token + 32);
        if ( *((_DWORD *)Token + 32) )
          *((_QWORD *)v107 + 3) = (char *)v108 + ((v98 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
        else
          *((_QWORD *)v107 + 3) = 0LL;
        *((_DWORD *)v107 + 9) = NumberOfBytes;
        *((_DWORD *)v107 + 8) = v95;
        *((_QWORD *)v107 + 5) = (char *)v108 + v103 + v98;
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 31),
          *((PSID_AND_ATTRIBUTES *)Token + 19),
          v98 - v156,
          v108,
          (char *)v108 + (unsigned int)v156,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        if ( *((_DWORD *)v57 + 4) )
          RtlCopySidAndAttributesArray(
            *((_DWORD *)Token + 32),
            *((PSID_AND_ATTRIBUTES *)Token + 20),
            v103 - v158,
            *((PSID_AND_ATTRIBUTES *)v57 + 3),
            (PSID)(*((_QWORD *)v57 + 3) + (unsigned int)v158),
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        SepConvertTokenPrivilegesToLuidAndAttributes(Token, *((_QWORD *)v57 + 5));
        goto LABEL_83;
      case TokenElevationType:
        v42 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        if ( !v42 )
          return -1073741670;
        v43 = *(_DWORD *)(*((_QWORD *)Token + 27) + 32LL);
        if ( (v43 & 4) != 0 )
        {
          *v42 = 3;
        }
        else
        {
          LOBYTE(v3) = (v43 & 2) != 0;
          *v42 = v3 + 1;
        }
        *TokenInformation = v42;
        return 0;
      case TokenElevation:
        v154 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x20206553u);
        v25 = v154;
        if ( !v154 )
          return -1073741670;
        v26 = KeGetCurrentThread();
        --v26->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v27 = *((_DWORD *)Token + 31);
        v28 = (*((_QWORD *)Token + 8) & 0x120160684LL) != 0;
        v29 = 0;
        if ( !v27 )
          goto LABEL_39;
        break;
      case TokenHasRestrictions:
      case TokenVirtualizationAllowed:
      case TokenUIAccess:
      case TokenIsAppContainer:
      case TokenPrivateNameSpace:
        goto LABEL_2;
      case TokenAccessInformation:
        v65 = KeGetCurrentThread();
        --v65->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                             (_DWORD)Token,
                                             0,
                                             0,
                                             (unsigned int)&v142,
                                             (__int64)&v141,
                                             (__int64)&v140,
                                             (__int64)&v147,
                                             (__int64)&v143,
                                             (__int64)&v146,
                                             (__int64)&v144,
                                             (__int64)&v145,
                                             (__int64)&v158,
                                             (__int64)&v156);
        v67 = (char *)ExAllocatePoolWithTag(PagedPool, TokenAccessInformationBufferSize, 0x20206553u);
        v57 = v67;
        if ( !v67 )
          goto LABEL_136;
        SepCopyTokenAccessInformation(
          (int)Token,
          (int)v67,
          TokenAccessInformationBufferSize,
          v142,
          v141,
          v140,
          v147,
          v143,
          v146,
          v144,
          v145,
          v158,
          v156,
          0,
          0LL);
LABEL_83:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        v68 = KeGetCurrentThread();
        v69 = v68->KernelApcDisable + 1;
        v68->KernelApcDisable = v69;
        if ( v69 || ($CD287064E7C9F7953DE243E927CFCB99 *)v68->ApcState.ApcListHead[0].Flink == &v68->152 )
          goto LABEL_66;
        v70 = v68->SpecialApcDisable == 0;
        goto LABEL_96;
      case TokenIntegrityLevel:
        v38 = KeGetCurrentThread();
        --v38->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        SepCopyTokenIntegrity((__int64)Token);
        v39 = *RtlSubAuthorityCountSid(Sid);
        if ( v39 )
          v3 = *RtlSubAuthoritySid(Sid, (unsigned int)v39 - 1);
        *(_DWORD *)TokenInformation = v3;
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        v40 = KeGetCurrentThread();
        v41 = v40->KernelApcDisable + 1;
        v40->KernelApcDisable = v41;
        if ( !v41
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v40->ApcState.ApcListHead[0].Flink != &v40->152
          && !v40->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        return 0;
      case TokenCapabilities:
        v74 = KeGetCurrentThread();
        --v74->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v75 = *((_DWORD *)Token + 200);
        v76 = 16 * v75 + 24;
        if ( v75 )
        {
          v77 = (__int64 *)*((_QWORD *)Token + 99);
          v78 = v75;
          do
          {
            v79 = *v77;
            v77 += 2;
            v76 += 4 * *(unsigned __int8 *)(v79 + 1) + 8;
            --v78;
          }
          while ( v78 );
        }
        v80 = (char *)ExAllocatePoolWithTag(PagedPool, v76, 0x20206553u);
        v57 = v80;
        if ( !v80 )
          goto LABEL_108;
        *(_DWORD *)v80 = *((_DWORD *)Token + 200);
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 200),
          *((PSID_AND_ATTRIBUTES *)Token + 99),
          v76,
          (PSID_AND_ATTRIBUTES)(v80 + 8),
          &v80[16 * *((_DWORD *)Token + 200) + 24],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_64;
      case TokenAppContainerSid:
        v60 = KeGetCurrentThread();
        --v60->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v61 = (char *)*((_QWORD *)Token + 98);
        if ( v61 )
          v62 = 4 * (unsigned __int8)v61[1] + 16;
        else
          v62 = 8;
        v63 = (char *)ExAllocatePoolWithTag(PagedPool, v62, 0x20206553u);
        v57 = v63;
        if ( !v63 )
          goto LABEL_108;
        if ( v61 )
        {
          v61 = v63 + 8;
          RtlCopySid(v62 - 8, v63 + 8, *((PSID *)Token + 98));
        }
        goto LABEL_72;
      case TokenAppContainerNumber:
        v10 = KeGetCurrentThread();
        --v10->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v11 = *((_QWORD *)Token + 135);
        if ( v11 )
          v3 = *(_DWORD *)(v11 + 40);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        v12 = KeGetCurrentThread();
        v13 = v12->KernelApcDisable + 1;
        v12->KernelApcDisable = v13;
        if ( !v13
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
          && !v12->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        *(_DWORD *)TokenInformation = v3;
        return 0;
      case TokenUserClaimAttributes:
      case TokenDeviceClaimAttributes:
        *TokenInformation = 0LL;
        v118 = KeGetCurrentThread();
        --v118->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v119 = *((_QWORD *)Token + 137);
        if ( v119
          && ((v120 = *(int **)(v119 + 576)) != 0LL || TokenInformationClass != TokenUserClaimAttributes)
          && ((v121 = *(int **)(v119 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v121 = v120;
          AuthzBasepQueryClaimAttributesToken(v121, 0LL, 0LL, &NumberOfBytes);
          v122 = NumberOfBytes;
        }
        else
        {
          v148 = 0;
          v150 = &v149;
          v121 = &v148;
          LODWORD(v151) = 0;
          v149 = (__int64)&v149;
          v122 = 16;
          v153 = &v152;
          v152 = (__int64)&v152;
        }
        v123 = ExAllocatePoolWithTag(PagedPool, v122, 0x20206553u);
        v124 = v123;
        if ( v123 )
        {
          v125 = AuthzBasepQueryClaimAttributesToken(v121, v123, v122, &NumberOfBytes);
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          v126 = KeGetCurrentThread();
          v127 = v126->KernelApcDisable + 1;
          v126->KernelApcDisable = v127;
          if ( !v127
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v126->ApcState.ApcListHead[0].Flink != &v126->152
            && !v126->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          if ( v125 >= 0 )
            *TokenInformation = v124;
          else
            ExFreePoolWithTag(v124, 0);
          return v125;
        }
LABEL_136:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        v109 = KeGetCurrentThread();
        v110 = v109->KernelApcDisable + 1;
        v109->KernelApcDisable = v110;
        if ( !v110 && ($CD287064E7C9F7953DE243E927CFCB99 *)v109->ApcState.ApcListHead[0].Flink != &v109->152 )
        {
          v86 = v109->SpecialApcDisable == 0;
          goto LABEL_111;
        }
        return -1073741670;
      case TokenDeviceGroups:
        v128 = KeGetCurrentThread();
        --v128->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v129 = (unsigned int *)*((_QWORD *)Token + 137);
        if ( v129 && (v130 = *v129) != 0 )
        {
          v131 = 16 * (v130 - 1) + 24;
        }
        else
        {
          v130 = 0;
          v131 = 24;
        }
        if ( v130 )
        {
          v132 = (__int64 *)*((_QWORD *)v129 + 1);
          v133 = v130;
          do
          {
            v134 = *v132;
            v132 += 2;
            v131 += 4 * *(unsigned __int8 *)(v134 + 1) + 8;
            --v133;
          }
          while ( v133 );
        }
        v57 = (char *)ExAllocatePoolWithTag(PagedPool, v131, 0x20206553u);
        if ( !v57 )
          goto LABEL_108;
        *(_QWORD *)v57 = 0LL;
        *((_QWORD *)v57 + 1) = 0LL;
        *((_QWORD *)v57 + 2) = 0LL;
        *(_DWORD *)v57 = v130;
        if ( v130 )
          RtlCopySidAndAttributesArray(
            **((_DWORD **)Token + 137),
            *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)Token + 137) + 8LL),
            v131,
            (PSID_AND_ATTRIBUTES)(v57 + 8),
            &v57[16 * v130 + 8],
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        goto LABEL_64;
      case TokenProcessTrustLevel:
        v135 = KeGetCurrentThread();
        --v135->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v61 = (char *)*((_QWORD *)Token + 138);
        if ( v61 )
          v136 = 4 * (unsigned __int8)v61[1] + 16;
        else
          v136 = 8;
        v137 = (char *)ExAllocatePoolWithTag(PagedPool, v136, 0x20206553u);
        v57 = v137;
        if ( v137 )
        {
          if ( v61 )
          {
            v138 = v137 + 8;
            RtlCopySid(v136 - 8, v137 + 8, *((PSID *)Token + 138));
            *(_QWORD *)v57 = v138;
          }
          else
          {
LABEL_72:
            *(_QWORD *)v57 = v61;
          }
LABEL_64:
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          v58 = KeGetCurrentThread();
          v59 = v58->KernelApcDisable + 1;
          v58->KernelApcDisable = v59;
          if ( !v59 && ($CD287064E7C9F7953DE243E927CFCB99 *)v58->ApcState.ApcListHead[0].Flink != &v58->152 )
          {
            v70 = v58->SpecialApcDisable == 0;
LABEL_96:
            if ( v70 )
              KiCheckForKernelApcDelivery();
          }
LABEL_66:
          *TokenInformation = v57;
          return 0;
        }
LABEL_108:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        v84 = KeGetCurrentThread();
        v85 = v84->KernelApcDisable + 1;
        v84->KernelApcDisable = v85;
        if ( !v85 && ($CD287064E7C9F7953DE243E927CFCB99 *)v84->ApcState.ApcListHead[0].Flink != &v84->152 )
        {
          v86 = v84->SpecialApcDisable == 0;
LABEL_111:
          if ( v86 )
            KiCheckForKernelApcDelivery();
        }
        return -1073741670;
      default:
        return -1073741821;
    }
    while ( 1 )
    {
      if ( v28 )
      {
LABEL_38:
        v25 = v154;
LABEL_39:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        v36 = KeGetCurrentThread();
        v37 = v36->KernelApcDisable + 1;
        v36->KernelApcDisable = v37;
        if ( !v37
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v36->ApcState.ApcListHead[0].Flink != &v36->152
          && !v36->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        *v25 = v28;
        *TokenInformation = v25;
        return 0;
      }
      v30 = *((_QWORD *)Token + 19) + 16LL * v29;
      if ( (*(_DWORD *)(v30 + 8) & 0x30) == 0 )
      {
        v31 = *(PSID *)v30;
        v32 = *RtlSubAuthorityCountSid(*(PSID *)v30);
        if ( !v32 )
        {
          v33 = 0;
LABEL_34:
          v34 = 0;
          v35 = &SepLUARids;
          while ( v33 != *v35 )
          {
            ++v34;
            ++v35;
            if ( v34 >= 0x13 )
              goto LABEL_37;
          }
          v28 = 1;
          goto LABEL_37;
        }
        v33 = *RtlSubAuthoritySid(v31, (unsigned int)v32 - 1);
        if ( v33 <= 0x239 )
          goto LABEL_34;
      }
LABEL_37:
      if ( ++v29 >= v27 )
        goto LABEL_38;
    }
  }
LABEL_2:
  switch ( TokenInformationClass )
  {
    case TokenVirtualizationAllowed:
      v7 = (*((_DWORD *)Token + 50) & 0x200) == 0;
      goto LABEL_5;
    case TokenVirtualizationEnabled:
      v7 = (*((_DWORD *)Token + 50) & 0x400) == 0;
LABEL_5:
      v8 = !v7;
      *(_DWORD *)TokenInformation = v8;
      return 0;
    case TokenUIAccess:
      v7 = (*((_DWORD *)Token + 50) & 0x1000) == 0;
      goto LABEL_5;
    case TokenIsAppContainer:
      v7 = (*((_DWORD *)Token + 50) & 0x4000) == 0;
      goto LABEL_5;
    case TokenHasRestrictions:
      *(_BYTE *)TokenInformation = (*((_DWORD *)Token + 50) & 0x810) != 0;
      break;
    default:
      *(_DWORD *)TokenInformation = HIWORD(*((_DWORD *)Token + 50)) & 1;
      break;
  }
  return 0;
}
