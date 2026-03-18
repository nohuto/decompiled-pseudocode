/*
 * XREFs of PopUmpoSendReapplyBrightnessSettings @ 0x1401426B0
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140098C28 (PopUmpoSendPowerMessage.c)
 *     PopPowerInformationInternal @ 0x1404C5AFC (PopPowerInformationInternal.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140098C28 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 PopUmpoSendReapplyBrightnessSettings()
{
  __int64 result; // rax
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  memset(Src, 0, 0x48uLL);
  Src[0] = 13;
  result = PopUmpoSendPowerMessage(Src, 0x48uLL);
  PopResendReapplyBrightnessSettings = (_DWORD)result == -1073741758;
  return result;
}
