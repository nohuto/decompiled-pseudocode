/*
 * XREFs of StartScreenSaver @ 0x1C02027E0
 * Callers:
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 * Callees:
 *     SetTimerCoalescingTolerance @ 0x1C010B090 (SetTimerCoalescingTolerance.c)
 */

void __fastcall StartScreenSaver(int a1)
{
  __int64 v1; // rdx

  if ( !gppiScreenSaver && (gPowerState & 1) == 0 && glinp[1] != glinp[0] )
  {
    if ( !gProtocolType && !gPowerTransitionsState[0] )
    {
      v1 = 2LL;
      goto LABEL_10;
    }
    if ( !a1 || (*gpsi & 0x200) != 0 )
    {
      v1 = a1;
LABEL_10:
      if ( (int)PostWinlogonMessage(1024LL, v1) >= 0 )
      {
        glinp[1] = glinp[0];
        SetTimerCoalescingTolerance(3);
      }
    }
  }
}
