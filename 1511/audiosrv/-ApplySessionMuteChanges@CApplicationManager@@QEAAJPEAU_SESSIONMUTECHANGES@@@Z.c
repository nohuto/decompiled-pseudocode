/*
 * XREFs of ?ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z @ 0x18003F2B0
 * Callers:
 *     ?Invoke@?$CGenericApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@UEAAXXZ @ 0x18003F1F0 (-Invoke@-$CGenericApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001E7FC (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x18001EAC0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ApplySessionMuteChanges(
        CApplicationManager *this,
        struct _SESSIONMUTECHANGES *a2)
{
  TraceLoggingHProvider v4; // rcx
  int v5; // ebx
  struct CApplication **Next; // rax
  int v7; // ebx
  TraceLoggingHProvider *v8; // rax
  CApplicationManager *v10; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]
  _QWORD *v12; // [rsp+50h] [rbp+8h] BYREF

  v10 = (CApplicationManager *)((char *)this + 24);
  v11 = 0;
  ATL::CCritSecLock::Lock((LPCRITICAL_SECTION *)&v10);
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids);
    v4 = WPP_GLOBAL_Control;
  }
  v5 = *((_DWORD *)a2 + 1);
  if ( v4 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v4 + 7) & 0x40000000) != 0
    && *((_BYTE *)v4 + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)v4 + 2), 0x2Bu, (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids, v5);
    v4 = WPP_GLOBAL_Control;
  }
  v12 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v12 )
  {
    do
    {
      Next = (struct CApplication **)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(
                                       (__int64)v4,
                                       &v12);
      if ( *((_DWORD *)*Next + 29) == v5 )
        CApplicationManager::SilenceAndRevokePLMExemption(this, *Next);
    }
    while ( v12 );
    v4 = WPP_GLOBAL_Control;
  }
  v7 = *(_DWORD *)a2;
  if ( v4 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v4 + 7) & 0x40000000) != 0
    && *((_BYTE *)v4 + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)v4 + 2), 0x2Cu, (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids, v7);
  }
  v12 = (_QWORD *)*((_QWORD *)this + 8);
  while ( v12 )
  {
    v8 = (TraceLoggingHProvider *)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)v4, &v12);
    v4 = *v8;
    if ( *((_DWORD *)*v8 + 29) == v7 && !*((_DWORD *)v4 + 124) )
    {
      *((_DWORD *)v4 + 117) = 0;
      *((_DWORD *)v4 + 118) = 0;
      *((_DWORD *)v4 + 119) = 0;
      *((_DWORD *)v4 + 120) = 0;
      *((_DWORD *)v4 + 121) = 0;
      *((_DWORD *)v4 + 122) = 0;
      *((_DWORD *)v4 + 123) = 1;
    }
  }
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(this, v7);
  if ( v11 )
    ATL::CCritSecLock::Unlock((LPCRITICAL_SECTION *)&v10);
  return 0LL;
}
