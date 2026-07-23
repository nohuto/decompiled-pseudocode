/*
 * XREFs of PopUmpoSendReapplyBrightnessSettings @ 0x14014C344
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400F94C4 (PopUmpoSendPowerMessage.c)
 *     PopPowerInformationInternal @ 0x140500704 (PopPowerInformationInternal.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1400F94C4 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 PopUmpoSendReapplyBrightnessSettings()
{
  __int64 result; // rax
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  memset(Src, 0, 0x48uLL);
  Src[0] = 13;
  result = PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
  PopResendReapplyBrightnessSettings = (_DWORD)result == -1073741758;
  return result;
}
