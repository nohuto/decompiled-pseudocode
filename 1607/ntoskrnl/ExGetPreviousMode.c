/*
 * XREFs of ExGetPreviousMode @ 0x140092240
 * Callers:
 *     NtApphelpCacheControl @ 0x1404A50E4 (NtApphelpCacheControl.c)
 *     VrpPostEnumerateKey @ 0x140614E44 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1406158DC (VrpPostQueryKey.c)
 *     AhcCacheQueryHwId @ 0x1406E4D54 (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
