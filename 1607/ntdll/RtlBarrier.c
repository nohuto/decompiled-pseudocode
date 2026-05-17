/*
 * XREFs of RtlBarrier @ 0x1800E4E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 RtlBarrier()
{
  return RtlPosixBarrier();
}
