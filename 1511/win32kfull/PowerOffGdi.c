/*
 * XREFs of PowerOffGdi @ 0x1C014F490
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C009DC30 (xxxRemoteDisconnect.c)
 * Callees:
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     TransitionCursorSuppressionState @ 0x1C00987A0 (TransitionCursorSuppressionState.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 PowerOffGdi()
{
  int MDEVPowerState; // ebx
  __int64 result; // rax
  __int64 v2; // rcx

  TransitionCursorSuppressionState(2, 0);
  MDEVPowerState = DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 8LL));
  if ( MDEVPowerState )
  {
    SafeDisableMDEV(2LL);
    DestroyMonitorDCs();
    gbGDIOn = 0;
  }
  DrvDxgkLogCodePointPacket(12LL, *((_DWORD *)&gPowerState + 15) == 5, 0LL, 0LL);
  result = DrvSetMDEVPowerState(*(_QWORD *)(gpDispInfo + 8LL), 0LL);
  if ( MDEVPowerState )
  {
    result = gPowerState;
    if ( *((_DWORD *)&gPowerState + 15) == 5 )
    {
      result = *(_QWORD *)(gptiCurrent + 408LL);
      if ( result )
      {
        result = *(_QWORD *)(result + 8);
        if ( result )
        {
          v2 = *(_QWORD *)(result + 160);
          if ( v2 )
            return PostMessage(v2, 536LL, 0xCuLL, 0LL);
        }
      }
    }
  }
  return result;
}
