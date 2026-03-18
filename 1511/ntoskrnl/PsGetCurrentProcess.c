/*
 * XREFs of PsGetCurrentProcess @ 0x1400C7D90
 * Callers:
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiSmallVaStillMapsFrame @ 0x1400E05CC (MiSmallVaStillMapsFrame.c)
 *     MmMarkHiberPhase @ 0x14039EE0C (MmMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
