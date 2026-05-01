/*
 * XREFs of RmpActivityHostIsRunnable @ 0x18003BD38
 * Callers:
 *     RmpActivityHostIsKillable @ 0x180009F48 (RmpActivityHostIsKillable.c)
 * Callees:
 *     RmpActivityHostGetStateDigest @ 0x18000CD68 (RmpActivityHostGetStateDigest.c)
 */

_BOOL8 __fastcall RmpActivityHostIsRunnable(__int64 a1)
{
  char StateDigest; // al

  StateDigest = RmpActivityHostGetStateDigest(a1);
  return RmpActivityHostStateDigestIsRunnable(StateDigest);
}
