/*
 * XREFs of ExGetPreviousMode @ 0x1400D5BD0
 * Callers:
 *     NtApphelpCacheControl @ 0x14049C958 (NtApphelpCacheControl.c)
 *     AhcCacheQueryHwId @ 0x14069E060 (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
