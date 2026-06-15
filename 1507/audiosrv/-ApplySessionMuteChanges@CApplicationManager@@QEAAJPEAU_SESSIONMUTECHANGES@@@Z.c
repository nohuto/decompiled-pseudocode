/*
 * XREFs of ?ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z @ 0x18003F8A0
 * Callers:
 *     ?Invoke@?$CGenericApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@UEAAXXZ @ 0x18003F7E0 (-Invoke@-$CGenericApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@UEAAXXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001BE44 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x18001C2F0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ApplySessionMuteChanges(
        CApplicationManager *this,
        struct _SESSIONMUTECHANGES *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  struct CApplication **Next; // rax
  int v7; // ebx
  __int64 *v8; // rax
  CApplicationManager *v10; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]
  _QWORD *v12; // [rsp+50h] [rbp+8h] BYREF

  v10 = (CApplicationManager *)((char *)this + 24);
  v11 = 0;
  ATL::CCritSecLock::Lock((LPCRITICAL_SECTION *)&v10);
  v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x2Au,
      (__int64)&WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids);
    v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  v5 = *((_DWORD *)a2 + 1);
  if ( (struct _GUID *)v4 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v4 + 28) & 0x40000000) != 0
    && *(_BYTE *)(v4 + 25) >= 4u )
  {
    WPP_SF_D(*(_QWORD *)(v4 + 16), 0x2Bu, (__int64)&WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids, v5);
    v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  v12 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v12 )
  {
    do
    {
      Next = (struct CApplication **)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v4, &v12);
      if ( *((_DWORD *)*Next + 29) == v5 )
        CApplicationManager::SilenceAndRevokePLMExemption(this, *Next);
    }
    while ( v12 );
    v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  v7 = *(_DWORD *)a2;
  if ( (struct _GUID *)v4 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v4 + 28) & 0x40000000) != 0
    && *(_BYTE *)(v4 + 25) >= 4u )
  {
    WPP_SF_D(*(_QWORD *)(v4 + 16), 0x2Cu, (__int64)&WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids, v7);
  }
  v12 = (_QWORD *)*((_QWORD *)this + 8);
  while ( v12 )
  {
    v8 = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v4, &v12);
    v4 = *v8;
    if ( *(_DWORD *)(*v8 + 116) == v7 && !*(_DWORD *)(v4 + 496) )
    {
      *(_DWORD *)(v4 + 468) = 0;
      *(_DWORD *)(v4 + 472) = 0;
      *(_DWORD *)(v4 + 476) = 0;
      *(_DWORD *)(v4 + 480) = 0;
      *(_DWORD *)(v4 + 484) = 0;
      *(_DWORD *)(v4 + 488) = 0;
      *(_DWORD *)(v4 + 492) = 1;
    }
  }
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(this, v7);
  if ( v11 )
    ATL::CCritSecLock::Unlock((LPCRITICAL_SECTION *)&v10);
  return 0LL;
}
