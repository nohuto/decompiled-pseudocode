/*
 * XREFs of PopScreenOff @ 0x140670294
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PopIssueActionRequest @ 0x1405305A8 (PopIssueActionRequest.c)
 * Callees:
 *     PopBlockSessionSwitch @ 0x14066FE80 (PopBlockSessionSwitch.c)
 *     PopControlMonitor @ 0x14066FEF4 (PopControlMonitor.c)
 */

ULONG __fastcall PopScreenOff(int a1)
{
  ULONG v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+3Ch] [rbp+14h]

  v3 = -1;
  PopBlockSessionSwitch(1, &v3);
  v4 = 0;
  v5 = a1;
  PopControlMonitor(&v4, v3);
  return PopBlockSessionSwitch(0, &v3);
}
