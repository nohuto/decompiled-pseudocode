/*
 * XREFs of PopSetSessionDisplayStatus @ 0x140546764
 * Callers:
 *     PopSetDisplayStatus @ 0x140534810 (PopSetDisplayStatus.c)
 *     PopSessionDisconnected @ 0x140534858 (PopSessionDisconnected.c)
 *     PopSessionConnected @ 0x1405466C4 (PopSessionConnected.c)
 * Callees:
 *     PopPrintEx @ 0x140084C64 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x1403F6F90 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x1404D27C4 (PopDiagTraceSessionStates.c)
 */

__int64 __fastcall PopSetSessionDisplayStatus(unsigned int a1, int a2, char a3)
{
  __int64 *v6; // r8
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISPLAY_STATE, a1, a2);
  v6 = (__int64 *)">>>>>";
  if ( !a3 )
    v6 = qword_140588B80;
  PopPrintEx(3u, "PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 0, 4u, &v8);
  return PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 1, 4u, &v8);
}
