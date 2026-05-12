/*
 * XREFs of StorPortUnitPowerNotRequiredStep2Passive @ 0x1C002D5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorPortUnitPowerNotRequiredStep2Passive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 400, 0);
  StorPortUnitPowerNotRequiredStep2((PVOID)Context);
}
