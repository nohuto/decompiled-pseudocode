/*
 * XREFs of ?WaitForTimerCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@H@Z @ 0x180016120
 * Callers:
 *     ?DeleteInactiveTimer@CAudioSession@@AEAAJXZ @ 0x180013660 (-DeleteInactiveTimer@CAudioSession@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::WaitForTimerCallbacks(CAudioThreadPool *this, struct _TP_TIMER *a2, BOOL a3)
{
  WaitForThreadpoolTimerCallbacks(a2, a3);
}
