/*
 * XREFs of TppWorkPost @ 0x18000B8A8
 * Callers:
 *     TppSingleTimerExpiration @ 0x18000B6E0 (TppSingleTimerExpiration.c)
 *     TpSimpleTryPost @ 0x1800776B0 (TpSimpleTryPost.c)
 * Callees:
 *     RtlpTpETWCallbackEnqueue @ 0x18000165C (RtlpTpETWCallbackEnqueue.c)
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TpPostTask @ 0x18002E55C (TpPostTask.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall TppWorkPost(__int64 a1)
{
  signed __int32 v2; // edx
  int v3; // r9d
  bool v4; // zf
  __int64 result; // rax

  TppBarrierAdjust((_RTL_SRWLOCK *)(a1 + 56), 1, 0);
  _m_prefetchw((const void *)(a1 + 224));
  v2 = *(_DWORD *)(a1 + 224);
  do
  {
    v3 = v2 & 1;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 224), (v2 & 0xFFFFFFFE) + 2, v2);
    v4 = v2 == (_DWORD)result;
    v2 = result;
  }
  while ( !v4 );
  if ( v3 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a1, 2u);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackEnqueue(
        *(_QWORD *)(a1 + 136),
        a1 + 192,
        *(_QWORD *)(a1 + 80),
        *(_QWORD *)(a1 + 88),
        *(_QWORD *)(a1 + 104));
    TpPostTask(a1 + 192, *(_QWORD *)(a1 + 136), *(unsigned int *)(a1 + 184), 0LL);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
