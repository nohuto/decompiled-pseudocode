/*
 * XREFs of ?WaitForWaitCallbacks@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@H@Z @ 0x180006D60
 * Callers:
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180011150 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::WaitForWaitCallbacks(CAudioThreadPool *this, struct _TP_WAIT *a2, BOOL a3)
{
  WaitForThreadpoolWaitCallbacks(a2, a3);
}
