/*
 * XREFs of ?CloseTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@@Z @ 0x180033BF0
 * Callers:
 *     ?DeleteInactiveTimer@CAudioSession@@AEAAJXZ @ 0x180026030 (-DeleteInactiveTimer@CAudioSession@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::CloseTimer(CAudioThreadPool *this, struct _TP_TIMER *a2)
{
  CloseThreadpoolTimer(a2);
}
