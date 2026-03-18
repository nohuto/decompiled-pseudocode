/*
 * XREFs of PopAwayModePowerRequest @ 0x1406323F0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseAwaymodeLock @ 0x1403A592C (PopReleaseAwaymodeLock.c)
 *     PopAcquireAwaymodeLock @ 0x1403A59A4 (PopAcquireAwaymodeLock.c)
 */

__int64 __fastcall PopAwayModePowerRequest(char a1)
{
  PopAcquireAwaymodeLock();
  byte_1402DE290 = a1 != 0;
  PopReleaseAwaymodeLock();
  return 0LL;
}
