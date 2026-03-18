/*
 * XREFs of PopAwayModePowerRequest @ 0x14066A844
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseAwaymodeLock @ 0x1403D0614 (PopReleaseAwaymodeLock.c)
 *     PopAcquireAwaymodeLock @ 0x1403D068C (PopAcquireAwaymodeLock.c)
 */

__int64 __fastcall PopAwayModePowerRequest(char a1)
{
  PopAcquireAwaymodeLock();
  byte_140303E10 = a1 != 0;
  PopReleaseAwaymodeLock();
  return 0LL;
}
