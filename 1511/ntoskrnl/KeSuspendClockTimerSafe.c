/*
 * XREFs of KeSuspendClockTimerSafe @ 0x1401C2D60
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1403AF798 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x1403B041C (PnprQuiesceProcessorDpc.c)
 *     PnprQuiesceProcessors @ 0x1403B079C (PnprQuiesceProcessors.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x14009FE70 (KeGetEffectiveIrql.c)
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 */

unsigned __int8 KeSuspendClockTimerSafe()
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *v1; // rbx
  int v2; // esi
  unsigned __int8 result; // al
  struct _KPRCB *CurrentPrcb; // rbx
  int v5; // edi

  if ( KeGetEffectiveIrql() >= 0xDu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      off_1402D28F8();
      CurrentPrcb->PendingTickFlags &= ~1u;
    }
    result = 0;
    if ( CurrentPrcb->Number == v5 )
    {
      ++dword_1402E8C68;
      KiClockActive = 0;
    }
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
      off_1402D28F8();
      v1->PendingTickFlags &= ~1u;
    }
    if ( v1->Number == v2 )
    {
      ++dword_1402E8C68;
      KiClockActive = 0;
    }
    if ( v1->ClockOwner )
      v1->ClockOwner = 0;
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
