/*
 * XREFs of ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00B2438
 * Callers:
 *     PowerConnectionEvent @ 0x1C0070A64 (PowerConnectionEvent.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00B22E8 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     IsWakeRITForConfigSwitchSupported_0 @ 0x1C0001C98 (IsWakeRITForConfigSwitchSupported_0.c)
 *     RIMSendLatencyMgtRequest @ 0x1C0086B00 (RIMSendLatencyMgtRequest.c)
 */

void *__fastcall SetInputModeWithCrit(int a1)
{
  void *result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      RIMSendLatencyMgtRequest(1);
      *(_DWORD *)gpsi |= 0x2000u;
      result = gpsi;
      dword_1C011BB74 = 1;
      *(_DWORD *)gpsi &= ~0x4000u;
      dword_1C011BB78 = 0;
    }
    else
    {
      *(_DWORD *)gpsi &= ~0x2000u;
      result = gpsi;
      dword_1C011BB74 = 0;
      *(_DWORD *)gpsi |= 0x4000u;
      dword_1C011BB78 = 1;
    }
  }
  else
  {
    *(_DWORD *)gpsi &= ~0x4000u;
    dword_1C011BB78 = 0;
    *(_DWORD *)gpsi &= ~0x2000u;
    dword_1C011BB74 = 0;
    result = (void *)IsWakeRITForConfigSwitchSupported_0();
    if ( (int)result >= 0 )
      return (void *)WakeRITForConfigSwitch_0();
  }
  return result;
}
