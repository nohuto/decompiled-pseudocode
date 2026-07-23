/*
 * XREFs of PopDispatchSuperfetchNotification @ 0x1405303B4
 * Callers:
 *     PopIssueActionRequest @ 0x1405305A8 (PopIssueActionRequest.c)
 * Callees:
 *     PopCheckpointSystemSleep @ 0x1403CEBA4 (PopCheckpointSystemSleep.c)
 *     PfPowerActionNotify @ 0x1403CFF90 (PfPowerActionNotify.c)
 *     PopDiagTraceSuperfetchNotification @ 0x140530408 (PopDiagTraceSuperfetchNotification.c)
 */

unsigned __int64 __fastcall PopDispatchSuperfetchNotification(__int64 a1, int a2)
{
  char v2; // bl
  bool v4; // cf

  v2 = 0;
  v4 = (int)a1 < 0;
  LOBYTE(a1) = 1;
  if ( v4 )
    v2 = 2;
  PopDiagTraceSuperfetchNotification(a1);
  PopCheckpointSystemSleep(6);
  PfPowerActionNotify(1, v2, a2);
  PopDiagTraceSuperfetchNotification(0LL);
  return PopCheckpointSystemSleep(7);
}
