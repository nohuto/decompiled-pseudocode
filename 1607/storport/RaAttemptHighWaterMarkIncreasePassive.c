/*
 * XREFs of RaAttemptHighWaterMarkIncreasePassive @ 0x1C00399F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RaAttemptHighWaterMarkIncreasePassive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1428, 0);
  RaAttemptHighWaterMarkIncrease((__int64)(Context + 192));
}
