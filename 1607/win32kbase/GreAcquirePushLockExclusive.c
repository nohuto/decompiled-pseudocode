/*
 * XREFs of GreAcquirePushLockExclusive @ 0x1C00CAE40
 * Callers:
 *     EngAllocUserMemEx @ 0x1C00857B0 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C0085980 (EngFreeUserMem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreAcquirePushLockExclusive(__int64 a1)
{
  return ExAcquirePushLockExclusiveEx(a1, 0LL);
}
