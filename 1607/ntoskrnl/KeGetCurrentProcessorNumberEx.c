/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x14008C1E0
 * Callers:
 *     KiInterruptDispatchCommon @ 0x1401D8668 (KiInterruptDispatchCommon.c)
 *     KiCopyCountersWorker @ 0x14064FE2C (KiCopyCountersWorker.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcNumber)
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( ProcNumber )
  {
    ProcNumber->Group = CurrentPrcb->Group;
    *(_WORD *)&ProcNumber->Number = CurrentPrcb->GroupIndex;
  }
  return CurrentPrcb->Number;
}
