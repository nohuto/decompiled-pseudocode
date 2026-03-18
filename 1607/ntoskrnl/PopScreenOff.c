/*
 * XREFs of PopScreenOff @ 0x1406701B0
 * Callers:
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     PopIssueActionRequest @ 0x140530068 (PopIssueActionRequest.c)
 * Callees:
 *     PopBlockSessionSwitch @ 0x14066FD9C (PopBlockSessionSwitch.c)
 *     PopControlMonitor @ 0x14066FE10 (PopControlMonitor.c)
 */

__int64 __fastcall PopScreenOff(int a1)
{
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+3Ch] [rbp+14h]

  v3 = -1;
  PopBlockSessionSwitch(1, (int *)&v3);
  v4 = 0;
  v5 = a1;
  PopControlMonitor(&v4, v3);
  return PopBlockSessionSwitch(0, (int *)&v3);
}
