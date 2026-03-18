/*
 * XREFs of ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C0037990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ACPIDeviceCancelWaitWakeIrpCallBack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ACPIDereferenceWaitWakePowerRequest(a4);
}
