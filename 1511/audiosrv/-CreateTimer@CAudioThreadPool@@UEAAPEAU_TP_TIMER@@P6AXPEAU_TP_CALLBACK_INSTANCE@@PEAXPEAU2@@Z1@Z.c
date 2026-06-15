/*
 * XREFs of ?CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180033BD0
 * Callers:
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180004C2C (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?Initialize@CApplication@@IEAAJPEBG@Z @ 0x18001C308 (-Initialize@CApplication@@IEAAJPEBG@Z.c)
 *     ?StartInactiveTimer@CAudioSession@@AEAAJXZ @ 0x1800261AC (-StartInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x18003315C (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
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
