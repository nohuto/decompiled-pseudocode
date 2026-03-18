/*
 * XREFs of GreReleasePushLockExclusive @ 0x1C007D960
 * Callers:
 *     EngAllocUserMemEx @ 0x1C00857B0 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C0085980 (EngFreeUserMem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreReleasePushLockExclusive(__int64 a1)
{
  return ExReleasePushLockExclusiveEx(a1, 0LL);
}
