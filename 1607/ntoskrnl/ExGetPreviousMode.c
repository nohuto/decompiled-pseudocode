/*
 * XREFs of ExGetPreviousMode @ 0x140092A40
 * Callers:
 *     NtApphelpCacheControl @ 0x1404B93AC (NtApphelpCacheControl.c)
 *     VrpPostEnumerateKey @ 0x140614D90 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x140615828 (VrpPostQueryKey.c)
 *     AhcCacheQueryHwId @ 0x1406E4C1C (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
