/*
 * XREFs of TtmiAcquireCurrentSession @ 0x140547078
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x140546F5C (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x140676E00 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x140676EB8 (TtmNotifyDeviceInput.c)
 *     TtmpDispatchOpenTerminal @ 0x140679C48 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     TtmpAcquireSessionById @ 0x1405470B4 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
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
