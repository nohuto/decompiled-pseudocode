/*
 * XREFs of TtmiTerminalMonitorControl @ 0x140677EB8
 * Callers:
 *     TtmSessionMonitorControl @ 0x140678D3C (TtmSessionMonitorControl.c)
 * Callees:
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmiSetPendingOnOffRequest @ 0x140677DFC (TtmiSetPendingOnOffRequest.c)
 *     TtmpEnterProximity @ 0x1406780AC (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x140678100 (TtmpExitProximity.c)
 */

__int64 __fastcall TtmiTerminalMonitorControl(__int64 a1, unsigned int *a2, unsigned int a3, int a4)
{
  char v5; // r8
  unsigned int v6; // ebx
  int v7; // r9d

  v5 = 0;
  v6 = 0;
  if ( !a4 )
  {
    if ( a3 == 22 )
    {
      TtmpEnterProximity();
      return v6;
    }
    goto LABEL_7;
  }
  v7 = a4 - 1;
  if ( !v7 )
  {
    if ( a3 == 22 )
    {
      TtmpExitProximity(a1, a2, 0LL);
      return v6;
    }
LABEL_6:
    v5 = 1;
LABEL_7:
    TtmiSetPendingOnOffRequest(a1, a2, v5, a3, 0x434D6553u);
    return v6;
  }
  if ( v7 == 1 )
  {
    if ( a2[67] - 2 <= 1 )
      return 255;
    goto LABEL_6;
  }
  v6 = -1073741811;
  TtmiLogError("TtmiTerminalMonitorControl", 1402, -1, -1073741811);
  return v6;
}
