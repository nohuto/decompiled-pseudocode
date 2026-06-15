/*
 * XREFs of ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180028F10
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001E948 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ??1CProcess@@MEAA@XZ @ 0x1800297C0 (--1CProcess@@MEAA@XZ.c)
 *     ?Cleanup@CProcess@@QEAAJH@Z @ 0x18002A1CC (-Cleanup@CProcess@@QEAAJH@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?CloseWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@@Z @ 0x180033B10 (-CloseWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@@Z.c)
 *     ?WaitForWaitCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@H@Z @ 0x180033B60 (-WaitForWaitCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@H@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CleanupProcessTerminationWatcher(struct _TP_WAIT **this, int a2)
{
  void (__fastcall *v4)(CAudioThreadPool *__hidden, struct _TP_WAIT *, int); // rsi
  void (__fastcall *v5)(CAudioThreadPool *__hidden, struct _TP_WAIT *); // rsi
  struct _TP_WAIT *v7; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v9; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)(this + 46);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( this[51] )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        51LL,
        &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
        *((unsigned int *)this + 42));
    }
    v4 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_WAIT *, int))(*(_QWORD *)ThreadPool + 48LL);
    if ( v4 == CAudioThreadPool::WaitForWaitCallbacks )
      CAudioThreadPool::WaitForWaitCallbacks(ThreadPool, this[51], 1);
    else
      v4(ThreadPool, this[51], 1);
    v5 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_WAIT *))(*(_QWORD *)ThreadPool + 96LL);
    if ( v5 == CAudioThreadPool::CloseWait )
      CAudioThreadPool::CloseWait(ThreadPool, this[51]);
    else
      v5(ThreadPool, this[51]);
    this[51] = 0LL;
    if ( a2 )
    {
      v7 = this[20];
      if ( (unsigned __int64)v7 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        CloseHandle(v7);
        this[20] = 0LL;
      }
    }
    CUnknown::Release((CUnknown *)this);
  }
  if ( v9 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v9 = 0;
  }
  return 0LL;
}
