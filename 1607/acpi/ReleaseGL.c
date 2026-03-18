/*
 * XREFs of ReleaseGL @ 0x1C005C884
 * Callers:
 *     ParseRelease @ 0x1C001B120 (ParseRelease.c)
 *     ParseAcquire @ 0x1C001B400 (ParseAcquire.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 ReleaseGL()
{
  __int64 result; // rax

  result = 0LL;
  if ( ghGlobalLock )
    return ghGlobalLock(5LL, 1LL, qword_1C0074F28);
  return result;
}
