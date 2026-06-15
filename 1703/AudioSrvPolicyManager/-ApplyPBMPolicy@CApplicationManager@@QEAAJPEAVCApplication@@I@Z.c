/*
 * XREFs of ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x180012B40
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x18000B6C0 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x18000B9B0 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x180012C4C (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800134DC (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180013C80 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z @ 0x180014690 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContex.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001D2F0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x18001E070 (-Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x18001E1E0 (-Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@I@Z @ 0x18000B130 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMP.c)
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x18000C420 (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001315C (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ApplyPBMPolicy(CApplicationManager *this, struct CApplication *a2, int a3)
{
  CApplicationManager *v5; // rbx
  unsigned int v6; // edi
  int v8; // [rsp+20h] [rbp-38h]
  int v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-18h] BYREF
  char v12; // [rsp+48h] [rbp-10h]
  int v13; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+20h] BYREF

  v10 = -2LL;
  v5 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CApplicationManager::GetApplicationPBMStatus(
    v5,
    a2,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0003 *)&v9,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0003 *)&v14,
    (enum _PLM_EXEMPTION *)&v13);
  v8 = a3;
  v6 = v14;
  LODWORD(v5) = v9;
  CApplication::ExecutePBMActions((__int64)a2, v9, v14, v13, v8);
  if ( !(_DWORD)v5 && !v6 )
  {
    if ( v13 == 1 )
    {
      *((_DWORD *)a2 + 131) = 0;
      *((_DWORD *)a2 + 132) = 0;
      *((_DWORD *)a2 + 133) = 0;
      *((_DWORD *)a2 + 134) = 0;
      *((_DWORD *)a2 + 135) = 0;
      *((_DWORD *)a2 + 136) = 0;
      *((_DWORD *)a2 + 137) = 1;
      CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(a2);
    }
    else if ( *((_DWORD *)a2 + 131) != 6 )
    {
      *((_DWORD *)a2 + 131) = 6;
      *((_QWORD *)a2 + 66) = 1LL;
      *((_DWORD *)a2 + 134) = 1;
      *((_DWORD *)a2 + 135) = 0;
    }
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
