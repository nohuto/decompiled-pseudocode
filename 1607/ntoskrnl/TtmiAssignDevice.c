/*
 * XREFs of TtmiAssignDevice @ 0x140677018
 * Callers:
 *     TtmpDispatchAssignDevice @ 0x1406797E4 (TtmpDispatchAssignDevice.c)
 * Callees:
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmpPublishDeviceEvent @ 0x140677528 (TtmpPublishDeviceEvent.c)
 *     TtmiScheduleSessionWorker @ 0x140678DEC (TtmiScheduleSessionWorker.c)
 *     TtmiLogDeviceToTerminalAssigned @ 0x14067ACB0 (TtmiLogDeviceToTerminalAssigned.c)
 */

__int64 __fastcall TtmiAssignDevice(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *i; // rbx
  unsigned int v6; // edi

  for ( i = *(__int64 **)(a1 + 96); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)(a1 + 96) )
      goto LABEL_5;
    if ( *((_DWORD *)i + 8) == a3 )
      break;
  }
  v6 = 0;
  if ( !i )
  {
LABEL_5:
    TtmiLogError("TtmiAssignDevice", 1072, -1, -1073741275);
    return (unsigned int)-1073741275;
  }
  *((_DWORD *)i + 149) = *(_DWORD *)(a2 + 28);
  TtmpPublishDeviceEvent(a1, 0LL, i, 4LL);
  TtmiLogDeviceToTerminalAssigned(*((unsigned int *)i + 149), a3);
  *((_DWORD *)i + 150) |= 0x60u;
  TtmiScheduleSessionWorker(a1, 1LL);
  return v6;
}
