/*
 * XREFs of PopBatteryEstimatesSpoiled @ 0x1406B665C
 * Callers:
 *     PopBatteryWorker @ 0x14056B280 (PopBatteryWorker.c)
 *     PopEstimateChargeTime @ 0x1406B70DC (PopEstimateChargeTime.c)
 * Callees:
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 */

char PopBatteryEstimatesSpoiled()
{
  char v0; // bl

  if ( (unsigned __int64)PopEstimateSpoiledUntilTime < MEMORY[0xFFFFF78000000008] )
    return 0;
  v0 = 1;
  DbgPrintEx(0x92u, 3u, "Battery estimate suppressed\n");
  return v0;
}
