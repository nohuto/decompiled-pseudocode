/*
 * XREFs of ?DeleteInactiveTimer@CAudioSession@@AEAAJXZ @ 0x180026030
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180035880 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180039F50 (-OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180064D00 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800257E0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z @ 0x180033B80 (-WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180033BA0 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     ?CloseTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@@Z @ 0x180033BF0 (-CloseTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?CloseWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x180033C00 (-CloseWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

__int64 __fastcall CAudioSession::DeleteInactiveTimer(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  struct _TP_TIMER *v3; // rdi
  void (__fastcall *v4)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // r14
  void (__fastcall *v5)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int); // r14
  void (__fastcall *v6)(CAudioThreadPool *__hidden, struct _TP_TIMER *); // r14
  void (__fastcall *v7)(CAudioThreadPool *__hidden, struct _TP_WORK *); // r14
  __int64 (__fastcall *v8)(CAudioSession *); // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 728);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 728));
  if ( *((_QWORD *)this + 96) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 140LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, this);
    }
    v3 = (struct _TP_TIMER *)_InterlockedExchange64((volatile __int64 *)this + 96, 0LL);
    v4 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)ThreadPool + 24LL);
    if ( v4 == CAudioThreadPool::SetTimer )
      CAudioThreadPool::SetTimer(ThreadPool, v3, 0LL, 0, 0);
    else
      v4(ThreadPool, v3, 0LL, 0, 0);
    v5 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int))(*(_QWORD *)ThreadPool + 32LL);
    if ( v5 == CAudioThreadPool::WaitForTimerCallbacks )
      CAudioThreadPool::WaitForTimerCallbacks(ThreadPool, v3, 1);
    else
      v5(ThreadPool, v3, 1);
    v6 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *))(*(_QWORD *)ThreadPool + 16LL);
    if ( v6 == CAudioThreadPool::CloseTimer )
      CAudioThreadPool::CloseTimer(ThreadPool, v3);
    else
      v6(ThreadPool, v3);
    if ( *((_QWORD *)this + 97) )
    {
      v7 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_WORK *))(*(_QWORD *)ThreadPool + 64LL);
      if ( v7 == CAudioThreadPool::CloseWork )
        CAudioThreadPool::CloseWork(ThreadPool, *((struct _TP_WORK **)this + 97));
      else
        v7(ThreadPool, *((struct _TP_WORK **)this + 97));
      *((_QWORD *)this + 97) = 0LL;
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
