/*
 * XREFs of KiDpcWatchdog @ 0x1400EFD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KiDpcWatchdog(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  CurrentPrcb->DpcWatchdogCount = 0;
  _enable();
}
