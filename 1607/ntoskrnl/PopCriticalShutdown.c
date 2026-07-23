/*
 * XREFs of PopCriticalShutdown @ 0x14066EAB8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140147464 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopExecutePowerAction @ 0x140530CA8 (PopExecutePowerAction.c)
 */

int PopCriticalShutdown()
{
  __int64 v1; // [rsp+30h] [rbp-38h] BYREF
  int v2; // [rsp+38h] [rbp-30h]
  _DWORD v3[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v4; // [rsp+48h] [rbp-20h]
  __int64 v5; // [rsp+50h] [rbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  v2 = 0;
  v1 = 0xC000000400000006uLL;
  v3[0] = 1;
  v3[1] = 128;
  PopCriticalShutdownInProgress = 1;
  return PopExecutePowerAction((__int64)v3, 0, &v1, 5, 1u);
}
