/*
 * XREFs of RtlpOptimizeConditionVariableWaitList @ 0x1800662E4
 * Callers:
 *     RtlSleepConditionVariableSRW @ 0x180065F50 (RtlSleepConditionVariableSRW.c)
 *     RtlSleepConditionVariableCS @ 0x1800660D0 (RtlSleepConditionVariableCS.c)
 * Callees:
 *     RtlpWakeConditionVariable @ 0x1800638F4 (RtlpWakeConditionVariable.c)
 */

int __fastcall RtlpOptimizeConditionVariableWaitList(volatile signed __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  _QWORD *v3; // r8
  _QWORD *v4; // rax
  unsigned __int64 v5; // rax
  signed __int64 v6; // rtt
  signed __int64 v8; // [rsp+38h] [rbp+10h]

  v8 = a2;
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
    v6 = v8;
    v5 = _InterlockedCompareExchange64(a1, v2, v8);
    a2 = v5;
    if ( v6 == v5 )
      break;
    v8 = v5;
    if ( (v5 & 7) != 0 )
    {
      LODWORD(v5) = RtlpWakeConditionVariable(a1, v5, 0);
      return v5;
    }
  }
  return v5;
}
