/*
 * XREFs of KeSuspendClockTimerSafe @ 0x1401D24F0
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1403DB824 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x1403DC538 (PnprQuiesceProcessorDpc.c)
 *     PnprQuiesceProcessors @ 0x1403DC8B8 (PnprQuiesceProcessors.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1400516A4 (KeGetEffectiveIrql.c)
 *     xHalFreeMessageTarget @ 0x140130D64 (xHalFreeMessageTarget.c)
 */

void KeSuspendClockTimerSafe()
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *v1; // rbx
  int v2; // esi
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // edi

  if ( KeGetEffectiveIrql() >= 0xDu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      off_1402F2598();
      CurrentPrcb->PendingTickFlags &= ~1u;
    }
    if ( CurrentPrcb->Number == v4 )
      ++dword_14030DD88;
    if ( CurrentPrcb->ClockOwner )
      CurrentPrcb->ClockOwner = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xDuLL);
    v1 = KeGetCurrentPrcb();
    v2 = KiClockTimerOwner;
    if ( (v1->PendingTickFlags & 1) != 0 )
    {
      off_1402F2598();
      v1->PendingTickFlags &= ~1u;
    }
    if ( v1->Number == v2 )
      ++dword_14030DD88;
    if ( v1->ClockOwner )
      v1->ClockOwner = 0;
    __writecr8(CurrentIrql);
  }
}
