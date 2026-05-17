/*
 * XREFs of RtlpWakeSingle @ 0x180067BFC
 * Callers:
 *     RtlSleepConditionVariableCS @ 0x180067A90 (RtlSleepConditionVariableCS.c)
 *     RtlSleepConditionVariableSRW @ 0x180068100 (RtlSleepConditionVariableSRW.c)
 * Callees:
 *     RtlpWakeConditionVariable @ 0x180068474 (RtlpWakeConditionVariable.c)
 */

bool __fastcall RtlpWakeSingle(volatile signed __int64 *a1, __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v5; // rtt
  signed __int64 v7; // rdx
  signed __int64 v8; // rtt
  unsigned __int64 v9; // rcx
  signed __int64 v10; // rax
  unsigned __int64 v11; // r11
  _QWORD *v12; // r9
  char v13; // bl
  unsigned __int64 v14; // r8
  signed __int64 v15; // rtt

  v2 = *a1;
  do
  {
    while ( 1 )
    {
      if ( !v2 || (v2 & 7) == 7 )
        return 0;
      if ( (v2 & 8) == 0 )
        break;
      v5 = v2;
      v2 = _InterlockedCompareExchange64(a1, v2 | 7, v2);
      if ( v5 == v2 )
        return 0;
    }
    v7 = v2 + 8;
    v8 = v2;
    v2 = _InterlockedCompareExchange64(a1, v2 + 8, v2);
  }
  while ( v8 != v2 );
  v9 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
  v10 = v7;
  v11 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = 0LL;
  v13 = 0;
  if ( (v7 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
    goto LABEL_26;
  do
  {
    if ( v9 == a2 )
    {
      v14 = *(_QWORD *)v9;
      if ( v12 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(v9 + 36), 2u);
        *v12 = v14;
        v13 = 1;
        if ( v14 )
          *(_QWORD *)(v14 + 16) = v12;
        v9 = v14;
      }
      else
      {
        v7 = *(_QWORD *)v9;
        if ( v14 )
          v7 = v14 ^ ((unsigned __int8)v10 ^ (unsigned __int8)v14) & 0xF;
        v15 = v10;
        v10 = _InterlockedCompareExchange64(a1, v7, v10);
        if ( v15 == v10 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(v9 + 36), 2u);
          v13 = 1;
          v10 = v7;
          if ( !v14 )
            return 1;
        }
        else
        {
          v7 = v10;
        }
        v9 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
        v11 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
        v12 = 0LL;
      }
    }
    else
    {
      *(_QWORD *)(v9 + 16) = v12;
      v12 = (_QWORD *)v9;
      v9 = *(_QWORD *)v9;
    }
  }
  while ( v9 );
  if ( v11 )
    *(_QWORD *)(v11 + 8) = v12;
  if ( !v13 )
LABEL_26:
    _InterlockedOr((volatile signed __int32 *)(a2 + 36), 2u);
  RtlpWakeConditionVariable(a1, v7, 0LL, v12);
  if ( !v13 )
    return _interlockedbittestandreset((volatile signed __int32 *)(a2 + 36), 1u) == 0;
  return v13;
}
