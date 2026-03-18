/*
 * XREFs of BgpConsoleClearScreen @ 0x14076139C
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     BgpConsoleClearScreenEx @ 0x1407613BC (BgpConsoleClearScreenEx.c)
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
