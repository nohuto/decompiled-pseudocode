/*
 * XREFs of PopUmpoSendReapplyBrightnessSettings @ 0x14014BDD4
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400FB738 (PopUmpoSendPowerMessage.c)
 *     PopPowerInformationInternal @ 0x14051D314 (PopPowerInformationInternal.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1400FB738 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x1401715C0 (memset.c)
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
