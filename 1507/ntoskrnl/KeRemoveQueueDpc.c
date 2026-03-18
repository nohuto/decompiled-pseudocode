/*
 * XREFs of KeRemoveQueueDpc @ 0x14010C998
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x1403F283C (KiCalibrateTimeAdjustment.c)
 *     EtwpFreeLoggerContext @ 0x140524388 (EtwpFreeLoggerContext.c)
 *     IoDisconnectInterrupt @ 0x1405682D8 (IoDisconnectInterrupt.c)
 *     VfKeRemoveQueueDpc @ 0x140749BFC (VfKeRemoveQueueDpc.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeRemoveQueueDpc(PRKDPC Dpc)
{
  return KeRemoveQueueDpcEx(Dpc, 0LL);
}
