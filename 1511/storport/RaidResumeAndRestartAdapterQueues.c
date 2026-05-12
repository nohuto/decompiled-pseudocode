/*
 * XREFs of RaidResumeAndRestartAdapterQueues @ 0x1C0026E38
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0011F28 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0024FE0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0025428 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStartResetIo @ 0x1C0032E44 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0033F70 (RaidUnitCompleteResetRequest.c)
 * Callees:
 *     RaidAdapterRestartQueues @ 0x1C00131A0 (RaidAdapterRestartQueues.c)
 *     DbgLogRequest @ 0x1C0014194 (DbgLogRequest.c)
 */

__int64 __fastcall RaidResumeAndRestartAdapterQueues(__int64 a1)
{
  signed __int32 v2; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 812));
  if ( (qword_1C0048010 & 0x200) != 0 )
    DbgLogRequest(a1, 7, retaddr, v2, a1, *(unsigned int *)(a1 + 56), 0LL);
  if ( !v2 )
    RaidAdapterRestartQueues(a1);
  return (unsigned int)v2;
}
