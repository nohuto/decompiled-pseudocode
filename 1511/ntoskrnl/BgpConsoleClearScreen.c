/*
 * XREFs of BgpConsoleClearScreen @ 0x1406DE320
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 *     BgpConsoleClearScreenEx @ 0x1406DE340 (BgpConsoleClearScreenEx.c)
 */

__int64 BgpConsoleClearScreen()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx

  BgpFwAcquireLock();
  v2 = BgpConsoleClearScreenEx(v1, v0);
  BgpFwReleaseLock();
  return v2;
}
