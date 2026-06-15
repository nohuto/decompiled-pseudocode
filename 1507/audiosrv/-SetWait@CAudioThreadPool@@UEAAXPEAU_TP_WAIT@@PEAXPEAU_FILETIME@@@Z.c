/*
 * XREFs of ?SetWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@PEAXPEAU_FILETIME@@@Z @ 0x180006D20
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180006498 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x180011280 (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::SetWait(CAudioThreadPool *this, struct _TP_WAIT *a2, void *a3, struct _FILETIME *a4)
{
  SetThreadpoolWait(a2, a3, a4);
}
