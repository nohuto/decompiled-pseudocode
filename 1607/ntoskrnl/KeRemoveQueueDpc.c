/*
 * XREFs of KeRemoveQueueDpc @ 0x140085D20
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x1403CB9E8 (KiCalibrateTimeAdjustment.c)
 *     EtwpFreeLoggerContext @ 0x140493844 (EtwpFreeLoggerContext.c)
 *     IoDisconnectInterrupt @ 0x1405324F4 (IoDisconnectInterrupt.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeRemoveQueueDpc(PRKDPC Dpc)
{
  return KeRemoveQueueDpcEx(Dpc, 0LL);
}
