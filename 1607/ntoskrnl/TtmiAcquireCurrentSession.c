/*
 * XREFs of TtmiAcquireCurrentSession @ 0x140546B38
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x140546A1C (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x140676D1C (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x140676DD4 (TtmNotifyDeviceInput.c)
 *     TtmpDispatchOpenTerminal @ 0x140679B64 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     TtmpAcquireSessionById @ 0x140546B74 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140546BCC (TtmiLogError.c)
 */

__int64 __fastcall TtmiAcquireCurrentSession(__int64 a1)
{
  unsigned int SessionId; // eax
  unsigned int v3; // ebx

  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  if ( SessionId == -1 )
  {
    v3 = -1073740715;
    TtmiLogError("TtmiAcquireCurrentSession");
  }
  else
  {
    return (unsigned int)TtmpAcquireSessionById(a1, SessionId);
  }
  return v3;
}
