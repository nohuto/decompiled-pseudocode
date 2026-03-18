/*
 * XREFs of PopUmpoSendPowerRequestOverrideCleanup @ 0x1404E62B4
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400D0F98 (PopPowerRequestCleanUp.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1400D11BC (PopUmpoSendPowerMessage.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall PopUmpoSendPowerRequestOverrideCleanup(__int64 a1)
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  memset(Src, 0, 0x48uLL);
  Src[2] = *(_DWORD *)(a1 + 28);
  Src[0] = 10;
  if ( (PoDebug & 0x10000000) != 0 )
    DbgPrint("%s: Sending power request override cleanup to UMPO.", "PopUmpoSendPowerRequestOverrideCleanup");
  return PopUmpoSendPowerMessage(Src, 0x48uLL);
}
