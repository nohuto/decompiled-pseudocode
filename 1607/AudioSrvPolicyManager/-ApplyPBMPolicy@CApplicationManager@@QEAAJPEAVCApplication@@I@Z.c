/*
 * XREFs of ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x180014254
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x18000BB20 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x18000BE28 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x180014368 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014C04 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180015360 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z @ 0x180015F70 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContex.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001FB30 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x180020EF0 (-Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x1800213D0 (-Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@I@Z @ 0x18000B570 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMP.c)
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x18000CAB4 (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180014870 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
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
      *((_DWORD *)a2 + 117) = 0;
      *((_DWORD *)a2 + 118) = 0;
      *((_DWORD *)a2 + 119) = 0;
      *((_DWORD *)a2 + 120) = 0;
      *((_DWORD *)a2 + 121) = 0;
      *((_DWORD *)a2 + 122) = 0;
      *((_DWORD *)a2 + 123) = 1;
      CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(a2);
    }
    else if ( *((_DWORD *)a2 + 117) != 6 )
    {
      *((_DWORD *)a2 + 117) = 6;
      *((_QWORD *)a2 + 59) = 1LL;
      *((_DWORD *)a2 + 120) = 1;
      *((_DWORD *)a2 + 121) = 0;
    }
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
