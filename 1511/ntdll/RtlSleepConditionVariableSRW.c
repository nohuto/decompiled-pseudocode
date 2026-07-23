/*
 * XREFs of RtlSleepConditionVariableSRW @ 0x180068100
 * Callers:
 *     TpTrimPools @ 0x180067D30 (TpTrimPools.c)
 *     _LdrpInitialize @ 0x180076DB4 (_LdrpInitialize.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpWakeSingle @ 0x180067BFC (RtlpWakeSingle.c)
 *     RtlpOptimizeConditionVariableWaitList @ 0x1800682A8 (RtlpOptimizeConditionVariableWaitList.c)
 *     NtWaitForAlertByThreadId @ 0x1800A8770 (NtWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl RtlSleepConditionVariableSRW(
        PRTL_CONDITION_VARIABLE ConditionVariable,
        PRTL_SRWLOCK SRWLock,
        PLARGE_INTEGER Timeout,
        ULONG Flags)
{
  signed __int64 Ptr; // rdi
  ULONG v8; // r14d
  signed __int32 v9; // eax
  unsigned __int64 v10; // rbx
  signed __int64 v11; // rax
  int i; // ecx
  NTSTATUS v13; // ebx
  unsigned __int64 v16; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 *v17; // [rsp+28h] [rbp-28h]
  __int64 v18; // [rsp+30h] [rbp-20h]
  void *UniqueThread; // [rsp+38h] [rbp-18h]
  signed __int32 v20; // [rsp+44h] [rbp-Ch] BYREF
  PRTL_SRWLOCK v21; // [rsp+48h] [rbp-8h]

  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  _m_prefetchw(ConditionVariable);
  Ptr = (signed __int64)ConditionVariable->Ptr;
  v20 = 2;
  v8 = Flags & 1;
  v18 = 0LL;
  v9 = 2;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  if ( (Flags & 1) == 0 )
    v9 = 3;
  v21 = SRWLock;
  v20 = v9;
  while ( 1 )
  {
    v10 = (unsigned __int64)&v16 | Ptr & 0xF;
    v16 = Ptr & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (Ptr & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      v17 = 0LL;
      v10 |= 8uLL;
    }
    else
    {
      v17 = &v16;
    }
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v10, Ptr);
    if ( Ptr == v11 )
      break;
    Ptr = v11;
  }
  if ( (Flags & 1) != 0 )
    RtlReleaseSRWLockShared(SRWLock);
  else
    RtlReleaseSRWLockExclusive(SRWLock);
  if ( (((unsigned __int8)Ptr ^ (unsigned __int8)v10) & 8) != 0 )
    RtlpOptimizeConditionVariableWaitList(ConditionVariable, v10);
  for ( i = ConditionVariableSpinCount; i; --i )
  {
    if ( (v20 & 2) == 0 )
      break;
    _mm_pause();
  }
  v13 = 0;
  if ( _interlockedbittestandreset(&v20, 1u) )
    v13 = NtWaitForAlertByThreadId(SRWLock, Timeout);
  else
    _InterlockedOr(&v20, 4u);
  if ( v13 == 258 || (v20 & 4) == 0 )
  {
    if ( RtlpWakeSingle((volatile signed __int64 *)ConditionVariable, (__int64)&v16) )
    {
      if ( v13 != 258 )
        v13 = 0;
      goto LABEL_20;
    }
    do
      NtWaitForAlertByThreadId(SRWLock, 0LL);
    while ( (v20 & 4) == 0 );
  }
  v13 = 0;
LABEL_20:
  if ( v8 )
    RtlAcquireSRWLockShared(SRWLock);
  else
    RtlAcquireSRWLockExclusive(SRWLock);
  return v13;
}
