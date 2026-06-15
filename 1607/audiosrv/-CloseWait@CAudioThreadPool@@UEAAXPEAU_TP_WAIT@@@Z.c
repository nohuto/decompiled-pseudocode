/*
 * XREFs of ?CloseWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@@Z @ 0x180001520
 * Callers:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180001230 (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::CloseWait(CAudioThreadPool *this, struct _TP_WAIT *a2)
{
  CloseThreadpoolWait(a2);
}
