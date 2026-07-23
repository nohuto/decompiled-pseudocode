/*
 * XREFs of KeRemoveQueueDpc @ 0x140087610
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x1403CB9E8 (KiCalibrateTimeAdjustment.c)
 *     EtwpFreeLoggerContext @ 0x1404942D4 (EtwpFreeLoggerContext.c)
 *     IoDisconnectInterrupt @ 0x140532A34 (IoDisconnectInterrupt.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeRemoveQueueDpc(PRKDPC Dpc)
{
  return KeRemoveQueueDpcEx(Dpc, 0LL);
}
