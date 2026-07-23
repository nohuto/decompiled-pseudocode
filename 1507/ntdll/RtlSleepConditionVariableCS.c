/*
 * XREFs of RtlSleepConditionVariableCS @ 0x1800660D0
 * Callers:
 *     EtwpSwitchBuffer @ 0x180011254 (EtwpSwitchBuffer.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpWakeSingle @ 0x18006621C (RtlpWakeSingle.c)
 *     RtlpOptimizeConditionVariableWaitList @ 0x1800662E4 (RtlpOptimizeConditionVariableWaitList.c)
 *     NtWaitForAlertByThreadId @ 0x180095430 (NtWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl RtlSleepConditionVariableCS(
        PRTL_CONDITION_VARIABLE ConditionVariable,
        PRTL_CRITICAL_SECTION CriticalSection,
        PLARGE_INTEGER Timeout)
{
  signed __int64 Ptr; // rdi
  NTSTATUS v7; // esi
  unsigned __int64 v8; // rbx
  signed __int64 v9; // rax
  int i; // ecx
  NTSTATUS v11; // ebx
  unsigned __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 *v15; // [rsp+28h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-20h]
  void *UniqueThread; // [rsp+38h] [rbp-18h]
  signed __int32 v18; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v19; // [rsp+48h] [rbp-8h]

  _m_prefetchw(ConditionVariable);
  Ptr = (signed __int64)ConditionVariable->Ptr;
  v7 = 0;
  v16 = 0LL;
  v19 = 0LL;
  v18 = 2;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  while ( 1 )
  {
    v8 = (unsigned __int64)&v14 | Ptr & 0xF;
    v14 = Ptr & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (Ptr & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      v15 = 0LL;
      v8 |= 8uLL;
    }
    else
    {
      v15 = &v14;
    }
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v8, Ptr);
    if ( Ptr == v9 )
      break;
    Ptr = v9;
  }
  RtlLeaveCriticalSection(CriticalSection);
  if ( (((unsigned __int8)Ptr ^ (unsigned __int8)v8) & 8) != 0 )
    RtlpOptimizeConditionVariableWaitList(ConditionVariable, v8);
  for ( i = ConditionVariableSpinCount; i; --i )
  {
    if ( (v18 & 2) == 0 )
      break;
    _mm_pause();
  }
  v11 = 0;
  if ( _interlockedbittestandreset(&v18, 1u) )
    v11 = NtWaitForAlertByThreadId(CriticalSection, Timeout);
  else
    _InterlockedOr(&v18, 4u);
  if ( v11 == 258 || (v18 & 4) == 0 )
  {
    if ( (unsigned __int8)RtlpWakeSingle(ConditionVariable, &v14) )
    {
      if ( v11 != 258 )
        v11 = 0;
      v7 = v11;
    }
    else
    {
      do
        NtWaitForAlertByThreadId(CriticalSection, 0LL);
      while ( (v18 & 4) == 0 );
    }
  }
  RtlEnterCriticalSection(CriticalSection);
  return v7;
}
