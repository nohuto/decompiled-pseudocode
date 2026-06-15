/*
 * XREFs of ?StartInactiveTimer@CAudioSession@@AEAAJXZ @ 0x1800261AC
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x1800279F0 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180035880 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180064D00 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180033BA0 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     ?CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180033BD0 (-CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     ?CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180033C10 (-CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

__int64 __fastcall CAudioSession::StartInactiveTimer(struct _TP_TIMER **this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r15
  unsigned int v3; // esi
  struct _TP_TIMER *(__fastcall *v4)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *); // rdi
  struct _TP_TIMER *Timer; // rax
  struct _TP_WORK *(__fastcall *v6)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), void *); // rdi
  struct _TP_WORK *Work; // rax
  struct _TP_TIMER *v8; // rdi
  __int64 v9; // rax
  void (__fastcall *v10)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // rbp
  signed int LastError; // eax
  signed int v13; // eax
  struct _FILETIME v14; // [rsp+60h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(this + 91);
  v3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 91));
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 136LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, this);
  }
  v4 = *(struct _TP_TIMER *(__fastcall **)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *))(*(_QWORD *)ThreadPool + 8LL);
  if ( v4 == CAudioThreadPool::CreateTimer )
    Timer = CAudioThreadPool::CreateTimer(
              ThreadPool,
              (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CAudioSession::InactiveTimerCallback,
              this);
  else
    Timer = v4(
              ThreadPool,
              (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CAudioSession::InactiveTimerCallback,
              this);
  this[96] = Timer;
  if ( Timer )
  {
    v6 = *(struct _TP_WORK *(__fastcall **)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), void *))(*(_QWORD *)ThreadPool + 56LL);
    if ( v6 == CAudioThreadPool::CreateWork )
      Work = CAudioThreadPool::CreateWork(
               ThreadPool,
               (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *))CAudioSession::OnInactiveTimerElapsed,
               this);
    else
      Work = v6(
               ThreadPool,
               (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *))CAudioSession::OnInactiveTimerElapsed,
               this);
    this[97] = Work;
    if ( Work )
    {
      (*((void (__fastcall **)(struct _TP_TIMER **))*this + 1))(this);
      v8 = this[96];
      v9 = -10000LL * *((unsigned int *)this + 95);
      v14.dwLowDateTime = -10000 * *((_DWORD *)this + 95);
      v14.dwHighDateTime = HIDWORD(v9);
      v10 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)ThreadPool + 24LL);
      if ( v10 == CAudioThreadPool::SetTimer )
        CAudioThreadPool::SetTimer(ThreadPool, v8, &v14, 0, 0x64u);
      else
        v10(ThreadPool, v8, &v14, 0, 100u);
    }
    else
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 137LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, v3);
      }
      (*(void (__fastcall **)(CAudioThreadPool *, struct _TP_TIMER *))(*(_QWORD *)ThreadPool + 16LL))(
        ThreadPool,
        this[96]);
      this[96] = 0LL;
    }
  }
  else
  {
    v13 = GetLastError();
    v3 = v13;
    if ( v13 > 0 )
      v3 = (unsigned __int16)v13 | 0x80070000;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 138LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, v3);
    }
  }
  LeaveCriticalSection(v1);
  if ( (v3 & 0x80000000) != 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 139LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, v3);
  }
  return v3;
}
