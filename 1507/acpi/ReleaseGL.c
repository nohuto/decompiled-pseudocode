/*
 * XREFs of ReleaseGL @ 0x1C004567C
 * Callers:
 *     ParseRelease @ 0x1C0013A10 (ParseRelease.c)
 *     ParseAcquire @ 0x1C0013D20 (ParseAcquire.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 */

__int64 ReleaseGL()
{
  __int64 result; // rax

  result = 0LL;
  if ( ghGlobalLock )
    return ghGlobalLock(5LL, 1LL, qword_1C005AAA8);
  return result;
}
