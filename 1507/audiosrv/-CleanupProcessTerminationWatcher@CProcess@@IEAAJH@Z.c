/*
 * XREFs of ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180011150
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x1800119E8 (--1CProcess@@MEAA@XZ.c)
 *     ?Cleanup@CProcess@@QEAAJH@Z @ 0x1800120D0 (-Cleanup@CProcess@@QEAAJH@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001C168 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?CloseWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@@Z @ 0x180006D10 (-CloseWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@@Z.c)
 *     ?WaitForWaitCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@H@Z @ 0x180006D60 (-WaitForWaitCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@H@Z.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CleanupProcessTerminationWatcher(struct _TP_WAIT **this, int a2)
{
  void (__fastcall *v5)(CAudioThreadPool *, struct _TP_WAIT *, BOOL); // rsi
  void (__fastcall *v6)(CAudioThreadPool *, struct _TP_WAIT *); // rsi
  struct _TP_WAIT *v7; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v9; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)(this + 46);
  v9 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( this[51] )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        49LL,
        &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
        *((unsigned int *)this + 42));
    }
    v5 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_WAIT *, BOOL))(*(_QWORD *)ThreadPool + 48LL);
    if ( v5 == CAudioThreadPool::WaitForWaitCallbacks )
      CAudioThreadPool::WaitForWaitCallbacks(ThreadPool, this[51], 1);
    else
      v5(ThreadPool, this[51], 1LL);
    v6 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_WAIT *))(*(_QWORD *)ThreadPool + 96LL);
    if ( v6 == CAudioThreadPool::CloseWait )
      CAudioThreadPool::CloseWait(ThreadPool, this[51]);
    else
      v6(ThreadPool, this[51]);
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
