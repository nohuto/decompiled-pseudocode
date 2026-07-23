/*
 * XREFs of TpPostWork @ 0x18003CEE0
 * Callers:
 *     LdrpQueueWork @ 0x18003C7E0 (LdrpQueueWork.c)
 * Callees:
 *     RtlpTpETWCallbackEnqueue @ 0x180001338 (RtlpTpETWCallbackEnqueue.c)
 *     TpPostTask @ 0x18003D018 (TpPostTask.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x18003D210 (RtlGetThreadWorkOnBehalfTicket.c)
 *     TppBarrierAdjust @ 0x180063E74 (TppBarrierAdjust.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

void __cdecl TpPostWork(PTP_WORK Work)
{
  PTP_WORK v1; // rbx
  int v2; // eax
  signed __int32 v3; // edx
  int v4; // r9d
  bool v5; // zf
  signed __int32 v6; // eax

  v1 = Work;
  if ( !Work
    || (v2 = *((_DWORD *)Work + 42), (v2 & 0x10000) != 0)
    || (v2 & 0x20000) != 0
    || *((__int64 (__fastcall ***)(PVOID))Work + 1) != &TppWorkpCleanupGroupMemberVFuncs
    || (Work = (PTP_WORK)NtCurrentPeb()->Ldr, *((_BYTE *)Work + 72)) )
  {
    TppRaiseInvalidParameter(Work);
  }
  else
  {
    TppBarrierAdjust((char *)v1 + 56, 1LL, 0LL);
    _m_prefetchw((char *)v1 + 232);
    v3 = *((_DWORD *)v1 + 58);
    do
    {
      v4 = v3 & 1;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)v1 + 58, (v3 & 0xFFFFFFFE) + 2, v3);
      v5 = v3 == v6;
      v3 = v6;
    }
    while ( !v5 );
    if ( v4 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)v1, 2u);
      RtlGetThreadWorkOnBehalfTicket((char *)v1 + 128);
      if ( MEMORY[0x7FFE0386] )
        RtlpTpETWCallbackEnqueue(
          *((_QWORD *)v1 + 18),
          (__int64)v1 + 200,
          *((_QWORD *)v1 + 10),
          *((_QWORD *)v1 + 11),
          *((_QWORD *)v1 + 13));
      TpPostTask((char *)v1 + 200, *((_QWORD *)v1 + 18), *((unsigned int *)v1 + 48), 0LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(PTP_WORK))v1 + 1))(v1);
    }
  }
}
