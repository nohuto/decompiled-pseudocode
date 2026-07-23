/*
 * XREFs of MiGetSessionVm @ 0x1400BECF0
 * Callers:
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 *     MmPrefetchVirtualMemory @ 0x1404D760C (MmPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiGetSessionVm()
{
  return KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
}
