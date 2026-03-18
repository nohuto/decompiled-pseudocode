/*
 * XREFs of PopInitializeAdpm @ 0x1407BBC1C
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14000ECC0 (ExInitializeResourceLite.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

PVOID PopInitializeAdpm()
{
  ExInitializeResourceLite(&PopAdpmLock);
  memset(&PopConsoleContext, 0, 0x28uLL);
  PopConsoleContext = -1;
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  dword_1403023E0 = 3;
  return PopExtendConnectionState(0);
}
