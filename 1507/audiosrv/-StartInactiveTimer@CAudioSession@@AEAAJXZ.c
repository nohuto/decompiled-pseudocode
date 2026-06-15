/*
 * XREFs of ?StartInactiveTimer@CAudioSession@@AEAAJXZ @ 0x18000EF5C
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x18000FE10 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180013890 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x1800668B0 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180006DA0 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     ?CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180006DD0 (-CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     ?CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180006E10 (-CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

__int64 __fastcall CAudioSession::StartInactiveTimer(struct _TP_TIMER **this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r15
  unsigned int v3; // esi
  PTP_TIMER (__fastcall *v4)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *); // rdi
  PTP_TIMER Timer; // rax
  PTP_WORK (__fastcall *v6)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), void *); // rdi
  PTP_WORK Work; // rax
  struct _TP_TIMER *v8; // rdi
  __int64 v9; // rax
  void (__fastcall *v10)(CAudioThreadPool *, struct _TP_TIMER *, struct _FILETIME *, DWORD, DWORD); // rbp
  signed int LastError; // eax
  signed int v13; // eax
  struct _FILETIME v14; // [rsp+60h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(this + 72);
  v3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 72));
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      136LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      this);
  }
  v4 = *(PTP_TIMER (__fastcall **)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *))(*(_QWORD *)ThreadPool + 8LL);
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
  this[77] = Timer;
  if ( Timer )
  {
    v6 = *(PTP_WORK (__fastcall **)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), void *))(*(_QWORD *)ThreadPool + 56LL);
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
    this[78] = Work;
    if ( Work )
    {
      (*((void (__fastcall **)(struct _TP_TIMER **))*this + 1))(this);
      v8 = this[77];
      v9 = -10000LL * *((unsigned int *)this + 59);
      v14.dwLowDateTime = -10000 * *((_DWORD *)this + 59);
      v14.dwHighDateTime = HIDWORD(v9);
      v10 = *(void (__fastcall **)(CAudioThreadPool *, struct _TP_TIMER *, struct _FILETIME *, DWORD, DWORD))(*(_QWORD *)ThreadPool + 24LL);
      if ( v10 == CAudioThreadPool::SetTimer )
        CAudioThreadPool::SetTimer(ThreadPool, v8, &v14, 0, 0x64u);
      else
        v10(ThreadPool, v8, &v14, 0LL, 100);
    }
    else
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          137LL,
          &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
          v3);
      }
      (*(void (__fastcall **)(CAudioThreadPool *, struct _TP_TIMER *))(*(_QWORD *)ThreadPool + 16LL))(
        ThreadPool,
        this[77]);
      this[77] = 0LL;
    }
  }
  else
  {
    v13 = GetLastError();
    v3 = v13;
    if ( v13 > 0 )
      v3 = (unsigned __int16)v13 | 0x80070000;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        138LL,
        &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        v3);
    }
  }
  LeaveCriticalSection(v1);
  if ( (v3 & 0x80000000) != 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      139LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      v3);
  }
  return v3;
}
