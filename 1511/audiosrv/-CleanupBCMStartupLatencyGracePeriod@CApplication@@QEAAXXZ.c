/*
 * XREFs of ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180004D74
 * Callers:
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z @ 0x180003910 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContex.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180004C2C (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001DE10 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002E5E0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ??1CApplication@@MEAA@XZ @ 0x18009F9D4 (--1CApplication@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x180004710 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?RemoveCategoryOverrideFromProcesses@CApplication@@IEAAXW4OverridePolicy@@@Z @ 0x180004804 (-RemoveCategoryOverrideFromProcesses@CApplication@@IEAAXW4OverridePolicy@@@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z @ 0x180033B80 (-WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180033BA0 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::CleanupBCMStartupLatencyGracePeriod(CApplication *this, __int64 a2, bool a3)
{
  struct _TP_TIMER *v4; // rbp
  void (__fastcall *v5)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // rsi
  void (__fastcall *v6)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int); // rsi
  __int64 v7; // rdx
  bool v8; // r8
  __int64 v9; // rdx
  bool v10; // r8
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v11, (struct _RTL_CRITICAL_SECTION *)((char *)this + 344), a3);
  if ( *((_DWORD *)this + 98) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        32LL,
        &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
        *((_QWORD *)this + 2));
    }
    v4 = (struct _TP_TIMER *)*((_QWORD *)this + 48);
    v5 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)ThreadPool + 24LL);
    if ( v5 == CAudioThreadPool::SetTimer )
      CAudioThreadPool::SetTimer(ThreadPool, v4, 0LL, 0, 0);
    else
      v5(ThreadPool, v4, 0LL, 0, 0);
    v6 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int))(*(_QWORD *)ThreadPool + 32LL);
    if ( v6 == CAudioThreadPool::WaitForTimerCallbacks )
      CAudioThreadPool::WaitForTimerCallbacks(ThreadPool, *((struct _TP_TIMER **)this + 48), 1);
    else
      v6(ThreadPool, *((struct _TP_TIMER **)this + 48), 1);
    *((_DWORD *)this + 98) = 0;
    CApplication::RemoveAudioPlaybackRestriction(this, v7, v8);
    CApplication::RemoveCategoryOverrideFromProcesses((__int64)this, v9, v10);
  }
  if ( v11[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v11);
}
