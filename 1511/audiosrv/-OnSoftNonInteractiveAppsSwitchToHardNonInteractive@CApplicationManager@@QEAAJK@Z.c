/*
 * XREFs of ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x1800039A0
 * Callers:
 *     s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x180003870 (s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive.c)
 * Callees:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180003A60 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnSoftNonInteractiveAppsSwitchToHardNonInteractive(
        CApplicationManager *this,
        unsigned int a2,
        bool a3)
{
  CRefCountedObject *v4; // rbx
  TraceLoggingHProvider v5; // rcx
  __int64 Next; // rax
  __int64 v7; // rdx
  _BYTE v9[32]; // [rsp+28h] [rbp-20h] BYREF
  CApplicationManager *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = this;
  v4 = g_ApplicationManager;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)v9,
    (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24),
    a3);
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 63LL, &WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids, a2);
  }
  v10 = (CApplicationManager *)*((_QWORD *)v4 + 8);
  while ( v10 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v5, &v10);
    v7 = *(_QWORD *)Next;
    if ( *(_DWORD *)(*(_QWORD *)Next + 116LL) == a2 && *(_DWORD *)(v7 + 496) && *(_QWORD *)(v7 + 448) )
      CApplicationManager::ProcessInteractivityNotification(v4, *(_QWORD *)(v7 + 16), 1LL, a2);
  }
  if ( v9[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v9);
  return 0LL;
}
