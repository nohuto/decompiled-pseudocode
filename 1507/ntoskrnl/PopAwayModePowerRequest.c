/*
 * XREFs of PopAwayModePowerRequest @ 0x1406B0A18
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseAwaymodeLock @ 0x1403EF0EC (PopReleaseAwaymodeLock.c)
 *     PopAcquireAwaymodeLock @ 0x1403EF17C (PopAcquireAwaymodeLock.c)
 */

__int64 __fastcall PopAwayModePowerRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx

  v4 = a1;
  PopAcquireAwaymodeLock(a1, a2, a3, a4);
  byte_14032E850 = v4 != 0;
  PopReleaseAwaymodeLock(v6, v5);
  return 0LL;
}
