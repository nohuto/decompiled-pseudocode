/*
 * XREFs of ?CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180006E10
 * Callers:
 *     ?StartInactiveTimer@CAudioSession@@AEAAJXZ @ 0x18000EF5C (-StartInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x18003A6B0 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     <none>
 */

PTP_WORK __fastcall CAudioThreadPool::CreateWork(
        CAudioThreadPool *this,
        void (*a2)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *),
        void *a3)
{
  return CreateThreadpoolWork(a2, a3, (PTP_CALLBACK_ENVIRON)((char *)this + 8));
}
