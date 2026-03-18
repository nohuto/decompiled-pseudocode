/*
 * XREFs of PopUmpoSendPowerRequestOverrideCleanup @ 0x140455BB4
 * Callers:
 *     PopPowerRequestCleanUp @ 0x140098AE4 (PopPowerRequestCleanUp.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140098C28 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall PopUmpoSendPowerRequestOverrideCleanup(__int64 a1)
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  memset(Src, 0, 0x48uLL);
  Src[2] = *(_DWORD *)(a1 + 28);
  Src[0] = 10;
  return PopUmpoSendPowerMessage(Src, 0x48uLL);
}
