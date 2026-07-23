/*
 * XREFs of RtlpOptimizeConditionVariableWaitList @ 0x180062D88
 * Callers:
 *     RtlSleepConditionVariableSRW @ 0x180062950 (RtlSleepConditionVariableSRW.c)
 *     RtlSleepConditionVariableCS @ 0x180062AE0 (RtlSleepConditionVariableCS.c)
 * Callees:
 *     RtlpWakeConditionVariable @ 0x180062F54 (RtlpWakeConditionVariable.c)
 */

__int64 __fastcall RtlpOptimizeConditionVariableWaitList(volatile signed __int64 *a1, signed __int64 a2)
{
  unsigned __int64 v2; // rdx
  _QWORD *v3; // r8
  _QWORD *v4; // rax
  __int64 result; // rax
  signed __int64 v6; // rtt
  signed __int64 v7; // [rsp+38h] [rbp+10h]

  v7 = a2;
  while ( 1 )
  {
    v2 = a2 & 0xFFFFFFFFFFFFFFF0uLL;
    v3 = (_QWORD *)v2;
    if ( !*(_QWORD *)(v2 + 8) )
    {
      do
      {
        v4 = v3;
        v3 = (_QWORD *)*v3;
        v3[2] = v4;
      }
      while ( !v3[1] );
    }
    *(_QWORD *)(v2 + 8) = v3[1];
    v6 = v7;
    result = _InterlockedCompareExchange64(a1, v2, v7);
    a2 = result;
    if ( v6 == result )
      break;
    v7 = result;
    if ( (result & 7) != 0 )
      return RtlpWakeConditionVariable(a1, result, 0LL);
  }
  return result;
}
