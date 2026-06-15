/*
 * XREFs of ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001C568
 * Callers:
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z @ 0x1800020C0 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContex.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180002EBC (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001BB50 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001BE44 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ @ 0x1800A2BD0 (-CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ.c)
 *     ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x1800A3068 (-GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x1800A3238 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x1800A6EF0 (-Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@I@Z @ 0x180012E90 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMP.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001BF14 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ApplyPBMPolicy(CApplicationManager *this, struct CApplication *a2, int a3)
{
  CApplicationManager *v5; // rbx
  unsigned int v6; // edi
  int v8; // [rsp+20h] [rbp-48h]
  int v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-28h] BYREF
  char v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+20h] BYREF

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
      *(_QWORD *)((char *)a2 + 468) = 0LL;
      *(_QWORD *)((char *)a2 + 476) = 0LL;
      *(_QWORD *)((char *)a2 + 484) = 0LL;
      *((_DWORD *)a2 + 123) = 1;
      *((_DWORD *)a2 + 117) = 1;
      *((_DWORD *)a2 + 122) = 1;
      *((_DWORD *)a2 + 123) = 1;
      goto LABEL_6;
    }
    if ( *((_DWORD *)a2 + 117) != 6 )
    {
      *((_DWORD *)a2 + 117) = 6;
LABEL_6:
      *((_QWORD *)a2 + 60) = 1LL;
      *((_QWORD *)a2 + 59) = 1LL;
    }
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
