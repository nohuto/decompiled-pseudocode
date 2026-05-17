/*
 * XREFs of TpPostWork @ 0x18003CEF0
 * Callers:
 *     LdrpQueueWork @ 0x18003C7F0 (LdrpQueueWork.c)
 * Callees:
 *     RtlpTpETWCallbackEnqueue @ 0x180001338 (RtlpTpETWCallbackEnqueue.c)
 *     TpPostTask @ 0x18003D028 (TpPostTask.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x18003D220 (RtlGetThreadWorkOnBehalfTicket.c)
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpPostWork(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4)
{
  _PEB_LDR_DATA *v4; // rbx
  int ShutdownThreadId; // eax
  signed __int32 Blink; // edx
  int v7; // r9d
  bool v8; // zf
  __int64 result; // rax

  v4 = Ldr;
  if ( !Ldr )
    return TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  ShutdownThreadId = (int)Ldr[1].ShutdownThreadId;
  if ( (ShutdownThreadId & 0x10000) != 0 )
    return TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  if ( (ShutdownThreadId & 0x20000) != 0 )
    return TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  if ( Ldr->SsHandle != TppWorkpCleanupGroupMemberVFuncs )
    return TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  TppBarrierAdjust(&v4->InInitializationOrderModuleList.Blink, 1LL, 0LL, a4);
  _m_prefetchw(&v4[2].InInitializationOrderModuleList.Blink);
  Blink = (signed __int32)v4[2].InInitializationOrderModuleList.Blink;
  do
  {
    v7 = Blink & 1;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&v4[2].InInitializationOrderModuleList.Blink,
                             (Blink & 0xFFFFFFFE) + 2,
                             Blink);
    v8 = Blink == (_DWORD)result;
    Blink = result;
  }
  while ( !v8 );
  if ( v7 )
  {
    RtlGetThreadWorkOnBehalfTicket(
      &v4[1].InMemoryOrderModuleList.Blink,
      1LL,
      (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v4, 2u));
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackEnqueue(
        (__int64)v4[1].InInitializationOrderModuleList.Blink,
        (__int64)&v4[2].InLoadOrderModuleList.Blink,
        (__int64)v4->ShutdownThreadId,
        *(_QWORD *)&v4[1].Length,
        (__int64)v4[1].InLoadOrderModuleList.Flink);
    TpPostTask(
      &v4[2].InLoadOrderModuleList.Blink,
      v4[1].InInitializationOrderModuleList.Blink,
      LODWORD(v4[2].InLoadOrderModuleList.Flink),
      0LL);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(_PEB_LDR_DATA *))v4->SsHandle)(v4);
  }
  return result;
}
