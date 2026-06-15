/*
 * XREFs of ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180006374
 * Callers:
 *     AUDIOSERVER_rundown @ 0x180005290 (AUDIOSERVER_rundown.c)
 *     ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180006C78 (-UnlockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     AudioServerDisconnect @ 0x180009790 (AudioServerDisconnect.c)
 *     AudioServerInitialize @ 0x18000A980 (AudioServerInitialize.c)
 *     HAUDIOSRVDIAGNOSTICS_rundown @ 0x18006B890 (HAUDIOSRVDIAGNOSTICS_rundown.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180006DA0 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     ?CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180006DD0 (-CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioDGProcess::StartADGTerminationTimer(struct _TP_TIMER **this)
{
  CAudioThreadPool *v1; // rbx
  LSTATUS ValueW; // eax
  unsigned int v4; // ecx
  struct _TP_TIMER *v5; // rsi
  void (__fastcall *v6)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // rdi
  struct _TP_TIMER *(__fastcall *v8)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *); // rsi
  struct _TP_TIMER *Timer; // rax
  unsigned int pvData; // [rsp+60h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+68h] [rbp+10h] BYREF
  struct _FILETIME v12; // [rsp+70h] [rbp+18h] BYREF

  v1 = ThreadPool;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x32u,
      (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids);
  }
  if ( !this[15] )
  {
    v8 = *(struct _TP_TIMER *(__fastcall **)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *))(*(_QWORD *)v1 + 8LL);
    if ( v8 == CAudioThreadPool::CreateTimer )
      Timer = CAudioThreadPool::CreateTimer(
                v1,
                (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CAudioDGProcess::OnADGInactivityTimerFiredHandler,
                this);
    else
      Timer = v8(
                v1,
                (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CAudioDGProcess::OnADGInactivityTimerFiredHandler,
                this);
    this[15] = Timer;
  }
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             L"AudioDGInactiveTimeout",
             0x18u,
             0LL,
             &pvData,
             &pcbData);
  v4 = pvData;
  v5 = this[15];
  if ( ValueW )
    v4 = 300;
  pvData = v4;
  if ( v5 )
  {
    v12 = (struct _FILETIME)(-10000000LL * v4);
    v6 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)v1 + 24LL);
    if ( v6 == CAudioThreadPool::SetTimer )
      CAudioThreadPool::SetTimer(v1, v5, &v12, 0, 0);
    else
      v6(v1, v5, &v12, 0, 0);
  }
  return 0LL;
}
