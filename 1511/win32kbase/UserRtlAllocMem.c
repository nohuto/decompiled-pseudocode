/*
 * XREFs of UserRtlAllocMem @ 0x1C00B2330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 UserRtlAllocMem()
{
  return Win32AllocPool();
}
