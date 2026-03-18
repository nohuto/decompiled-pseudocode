/*
 * XREFs of PopUmpoSendReapplyBrightnessSettings @ 0x14017023C
 * Callers:
 *     PopPowerInformationInternal @ 0x14055CB5C (PopPowerInformationInternal.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1400D11BC (PopUmpoSendPowerMessage.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 PopUmpoSendReapplyBrightnessSettings()
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  memset(Src, 0, 0x48uLL);
  Src[0] = 13;
  if ( (PoDebug & 0x10000000) != 0 )
    DbgPrint("%s: Sending Reapply settings to UMPO.", "PopUmpoSendReapplyBrightnessSettings");
  return PopUmpoSendPowerMessage(Src, 0x48uLL);
}
