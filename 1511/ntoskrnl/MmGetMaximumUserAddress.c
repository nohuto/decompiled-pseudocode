/*
 * XREFs of MmGetMaximumUserAddress @ 0x1401D0990
 * Callers:
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MmGetMaximumUserAddress()
{
  return KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[18];
}
