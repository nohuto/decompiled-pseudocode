/*
 * XREFs of ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x180003EC0
 * Callers:
 *     ?Invoke@?$CGenericApplicationManagerWorkItem@U_CastingAppStateChangedContext@@@@UEAAXXZ @ 0x180003200 (-Invoke@-$CGenericApplicationManagerWorkItem@U_CastingAppStateChangedContext@@@@UEAAXXZ.c)
 * Callees:
 *     ?CastingStateChanged@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0006@@@Z @ 0x180005614 (-CastingStateChanged@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0006@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001DE10 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001F7FC (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnCastingAppStateChanged(
        CApplicationManager *this,
        struct _CastingAppStateChangedContext *a2,
        bool a3)
{
  __int64 v5; // rsi
  struct CApplication *v6; // rdi
  BOOL v7; // ebx
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v9, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24), a3);
  v5 = *(_QWORD *)a2;
  v6 = *(struct CApplication **)(*(_QWORD *)a2 + 224LL);
  if ( v6
    || (CApplicationManager::Register(this, *(struct CProcess **)a2), (v6 = *(struct CApplication **)(v5 + 224)) != 0LL) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        46,
        (unsigned int)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
        *(_QWORD *)(v5 + 184),
        *((_DWORD *)a2 + 2));
    }
    v7 = *((_DWORD *)v6 + 28) != 0;
    CProcess::CastingStateChanged(v5, *((unsigned int *)a2 + 2));
    if ( v7 != (*((_DWORD *)v6 + 28) != 0) )
      CApplicationManager::OnApplicationInteractivityChanged(this, v6);
  }
  if ( v9[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v9);
  return 0LL;
}
