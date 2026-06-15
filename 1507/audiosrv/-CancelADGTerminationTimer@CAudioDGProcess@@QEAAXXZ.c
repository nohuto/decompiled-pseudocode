/*
 * XREFs of ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180006880
 * Callers:
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180006BEC (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x18006AB00 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x18006B828 (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z @ 0x180006D80 (-WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180006DA0 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x33u,
      (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids);
  }
  lpCriticalSection = this;
  v8 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
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
