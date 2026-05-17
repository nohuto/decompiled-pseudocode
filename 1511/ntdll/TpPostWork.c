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

__int64 __fastcall TpPostWork(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4)
{
  _PEB_LDR_DATA *v4; // rbx
  int v5; // eax
  signed __int32 Flink; // edx
  int v7; // r8d
  bool v8; // zf
  __int64 result; // rax

  v4 = Ldr;
  if ( !Ldr )
    return TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  v5 = *(_DWORD *)&Ldr[1].ShutdownInProgress;
  if ( (v5 & 0x10000) != 0 )
    return TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  if ( (v5 & 0x20000) != 0 )
    return TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  if ( Ldr->SsHandle != TppWorkpCleanupGroupMemberVFuncs )
    return TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  TppBarrierAdjust((unsigned __int64 *)&v4->InInitializationOrderModuleList.Blink, 1, 0);
  _m_prefetchw(&v4[2].InInitializationOrderModuleList);
  Flink = (signed __int32)v4[2].InInitializationOrderModuleList.Flink;
  do
  {
    v7 = Flink & 1;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&v4[2].InInitializationOrderModuleList,
                             (Flink & 0xFFFFFFFE) + 2,
                             Flink);
    v8 = Flink == (_DWORD)result;
    Flink = result;
  }
  while ( !v8 );
  if ( v7 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)v4, 2u);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackEnqueue(
        (__int64)v4[1].InInitializationOrderModuleList.Flink,
        (__int64)&v4[2].InLoadOrderModuleList,
        (__int64)v4->ShutdownThreadId,
        *(_QWORD *)&v4[1].Length,
        (__int64)v4[1].InLoadOrderModuleList.Flink);
    TpPostTask(
      (__int64)&v4[2].InLoadOrderModuleList,
      (__int64)v4[1].InInitializationOrderModuleList.Flink,
      LODWORD(v4[2].SsHandle),
      0LL);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(_PEB_LDR_DATA *))v4->SsHandle)(v4);
  }
  return result;
}
