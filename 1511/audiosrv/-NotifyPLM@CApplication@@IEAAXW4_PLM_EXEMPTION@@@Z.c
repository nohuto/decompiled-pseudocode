/*
 * XREFs of ?NotifyPLM@CApplication@@IEAAXW4_PLM_EXEMPTION@@@Z @ 0x18001C014
 * Callers:
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x18001C0B8 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18002A470 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::NotifyPLM(__int64 a1, unsigned int a2)
{
  TraceLoggingHProvider v4; // rcx
  _QWORD *Next; // rax
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]
  _QWORD *v8; // [rsp+50h] [rbp+8h] BYREF

  v6 = a1 + 24;
  v7 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v6);
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids, a2);
  }
  v8 = *(_QWORD **)(a1 + 64);
  while ( v8 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)v4, &v8);
    CProcess::NotifyPLM(*Next, a2);
  }
  if ( v7 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v6);
}
