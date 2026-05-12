/*
 * XREFs of RaidPauseAdapterQueue @ 0x1C00140CC
 * Callers:
 *     RaidAdapterPowerDownDevice @ 0x1C0008A94 (RaidAdapterPowerDownDevice.c)
 *     StorPortPause @ 0x1C0014D30 (StorPortPause.c)
 *     RaidAdapterResetBus @ 0x1C002492C (RaidAdapterResetBus.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0024FE0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0025428 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortCompleteRequest @ 0x1C0029C50 (StorPortCompleteRequest.c)
 *     StorPortAdapterIdleCondition @ 0x1C002E040 (StorPortAdapterIdleCondition.c)
 *     RaUnitStartResetIo @ 0x1C0032E44 (RaUnitStartResetIo.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C00571E4 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0014194 (DbgLogRequest.c)
 */

__int64 __fastcall RaidPauseAdapterQueue(__int64 a1)
{
  unsigned __int32 v1; // ebx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 812));
  if ( (qword_1C0048010 & 0x200) != 0 )
    DbgLogRequest(a1, 6, (_DWORD)retaddr, v1, a1, *(unsigned int *)(a1 + 56), 0LL);
  return v1;
}
