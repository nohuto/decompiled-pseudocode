/*
 * XREFs of ?SetWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@PEAXPEAU_FILETIME@@@Z @ 0x180033B20
 * Callers:
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x180029040 (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180033280 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::SetWait(CAudioThreadPool *this, struct _TP_WAIT *a2, void *a3, struct _FILETIME *a4)
{
  SetThreadpoolWait(a2, a3, a4);
}
