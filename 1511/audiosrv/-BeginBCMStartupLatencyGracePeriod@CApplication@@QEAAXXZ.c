/*
 * XREFs of ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180004C2C
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001DE10 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x180004868 (-AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180004D74 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x180004E8C (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180033BA0 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     ?CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180033BD0 (-CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::BeginBCMStartupLatencyGracePeriod(CApplication *this, __int64 a2, bool a3)
{
  signed int v4; // ebx
  struct _TP_TIMER *(__fastcall *v5)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *); // rbp
  struct _TP_TIMER *Timer; // rax
  struct _TP_TIMER *v7; // rdi
  void (__fastcall *v8)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // rbp
  signed int LastError; // eax
  _BYTE v10[24]; // [rsp+38h] [rbp-30h] BYREF
  struct _FILETIME v11; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v10, (struct _RTL_CRITICAL_SECTION *)((char *)this + 344), a3);
  CApplication::CleanupBCMStartupLatencyGracePeriod(this);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      30LL,
      &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
      *((_QWORD *)this + 2));
  }
  if ( *((_QWORD *)this + 48)
    || ((v5 = *(struct _TP_TIMER *(__fastcall **)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *))(*(_QWORD *)ThreadPool + 8LL),
         v5 != CAudioThreadPool::CreateTimer)
      ? (Timer = v5(
                   ThreadPool,
                   (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CApplication::BCMStartupGracePeriodExpiredCallback,
                   this))
      : (Timer = CAudioThreadPool::CreateTimer(
                   ThreadPool,
                   (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CApplication::BCMStartupGracePeriodExpiredCallback,
                   this)),
        (*((_QWORD *)this + 48) = Timer) != 0LL) )
  {
    v11.dwLowDateTime = -100000000;
    v11.dwHighDateTime = -1;
    *((_DWORD *)this + 98) = 1;
    CApplication::AddCategoryOverrideToProcesses((__int64)this, 7, 1, 0);
    CApplication::RestrictAudioPlaybackToPrimaryCategories(this);
    v7 = (struct _TP_TIMER *)*((_QWORD *)this + 48);
    v8 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)ThreadPool + 24LL);
    if ( v8 == CAudioThreadPool::SetTimer )
    {
      CAudioThreadPool::SetTimer(ThreadPool, v7, &v11, 0, 0x64u);
      goto LABEL_11;
    }
    v8(ThreadPool, v7, &v11, 0, 100u);
  }
  else
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( v4 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      31LL,
      &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
      (unsigned int)v4);
  }
LABEL_11:
  if ( v10[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v10);
}
