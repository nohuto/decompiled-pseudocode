/*
 * XREFs of ?CloseWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x1800161A0
 * Callers:
 *     ?DeleteInactiveTimer@CAudioSession@@AEAAJXZ @ 0x180013660 (-DeleteInactiveTimer@CAudioSession@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::CloseWork(CAudioThreadPool *this, struct _TP_WORK *a2)
{
  CloseThreadpoolWork(a2);
}
