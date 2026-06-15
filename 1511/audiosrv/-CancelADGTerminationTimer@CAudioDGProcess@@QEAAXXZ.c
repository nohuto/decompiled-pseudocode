/*
 * XREFs of ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180033668
 * Callers:
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x1800339E0 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x180069810 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x18006A5B8 (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z @ 0x180033B80 (-WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180033BA0 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDGProcess::CancelADGTerminationTimer(struct _RTL_CRITICAL_SECTION *this)
{
  CAudioThreadPool *v2; // rbx
  struct _TP_TIMER *DebugInfo; // rsi
  void (__fastcall *v4)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // rbp
  struct _TP_TIMER *v5; // rsi
  void (__fastcall *v6)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int); // rdi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v8; // [rsp+40h] [rbp-18h]

  v2 = ThreadPool;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x33u, (__int64)&WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids);
  }
  lpCriticalSection = this;
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  DebugInfo = (struct _TP_TIMER *)this[3].DebugInfo;
  if ( DebugInfo )
  {
    v4 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)v2 + 24LL);
    if ( v4 == CAudioThreadPool::SetTimer )
      CAudioThreadPool::SetTimer(v2, DebugInfo, 0LL, 0, 0);
    else
      v4(v2, DebugInfo, 0LL, 0, 0);
    v5 = (struct _TP_TIMER *)this[3].DebugInfo;
    v6 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int))(*(_QWORD *)v2 + 32LL);
    if ( v6 == CAudioThreadPool::WaitForTimerCallbacks )
      CAudioThreadPool::WaitForTimerCallbacks(v2, v5, 1);
    else
      v6(v2, v5, 1);
  }
  if ( v8 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v8 = 0;
  }
}
