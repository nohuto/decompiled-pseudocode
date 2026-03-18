/*
 * XREFs of ExGetPreviousMode @ 0x140006ED0
 * Callers:
 *     NtApphelpCacheControl @ 0x14040D608 (NtApphelpCacheControl.c)
 *     AhcCacheQueryHwId @ 0x14071E6BC (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
