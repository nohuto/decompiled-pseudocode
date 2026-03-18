/*
 * XREFs of PopSetSessionDisplayStatus @ 0x14050BBB8
 * Callers:
 *     PopSetDisplayStatus @ 0x1404F537C (PopSetDisplayStatus.c)
 *     PopSessionDisconnected @ 0x1404F53C4 (PopSessionDisconnected.c)
 *     PopSessionConnected @ 0x14050BB18 (PopSessionConnected.c)
 * Callees:
 *     PopPrintEx @ 0x1400E6908 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x140448F44 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x1404C62E8 (PopDiagTraceSessionStates.c)
 */

__int64 __fastcall PopSetSessionDisplayStatus(unsigned int a1, int a2, char a3)
{
  __int64 *v6; // r8
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISPLAY_STATE, a1, a2);
  v6 = (__int64 *)">>>>>";
  if ( !a3 )
    v6 = qword_140556090;
  PopPrintEx(3u, "PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 0, 4u, &v8);
  return PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 1, 4u, &v8);
}
