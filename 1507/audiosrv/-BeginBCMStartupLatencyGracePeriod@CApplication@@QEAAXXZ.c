/*
 * XREFs of ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x1800033B4
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001BB50 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x180002E0C (-AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180003228 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x1800034FC (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180006DA0 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     ?CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180006DD0 (-CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::BeginBCMStartupLatencyGracePeriod(CApplication *this, __int64 a2, bool a3)
{
  signed int v4; // ebx
  __int64 v5; // rdx
  bool v6; // r8
  struct _TP_TIMER *(__fastcall *v7)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *); // rbp
  struct _TP_TIMER *Timer; // rax
  struct _TP_TIMER *v9; // rdi
  void (__fastcall *v10)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // rbp
  signed int LastError; // eax
  unsigned int v12; // [rsp+20h] [rbp-48h]
  _BYTE v13[24]; // [rsp+38h] [rbp-30h] BYREF
  struct _FILETIME v14; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v13, (struct _RTL_CRITICAL_SECTION *)((char *)this + 344), a3);
  CApplication::CleanupBCMStartupLatencyGracePeriod(this, v5, v6);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      30LL,
      &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
      *((_QWORD *)this + 2));
  }
  if ( *((_QWORD *)this + 48)
    || ((v7 = *(struct _TP_TIMER *(__fastcall **)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *))(*(_QWORD *)ThreadPool + 8LL),
         v7 != CAudioThreadPool::CreateTimer)
      ? (Timer = v7(
                   ThreadPool,
                   (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CApplication::BCMStartupGracePeriodExpiredCallback,
                   this))
      : (Timer = CAudioThreadPool::CreateTimer(
                   ThreadPool,
                   (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CApplication::BCMStartupGracePeriodExpiredCallback,
                   this)),
        (*((_QWORD *)this + 48) = Timer) != 0LL) )
  {
    v14.dwLowDateTime = -100000000;
    v14.dwHighDateTime = -1;
    *((_DWORD *)this + 98) = 1;
    CApplication::AddCategoryOverrideToProcesses((__int64)this, 7, 1, 0);
    CApplication::RestrictAudioPlaybackToPrimaryCategories(this);
    v9 = (struct _TP_TIMER *)*((_QWORD *)this + 48);
    v10 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)ThreadPool + 24LL);
    if ( v10 == CAudioThreadPool::SetTimer )
    {
      CAudioThreadPool::SetTimer(ThreadPool, v9, &v14, 0, 0x64u);
      goto LABEL_11;
    }
    v12 = 100;
    ((void (__fastcall *)(CAudioThreadPool *, struct _TP_TIMER *, struct _FILETIME *, _QWORD))v10)(
      ThreadPool,
      v9,
      &v14,
      0LL);
  }
  else
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( v4 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      31LL,
      &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
      (unsigned int)v4,
      v12);
  }
LABEL_11:
  if ( v13[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v13);
}
