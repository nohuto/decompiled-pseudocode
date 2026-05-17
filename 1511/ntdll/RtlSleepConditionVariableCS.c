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

__int64 __fastcall RtlSleepConditionVariableCS(signed __int64 *a1, __int64 a2, __int64 a3)
{
  signed __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  signed __int64 v8; // rax
  int i; // eax
  unsigned int v10; // ebx
  unsigned __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  void *UniqueThread; // [rsp+38h] [rbp-30h]
  signed __int32 v17; // [rsp+44h] [rbp-24h] BYREF
  __int64 v18; // [rsp+48h] [rbp-20h]

  _m_prefetchw(a1);
  v6 = *a1;
  v15 = 0LL;
  v18 = 0LL;
  v17 = 2;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  while ( 1 )
  {
    v7 = (unsigned __int64)&v13 | v6 & 0xF;
    v13 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (v6 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      v14 = 0LL;
      v7 |= 8uLL;
    }
    else
    {
      v14 = &v13;
    }
    v8 = _InterlockedCompareExchange64(a1, v7, v6);
    if ( v6 == v8 )
      break;
    v6 = v8;
  }
  RtlLeaveCriticalSection(a2);
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)v7) & 8) != 0 )
    RtlpOptimizeConditionVariableWaitList(a1, v7);
  for ( i = ConditionVariableSpinCount; i; --i )
  {
    if ( (v17 & 2) == 0 )
      break;
    _mm_pause();
  }
  v10 = 0;
  if ( _interlockedbittestandreset(&v17, 1u) )
  {
    v10 = NtWaitForAlertByThreadId(a2, a3);
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
  if ( !(unsigned __int8)RtlpWakeSingle(a1, &v13) )
  {
    do
      NtWaitForAlertByThreadId(a2, 0LL);
    while ( (v17 & 4) == 0 );
    goto LABEL_17;
  }
  if ( v10 != 258 )
LABEL_17:
    v10 = 0;
  RtlEnterCriticalSection(a2);
  return v10;
}
