/*
 * XREFs of RaidPauseAdapterQueue @ 0x1C0011978
 * Callers:
 *     RaidAdapterPowerDownDevice @ 0x1C0006D38 (RaidAdapterPowerDownDevice.c)
 *     StorPortPause @ 0x1C0012C10 (StorPortPause.c)
 *     RaidAdapterResetBus @ 0x1C00223E8 (RaidAdapterResetBus.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0022AA0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0022EE8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortCompleteRequest @ 0x1C00279A0 (StorPortCompleteRequest.c)
 *     StorPortAdapterIdleCondition @ 0x1C002C2D0 (StorPortAdapterIdleCondition.c)
 *     RaUnitStartResetIo @ 0x1C00315DC (RaUnitStartResetIo.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0053274 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0011B14 (DbgLogRequest.c)
 */

__int64 __fastcall RaidPauseAdapterQueue(__int64 a1)
{
  unsigned __int32 v1; // ebx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 812));
  if ( (qword_1C0044010 & 0x200) != 0 )
    DbgLogRequest(a1, 6, (_DWORD)retaddr, v1, a1, *(unsigned int *)(a1 + 56), 0LL);
  return v1;
}
