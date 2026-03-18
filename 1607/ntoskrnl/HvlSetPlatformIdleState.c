/*
 * XREFs of HvlSetPlatformIdleState @ 0x1401BF508
 * Callers:
 *     PpmIdleGuestComplete @ 0x14020D748 (PpmIdleGuestComplete.c)
 *     PpmIdleGuestPreExecute @ 0x14020D7C0 (PpmIdleGuestPreExecute.c)
 * Callees:
 *     HvlpGetLpIndexFromProcessorIndex @ 0x1401BB92C (HvlpGetLpIndexFromProcessorIndex.c)
 *     HvlpSetPowerProperty @ 0x1401BF884 (HvlpSetPowerProperty.c)
 */

__int64 HvlSetPlatformIdleState()
{
  int v0; // r9d
  _DWORD v2[106]; // [rsp+20h] [rbp-1A8h] BYREF

  v2[0] = 3;
  v2[2] = HvlpGetLpIndexFromProcessorIndex(KeGetPcr()->Prcb.Number);
  v2[4] = v0;
  return HvlpSetPowerProperty(v2);
}
