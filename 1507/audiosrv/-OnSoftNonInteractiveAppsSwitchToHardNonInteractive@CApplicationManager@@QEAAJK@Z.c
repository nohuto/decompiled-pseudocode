/*
 * XREFs of ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x180002424
 * Callers:
 *     s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x180005860 (s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180002150 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnSoftNonInteractiveAppsSwitchToHardNonInteractive(
        CApplicationManager *this,
        unsigned int a2,
        bool a3)
{
  CRefCountedObject *v4; // rbx
  __int64 v5; // rcx
  _QWORD *Next; // rax
  __int64 v7; // rdx
  _BYTE v9[32]; // [rsp+28h] [rbp-20h] BYREF
  _QWORD *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = this;
  v4 = g_ApplicationManager;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)v9,
    (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24),
    a3);
  v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      62LL,
      &WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
      a2,
      -2);
  }
  v10 = (_QWORD *)*((_QWORD *)v4 + 8);
  while ( v10 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v5, &v10);
    v7 = *Next;
    if ( *(_DWORD *)(*Next + 116LL) == a2 && *(_DWORD *)(v7 + 496) && *(_QWORD *)(v7 + 448) )
      CApplicationManager::ProcessInteractivityNotification((__int64)v4, *(const unsigned __int16 **)(v7 + 16), 1, a2);
  }
  if ( v9[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v9);
  return 0LL;
}
