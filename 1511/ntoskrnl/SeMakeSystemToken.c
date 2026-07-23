/*
 * XREFs of SeMakeSystemToken @ 0x14075BF7C
 * Callers:
 *     SepInitializationPhase0 @ 0x14075B9D8 (SepInitializationPhase0.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x1400E16C4 (RtlTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlAddAccessAllowedAce @ 0x1403C01BC (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1403C01DC (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1403C0234 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1403C0948 (RtlSetSaclSecurityDescriptor.c)
 *     SeSetMandatoryPolicyToken @ 0x1403C52F8 (SeSetMandatoryPolicyToken.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     SepCreateToken @ 0x1405280B8 (SepCreateToken.c)
 *     RtlAddProcessTrustLabelAce @ 0x140528188 (RtlAddProcessTrustLabelAce.c)
 */

__int64 SeMakeSystemToken()
{
  PSID v0; // r12
  PSID v1; // rbx
  int v2; // eax
  int v3; // edx
  int v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  unsigned int v7; // edx
  int v8; // eax
  unsigned int v9; // r13d
  int v10; // eax
  ULONG v11; // edi
  ACL *PoolWithTag; // rax
  ACL *v13; // r15
  ULONG v14; // edi
  ACL *v15; // rax
  ACL *v16; // rsi
  PVOID v17; // rax
  void *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  ACL *v22; // rcx
  int AceType; // [rsp+28h] [rbp-100h]
  int AccessMask; // [rsp+30h] [rbp-F8h]
  int v25; // [rsp+A8h] [rbp-80h] BYREF
  int v26[2]; // [rsp+B0h] [rbp-78h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+B8h] [rbp-70h] BYREF
  LARGE_INTEGER Time; // [rsp+C8h] [rbp-60h] BYREF
  int v29; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+D8h] [rbp-50h]
  __int64 v31; // [rsp+E0h] [rbp-48h]
  int v32; // [rsp+E8h] [rbp-40h]
  void *v33; // [rsp+F0h] [rbp-38h]
  __int64 v34; // [rsp+F8h] [rbp-30h]
  __int64 v35; // [rsp+108h] [rbp-20h] BYREF
  int v36; // [rsp+110h] [rbp-18h]
  LUID v37; // [rsp+114h] [rbp-14h]
  int v38; // [rsp+11Ch] [rbp-Ch]
  __int64 v39; // [rsp+120h] [rbp-8h]
  int v40; // [rsp+128h] [rbp+0h]
  LUID v41; // [rsp+12Ch] [rbp+4h]
  int v42; // [rsp+134h] [rbp+Ch]
  LUID v43; // [rsp+138h] [rbp+10h]
  int v44; // [rsp+140h] [rbp+18h]
  LUID v45; // [rsp+144h] [rbp+1Ch]
  int v46; // [rsp+14Ch] [rbp+24h]
  LUID v47; // [rsp+150h] [rbp+28h]
  int v48; // [rsp+158h] [rbp+30h]
  LUID v49; // [rsp+15Ch] [rbp+34h]
  int v50; // [rsp+164h] [rbp+3Ch]
  LUID v51; // [rsp+168h] [rbp+40h]
  int v52; // [rsp+170h] [rbp+48h]
  LUID v53; // [rsp+174h] [rbp+4Ch]
  int v54; // [rsp+17Ch] [rbp+54h]
  __int64 v55; // [rsp+180h] [rbp+58h]
  int v56; // [rsp+188h] [rbp+60h]
  LUID v57; // [rsp+18Ch] [rbp+64h]
  int v58; // [rsp+194h] [rbp+6Ch]
  LUID v59; // [rsp+198h] [rbp+70h]
  int v60; // [rsp+1A0h] [rbp+78h]
  __int64 v61; // [rsp+1A4h] [rbp+7Ch]
  int v62; // [rsp+1ACh] [rbp+84h]
  LUID v63; // [rsp+1B0h] [rbp+88h]
  int v64; // [rsp+1B8h] [rbp+90h]
  LUID v65; // [rsp+1BCh] [rbp+94h]
  int v66; // [rsp+1C4h] [rbp+9Ch]
  LUID v67; // [rsp+1C8h] [rbp+A0h]
  int v68; // [rsp+1D0h] [rbp+A8h]
  LUID v69; // [rsp+1D4h] [rbp+ACh]
  int v70; // [rsp+1DCh] [rbp+B4h]
  LUID v71; // [rsp+1E0h] [rbp+B8h]
  int v72; // [rsp+1E8h] [rbp+C0h]
  LUID v73; // [rsp+1ECh] [rbp+C4h]
  int v74; // [rsp+1F4h] [rbp+CCh]
  __int64 v75; // [rsp+1F8h] [rbp+D0h]
  int v76; // [rsp+200h] [rbp+D8h]
  __int64 v77; // [rsp+204h] [rbp+DCh]
  int v78; // [rsp+20Ch] [rbp+E4h]
  __int64 v79; // [rsp+210h] [rbp+E8h]
  int v80; // [rsp+218h] [rbp+F0h]
  LUID v81; // [rsp+21Ch] [rbp+F4h]
  int v82; // [rsp+224h] [rbp+FCh]
  __int64 v83; // [rsp+228h] [rbp+100h]
  int v84; // [rsp+230h] [rbp+108h]
  LUID v85; // [rsp+234h] [rbp+10Ch]
  int v86; // [rsp+23Ch] [rbp+114h]
  __int64 v87; // [rsp+240h] [rbp+118h]
  int v88; // [rsp+248h] [rbp+120h]
  LUID v89; // [rsp+24Ch] [rbp+124h]
  int v90; // [rsp+254h] [rbp+12Ch]
  __int64 v91; // [rsp+258h] [rbp+130h]
  int v92; // [rsp+260h] [rbp+138h]
  LUID v93; // [rsp+264h] [rbp+13Ch]
  int v94; // [rsp+26Ch] [rbp+144h]
  _SID_AND_ATTRIBUTES v95; // [rsp+288h] [rbp+160h] BYREF
  PSID v96; // [rsp+298h] [rbp+170h]
  int v97; // [rsp+2A0h] [rbp+178h]
  __int64 v98; // [rsp+2A8h] [rbp+180h]
  int v99; // [rsp+2B0h] [rbp+188h]
  __int64 v100; // [rsp+2B8h] [rbp+190h]
  int v101; // [rsp+2C0h] [rbp+198h]

  v25 = 1;
  TimeFields = (_TIME_FIELDS)_mm_load_si128((const __m128i *)&_xmm);
  RtlTimeFieldsToTime(&TimeFields, &Time);
  v0 = SeAliasAdminsSid;
  v1 = SeLocalSystemSid;
  v100 = SeSystemMandatorySid;
  v2 = *(unsigned __int8 *)(SeSystemMandatorySid + 1);
  v97 = 7;
  v99 = 7;
  v98 = SeAuthenticatedUsersSid;
  v3 = 4 * v2 + 11;
  *(_QWORD *)&TimeFields.Year = SeLocalSystemSid;
  v4 = *(unsigned __int8 *)(SeAuthenticatedUsersSid + 1);
  *(_DWORD *)&TimeFields.Minute = 0;
  v95.Sid = SeAliasAdminsSid;
  v96 = SeWorldSid;
  v95.Attributes = 14;
  v101 = 96;
  v5 = ((4 * v4 + 11) & 0xFFFFFFFC) + (v3 & 0xFFFFFFFC);
  v36 = 3;
  v6 = *((unsigned __int8 *)SeWorldSid + 1);
  v38 = 0;
  v40 = 0;
  v42 = 3;
  v44 = 3;
  v46 = 0;
  v7 = ((4 * v6 + 11) & 0xFFFFFFFC) + v5;
  v48 = 0;
  v8 = *((unsigned __int8 *)SeAliasAdminsSid + 1);
  v50 = 3;
  v52 = 3;
  v54 = 3;
  v56 = 3;
  v35 = (__int64)SeTcbPrivilege;
  v9 = v7 + ((4 * v8 + 11) & 0xFFFFFFFC) + 16;
  v37 = SeCreateTokenPrivilege;
  v39 = SeTakeOwnershipPrivilege;
  v41 = SeCreatePagefilePrivilege;
  v43 = SeLockMemoryPrivilege;
  v45 = SeAssignPrimaryTokenPrivilege;
  v47 = SeIncreaseQuotaPrivilege;
  v49 = SeIncreaseBasePriorityPrivilege;
  v51 = SeCreatePermanentPrivilege;
  v53 = SeDebugPrivilege;
  v55 = SeAuditPrivilege;
  v57 = SeSecurityPrivilege;
  v59 = SeSystemEnvironmentPrivilege;
  v58 = 0;
  v60 = 0;
  v61 = SeChangeNotifyPrivilege;
  v63 = SeBackupPrivilege;
  v65 = SeRestorePrivilege;
  v67 = SeShutdownPrivilege;
  v69 = SeLoadDriverPrivilege;
  v71 = SeProfileSingleProcessPrivilege;
  v73 = SeSystemtimePrivilege;
  v75 = SeUndockPrivilege;
  v77 = SeManageVolumePrivilege;
  v79 = SeImpersonatePrivilege;
  v81 = SeCreateGlobalPrivilege;
  v83 = SeTrustedCredManAccessPrivilege;
  v85 = SeRelabelPrivilege;
  v87 = SeIncreaseWorkingSetPrivilege;
  v89 = SeTimeZonePrivilege;
  v91 = SeCreateSymbolicLinkPrivilege;
  v93 = SeSystemProfilePrivilege;
  v10 = *((unsigned __int8 *)SeLocalSystemSid + 1);
  v62 = 3;
  v72 = 3;
  v80 = 3;
  v11 = 4 * v10 + 24;
  v82 = 3;
  v88 = 3;
  v90 = 3;
  v92 = 3;
  v94 = 3;
  v64 = 0;
  v66 = 0;
  v68 = 0;
  v70 = 0;
  v74 = 0;
  v76 = 0;
  v78 = 0;
  v84 = 0;
  v86 = 0;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v11, 0x63416553u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlCreateAcl(PoolWithTag, v11, 2u);
    v14 = 4 * *((unsigned __int8 *)SeProcTrustWinTcbSid + 1) + 24;
    v15 = (ACL *)ExAllocatePoolWithTag(PagedPool, v14, 0x63416553u);
    v16 = v15;
    if ( v15 )
    {
      RtlCreateAcl(v15, v14, 2u);
      RtlAddAccessAllowedAce(v13, 2u, 0xF01FFu, SeLocalSystemSid);
      RtlAddProcessTrustLabelAce(v16, 2u, 0, SeProcTrustWinTcbSid, 0x14u, 0x20018u);
      v17 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x64536553u);
      v18 = v17;
      if ( v17 )
      {
        RtlCreateSecurityDescriptor(v17, 1u);
        RtlSetDaclSecurityDescriptor(v18, 1u, v13, 0);
        RtlSetSaclSecurityDescriptor(v18, 1u, v16, 0);
        RtlSetOwnerSecurityDescriptor(v18, SeAliasAdminsSid, 0);
        RtlSetGroupSecurityDescriptor(v18, SeAliasAdminsSid, 0);
        v29 = 48;
        v30 = 0LL;
        v32 = 0;
        v31 = 0LL;
        v34 = 0LL;
        v33 = v18;
        SepCreateToken(
          (HANDLE *)v26,
          v19,
          v20,
          (__int64)&v29,
          AceType,
          AccessMask,
          (__int64)&SeSystemAuthenticationId,
          &Time,
          (_SID_AND_ATTRIBUTES *)&TimeFields,
          4u,
          &v95,
          v9,
          0x1Eu,
          (__int64)&v35,
          v0,
          v1,
          SeSystemDefaultDacl);
        SeSetMandatoryPolicyToken(*(__int64 *)v26, &v25);
        ExFreePoolWithTag(v13, 0);
        ExFreePoolWithTag(v16, 0);
        ExFreePoolWithTag(v18, 0);
        return *(_QWORD *)v26;
      }
      ExFreePoolWithTag(v13, 0);
      v22 = v16;
    }
    else
    {
      v22 = v13;
    }
    ExFreePoolWithTag(v22, 0);
  }
  return 0LL;
}
