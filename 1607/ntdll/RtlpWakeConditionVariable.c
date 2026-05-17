/*
 * XREFs of RtlpWakeConditionVariable @ 0x180062F64
 * Callers:
 *     RtlpWakeSingle @ 0x180062C54 (RtlpWakeSingle.c)
 *     RtlpOptimizeConditionVariableWaitList @ 0x180062D98 (RtlpOptimizeConditionVariableWaitList.c)
 *     RtlWakeConditionVariable @ 0x180062F30 (RtlWakeConditionVariable.c)
 * Callees:
 *     RtlpQueueWaitBlockToSRWLock @ 0x1800630C4 (RtlpQueueWaitBlockToSRWLock.c)
 *     ZwAlertThreadByThreadId @ 0x1800A71D0 (ZwAlertThreadByThreadId.c)
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
  unsigned __int64 *v12; // rcx
  unsigned __int64 *v13; // rax
  signed __int64 v14; // rtt
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rdi
  unsigned __int64 v17; // rtt
  _QWORD *v18; // rax
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
        v18 = v10;
        v10 = (_QWORD *)*v10;
        v10[2] = v18;
      }
      while ( !v10[1] );
      result = v19;
    }
    v12 = (unsigned __int64 *)v10[1];
    if ( v11 <= v8 )
      goto LABEL_18;
    do
    {
      v13 = (unsigned __int64 *)v12[2];
      if ( !v13 )
        break;
      *v3 = (unsigned __int64)v12;
      ++v8;
      *v12 = 0LL;
      v3 = v12;
      *(_QWORD *)(v6 + 8) = v13;
      v12 = v13;
      *v13 = 0LL;
    }
    while ( v11 > v8 );
    result = v19;
    if ( v11 <= v8 )
    {
LABEL_18:
      v17 = result;
      result = _InterlockedCompareExchange64(a1, v6, result);
      if ( v17 == result )
        goto LABEL_9;
    }
    else
    {
      v14 = v19;
      result = _InterlockedCompareExchange64(a1, 0LL, v19);
      if ( v14 == result )
      {
        *v3 = (unsigned __int64)v12;
        *v12 = 0LL;
        goto LABEL_9;
      }
    }
    v19 = result;
    v6 = result & 0xFFFFFFFFFFFFFFF0uLL;
  }
  result = _InterlockedExchange64(a1, 0LL) & 0xFFFFFFFFFFFFFFF0uLL;
  *v3 = result;
LABEL_9:
  v15 = v20;
  if ( v20 )
  {
    do
    {
      v16 = *(volatile signed __int32 **)v15;
      if ( !_interlockedbittestandreset(v15 + 9, 1u) )
      {
        if ( !*((_QWORD *)v20 + 5) || (result = RtlpQueueWaitBlockToSRWLock(), !(_BYTE)result) )
        {
          _InterlockedOr(v15 + 9, 4u);
          result = ZwAlertThreadByThreadId(*((_QWORD *)v20 + 3));
        }
      }
      v15 = v16;
      v20 = v16;
    }
    while ( v16 );
  }
  return result;
}
