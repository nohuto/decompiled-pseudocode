/*
 * XREFs of RtlpOptimizeConditionVariableWaitList @ 0x1800682A8
 * Callers:
 *     RtlSleepConditionVariableCS @ 0x180067A90 (RtlSleepConditionVariableCS.c)
 *     RtlSleepConditionVariableSRW @ 0x180068100 (RtlSleepConditionVariableSRW.c)
 * Callees:
 *     RtlpWakeConditionVariable @ 0x180068474 (RtlpWakeConditionVariable.c)
 */

__int64 __fastcall RtlpOptimizeConditionVariableWaitList(
        volatile signed __int64 *a1,
        signed __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // rdx
  _QWORD *v5; // r8
  _QWORD *v6; // rax
  __int64 result; // rax
  signed __int64 v8; // rtt
  signed __int64 v9; // [rsp+38h] [rbp+10h]

  v9 = a2;
  while ( 1 )
  {
    v4 = a2 & 0xFFFFFFFFFFFFFFF0uLL;
    v5 = (_QWORD *)v4;
    if ( !*(_QWORD *)(v4 + 8) )
    {
      do
      {
        v6 = v5;
        v5 = (_QWORD *)*v5;
        v5[2] = v6;
      }
      while ( !v5[1] );
    }
    *(_QWORD *)(v4 + 8) = v5[1];
    v8 = v9;
    result = _InterlockedCompareExchange64(a1, v4, v9);
    a2 = result;
    if ( v8 == result )
      break;
    v9 = result;
    if ( (result & 7) != 0 )
      return RtlpWakeConditionVariable(a1, result, 0LL, a4);
  }
  return result;
}
