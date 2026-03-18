/*
 * XREFs of KeRemoveQueueDpc @ 0x1400D9484
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x14039FC48 (KiCalibrateTimeAdjustment.c)
 *     EtwpFreeLoggerContext @ 0x14049D5B0 (EtwpFreeLoggerContext.c)
 *     IoDisconnectInterrupt @ 0x1404F405C (IoDisconnectInterrupt.c)
 *     VfKeRemoveQueueDpc @ 0x1406C6D50 (VfKeRemoveQueueDpc.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeRemoveQueueDpc(PRKDPC Dpc)
{
  return KeRemoveQueueDpcEx(Dpc, 0LL);
}
