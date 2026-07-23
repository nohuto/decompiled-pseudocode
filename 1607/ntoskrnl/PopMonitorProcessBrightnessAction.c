/*
 * XREFs of PopMonitorProcessBrightnessAction @ 0x1406738EC
 * Callers:
 *     PopMonitorProcessLoop @ 0x14057EC3C (PopMonitorProcessLoop.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1400F94C4 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopSetPowerSettingValueAcDc @ 0x1403F4AA8 (PopSetPowerSettingValueAcDc.c)
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
    return (_UNKNOWN **)PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
  }
  v4 = a1 - 2;
  if ( !v4 )
  {
    memset(Src, 0, 0x48uLL);
    LODWORD(Src[0]) = 12;
    LODWORD(Src[1]) = a2;
    return (_UNKNOWN **)PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
  }
  if ( v4 == 1 )
    return (_UNKNOWN **)PopSetPowerSettingValueAcDc((__int64)&GUID_VIDEO_CURRENT_MONITOR_BRIGHTNESS, 4u, (__int64)&v7);
  return result;
}
