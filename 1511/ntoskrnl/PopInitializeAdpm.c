/*
 * XREFs of PopInitializeAdpm @ 0x140766084
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

PVOID PopInitializeAdpm()
{
  ExInitializeResourceLite(&PopAdpmLock);
  memset(&PopConsoleContext, 0, 0x28uLL);
  PopConsoleContext = -1;
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  dword_1402DD000 = 3;
  return PopExtendConnectionState(0);
}
