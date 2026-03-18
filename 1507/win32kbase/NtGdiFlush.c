/*
 * XREFs of NtGdiFlush @ 0x1C000ECA0
 * Callers:
 *     <none>
 * Callees:
 *     IsGreFlushSupported_0 @ 0x1C00012F8 (IsGreFlushSupported_0.c)
 *     GreFlush_0 @ 0x1C0001300 (GreFlush_0.c)
 */

__int64 NtGdiFlush()
{
  if ( (int)IsGreFlushSupported_0() >= 0 )
    GreFlush_0();
  return 0LL;
}
