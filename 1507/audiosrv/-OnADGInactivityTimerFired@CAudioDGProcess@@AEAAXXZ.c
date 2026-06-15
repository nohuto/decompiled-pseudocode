/*
 * XREFs of ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x180001D28
 * Callers:
 *     ?OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800015C0 (-OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIM.c)
 * Callees:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180001AB0 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x180001B68 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     GetSAProvider @ 0x18002E018 (GetSAProvider.c)
 *     ?Release@?$CComObject@VCSaProvider@@@ATL@@UEAAKXZ @ 0x18002E1D0 (-Release@-$CComObject@VCSaProvider@@@ATL@@UEAAKXZ.c)
 *     ?ReleaseCachedRemoteSaDevice@CSaProvider@@UEAAJK@Z @ 0x18002E390 (-ReleaseCachedRemoteSaDevice@CSaProvider@@UEAAJK@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioDGProcess::OnADGInactivityTimerFired(CAudioDGProcess *this, __int64 a2, bool a3)
{
  __int64 (__fastcall *v4)(CSaProvider *__hidden, unsigned int); // rsi
  void (__fastcall *v5)(CSaProvider *); // rdi
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF
  CSaProvider *v7; // [rsp+50h] [rbp+8h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v6, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48), a3);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      49LL,
      &WPP_790b6676494959b41396352d3c3efd49_Traceguids,
      *((_QWORD *)this + 11));
  }
  if ( *((_QWORD *)this + 11) )
  {
    v7 = 0LL;
    if ( (int)GetSAProvider(&v7) >= 0 )
    {
      v4 = *(__int64 (__fastcall **)(CSaProvider *__hidden, unsigned int))(*(_QWORD *)v7 + 40LL);
      if ( v4 == CSaProvider::ReleaseCachedRemoteSaDevice )
        CSaProvider::ReleaseCachedRemoteSaDevice(v7, 0xFFFFFFFE);
      else
        v4(v7, 4294967294u);
    }
    CAudioDGProcess::DoTerminateADG(this);
    VAD_AudiosrvAudioDGProcessTerminated(0);
    if ( v7 )
    {
      v5 = *(void (__fastcall **)(CSaProvider *))(*(_QWORD *)v7 + 16LL);
      if ( (char *)v5 == (char *)ATL::CComObject<CSaProvider>::Release )
        ATL::CComObject<CSaProvider>::Release(v7);
      else
        v5(v7);
    }
  }
  if ( v6[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v6);
}
