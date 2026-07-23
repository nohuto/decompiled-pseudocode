/*
 * XREFs of TpPostWork @ 0x1800276B0
 * Callers:
 *     LdrpQueueWork @ 0x1800390B0 (LdrpQueueWork.c)
 * Callees:
 *     RtlpTpETWCallbackEnqueue @ 0x180001684 (RtlpTpETWCallbackEnqueue.c)
 *     TpPostTask @ 0x180027C78 (TpPostTask.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

void __cdecl TpPostWork(PTP_WORK Work)
{
  int v2; // eax
  signed __int32 v3; // edx
  int v4; // r8d
  bool v5; // zf
  signed __int32 v6; // eax

  if ( !Work
    || (v2 = *((_DWORD *)Work + 40), (v2 & 0x10000) != 0)
    || (v2 & 0x20000) != 0
    || *((__int64 (__fastcall ***)(PVOID))Work + 1) != &TppWorkpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    TppBarrierAdjust((char *)Work + 56, 1LL);
    _m_prefetchw((char *)Work + 224);
    v3 = *((_DWORD *)Work + 56);
    do
    {
      v4 = v3 & 1;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)Work + 56, (v3 & 0xFFFFFFFE) + 2, v3);
      v5 = v3 == v6;
      v3 = v6;
    }
    while ( !v5 );
    if ( v4 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)Work, 2u);
      if ( MEMORY[0x7FFE0386] )
        RtlpTpETWCallbackEnqueue(
          *((_QWORD *)Work + 17),
          (__int64)Work + 192,
          *((_QWORD *)Work + 10),
          *((_QWORD *)Work + 11),
          *((_QWORD *)Work + 13));
      TpPostTask((char *)Work + 192, *((_QWORD *)Work + 17), *((unsigned int *)Work + 46));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Work, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(PTP_WORK))Work + 1))(Work);
    }
  }
}
