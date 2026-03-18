/*
 * XREFs of NtGdiFlush @ 0x1C006EA90
 * Callers:
 *     <none>
 * Callees:
 *     IsGreFlushSupported_0 @ 0x1C00017D8 (IsGreFlushSupported_0.c)
 *     GreFlush_0 @ 0x1C0001818 (GreFlush_0.c)
 */

__int64 NtGdiFlush()
{
  if ( (int)IsGreFlushSupported_0() >= 0 )
    GreFlush_0();
  return 0LL;
}
