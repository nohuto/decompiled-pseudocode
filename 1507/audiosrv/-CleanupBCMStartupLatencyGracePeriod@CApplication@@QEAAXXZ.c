/*
 * XREFs of ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180003228
 * Callers:
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z @ 0x1800020C0 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContex.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x1800033B4 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001A680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001BB50 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ??1CApplication@@MEAA@XZ @ 0x1800A280C (--1CApplication@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x180002CA8 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?RemoveCategoryOverrideFromProcesses@CApplication@@IEAAXW4OverridePolicy@@@Z @ 0x180002DA8 (-RemoveCategoryOverrideFromProcesses@CApplication@@IEAAXW4OverridePolicy@@@Z.c)
 *     ?WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z @ 0x180006D80 (-WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180006DA0 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
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
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        32LL,
        &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
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
