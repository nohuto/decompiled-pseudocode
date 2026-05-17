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

__int64 __fastcall TpPostWork(__int64 a1)
{
  int v2; // eax
  signed __int32 v3; // edx
  int v4; // r8d
  bool v5; // zf
  __int64 result; // rax

  if ( !a1 )
    return TppRaiseInvalidParameter();
  v2 = *(_DWORD *)(a1 + 160);
  if ( (v2 & 0x10000) != 0
    || (v2 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppWorkpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    return TppRaiseInvalidParameter();
  }
  TppBarrierAdjust(a1 + 56, 1LL);
  _m_prefetchw((const void *)(a1 + 224));
  v3 = *(_DWORD *)(a1 + 224);
  do
  {
    v4 = v3 & 1;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 224), (v3 & 0xFFFFFFFE) + 2, v3);
    v5 = v3 == (_DWORD)result;
    v3 = result;
  }
  while ( !v5 );
  if ( v4 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a1, 2u);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackEnqueue(
        *(_QWORD *)(a1 + 136),
        a1 + 192,
        *(_QWORD *)(a1 + 80),
        *(_QWORD *)(a1 + 88),
        *(_QWORD *)(a1 + 104));
    TpPostTask(a1 + 192, *(_QWORD *)(a1 + 136), *(unsigned int *)(a1 + 184));
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
