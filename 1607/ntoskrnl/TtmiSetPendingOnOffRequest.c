/*
 * XREFs of TtmiSetPendingOnOffRequest @ 0x140677D18
 * Callers:
 *     TtmiResetTerminalTimeouts @ 0x140677AE8 (TtmiResetTerminalTimeouts.c)
 *     TtmiTerminalMonitorControl @ 0x140677DD4 (TtmiTerminalMonitorControl.c)
 *     TtmiUndimAllTerminals @ 0x140677ED8 (TtmiUndimAllTerminals.c)
 *     TtmpDispatchSetDisplayState @ 0x140679CB0 (TtmpDispatchSetDisplayState.c)
 * Callees:
 *     TtmpExitProximity @ 0x14067801C (TtmpExitProximity.c)
 *     TtmpShouldEscapeProximity @ 0x1406781AC (TtmpShouldEscapeProximity.c)
 *     TtmiScheduleSessionWorker @ 0x140678D08 (TtmiScheduleSessionWorker.c)
 *     TtmiLogProximityBlockedRequest @ 0x14067B1B0 (TtmiLogProximityBlockedRequest.c)
 *     TtmiLogTerminalOffRequest @ 0x14067C70C (TtmiLogTerminalOffRequest.c)
 *     TtmiLogTerminalOnRequest @ 0x14067C81C (TtmiLogTerminalOnRequest.c)
 */

__int64 __fastcall TtmiSetPendingOnOffRequest(__int64 a1, unsigned int *a2, char a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // r15
  int v9; // r14d
  __int64 v10; // r8
  __int64 v11; // rcx

  v8 = a1;
  v9 = 1;
  if ( (a2[8] & 8) != 0 )
  {
    if ( !a3 || a4 != 1 || !(unsigned __int8)TtmpShouldEscapeProximity(a2) )
    {
      LOBYTE(a1) = a3;
      return TtmiLogProximityBlockedRequest(a1, a4, a5);
    }
    LOBYTE(v10) = 1;
    TtmpExitProximity(v8, a2, v10);
  }
  v11 = a2[7];
  if ( a3 )
  {
    TtmiLogTerminalOnRequest(v11, a4, a5);
  }
  else
  {
    TtmiLogTerminalOffRequest(v11, a4, a5);
    v9 = 2;
  }
  a2[8] |= 4u;
  a2[12] = v9;
  a2[13] = a4;
  return TtmiScheduleSessionWorker(v8, 2LL);
}
