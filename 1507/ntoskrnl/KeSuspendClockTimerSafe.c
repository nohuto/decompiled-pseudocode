/*
 * XREFs of KeSuspendClockTimerSafe @ 0x1401FEAC8
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1403FFCB8 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x140400A08 (PnprQuiesceProcessorDpc.c)
 *     PnprQuiesceProcessors @ 0x140400DAC (PnprQuiesceProcessors.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 */

void KeSuspendClockTimerSafe()
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  int v2; // esi
  struct _KPRCB *v3; // rbx
  int v4; // edi

  if ( (unsigned __int8)KeAreInterruptsEnabled() && KeGetCurrentIrql() < 0xDu )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xDuLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v2 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      off_140321A48();
      CurrentPrcb->PendingTickFlags &= ~1u;
    }
    if ( CurrentPrcb->Number == v2 )
    {
      ++dword_1403390E8;
      KiClockActive = 0;
    }
    if ( CurrentPrcb->ClockOwner )
      CurrentPrcb->ClockOwner = 0;
    __writecr8(CurrentIrql);
  }
  else
  {
    v3 = KeGetCurrentPrcb();
    v4 = KiClockTimerOwner;
    if ( (v3->PendingTickFlags & 1) != 0 )
    {
      off_140321A48();
      v3->PendingTickFlags &= ~1u;
    }
    if ( v3->Number == v4 )
    {
      ++dword_1403390E8;
      KiClockActive = 0;
    }
    if ( v3->ClockOwner )
      v3->ClockOwner = 0;
  }
}
