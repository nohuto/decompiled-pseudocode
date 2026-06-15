/*
 * XREFs of ?OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180001D70
 * Callers:
 *     <none>
 * Callees:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x180001E10 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180001FD0 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDGProcess::OnADGInactivityTimerFiredHandler(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_TIMER *a3)
{
  _BYTE v4[32]; // [rsp+28h] [rbp-20h] BYREF

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v4, (struct _RTL_CRITICAL_SECTION *)(a2 + 48), (bool)a3);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      49LL,
      &WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids,
      *((_QWORD *)a2 + 11),
      -2LL);
  }
  if ( *((_QWORD *)a2 + 11) )
  {
    CAudioDGProcess::DoTerminateADG((CAudioDGProcess *)a2);
    VAD_AudiosrvAudioDGProcessTerminated(0);
  }
  if ( v4[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v4);
}
