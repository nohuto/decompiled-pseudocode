/*
 * XREFs of KeyboardClassCreateWaitWakeIrp @ 0x1C000CFF0
 * Callers:
 *     KeyboardClassPower @ 0x1C0001550 (KeyboardClassPower.c)
 *     KeyboardStart @ 0x1C0002440 (KeyboardStart.c)
 *     KeyboardToggleWaitWakeWorker @ 0x1C0005240 (KeyboardToggleWaitWakeWorker.c)
 *     KeyboardClassCreateWaitWakeIrpWorker @ 0x1C000E5E0 (KeyboardClassCreateWaitWakeIrpWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeyboardClassCreateWaitWakeIrp(char *Context)
{
  return PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 3),
           0,
           *(POWER_STATE *)(Context + 288),
           (PREQUEST_POWER_COMPLETE)KeyboardClassWaitWakeComplete,
           Context,
           0LL) == 259;
}
