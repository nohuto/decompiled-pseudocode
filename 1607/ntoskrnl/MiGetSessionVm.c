/*
 * XREFs of MiGetSessionVm @ 0x1400C0E60
 * Callers:
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiUnloadSystemImage @ 0x140483468 (MiUnloadSystemImage.c)
 *     MmPrefetchVirtualMemory @ 0x1404F4680 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiGetSessionVm()
{
  return KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
}
