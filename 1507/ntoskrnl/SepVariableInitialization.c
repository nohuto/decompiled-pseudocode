/*
 * XREFs of SepVariableInitialization @ 0x1407BD8FC
 * Callers:
 *     SepInitializationPhase0 @ 0x1407BC43C (SepInitializationPhase0.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x14015EF7C (RtlDeriveCapabilitySidsFromName.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlLengthRequiredSid @ 0x140470D24 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x1405447D8 (RtlInitializeSid.c)
 *     SepInitializeSharedSidMap @ 0x1405951D8 (SepInitializeSharedSidMap.c)
 *     SepInitSystemDacls @ 0x1407BEE60 (SepInitSystemDacls.c)
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
  _DWORD *v20; // r10
  _DWORD *v21; // rcx
  _DWORD *v22; // rax
  PSID v23; // r8
  PSID v24; // rdx
  __int64 v25; // rcx
  char *v26; // rax
  _DWORD *v28; // [rsp+20h] [rbp-E0h]
  _DWORD *v29; // [rsp+20h] [rbp-E0h]
  __int64 v30; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 IdentifierAuthority; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  PSID Sid; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h] BYREF
  PSID v39; // [rsp+70h] [rbp-90h]
  PSID v40; // [rsp+78h] [rbp-88h]
  PSID v41; // [rsp+80h] [rbp-80h]
  PSID v42; // [rsp+88h] [rbp-78h]
  PSID v43; // [rsp+90h] [rbp-70h]
  PSID v44; // [rsp+98h] [rbp-68h]
  PSID v45; // [rsp+A0h] [rbp-60h]
  PSID v46; // [rsp+A8h] [rbp-58h]
  PSID v47; // [rsp+B0h] [rbp-50h]
  PSID v48; // [rsp+B8h] [rbp-48h]
  PSID v49; // [rsp+C0h] [rbp-40h]
  PSID v50; // [rsp+C8h] [rbp-38h]
  PSID v51; // [rsp+D0h] [rbp-30h]
  PSID v52; // [rsp+D8h] [rbp-28h]
  PSID v53; // [rsp+E0h] [rbp-20h]
  PSID v54; // [rsp+E8h] [rbp-18h]
  PSID v55; // [rsp+F0h] [rbp-10h]
  PSID v56; // [rsp+F8h] [rbp-8h]
  PSID v57; // [rsp+100h] [rbp+0h]
  PSID v58; // [rsp+108h] [rbp+8h]
  PSID v59; // [rsp+110h] [rbp+10h]
  PSID CapabilitySid; // [rsp+118h] [rbp+18h]
  UNICODE_STRING UnicodeString; // [rsp+120h] [rbp+20h] BYREF
  PSID CapabilityGroupSid; // [rsp+130h] [rbp+30h]
  UNICODE_STRING v63; // [rsp+138h] [rbp+38h] BYREF
  ULONG Size; // [rsp+1A0h] [rbp+A0h]
  ULONG NumberOfBytes; // [rsp+1A8h] [rbp+A8h]
  _DWORD *NumberOfBytesa; // [rsp+1A8h] [rbp+A8h]
  ULONG v67; // [rsp+1B0h] [rbp+B0h]
  _DWORD *v68; // [rsp+1B0h] [rbp+B0h]
  ULONG v69; // [rsp+1B8h] [rbp+B8h]
  _DWORD *v70; // [rsp+1B8h] [rbp+B8h]

  *(_DWORD *)&v63.Length = 2752552;
  v63.Buffer = L"sessionImpersonation";
  UnicodeString.Buffer = L"constrainedImpersonation";
  LODWORD(IdentifierAuthority) = 0;
  WORD2(IdentifierAuthority) = 0;
  LODWORD(v36) = 0;
  WORD2(v36) = 256;
  LODWORD(v35) = 0;
  WORD2(v35) = 512;
  LODWORD(v31) = 0;
  WORD2(v31) = 768;
  LODWORD(v30) = 0;
  WORD2(v30) = 1280;
  LODWORD(v33) = 0;
  WORD2(v33) = 4096;
  LODWORD(v38) = 0;
  WORD2(v38) = 3840;
  LODWORD(v32) = 0;
  WORD2(v32) = 4864;
  *(_DWORD *)&UnicodeString.Length = 3276848;
  v0 = *(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 116LL);
  if ( (v0 & 0x40) != 0 || MEMORY[0xFFFFF78000000264] != 1 || MEMORY[0xFFFFF780000002E8] > 0x51400u )
  {
    SepTokenSidSharingEnabled = 0;
    SepTokenCapabilitySidSharingEnabled = 0;
  }
  else
  {
    SepTokenSidSharingEnabled = 1;
    SepTokenCapabilitySidSharingEnabled = 1;
  }
  SepOsLoaderTpmDriverLoaded = (v0 & 0x80) != 0;
  v1 = RtlLengthRequiredSid(1u);
  NumberOfBytes = RtlLengthRequiredSid(2u);
  Size = RtlLengthRequiredSid(6u);
  v67 = RtlLengthRequiredSid(9u);
  v69 = RtlLengthRequiredSid(0xAu);
  SeNullSid = ExAllocatePoolWithTag((POOL_TYPE)17, v1, 0x69536553u);
  SeCreatorOwnerSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeCreatorGroupSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeCreatorOwnerServerSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeCreatorGroupServerSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeWorldSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeLocalSid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeOwnerRightsSid = PoolWithTag;
  v28 = SeNullSid;
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
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v36, 1u);
  RtlInitializeSid(v3, (PSID_IDENTIFIER_AUTHORITY)&v35, 1u);
  RtlInitializeSid(v4, (PSID_IDENTIFIER_AUTHORITY)&v31, 1u);
  RtlInitializeSid(v5, (PSID_IDENTIFIER_AUTHORITY)&v31, 1u);
  RtlInitializeSid(v6, (PSID_IDENTIFIER_AUTHORITY)&v31, 1u);
  RtlInitializeSid(v7, (PSID_IDENTIFIER_AUTHORITY)&v31, 1u);
  RtlInitializeSid(PoolWithTag, (PSID_IDENTIFIER_AUTHORITY)&v31, 1u);
  v28[2] = 0;
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
  SeUntrustedMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  *(_QWORD *)&SeLowMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeMediumMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeHighMandatorySid = ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeSystemMandatorySid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SePackagePrefixSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeCapabilityPrefixSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, v1, 0x69536553u);
  SeAllAppPackagesSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeUserModeDriversSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, Size, 0x69536553u);
  SeTrustedInstallerSid = ExAllocatePoolWithTag((POOL_TYPE)528, Size, 0x69536553u);
  SeProcTrustWinTcbSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustWinSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustLiteWinTcbSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustLiteWinSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeProcTrustNoneSid = ExAllocatePoolWithTag((POOL_TYPE)528, NumberOfBytes, 0x69536553u);
  SeDefaultAccountAliasSid = ExAllocatePoolWithTag((POOL_TYPE)17, NumberOfBytes, 0x69536553u);
  SeConstrainedImpersonationCapabilityGroupSid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v67, 0x69536553u);
  SeConstrainedImpersonationCapabilitySid = (__int64)ExAllocatePoolWithTag((POOL_TYPE)17, v69, 0x69536553u);
  SeSessionImpersonationCapabilityGroupSid = ExAllocatePoolWithTag((POOL_TYPE)17, v67, 0x69536553u);
  v9 = ExAllocatePoolWithTag((POOL_TYPE)17, v69, 0x69536553u);
  SeSessionImpersonationCapabilitySid = v9;
  if ( !SeNtAuthoritySid )
    return 0;
  Sid = (PSID)SeDialupSid;
  if ( !SeDialupSid )
    return 0;
  v42 = (PSID)SeNetworkSid;
  if ( !SeNetworkSid )
    return 0;
  v40 = (PSID)SeBatchSid;
  if ( !SeBatchSid )
    return 0;
  v43 = (PSID)SeInteractiveSid;
  if ( !SeInteractiveSid )
    return 0;
  v45 = SeServiceSid;
  if ( !SeServiceSid )
    return 0;
  v41 = SePrincipalSelfSid;
  if ( !SePrincipalSelfSid )
    return 0;
  v46 = SeLocalSystemSid;
  if ( !SeLocalSystemSid )
    return 0;
  v44 = (PSID)SeAuthenticatedUsersSid;
  if ( !SeAuthenticatedUsersSid )
    return 0;
  v39 = SeRestrictedSid;
  if ( !SeRestrictedSid )
    return 0;
  v35 = (__int64)SeAnonymousLogonSid;
  if ( !SeAnonymousLogonSid )
    return 0;
  v36 = (__int64)SeLocalServiceSid;
  if ( !SeLocalServiceSid )
    return 0;
  IdentifierAuthority = (__int64)SeNetworkServiceSid;
  if ( !SeNetworkServiceSid )
    return 0;
  v31 = (__int64)SeIUserSid;
  if ( !SeIUserSid )
    return 0;
  NumberOfBytesa = SeAliasAdminsSid;
  if ( !SeAliasAdminsSid )
    return 0;
  v68 = SeAliasUsersSid;
  if ( !SeAliasUsersSid )
    return 0;
  v47 = (PSID)SeAliasGuestsSid;
  if ( !SeAliasGuestsSid )
    return 0;
  v55 = (PSID)SeAliasPowerUsersSid;
  if ( !SeAliasPowerUsersSid )
    return 0;
  v56 = (PSID)SeAliasAccountOpsSid;
  if ( !SeAliasAccountOpsSid )
    return 0;
  v50 = (PSID)SeAliasSystemOpsSid;
  if ( !SeAliasSystemOpsSid )
    return 0;
  v59 = (PSID)SeAliasPrintOpsSid;
  if ( !SeAliasPrintOpsSid )
    return 0;
  v52 = (PSID)SeAliasBackupOpsSid;
  if ( !SeAliasBackupOpsSid )
    return 0;
  v58 = SeUntrustedMandatorySid;
  if ( !SeUntrustedMandatorySid )
    return 0;
  v54 = *(PSID *)&SeLowMandatorySid;
  if ( !*(_QWORD *)&SeLowMandatorySid )
    return 0;
  v57 = SeMediumMandatorySid;
  if ( !SeMediumMandatorySid )
    return 0;
  v48 = SeHighMandatorySid;
  if ( !SeHighMandatorySid )
    return 0;
  v49 = (PSID)SeSystemMandatorySid;
  if ( !SeSystemMandatorySid )
    return 0;
  v51 = (PSID)SePackagePrefixSid;
  if ( !SePackagePrefixSid )
    return 0;
  v53 = (PSID)SeCapabilityPrefixSid;
  if ( !SeCapabilityPrefixSid )
    return 0;
  v29 = SeAllAppPackagesSid;
  if ( !SeAllAppPackagesSid )
    return 0;
  v70 = (_DWORD *)SeUserModeDriversSid;
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
  RtlInitializeSid(SeNtAuthoritySid, (PSID_IDENTIFIER_AUTHORITY)&v30, 0);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v30, 1u);
  RtlInitializeSid(v42, (PSID_IDENTIFIER_AUTHORITY)&v30, 1u);
  RtlInitializeSid(v40, (PSID_IDENTIFIER_AUTHORITY)&v30, 1u);
  RtlInitializeSid(v43, (PSID_IDENTIFIER_AUTHORITY)&v30, 1u);
  RtlInitializeSid(v45, (PSID_IDENTIFIER_AUTHORITY)&v30, 1u);
  RtlInitializeSid(v41, (PSID_IDENTIFIER_AUTHORITY)&v30, 1u);
  RtlInitializeSid(v46, (PSID_IDENTIFIER_AUTHORITY)&v30, 1u);
  RtlInitializeSid(v44, (PSID_IDENTIFIER_AUTHORITY)&v30, 1u);
  RtlInitializeSid(v39, (PSID_IDENTIFIER_AUTHORITY)&v30, 1u);
  RtlInitializeSid((PSID)v35, (PSID_IDENTIFIER_AUTHORITY)&v30, 1u);
  RtlInitializeSid((PSID)v36, (PSID_IDENTIFIER_AUTHORITY)&v30, 1u);
  RtlInitializeSid((PSID)IdentifierAuthority, (PSID_IDENTIFIER_AUTHORITY)&v30, 1u);
  RtlInitializeSid((PSID)v31, (PSID_IDENTIFIER_AUTHORITY)&v30, 1u);
  RtlInitializeSid(NumberOfBytesa, (PSID_IDENTIFIER_AUTHORITY)&v30, 2u);
  RtlInitializeSid(v68, (PSID_IDENTIFIER_AUTHORITY)&v30, 2u);
  RtlInitializeSid(v47, (PSID_IDENTIFIER_AUTHORITY)&v30, 2u);
  RtlInitializeSid(v55, (PSID_IDENTIFIER_AUTHORITY)&v30, 2u);
  RtlInitializeSid(v56, (PSID_IDENTIFIER_AUTHORITY)&v30, 2u);
  RtlInitializeSid(v50, (PSID_IDENTIFIER_AUTHORITY)&v30, 2u);
  RtlInitializeSid(v59, (PSID_IDENTIFIER_AUTHORITY)&v30, 2u);
  RtlInitializeSid(v52, (PSID_IDENTIFIER_AUTHORITY)&v30, 2u);
  RtlInitializeSid(v15, (PSID_IDENTIFIER_AUTHORITY)&v30, 6u);
  RtlInitializeSid(v58, (PSID_IDENTIFIER_AUTHORITY)&v33, 1u);
  RtlInitializeSid(v54, (PSID_IDENTIFIER_AUTHORITY)&v33, 1u);
  RtlInitializeSid(v57, (PSID_IDENTIFIER_AUTHORITY)&v33, 1u);
  RtlInitializeSid(v48, (PSID_IDENTIFIER_AUTHORITY)&v33, 1u);
  RtlInitializeSid(v49, (PSID_IDENTIFIER_AUTHORITY)&v33, 1u);
  RtlInitializeSid(v51, (PSID_IDENTIFIER_AUTHORITY)&v38, 1u);
  RtlInitializeSid(v53, (PSID_IDENTIFIER_AUTHORITY)&v38, 1u);
  RtlInitializeSid(v29, (PSID_IDENTIFIER_AUTHORITY)&v38, 2u);
  memset(v70, 0, Size);
  RtlInitializeSid(v70, (PSID_IDENTIFIER_AUTHORITY)&v30, 6u);
  RtlInitializeSid(v14, (PSID_IDENTIFIER_AUTHORITY)&v32, 2u);
  RtlInitializeSid(v10, (PSID_IDENTIFIER_AUTHORITY)&v32, 2u);
  RtlInitializeSid(v11, (PSID_IDENTIFIER_AUTHORITY)&v32, 2u);
  RtlInitializeSid(v12, (PSID_IDENTIFIER_AUTHORITY)&v32, 2u);
  RtlInitializeSid(v13, (PSID_IDENTIFIER_AUTHORITY)&v32, 2u);
  *((_DWORD *)Sid + 2) = 1;
  *((_DWORD *)v42 + 2) = 2;
  *((_DWORD *)v40 + 2) = 3;
  *((_DWORD *)v43 + 2) = 4;
  *((_DWORD *)v45 + 2) = 6;
  *((_DWORD *)v41 + 2) = 10;
  v17 = v55;
  v18 = v56;
  *((_DWORD *)v46 + 2) = 18;
  v19 = v50;
  v20 = v47;
  *((_DWORD *)v44 + 2) = 11;
  *((_DWORD *)v39 + 2) = 12;
  *(_DWORD *)(v35 + 8) = 7;
  *(_DWORD *)(v36 + 8) = 19;
  *(_DWORD *)(IdentifierAuthority + 8) = 20;
  *(_DWORD *)(v31 + 8) = 17;
  NumberOfBytesa[2] = 32;
  v68[2] = 32;
  v20[2] = 32;
  v17[2] = 32;
  v18[2] = 32;
  v19[2] = 32;
  v21 = v59;
  v22 = v52;
  *((_DWORD *)v59 + 2) = 32;
  v22[2] = 32;
  NumberOfBytesa[3] = 544;
  v68[3] = 545;
  v20[3] = 546;
  v17[3] = 547;
  v18[3] = 548;
  v19[3] = 549;
  v21[3] = 550;
  v22[3] = 551;
  *((_DWORD *)v58 + 2) = 0;
  *((_DWORD *)v54 + 2) = 4096;
  *((_DWORD *)v57 + 2) = 0x2000;
  *((_DWORD *)v48 + 2) = 12288;
  *((_DWORD *)v49 + 2) = 0x4000;
  *((_DWORD *)v51 + 2) = 2;
  *((_DWORD *)v53 + 2) = 3;
  v29[2] = 2;
  v29[3] = 1;
  v70[2] = 84;
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
  RtlInitializeSid(v16, (PSID_IDENTIFIER_AUTHORITY)&v30, 2u);
  v23 = CapabilitySid;
  v24 = CapabilityGroupSid;
  v16[2] = 32;
  v16[3] = 581;
  if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, v24, v23) < 0
    || RtlDeriveCapabilitySidsFromName(
         &v63,
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
  v35 = 6LL;
  SeUnsolicitedInputPrivilege = 6LL;
  v36 = 7LL;
  SeTcbPrivilege = (LUID)7LL;
  IdentifierAuthority = 8LL;
  SeSecurityPrivilege = (LUID)8LL;
  v38 = 9LL;
  SeTakeOwnershipPrivilege = 9LL;
  v32 = 10LL;
  SeLoadDriverPrivilege = (LUID)10LL;
  v33 = 15LL;
  SeCreatePagefilePrivilege = (LUID)15LL;
  v31 = 14LL;
  SeIncreaseBasePriorityPrivilege = (LUID)14LL;
  v30 = 11LL;
  SeSystemProfilePrivilege = (LUID)11LL;
  v39 = (PSID)12;
  SeSystemtimePrivilege = (LUID)12LL;
  v44 = (PSID)13;
  SeProfileSingleProcessPrivilege = (LUID)13LL;
  v46 = (PSID)16;
  SeCreatePermanentPrivilege = (LUID)16LL;
  v41 = (PSID)17;
  SeBackupPrivilege = (LUID)17LL;
  v45 = (PSID)18;
  SeRestorePrivilege = (LUID)18LL;
  v43 = (PSID)19;
  SeShutdownPrivilege = (LUID)19LL;
  v40 = (PSID)20;
  SeDebugPrivilege = (LUID)20LL;
  v42 = (PSID)21;
  Sid = (PSID)22;
  SeAuditPrivilege = 21LL;
  SeSystemEnvironmentPrivilege = (LUID)22LL;
  SeChangeNotifyPrivilege = 23LL;
  SeRemoteShutdownPrivilege = 24LL;
  SeUndockPrivilege = 25LL;
  SeSyncAgentPrivilege = 26LL;
  SeEnableDelegationPrivilege = 27LL;
  qword_14077F1A8 = (__int64)SeNullSid;
  qword_14077F1B0 = (__int64)SeWorldSid;
  qword_14077F1B8 = (__int64)SeLocalSid;
  qword_14077F1C0 = (__int64)SeCreatorOwnerSid;
  qword_14077F1C8 = (__int64)SeCreatorGroupSid;
  qword_14077F2F0 = (__int64)SeOwnerRightsSid;
  qword_14077F1D0 = (__int64)SeNtAuthoritySid;
  qword_14077F1D8 = SeDialupSid;
  qword_14077F1E0 = SeNetworkSid;
  qword_14077F1E8 = SeBatchSid;
  qword_14077F1F0 = SeInteractiveSid;
  qword_14077F1F8 = (__int64)SeLocalSystemSid;
  qword_14077F240 = SeAuthenticatedUsersSid;
  qword_14077F248 = (__int64)SeRestrictedSid;
  qword_14077F250 = (__int64)SeAnonymousLogonSid;
  qword_14077F270 = (__int64)SeLocalServiceSid;
  qword_14077F278 = (__int64)SeNetworkServiceSid;
  qword_14077F2C0 = (__int64)SeIUserSid;
  qword_14077F200 = (__int64)SeAliasAdminsSid;
  qword_14077F208 = (__int64)SeAliasUsersSid;
  qword_14077F210 = SeAliasGuestsSid;
  qword_14077F218 = SeAliasPowerUsersSid;
  qword_14077F220 = SeAliasAccountOpsSid;
  qword_14077F228 = SeAliasSystemOpsSid;
  qword_14077F230 = SeAliasPrintOpsSid;
  qword_14077F238 = SeAliasBackupOpsSid;
  qword_14077F2C8 = (__int64)SeUntrustedMandatorySid;
  qword_14077F2D0 = *(_QWORD *)&SeLowMandatorySid;
  qword_14077F2D8 = (__int64)SeMediumMandatorySid;
  SeManageVolumePrivilege = 28LL;
  SeImpersonatePrivilege = 29LL;
  SeCreateGlobalPrivilege = (LUID)30LL;
  SeTrustedCredManAccessPrivilege = 31LL;
  SeRelabelPrivilege = (LUID)32LL;
  SeIncreaseWorkingSetPrivilege = 33LL;
  SeTimeZonePrivilege = (LUID)34LL;
  SeCreateSymbolicLinkPrivilege = 35LL;
  qword_14077F2E0 = (__int64)SeHighMandatorySid;
  qword_14077F2E8 = SeSystemMandatorySid;
  qword_14077F2F8 = (__int64)SeAllAppPackagesSid;
  qword_14077F300 = SeUserModeDriversSid;
  qword_14077F308 = (__int64)SeTrustedInstallerSid;
  SepExports = 2LL;
  qword_14077F0F8 = 3LL;
  qword_14077F100 = 4LL;
  qword_14077F108 = 5LL;
  qword_14077F110 = 6LL;
  qword_14077F118 = 7LL;
  qword_14077F120 = 8LL;
  qword_14077F128 = 9LL;
  qword_14077F130 = 10LL;
  qword_14077F138 = 15LL;
  qword_14077F140 = 14LL;
  qword_14077F148 = 11LL;
  qword_14077F150 = 12LL;
  qword_14077F158 = 13LL;
  qword_14077F160 = 16LL;
  qword_14077F168 = 17LL;
  qword_14077F170 = 18LL;
  qword_14077F178 = 19LL;
  qword_14077F180 = 20LL;
  qword_14077F2B8 = 35LL;
  qword_14077F188 = 21LL;
  qword_14077F280 = 28LL;
  qword_14077F2B0 = 34LL;
  v25 = 5LL;
  SeExports = (PSE_EXPORTS)&SepExports;
  v26 = (char *)&unk_140331858;
  qword_14077F190 = 22LL;
  qword_14077F198 = 23LL;
  qword_14077F1A0 = 24LL;
  qword_14077F258 = 25LL;
  qword_14077F260 = 26LL;
  qword_14077F268 = 27LL;
  qword_14077F288 = 29LL;
  qword_14077F290 = 30LL;
  qword_14077F298 = 31LL;
  qword_14077F2A0 = 32LL;
  qword_14077F2A8 = 33LL;
  do
  {
    v26[8] = 0;
    *(_QWORD *)v26 = 0LL;
    *((_QWORD *)v26 - 3) = 0LL;
    v26 += 40;
    --v25;
  }
  while ( v25 );
  LowboxSessionMapLock = 0LL;
  g_SessionLowboxMap = 0LL;
  return (int)SepInitializeSharedSidMap() >= 0;
}
