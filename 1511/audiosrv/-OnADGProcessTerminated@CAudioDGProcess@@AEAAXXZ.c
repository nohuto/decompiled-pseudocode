/*
 * XREFs of ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x18006A198
 * Callers:
 *     ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18006A330 (-OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@.c)
 * Callees:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180001FD0 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     Template_q @ 0x18006A6A8 (Template_q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDGProcess::OnADGProcessTerminated(CAudioDGProcess *this)
{
  void *v2; // rcx
  TraceLoggingHProvider v3; // rcx
  char *v4; // rcx
  LPCRITICAL_SECTION v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]
  DWORD ExitCode; // [rsp+50h] [rbp+8h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v5, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Du,
      (__int64)&WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids,
      *((_QWORD *)this + 11));
  }
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 && GetExitCodeProcess(v2, &ExitCode) )
  {
    v3 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Eu,
        (__int64)&WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids,
        ExitCode);
    }
    if ( (Microsoft_Windows_AudioEnableBits & 4) != 0 )
      Template_q(v3, &EVT_AUDIOSRV_FAIL_AUDIODG_CRASHED, ExitCode);
    ShipAssert(90114LL, ExitCode);
    v4 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v4);
      *((_QWORD *)this + 11) = 0LL;
    }
    (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 96LL))(
      ThreadPool,
      *((_QWORD *)this + 14));
    *((_QWORD *)this + 14) = 0LL;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Fu, (__int64)&WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids);
    }
    VAD_AudiosrvAudioDGProcessTerminated(1);
  }
  if ( v6 )
    ATL::CCritSecLock::Unlock(&v5);
}
