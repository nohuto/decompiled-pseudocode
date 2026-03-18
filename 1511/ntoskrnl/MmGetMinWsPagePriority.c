/*
 * XREFs of MmGetMinWsPagePriority @ 0x14007A03C
 * Callers:
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMinWsPagePriority()
{
  return 1LL;
}
