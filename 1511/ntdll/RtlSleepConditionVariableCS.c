/*
 * XREFs of RtlSleepConditionVariableCS @ 0x180067A90
 * Callers:
 *     EtwpSwitchBuffer @ 0x18004B028 (EtwpSwitchBuffer.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpWakeSingle @ 0x180067BFC (RtlpWakeSingle.c)
 *     RtlpOptimizeConditionVariableWaitList @ 0x1800682A8 (RtlpOptimizeConditionVariableWaitList.c)
 *     NtWaitForAlertByThreadId @ 0x1800A8770 (NtWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl RtlSleepConditionVariableCS(
        PRTL_CONDITION_VARIABLE ConditionVariable,
        PRTL_CRITICAL_SECTION CriticalSection,
        PLARGE_INTEGER Timeout)
{
  signed __int64 Ptr; // rdi
  unsigned __int64 v7; // rbx
  signed __int64 v8; // rax
  int i; // eax
  NTSTATUS v10; // ebx
  unsigned __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  void *UniqueThread; // [rsp+38h] [rbp-30h]
  signed __int32 v17; // [rsp+44h] [rbp-24h] BYREF
  __int64 v18; // [rsp+48h] [rbp-20h]

  _m_prefetchw(ConditionVariable);
  Ptr = (signed __int64)ConditionVariable->Ptr;
  v15 = 0LL;
  v18 = 0LL;
  v17 = 2;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  while ( 1 )
  {
    v7 = (unsigned __int64)&v13 | Ptr & 0xF;
    v13 = Ptr & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (Ptr & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      v14 = 0LL;
      v7 |= 8uLL;
    }
    else
    {
      v14 = &v13;
    }
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v7, Ptr);
    if ( Ptr == v8 )
      break;
    Ptr = v8;
  }
  RtlLeaveCriticalSection(CriticalSection);
  if ( (((unsigned __int8)Ptr ^ (unsigned __int8)v7) & 8) != 0 )
    RtlpOptimizeConditionVariableWaitList(ConditionVariable, v7);
  for ( i = ConditionVariableSpinCount; i; --i )
  {
    if ( (v17 & 2) == 0 )
      break;
    _mm_pause();
  }
  v10 = 0;
  if ( _interlockedbittestandreset(&v17, 1u) )
  {
    v10 = NtWaitForAlertByThreadId(CriticalSection, Timeout);
    if ( v10 == 258 )
      goto LABEL_12;
  }
  else
  {
    _InterlockedOr(&v17, 4u);
  }
  if ( (v17 & 4) != 0 )
    goto LABEL_17;
LABEL_12:
  if ( !(unsigned __int8)RtlpWakeSingle(ConditionVariable, &v13) )
  {
    do
      NtWaitForAlertByThreadId(CriticalSection, 0LL);
    while ( (v17 & 4) == 0 );
    goto LABEL_17;
  }
  if ( v10 != 258 )
LABEL_17:
    v10 = 0;
  RtlEnterCriticalSection(CriticalSection);
  return v10;
}
