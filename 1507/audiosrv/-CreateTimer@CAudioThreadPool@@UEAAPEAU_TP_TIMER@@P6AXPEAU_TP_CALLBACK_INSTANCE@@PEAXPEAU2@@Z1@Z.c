/*
 * XREFs of ?CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180006DD0
 * Callers:
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x1800033B4 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180006374 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?StartInactiveTimer@CAudioSession@@AEAAJXZ @ 0x18000EF5C (-StartInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?Initialize@CApplication@@IEAAJPEBG@Z @ 0x180012B98 (-Initialize@CApplication@@IEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

PTP_TIMER __fastcall CAudioThreadPool::CreateTimer(
        CAudioThreadPool *this,
        void (*a2)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *),
        void *a3)
{
  return CreateThreadpoolTimer(a2, a3, (PTP_CALLBACK_ENVIRON)((char *)this + 8));
}
