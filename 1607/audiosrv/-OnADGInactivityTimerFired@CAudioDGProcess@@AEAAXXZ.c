/*
 * XREFs of ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x18000140C
 * Callers:
 *     ?OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800011F0 (-OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIM.c)
 * Callees:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x1800014A8 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z @ 0x1800015C0 (-OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDGProcess::OnADGInactivityTimerFired(CAudioDGProcess *this, __int64 a2, bool a3)
{
  CAudioSrv *v4; // rcx
  void (*v5)(CAudioSrv *__hidden, bool); // rax
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v6, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48), a3);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      49LL,
      &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids,
      *((_QWORD *)this + 11),
      -2LL);
  }
  if ( *((_QWORD *)this + 11) )
  {
    CAudioDGProcess::DoTerminateADG(this);
    v4 = (CAudioSrv *)*((_QWORD *)this + 17);
    if ( v4 )
    {
      v5 = **(void (***)(CAudioSrv *__hidden, bool))v4;
      if ( v5 == CAudioSrv::OnDGProcessTerminated )
        CAudioSrv::OnDGProcessTerminated(v4, 0);
      else
        ((void (__fastcall *)(CAudioSrv *, _QWORD))v5)(v4, 0LL);
    }
  }
  if ( v6[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v6);
}
