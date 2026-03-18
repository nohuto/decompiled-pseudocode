/*
 * XREFs of PopMonitorProcessBrightnessAction @ 0x14063C294
 * Callers:
 *     PopMonitorProcessLoop @ 0x140549504 (PopMonitorProcessLoop.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140098C28 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C1D24 (PopSetPowerSettingValueAcDc.c)
 */

_UNKNOWN **__fastcall PopMonitorProcessBrightnessAction(int a1, int a2)
{
  _UNKNOWN **result; // rax
  int v4; // ecx
  _QWORD Src[11]; // [rsp+20h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  int v7; // [rsp+88h] [rbp+10h] BYREF

  result = &retaddr;
  v7 = a2;
  if ( !a1 )
  {
    memset(Src, 0, 0x48uLL);
    LODWORD(Src[0]) = 8;
    LODWORD(Src[3]) = a2;
    *(GUID *)&Src[1] = GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS;
    return (_UNKNOWN **)PopUmpoSendPowerMessage(Src, 0x48uLL);
  }
  v4 = a1 - 2;
  if ( !v4 )
  {
    memset(Src, 0, 0x48uLL);
    LODWORD(Src[0]) = 12;
    LODWORD(Src[1]) = a2;
    return (_UNKNOWN **)PopUmpoSendPowerMessage(Src, 0x48uLL);
  }
  if ( v4 == 1 )
    return (_UNKNOWN **)PopSetPowerSettingValueAcDc(&GUID_VIDEO_CURRENT_MONITOR_BRIGHTNESS, 4u, &v7);
  return result;
}
