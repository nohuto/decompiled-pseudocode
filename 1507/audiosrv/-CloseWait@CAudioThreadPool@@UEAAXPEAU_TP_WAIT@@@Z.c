/*
 * XREFs of ?CloseWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@@Z @ 0x180006D10
 * Callers:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x180001B68 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180011150 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::CloseWait(CAudioThreadPool *this, struct _TP_WAIT *a2)
{
  CloseThreadpoolWait(a2);
}
