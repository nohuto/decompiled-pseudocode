/*
 * XREFs of SepVariableInitialization @ 0x14078FC70
 * Callers:
 *     SepInitializationPhase0 @ 0x1407A24C4 (SepInitializationPhase0.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x140136CB0 (RtlDeriveCapabilitySidsFromName.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlLengthRequiredSid @ 0x1404781C0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x140478448 (RtlInitializeSid.c)
 *     SepInitializeSharedSidMap @ 0x14054D488 (SepInitializeSharedSidMap.c)
 *     SepInitSystemDacls @ 0x140791230 (SepInitSystemDacls.c)
 */

bool SepVariableInitialization()
{
  int v0; // eax
  ULONG v1; // edi
  _DWORD *PoolWithTag; // rbx
  _DWORD *v3; // r12
  _DWORD *v4; // r13
  _DWORD *v5; // r15
  _DWORD *v6; // r14
  _DWORD *v7; // rsi
  ULONG v8; // eax
  PVOID v9; // rdx
  _DWORD *v10; // r12
  _DWORD *v11; // r13
  _DWORD *v12; // r15
  _DWORD *v13; // r14
  _QWORD *v14; // rsi
  _DWORD *v15; // rbx
  _DWORD *v16; // rdi
  _DWORD *v17; // r9
  _DWORD *v18; // r8
  _DWORD *v19; // rdx
  __int64 v20; // r10
  _DWORD *v21; // rax
  _DWORD *v22; // rcx
  _DWORD *v23; // rax
  PSID v24; // r8
  PSID v25; // rdx
  __int64 v26; // rcx
  char *v27; // rax
  _DWORD *v29; // [rsp+20h] [rbp-E0h]
  _DWORD *v30; // [rsp+20h] [rbp-E0h]
  __int64 v31; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 IdentifierAuthority; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  PSID Sid; // [rsp+68h] [rbp-98h]
  PSID v40; // [rsp+70h] [rbp-90h]
  PSID v41; // [rsp+78h] [rbp-88h]
  PSID v42; // [rsp+80h] [rbp-80h]
  PSID v43; // [rsp+88h] [rbp-78h]
  PSID v44; // [rsp+90h] [rbp-70h]
  PSID v45; // [rsp+98h] [rbp-68h]
  PSID v46; // [rsp+A0h] [rbp-60h]
  PSID v47; // [rsp+A8h] [rbp-58h]
  PSID v48; // [rsp+B0h] [rbp-50h]
  PSID v49; // [rsp+B8h] [rbp-48h]
  PSID v50; // [rsp+C0h] [rbp-40h]
  PSID v51; // [rsp+C8h] [rbp-38h]
  PSID v52; // [rsp+D0h] [rbp-30h]
  PSID v53; // [rsp+D8h] [rbp-28h]
  PSID v54; // [rsp+E0h] [rbp-20h]
  PSID v55; // [rsp+E8h] [rbp-18h]
  PSID v56; // [rsp+F0h] [rbp-10h]
  PSID v57; // [rsp+F8h] [rbp-8h]
  PSID v58; // [rsp+100h] [rbp+0h]
  PSID v59; // [rsp+108h] [rbp+8h]
  PSID v60; // [rsp+110h] [rbp+10h]
  PSID v61; // [rsp+118h] [rbp+18h]
  PSID CapabilitySid; // [rsp+120h] [rbp+20h]
  PSID CapabilityGroupSid; // [rsp+128h] [rbp+28h]
  UNICODE_STRING UnicodeString; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING v65; // [rsp+140h] [rbp+40h] BYREF
  ULONG Size; // [rsp+1A0h] [rbp+A0h]
  ULONG NumberOfBytes; // [rsp+1A8h] [rbp+A8h]
  _DWORD *NumberOfBytesa; // [rsp+1A8h] [rbp+A8h]
  ULONG v69; // [rsp+1B0h] [rbp+B0h]
  _DWORD *v70; // [rsp+1B0h] [rbp+B0h]
  ULONG v71; // [rsp+1B8h] [rbp+B8h]
  _DWORD *v72; // [rsp+1B8h] [rbp+B8h]

  *(_DWORD *)&v65.Length = 2752552;
  v65.Buffer = L"sessionImpersonation";
  UnicodeString.Buffer = L"constrainedImpersonation";
  LODWORD(IdentifierAuthority) = 0;
  WORD2(IdentifierAuthority) = 0;
  LODWORD(v37) = 0;
  WORD2(v37) = 256;
  LODWORD(v38) = 0;
  WORD2(v38) = 512;
  LODWORD(v32) = 0;
  WORD2(v32) = 768;
  LODWORD(v31) = 0;
  WORD2(v31) = 1280;
  LODWORD(v33) = 0;
  WORD2(v33) = 4096;
  LODWORD(v35) = 0;
  WORD2(v35) = 3840;
  LODWORD(v34) = 0;
  WORD2(v34) = 4864;
  *(_DWORD *)&UnicodeString.Length = 3276848;
  v0 = *(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 116LL);
  if ( (v0 & 0x40) == 0 && MEMORY[0xFFFFF78000000264] == 1 && MEMORY[0xFFFFF780000002E8] <= 0x51400u )
  {
    SepTokenSidSharingEnabled = 1;
    SepTokenCapabilitySidSharingEnabled = 1;
  }
  else
  {
    SepTokenSidSharingEnabled = 0;
    SepTokenCapabilitySidSharingEnabled = 0;
  }
  SepOsLoaderTpmDriverLoaded = (v0 & 0x80) != 0;
  v1 = RtlLengthRequiredSid(1u);
  NumberOfBytes = RtlLengthRequiredSid(2u);
  Size = RtlLengthRequiredSid(6u);
  v69 = RtlLengthRequiredSid(9u);
  v71 = RtlLengthRequiredSid(0xAu);
  SeNullSid = ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeCreatorOwnerSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeCreatorGroupSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeCreatorOwnerServerSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeCreatorGroupServerSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeWorldSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeLocalSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeOwnerRightsSid = PoolWithTag;
  v29 = SeNullSid;
  if ( !SeNullSid )
    return 0;
  Sid = SeWorldSid;
  if ( !SeWorldSid )
    return 0;
  v3 = SeLocalSid;
  if ( !SeLocalSid )
    return 0;
  v4 = SeCreatorOwnerSid;
  if ( !SeCreatorOwnerSid )
    return 0;
  v5 = SeCreatorGroupSid;
  if ( !SeCreatorGroupSid )
    return 0;
  v6 = SeCreatorOwnerServerSid;
  if ( !SeCreatorOwnerServerSid )
    return 0;
  if ( !PoolWithTag )
    return 0;
  v7 = SeCreatorGroupServerSid;
  if ( !SeCreatorGroupServerSid )
    return 0;
  RtlInitializeSid(SeNullSid, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v37, 1u);
  RtlInitializeSid(v3, (PSID_IDENTIFIER_AUTHORITY)&v38, 1u);
  RtlInitializeSid(v4, (PSID_IDENTIFIER_AUTHORITY)&v32, 1u);
  RtlInitializeSid(v5, (PSID_IDENTIFIER_AUTHORITY)&v32, 1u);
  RtlInitializeSid(v6, (PSID_IDENTIFIER_AUTHORITY)&v32, 1u);
  RtlInitializeSid(v7, (PSID_IDENTIFIER_AUTHORITY)&v32, 1u);
  RtlInitializeSid(PoolWithTag, (PSID_IDENTIFIER_AUTHORITY)&v32, 1u);
  v29[2] = 0;
  *((_DWORD *)Sid + 2) = 0;
  v3[2] = 0;
  v4[2] = 0;
  v5[2] = 1;
  v6[2] = 2;
  v7[2] = 3;
  PoolWithTag[2] = 4;
  v8 = RtlLengthRequiredSid(0);
  SeNtAuthoritySid = ExAllocatePoolWithTag((POOL_TYPE)17, v8, 0x69536553u);
  SeDialupSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeNetworkSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeBatchSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeInteractiveSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SePrincipalSelfSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeServiceSid = ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeLocalSystemSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeAuthenticatedUsersSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeRestrictedSid = ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeAnonymousLogonSid = ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeLocalServiceSid = ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeNetworkServiceSid = ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeIUserSid = ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeAliasAdminsSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasUsersSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasGuestsSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasPowerUsersSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasAccountOpsSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasSystemOpsSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasPrintOpsSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeAliasBackupOpsSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeUntrustedMandatorySid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  *(_QWORD *)&SeLowMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeMediumMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeHighMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeSystemMandatorySid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SePackagePrefixSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeCapabilityPrefixSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeAllAppPackagesSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeAllRestrictedAppPackagesSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeUserModeDriversSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, Size, 0x69536553u);
  SeTrustedInstallerSid = ExAllocatePoolWithTag((POOL_TYPE)528, Size, 0x69536553u);
  SeProcTrustWinTcbSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustWinSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustLiteWinTcbSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustLiteWinSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustNoneSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeDefaultAccountAliasSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeConstrainedImpersonationCapabilityGroupSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v69, 0x69536553u);
  SeConstrainedImpersonationCapabilitySid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v71, 0x69536553u);
  SeSessionImpersonationCapabilityGroupSid = ExAllocatePoolWithTag((POOL_TYPE)17, v69, 0x69536553u);
  v9 = ExAllocatePoolWithTag((POOL_TYPE)17, v71, 0x69536553u);
  SeSessionImpersonationCapabilitySid = v9;
  if ( !SeNtAuthoritySid )
    return 0;
  Sid = (PSID)SeDialupSid;
  if ( !SeDialupSid )
    return 0;
  v48 = (PSID)SeNetworkSid;
  if ( !SeNetworkSid )
    return 0;
  v47 = (PSID)SeBatchSid;
  if ( !SeBatchSid )
    return 0;
  v46 = (PSID)SeInteractiveSid;
  if ( !SeInteractiveSid )
    return 0;
  v45 = SeServiceSid;
  if ( !SeServiceSid )
    return 0;
  v44 = SePrincipalSelfSid;
  if ( !SePrincipalSelfSid )
    return 0;
  v43 = SeLocalSystemSid;
  if ( !SeLocalSystemSid )
    return 0;
  v42 = (PSID)SeAuthenticatedUsersSid;
  if ( !SeAuthenticatedUsersSid )
    return 0;
  v41 = SeRestrictedSid;
  if ( !SeRestrictedSid )
    return 0;
  v40 = SeAnonymousLogonSid;
  if ( !SeAnonymousLogonSid )
    return 0;
  v38 = (__int64)SeLocalServiceSid;
  if ( !SeLocalServiceSid )
    return 0;
  v37 = (__int64)SeNetworkServiceSid;
  if ( !SeNetworkServiceSid )
    return 0;
  IdentifierAuthority = (__int64)SeIUserSid;
  if ( !SeIUserSid )
    return 0;
  NumberOfBytesa = SeAliasAdminsSid;
  if ( !SeAliasAdminsSid )
    return 0;
  v70 = SeAliasUsersSid;
  if ( !SeAliasUsersSid )
    return 0;
  v32 = SeAliasGuestsSid;
  if ( !SeAliasGuestsSid )
    return 0;
  v61 = (PSID)SeAliasPowerUsersSid;
  if ( !SeAliasPowerUsersSid )
    return 0;
  v49 = (PSID)SeAliasAccountOpsSid;
  if ( !SeAliasAccountOpsSid )
    return 0;
  v50 = (PSID)SeAliasSystemOpsSid;
  if ( !SeAliasSystemOpsSid )
    return 0;
  v51 = (PSID)SeAliasPrintOpsSid;
  if ( !SeAliasPrintOpsSid )
    return 0;
  v52 = (PSID)SeAliasBackupOpsSid;
  if ( !SeAliasBackupOpsSid )
    return 0;
  v53 = (PSID)SeUntrustedMandatorySid;
  if ( !SeUntrustedMandatorySid )
    return 0;
  v54 = *(PSID *)&SeLowMandatorySid;
  if ( !*(_QWORD *)&SeLowMandatorySid )
    return 0;
  v55 = SeMediumMandatorySid;
  if ( !SeMediumMandatorySid )
    return 0;
  v56 = SeHighMandatorySid;
  if ( !SeHighMandatorySid )
    return 0;
  v57 = (PSID)SeSystemMandatorySid;
  if ( !SeSystemMandatorySid )
    return 0;
  v58 = (PSID)SePackagePrefixSid;
  if ( !SePackagePrefixSid )
    return 0;
  v59 = (PSID)SeCapabilityPrefixSid;
  if ( !SeCapabilityPrefixSid )
    return 0;
  v60 = SeAllAppPackagesSid;
  if ( !SeAllAppPackagesSid )
    return 0;
  v30 = SeAllRestrictedAppPackagesSid;
  if ( !SeAllRestrictedAppPackagesSid )
    return 0;
  v72 = (_DWORD *)SeUserModeDriversSid;
  if ( !SeUserModeDriversSid )
    return 0;
  v10 = SeProcTrustWinTcbSid;
  if ( !SeProcTrustWinTcbSid )
    return 0;
  v11 = SeProcTrustWinSid;
  if ( !SeProcTrustWinSid )
    return 0;
  v12 = SeProcTrustLiteWinTcbSid;
  if ( !SeProcTrustLiteWinTcbSid )
    return 0;
  v13 = SeProcTrustLiteWinSid;
  if ( !SeProcTrustLiteWinSid )
    return 0;
  v14 = SeProcTrustNoneSid;
  if ( !SeProcTrustNoneSid )
    return 0;
  v15 = SeTrustedInstallerSid;
  if ( !SeTrustedInstallerSid )
    return 0;
  v16 = SeDefaultAccountAliasSid;
  if ( !SeDefaultAccountAliasSid )
    return 0;
  CapabilitySid = (PSID)SeConstrainedImpersonationCapabilitySid;
  if ( !SeConstrainedImpersonationCapabilitySid )
    return 0;
  CapabilityGroupSid = (PSID)SeConstrainedImpersonationCapabilityGroupSid;
  if ( !SeConstrainedImpersonationCapabilityGroupSid )
    return 0;
  if ( !v9 )
    return 0;
  if ( !SeSessionImpersonationCapabilityGroupSid )
    return 0;
  RtlInitializeSid(SeNtAuthoritySid, (PSID_IDENTIFIER_AUTHORITY)&v31, 0);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v31, 1u);
  RtlInitializeSid(v48, (PSID_IDENTIFIER_AUTHORITY)&v31, 1u);
  RtlInitializeSid(v47, (PSID_IDENTIFIER_AUTHORITY)&v31, 1u);
  RtlInitializeSid(v46, (PSID_IDENTIFIER_AUTHORITY)&v31, 1u);
  RtlInitializeSid(v45, (PSID_IDENTIFIER_AUTHORITY)&v31, 1u);
  RtlInitializeSid(v44, (PSID_IDENTIFIER_AUTHORITY)&v31, 1u);
  RtlInitializeSid(v43, (PSID_IDENTIFIER_AUTHORITY)&v31, 1u);
  RtlInitializeSid(v42, (PSID_IDENTIFIER_AUTHORITY)&v31, 1u);
  RtlInitializeSid(v41, (PSID_IDENTIFIER_AUTHORITY)&v31, 1u);
  RtlInitializeSid(v40, (PSID_IDENTIFIER_AUTHORITY)&v31, 1u);
  RtlInitializeSid((PSID)v38, (PSID_IDENTIFIER_AUTHORITY)&v31, 1u);
  RtlInitializeSid((PSID)v37, (PSID_IDENTIFIER_AUTHORITY)&v31, 1u);
  RtlInitializeSid((PSID)IdentifierAuthority, (PSID_IDENTIFIER_AUTHORITY)&v31, 1u);
  RtlInitializeSid(NumberOfBytesa, (PSID_IDENTIFIER_AUTHORITY)&v31, 2u);
  RtlInitializeSid(v70, (PSID_IDENTIFIER_AUTHORITY)&v31, 2u);
  RtlInitializeSid((PSID)v32, (PSID_IDENTIFIER_AUTHORITY)&v31, 2u);
  RtlInitializeSid(v61, (PSID_IDENTIFIER_AUTHORITY)&v31, 2u);
  RtlInitializeSid(v49, (PSID_IDENTIFIER_AUTHORITY)&v31, 2u);
  RtlInitializeSid(v50, (PSID_IDENTIFIER_AUTHORITY)&v31, 2u);
  RtlInitializeSid(v51, (PSID_IDENTIFIER_AUTHORITY)&v31, 2u);
  RtlInitializeSid(v52, (PSID_IDENTIFIER_AUTHORITY)&v31, 2u);
  RtlInitializeSid(v15, (PSID_IDENTIFIER_AUTHORITY)&v31, 6u);
  RtlInitializeSid(v53, (PSID_IDENTIFIER_AUTHORITY)&v33, 1u);
  RtlInitializeSid(v54, (PSID_IDENTIFIER_AUTHORITY)&v33, 1u);
  RtlInitializeSid(v55, (PSID_IDENTIFIER_AUTHORITY)&v33, 1u);
  RtlInitializeSid(v56, (PSID_IDENTIFIER_AUTHORITY)&v33, 1u);
  RtlInitializeSid(v57, (PSID_IDENTIFIER_AUTHORITY)&v33, 1u);
  RtlInitializeSid(v58, (PSID_IDENTIFIER_AUTHORITY)&v35, 1u);
  RtlInitializeSid(v59, (PSID_IDENTIFIER_AUTHORITY)&v35, 1u);
  RtlInitializeSid(v60, (PSID_IDENTIFIER_AUTHORITY)&v35, 2u);
  RtlInitializeSid(v30, (PSID_IDENTIFIER_AUTHORITY)&v35, 2u);
  memset(v72, 0, Size);
  RtlInitializeSid(v72, (PSID_IDENTIFIER_AUTHORITY)&v31, 6u);
  RtlInitializeSid(v14, (PSID_IDENTIFIER_AUTHORITY)&v34, 2u);
  RtlInitializeSid(v10, (PSID_IDENTIFIER_AUTHORITY)&v34, 2u);
  RtlInitializeSid(v11, (PSID_IDENTIFIER_AUTHORITY)&v34, 2u);
  RtlInitializeSid(v12, (PSID_IDENTIFIER_AUTHORITY)&v34, 2u);
  RtlInitializeSid(v13, (PSID_IDENTIFIER_AUTHORITY)&v34, 2u);
  *((_DWORD *)Sid + 2) = 1;
  *((_DWORD *)v48 + 2) = 2;
  *((_DWORD *)v47 + 2) = 3;
  *((_DWORD *)v46 + 2) = 4;
  v17 = v61;
  v18 = v49;
  *((_DWORD *)v45 + 2) = 6;
  v19 = v50;
  v20 = v32;
  *((_DWORD *)v44 + 2) = 10;
  *((_DWORD *)v43 + 2) = 18;
  *((_DWORD *)v42 + 2) = 11;
  *((_DWORD *)v41 + 2) = 12;
  *((_DWORD *)v40 + 2) = 7;
  *(_DWORD *)(v38 + 8) = 19;
  *(_DWORD *)(v37 + 8) = 20;
  *(_DWORD *)(IdentifierAuthority + 8) = 17;
  NumberOfBytesa[2] = 32;
  v70[2] = 32;
  v21 = v52;
  *(_DWORD *)(v20 + 8) = 32;
  v17[2] = 32;
  v18[2] = 32;
  v19[2] = 32;
  v22 = v51;
  *((_DWORD *)v51 + 2) = 32;
  v21[2] = 32;
  NumberOfBytesa[3] = 544;
  v70[3] = 545;
  *(_DWORD *)(v20 + 12) = 546;
  v17[3] = 547;
  v18[3] = 548;
  v19[3] = 549;
  v22[3] = 550;
  v21[3] = 551;
  *((_DWORD *)v53 + 2) = 0;
  *((_DWORD *)v54 + 2) = 4096;
  *((_DWORD *)v55 + 2) = 0x2000;
  *((_DWORD *)v56 + 2) = 12288;
  *((_DWORD *)v57 + 2) = 0x4000;
  *((_DWORD *)v58 + 2) = 2;
  *((_DWORD *)v59 + 2) = 3;
  v23 = v60;
  *((_DWORD *)v60 + 2) = 2;
  v23[3] = 1;
  v30[2] = 2;
  v30[3] = 2;
  v72[2] = 84;
  v14[1] = 0LL;
  v10[2] = 1024;
  v10[3] = 0x2000;
  v11[2] = 1024;
  v11[3] = 4096;
  v12[2] = 512;
  v12[3] = 0x2000;
  v13[2] = 512;
  v13[3] = 4096;
  v15[2] = 80;
  v15[3] = 956008885;
  v15[4] = -876444647;
  v15[5] = 1831038044;
  v15[6] = 1853292631;
  v15[7] = -2023488832;
  RtlInitializeSid(v16, (PSID_IDENTIFIER_AUTHORITY)&v31, 2u);
  v24 = CapabilitySid;
  v25 = CapabilityGroupSid;
  v16[2] = 32;
  v16[3] = 581;
  if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, v25, v24) < 0
    || RtlDeriveCapabilitySidsFromName(
         &v65,
         SeSessionImpersonationCapabilityGroupSid,
         SeSessionImpersonationCapabilitySid) < 0 )
  {
    return 0;
  }
  SepInitSystemDacls();
  SeCreateTokenPrivilege = (LUID)2LL;
  SeAssignPrimaryTokenPrivilege = (LUID)3LL;
  SeLockMemoryPrivilege = (LUID)4LL;
  SeIncreaseQuotaPrivilege = (LUID)5LL;
  v38 = 6LL;
  SeUnsolicitedInputPrivilege = 6LL;
  v37 = 7LL;
  SeTcbPrivilege = (LUID)7LL;
  IdentifierAuthority = 8LL;
  SeSecurityPrivilege = (LUID)8LL;
  v35 = 9LL;
  SeTakeOwnershipPrivilege = 9LL;
  v34 = 10LL;
  SeLoadDriverPrivilege = (LUID)10LL;
  v33 = 15LL;
  SeCreatePagefilePrivilege = (LUID)15LL;
  v32 = 14LL;
  SeIncreaseBasePriorityPrivilege = (LUID)14LL;
  v31 = 11LL;
  SeSystemProfilePrivilege = (LUID)11LL;
  v40 = (PSID)12;
  SeSystemtimePrivilege = (LUID)12LL;
  v41 = (PSID)13;
  SeProfileSingleProcessPrivilege = (LUID)13LL;
  v42 = (PSID)16;
  SeCreatePermanentPrivilege = (LUID)16LL;
  v43 = (PSID)17;
  SeBackupPrivilege = (LUID)17LL;
  v44 = (PSID)18;
  SeRestorePrivilege = (LUID)18LL;
  v45 = (PSID)19;
  SeShutdownPrivilege = (LUID)19LL;
  v46 = (PSID)20;
  SeDebugPrivilege = (LUID)20LL;
  v47 = (PSID)21;
  SeAuditPrivilege = 21LL;
  v48 = (PSID)22;
  Sid = (PSID)23;
  SeSystemEnvironmentPrivilege = (LUID)22LL;
  SeChangeNotifyPrivilege = 23LL;
  SeRemoteShutdownPrivilege = 24LL;
  SeUndockPrivilege = 25LL;
  SeSyncAgentPrivilege = 26LL;
  SeEnableDelegationPrivilege = 27LL;
  qword_1407482E8 = (__int64)SeNullSid;
  qword_1407482F0 = (__int64)SeWorldSid;
  qword_1407482F8 = (__int64)SeLocalSid;
  qword_140748300 = (__int64)SeCreatorOwnerSid;
  qword_140748308 = (__int64)SeCreatorGroupSid;
  qword_140748430 = (__int64)SeOwnerRightsSid;
  qword_140748310 = (__int64)SeNtAuthoritySid;
  qword_140748318 = SeDialupSid;
  qword_140748320 = SeNetworkSid;
  qword_140748328 = SeBatchSid;
  qword_140748330 = SeInteractiveSid;
  qword_140748338 = (__int64)SeLocalSystemSid;
  qword_140748380 = SeAuthenticatedUsersSid;
  qword_140748388 = (__int64)SeRestrictedSid;
  qword_140748390 = (__int64)SeAnonymousLogonSid;
  qword_1407483B0 = (__int64)SeLocalServiceSid;
  qword_1407483B8 = (__int64)SeNetworkServiceSid;
  qword_140748400 = (__int64)SeIUserSid;
  qword_140748340 = (__int64)SeAliasAdminsSid;
  qword_140748348 = (__int64)SeAliasUsersSid;
  qword_140748350 = SeAliasGuestsSid;
  qword_140748358 = SeAliasPowerUsersSid;
  qword_140748360 = SeAliasAccountOpsSid;
  qword_140748368 = SeAliasSystemOpsSid;
  qword_140748370 = SeAliasPrintOpsSid;
  qword_140748378 = SeAliasBackupOpsSid;
  qword_140748408 = SeUntrustedMandatorySid;
  SeManageVolumePrivilege = 28LL;
  SeImpersonatePrivilege = 29LL;
  SeCreateGlobalPrivilege = (LUID)30LL;
  SeTrustedCredManAccessPrivilege = 31LL;
  SeRelabelPrivilege = (LUID)32LL;
  SeIncreaseWorkingSetPrivilege = 33LL;
  SeTimeZonePrivilege = (LUID)34LL;
  SeCreateSymbolicLinkPrivilege = 35LL;
  SeDelegateSessionUserImpersonatePrivilege = 36LL;
  qword_140748410 = *(_QWORD *)&SeLowMandatorySid;
  qword_140748418 = (__int64)SeMediumMandatorySid;
  qword_140748420 = (__int64)SeHighMandatorySid;
  qword_140748428 = SeSystemMandatorySid;
  qword_140748438 = (__int64)SeAllAppPackagesSid;
  qword_140748440 = SeUserModeDriversSid;
  qword_140748448 = (__int64)SeTrustedInstallerSid;
  SepExports = 2LL;
  qword_140748238 = 3LL;
  qword_140748240 = 4LL;
  qword_140748248 = 5LL;
  qword_140748250 = 6LL;
  qword_140748258 = 7LL;
  qword_140748260 = 8LL;
  qword_140748268 = 9LL;
  qword_140748270 = 10LL;
  qword_140748278 = 15LL;
  qword_140748280 = 14LL;
  qword_140748288 = 11LL;
  qword_140748290 = 12LL;
  qword_140748298 = 13LL;
  qword_1407482A0 = 16LL;
  qword_1407482A8 = 17LL;
  qword_1407482B0 = 18LL;
  qword_1407482B8 = 19LL;
  qword_1407482C0 = 20LL;
  qword_1407482C8 = 21LL;
  qword_140748450 = 36LL;
  qword_1407482D0 = 22LL;
  qword_1407483C8 = 29LL;
  qword_1407483F8 = 35LL;
  v26 = 5LL;
  SeExports = (PSE_EXPORTS)&SepExports;
  v27 = (char *)&unk_140306B78;
  qword_1407482D8 = 23LL;
  qword_1407482E0 = 24LL;
  qword_140748398 = 25LL;
  qword_1407483A0 = 26LL;
  qword_1407483A8 = 27LL;
  qword_1407483C0 = 28LL;
  qword_1407483D0 = 30LL;
  qword_1407483D8 = 31LL;
  qword_1407483E0 = 32LL;
  qword_1407483E8 = 33LL;
  qword_1407483F0 = 34LL;
  do
  {
    v27[8] = 0;
    *(_QWORD *)v27 = 0LL;
    *((_QWORD *)v27 - 3) = 0LL;
    v27 += 40;
    --v26;
  }
  while ( v26 );
  LowboxSessionMapLock = 0LL;
  g_SessionLowboxMap = 0LL;
  return (int)SepInitializeSharedSidMap() >= 0;
}
