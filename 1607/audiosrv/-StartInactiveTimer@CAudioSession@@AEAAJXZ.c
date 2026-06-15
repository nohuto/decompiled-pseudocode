/*
 * XREFs of ?StartInactiveTimer@CAudioSession@@AEAAJXZ @ 0x1800137D8
 * Callers:
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180013A60 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x180014D80 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 * Callees:
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180016140 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     ?CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180016170 (-CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     ?CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x1800161B0 (-CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

__int64 __fastcall CAudioSession::StartInactiveTimer(struct _TP_TIMER **this)
{
  unsigned int v2; // ebx
  struct _TP_TIMER *(__fastcall *v3)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *); // rax
  struct _TP_TIMER *Timer; // rax
  struct _TP_WORK *(__fastcall *v5)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), void *); // rax
  struct _TP_WORK *Work; // rax
  struct _TP_TIMER *v7; // rdx
  void (__fastcall *v8)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // rax
  signed int LastError; // eax
  signed int v11; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+38h] [rbp-10h]
  struct _FILETIME v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 91);
  v13 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 100LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, this);
  }
  v3 = *(struct _TP_TIMER *(__fastcall **)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *))(*(_QWORD *)ThreadPool + 8LL);
  if ( v3 == CAudioThreadPool::CreateTimer )
    Timer = CAudioThreadPool::CreateTimer(
              ThreadPool,
              (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CAudioSession::InactiveTimerCallback,
              this);
  else
    Timer = v3(
              ThreadPool,
              (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CAudioSession::InactiveTimerCallback,
              this);
  this[96] = Timer;
  if ( Timer )
  {
    v5 = *(struct _TP_WORK *(__fastcall **)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), void *))(*(_QWORD *)ThreadPool + 56LL);
    if ( v5 == CAudioThreadPool::CreateWork )
      Work = CAudioThreadPool::CreateWork(
               ThreadPool,
               (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *))CAudioSession::OnInactiveTimerElapsed,
               this);
    else
      Work = v5(
               ThreadPool,
               (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *))CAudioSession::OnInactiveTimerElapsed,
               this);
    this[97] = Work;
    if ( Work )
    {
      (*((void (__fastcall **)(struct _TP_TIMER **))*this + 1))(this);
      v7 = this[96];
      v14 = (struct _FILETIME)(-10000LL * *((unsigned int *)this + 95));
      v8 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)ThreadPool + 24LL);
      if ( v8 == CAudioThreadPool::SetTimer )
        CAudioThreadPool::SetTimer(ThreadPool, v7, &v14, 0, 0x64u);
      else
        v8(ThreadPool, v7, &v14, 0, 100u);
      goto LABEL_13;
    }
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 101LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, v2);
    }
    (*(void (__fastcall **)(CAudioThreadPool *, struct _TP_TIMER *))(*(_QWORD *)ThreadPool + 16LL))(
      ThreadPool,
      this[96]);
    this[96] = 0LL;
  }
  else
  {
    v11 = GetLastError();
    v2 = v11;
    if ( v11 > 0 )
      v2 = (unsigned __int16)v11 | 0x80070000;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 102LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, v2);
    }
  }
  if ( (v2 & 0x80000000) != 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::StartInactiveTimer", 0x10E9u, v2);
LABEL_13:
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
