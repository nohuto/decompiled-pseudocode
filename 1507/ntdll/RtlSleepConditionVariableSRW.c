/*
 * XREFs of RtlSleepConditionVariableSRW @ 0x180065F50
 * Callers:
 *     TpTrimPools @ 0x180065B80 (TpTrimPools.c)
 *     _LdrpInitialize @ 0x18006BE24 (_LdrpInitialize.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWakeSingle @ 0x18006621C (RtlpWakeSingle.c)
 *     RtlpOptimizeConditionVariableWaitList @ 0x1800662E4 (RtlpOptimizeConditionVariableWaitList.c)
 *     NtWaitForAlertByThreadId @ 0x180095430 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlSleepConditionVariableSRW(signed __int64 *a1, volatile signed __int64 *a2, __int64 a3, int a4)
{
  signed __int64 v7; // rdi
  int v8; // r14d
  signed __int32 v9; // eax
  unsigned __int64 v10; // rbx
  signed __int64 v11; // rax
  char *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int i; // ecx
  unsigned int v16; // ebx
  unsigned __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 *v20; // [rsp+28h] [rbp-28h]
  __int64 v21; // [rsp+30h] [rbp-20h]
  void *UniqueThread; // [rsp+38h] [rbp-18h]
  signed __int32 v23; // [rsp+44h] [rbp-Ch] BYREF
  volatile signed __int64 *v24; // [rsp+48h] [rbp-8h]

  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  _m_prefetchw(a1);
  v7 = *a1;
  v23 = 2;
  v8 = a4 & 1;
  v21 = 0LL;
  v9 = 2;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  if ( (a4 & 1) == 0 )
    v9 = 3;
  v24 = a2;
  v23 = v9;
  while ( 1 )
  {
    v10 = (unsigned __int64)&v19 | v7 & 0xF;
    v19 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (v7 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      v20 = 0LL;
      v10 |= 8uLL;
    }
    else
    {
      v20 = &v19;
    }
    v11 = _InterlockedCompareExchange64(a1, v10, v7);
    if ( v7 == v11 )
      break;
    v7 = v11;
  }
  if ( (a4 & 1) != 0 )
    RtlReleaseSRWLockShared(a2);
  else
    RtlReleaseSRWLockExclusive(a2);
  if ( (((unsigned __int8)v7 ^ (unsigned __int8)v10) & 8) != 0 )
    RtlpOptimizeConditionVariableWaitList(a1, v10);
  for ( i = ConditionVariableSpinCount; i; --i )
  {
    if ( (v23 & 2) == 0 )
      break;
    _mm_pause();
  }
  v16 = 0;
  if ( _interlockedbittestandreset(&v23, 1u) )
    v16 = NtWaitForAlertByThreadId(a2, a3);
  else
    _InterlockedOr(&v23, 4u);
  if ( v16 == 258 || (v23 & 4) == 0 )
  {
    if ( (unsigned __int8)RtlpWakeSingle(a1, &v19) )
    {
      if ( v16 != 258 )
        v16 = 0;
      goto LABEL_20;
    }
    do
      NtWaitForAlertByThreadId(a2, 0LL);
    while ( (v23 & 4) == 0 );
  }
  v16 = 0;
LABEL_20:
  if ( v8 )
    RtlAcquireSRWLockShared(a2, v12, v13, v14);
  else
    RtlAcquireSRWLockExclusive(a2, v12, v13, v14);
  return v16;
}
