/*
 * XREFs of RtlpWakeConditionVariable @ 0x180068474
 * Callers:
 *     RtlpWakeSingle @ 0x180067BFC (RtlpWakeSingle.c)
 *     RtlpOptimizeConditionVariableWaitList @ 0x1800682A8 (RtlpOptimizeConditionVariableWaitList.c)
 *     RtlWakeConditionVariable @ 0x180068440 (RtlWakeConditionVariable.c)
 * Callees:
 *     RtlpQueueWaitBlockToSRWLock @ 0x1800685AC (RtlpQueueWaitBlockToSRWLock.c)
 *     ZwAlertThreadByThreadId @ 0x1800A5E70 (ZwAlertThreadByThreadId.c)
 */

unsigned __int64 __fastcall RtlpWakeConditionVariable(volatile signed __int64 *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 *v3; // r11
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned int v8; // ebx
  bool i; // zf
  _QWORD *v10; // r9
  unsigned int v11; // r8d
  _QWORD *v12; // rax
  unsigned __int64 *v13; // rcx
  unsigned __int64 *v14; // rax
  signed __int64 v15; // rtt
  unsigned __int64 v16; // rtt
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rdi
  signed __int64 v19; // [rsp+48h] [rbp+10h]
  volatile signed __int32 *v20; // [rsp+58h] [rbp+20h] BYREF

  v19 = a2;
  v3 = (unsigned __int64 *)&v20;
  result = a2;
  v20 = 0LL;
  v6 = a2 & 0xFFFFFFFFFFFFFFF0uLL;
  v8 = 0;
  for ( i = (result & 7) == 7; ; i = (result & 7) == 7 )
  {
    v10 = (_QWORD *)v6;
    if ( i )
      break;
    v11 = a3 + (result & 7);
    if ( !*(_QWORD *)(v6 + 8) )
    {
      do
      {
        v12 = v10;
        v10 = (_QWORD *)*v10;
        v10[2] = v12;
      }
      while ( !v10[1] );
      result = v19;
    }
    v13 = (unsigned __int64 *)v10[1];
    if ( v11 <= v8 )
      goto LABEL_12;
    do
    {
      v14 = (unsigned __int64 *)v13[2];
      if ( !v14 )
        break;
      *v3 = (unsigned __int64)v13;
      ++v8;
      *v13 = 0LL;
      v3 = v13;
      *(_QWORD *)(v6 + 8) = v14;
      v13 = v14;
      *v14 = 0LL;
    }
    while ( v11 > v8 );
    result = v19;
    if ( v11 <= v8 )
    {
LABEL_12:
      v16 = result;
      result = _InterlockedCompareExchange64(a1, v6, result);
      if ( v16 == result )
        goto LABEL_15;
    }
    else
    {
      v15 = v19;
      result = _InterlockedCompareExchange64(a1, 0LL, v19);
      if ( v15 == result )
      {
        *v3 = (unsigned __int64)v13;
        *v13 = 0LL;
        goto LABEL_15;
      }
    }
    v19 = result;
    v6 = result & 0xFFFFFFFFFFFFFFF0uLL;
  }
  result = _InterlockedExchange64(a1, 0LL) & 0xFFFFFFFFFFFFFFF0uLL;
  *v3 = result;
LABEL_15:
  v17 = v20;
  if ( v20 )
  {
    do
    {
      v18 = *(volatile signed __int32 **)v17;
      if ( !_interlockedbittestandreset(v17 + 9, 1u) )
      {
        if ( !*((_QWORD *)v20 + 5) || (result = RtlpQueueWaitBlockToSRWLock(), !(_BYTE)result) )
        {
          _InterlockedOr(v17 + 9, 4u);
          result = ZwAlertThreadByThreadId(*((_QWORD *)v20 + 3));
        }
      }
      v17 = v18;
      v20 = v18;
    }
    while ( v18 );
  }
  return result;
}
