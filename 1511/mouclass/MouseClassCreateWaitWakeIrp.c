/*
 * XREFs of MouseClassCreateWaitWakeIrp @ 0x1C000BCF4
 * Callers:
 *     MouseClassPower @ 0x1C0001CD0 (MouseClassPower.c)
 *     MouseStart @ 0x1C00025B0 (MouseStart.c)
 *     MouseToggleWaitWakeWorker @ 0x1C0004DE0 (MouseToggleWaitWakeWorker.c)
 *     MouseClassCreateWaitWakeIrpWorker @ 0x1C000CF10 (MouseClassCreateWaitWakeIrpWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall MouseClassCreateWaitWakeIrp(char *Context)
{
  return PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 3),
           0,
           *(POWER_STATE *)(Context + 272),
           (PREQUEST_POWER_COMPLETE)MouseClassWaitWakeComplete,
           Context,
           0LL) == 259;
}
