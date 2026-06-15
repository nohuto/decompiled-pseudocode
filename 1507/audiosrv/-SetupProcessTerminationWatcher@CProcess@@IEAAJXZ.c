/*
 * XREFs of ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x180011280
 * Callers:
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HH@Z @ 0x180011D80 (-Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HH@Z.c)
 * Callees:
 *     ?SetWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@PEAXPEAU_FILETIME@@@Z @ 0x180006D20 (-SetWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@PEAXPEAU_FILETIME@@@Z.c)
 *     ?CreateWait@CAudioThreadPool@@UEAAPEAU_TP_WAIT@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@J@Z1@Z @ 0x180006D40 (-CreateWait@CAudioThreadPool@@UEAAPEAU_TP_WAIT@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@J@Z1@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CProcess::SetupProcessTerminationWatcher(CProcess *this)
{
  unsigned int v1; // ebx
  PTP_WAIT (__fastcall *v3)(CAudioThreadPool *, void (__stdcall *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WAIT, TP_WAIT_RESULT), void *); // rbp
  PTP_WAIT Wait; // rax
  void *v5; // rbp
  struct _TP_WAIT *v6; // r14
  void (__fastcall *v7)(CAudioThreadPool *, struct _TP_WAIT *, void *, struct _FILETIME *); // rdi
  signed int LastError; // eax

  v1 = 0;
  v3 = *(PTP_WAIT (__fastcall **)(CAudioThreadPool *, void (__stdcall *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WAIT, TP_WAIT_RESULT), void *))(*(_QWORD *)ThreadPool + 80LL);
  if ( v3 == CAudioThreadPool::CreateWait )
    Wait = CAudioThreadPool::CreateWait(
             ThreadPool,
             (void (__stdcall *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WAIT, TP_WAIT_RESULT))CProcess::ProcessTerminationWatcherCallback,
             this);
  else
    Wait = v3(
             ThreadPool,
             (void (__stdcall *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WAIT, TP_WAIT_RESULT))CProcess::ProcessTerminationWatcherCallback,
             this);
  *((_QWORD *)this + 51) = Wait;
  if ( Wait )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    v5 = (void *)*((_QWORD *)this + 20);
    v6 = (struct _TP_WAIT *)*((_QWORD *)this + 51);
    v7 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_WAIT *, void *, struct _FILETIME *))(*(_QWORD *)ThreadPool
                                                                                                  + 88LL);
    if ( v7 == CAudioThreadPool::SetWait )
    {
      CAudioThreadPool::SetWait(ThreadPool, v6, v5, 0LL);
      return v1;
    }
    v7(ThreadPool, v6, v5, 0LL);
  }
  else
  {
    LastError = GetLastError();
    v1 = LastError;
    if ( LastError > 0 )
      v1 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( (v1 & 0x80000000) != 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      48LL,
      &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
      v1);
  }
  return v1;
}
