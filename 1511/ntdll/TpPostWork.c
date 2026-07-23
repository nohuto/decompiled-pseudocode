/*
 * XREFs of TpPostWork @ 0x18002E720
 * Callers:
 *     LdrpQueueWork @ 0x1800767BC (LdrpQueueWork.c)
 * Callees:
 *     RtlpTpETWCallbackEnqueue @ 0x18000165C (RtlpTpETWCallbackEnqueue.c)
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TpPostTask @ 0x18002E55C (TpPostTask.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

void __cdecl TpPostWork(PTP_WORK Work)
{
  PTP_WORK v1; // rbx
  int v2; // eax
  signed __int32 v3; // edx
  int v4; // r8d
  bool v5; // zf
  signed __int32 v6; // eax

  v1 = Work;
  if ( !Work
    || (v2 = *((_DWORD *)Work + 40), (v2 & 0x10000) != 0)
    || (v2 & 0x20000) != 0
    || *((__int64 (__fastcall ***)(PVOID))Work + 1) != &TppWorkpCleanupGroupMemberVFuncs
    || (Work = (PTP_WORK)NtCurrentPeb()->Ldr, *((_BYTE *)Work + 72)) )
  {
    TppRaiseInvalidParameter(Work);
  }
  else
  {
    TppBarrierAdjust((_RTL_SRWLOCK *)v1 + 7, 1, 0);
    _m_prefetchw((char *)v1 + 224);
    v3 = *((_DWORD *)v1 + 56);
    do
    {
      v4 = v3 & 1;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)v1 + 56, (v3 & 0xFFFFFFFE) + 2, v3);
      v5 = v3 == v6;
      v3 = v6;
    }
    while ( !v5 );
    if ( v4 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)v1, 2u);
      if ( MEMORY[0x7FFE0386] )
        RtlpTpETWCallbackEnqueue(
          *((_QWORD *)v1 + 17),
          (__int64)v1 + 192,
          *((_QWORD *)v1 + 10),
          *((_QWORD *)v1 + 11),
          *((_QWORD *)v1 + 13));
      TpPostTask((__int64)v1 + 192, *((char **)v1 + 17), *((_DWORD *)v1 + 46), 0LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(PTP_WORK))v1 + 1))(v1);
    }
  }
}
