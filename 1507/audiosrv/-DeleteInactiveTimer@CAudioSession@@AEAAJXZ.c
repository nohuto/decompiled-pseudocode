/*
 * XREFs of ?DeleteInactiveTimer@CAudioSession@@AEAAJXZ @ 0x18000EDE0
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180013890 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800320C0 (-OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x1800668B0 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z @ 0x180006D80 (-WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180006DA0 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     ?CloseTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@@Z @ 0x180006DF0 (-CloseTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?CloseWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x180006E00 (-CloseWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x18000E6A0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

__int64 __fastcall CAudioSession::DeleteInactiveTimer(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  struct _TP_TIMER *v3; // rdi
  void (__fastcall *v4)(CAudioThreadPool *, struct _TP_TIMER *, struct _FILETIME *, DWORD, DWORD); // r14
  void (__fastcall *v5)(CAudioThreadPool *, struct _TP_TIMER *, BOOL); // r14
  void (__fastcall *v6)(CAudioThreadPool *, struct _TP_TIMER *); // r14
  void (__fastcall *v7)(CAudioThreadPool *, struct _TP_WORK *); // r14
  __int64 (__fastcall *v8)(CAudioSession *); // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 576);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 576));
  if ( *((_QWORD *)this + 77) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        140LL,
        &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        this);
    }
    v3 = (struct _TP_TIMER *)_InterlockedExchange64((volatile __int64 *)this + 77, 0LL);
    v4 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_TIMER *, struct _FILETIME *, DWORD, DWORD))(*(_QWORD *)ThreadPool + 24LL);
    if ( v4 == CAudioThreadPool::SetTimer )
      CAudioThreadPool::SetTimer(ThreadPool, v3, 0LL, 0, 0);
    else
      v4(ThreadPool, v3, 0LL, 0LL, 0);
    v5 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_TIMER *, BOOL))(*(_QWORD *)ThreadPool + 32LL);
    if ( v5 == CAudioThreadPool::WaitForTimerCallbacks )
      CAudioThreadPool::WaitForTimerCallbacks(ThreadPool, v3, 1);
    else
      v5(ThreadPool, v3, 1LL);
    v6 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_TIMER *))(*(_QWORD *)ThreadPool + 16LL);
    if ( v6 == CAudioThreadPool::CloseTimer )
      CAudioThreadPool::CloseTimer(ThreadPool, v3);
    else
      v6(ThreadPool, v3);
    if ( *((_QWORD *)this + 78) )
    {
      v7 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_WORK *))(*(_QWORD *)ThreadPool + 64LL);
      if ( v7 == CAudioThreadPool::CloseWork )
        CAudioThreadPool::CloseWork(ThreadPool, *((struct _TP_WORK **)this + 78));
      else
        v7(ThreadPool, *((struct _TP_WORK **)this + 78));
      *((_QWORD *)this + 78) = 0LL;
    }
    LeaveCriticalSection(v1);
    v8 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v8 == CAudioSession::Release )
      CAudioSession::Release(this);
    else
      v8(this);
  }
  else
  {
    LeaveCriticalSection(v1);
  }
  return 0LL;
}
