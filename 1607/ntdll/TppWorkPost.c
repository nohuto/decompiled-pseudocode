/*
 * XREFs of TppWorkPost @ 0x18003CDE4
 * Callers:
 *     TppSingleTimerExpiration @ 0x18003CC18 (TppSingleTimerExpiration.c)
 *     TpSimpleTryPost @ 0x18007A0E0 (TpSimpleTryPost.c)
 * Callees:
 *     RtlpTpETWCallbackEnqueue @ 0x180001338 (RtlpTpETWCallbackEnqueue.c)
 *     TpPostTask @ 0x18003D018 (TpPostTask.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x18003D210 (RtlGetThreadWorkOnBehalfTicket.c)
 *     TppBarrierAdjust @ 0x180063E74 (TppBarrierAdjust.c)
 */

__int64 __fastcall TppWorkPost(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int32 v5; // edx
  int v6; // r9d
  bool v7; // zf
  __int64 result; // rax

  TppBarrierAdjust(a1 + 56, 1LL, 0LL, a4);
  _m_prefetchw((const void *)(a1 + 232));
  v5 = *(_DWORD *)(a1 + 232);
  do
  {
    v6 = v5 & 1;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 232), (v5 & 0xFFFFFFFE) + 2, v5);
    v7 = v5 == (_DWORD)result;
    v5 = result;
  }
  while ( !v7 );
  if ( v6 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a1, 2u);
    RtlGetThreadWorkOnBehalfTicket((PVOID)(a1 + 128));
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackEnqueue(
        *(_QWORD *)(a1 + 144),
        a1 + 200,
        *(_QWORD *)(a1 + 80),
        *(_QWORD *)(a1 + 88),
        *(_QWORD *)(a1 + 104));
    TpPostTask(a1 + 200, *(_QWORD *)(a1 + 144), *(unsigned int *)(a1 + 192), 0LL);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
