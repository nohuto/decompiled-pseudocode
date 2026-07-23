/*
 * XREFs of RtlpWakeSingle @ 0x18006621C
 * Callers:
 *     RtlSleepConditionVariableSRW @ 0x180065F50 (RtlSleepConditionVariableSRW.c)
 *     RtlSleepConditionVariableCS @ 0x1800660D0 (RtlSleepConditionVariableCS.c)
 * Callees:
 *     RtlpWakeConditionVariable @ 0x1800638F4 (RtlpWakeConditionVariable.c)
 */

bool __fastcall RtlpWakeSingle(volatile signed __int64 *a1, __int64 a2)
{
  signed __int64 v2; // rax
  unsigned __int64 v5; // rdx
  signed __int64 v6; // rtt
  unsigned __int64 v7; // rcx
  signed __int64 v8; // rax
  unsigned __int64 v9; // r11
  _QWORD *v10; // r9
  char v11; // bl
  unsigned __int64 v12; // r8
  signed __int64 v13; // rtt
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
      v15 = v2;
      v2 = _InterlockedCompareExchange64(a1, v2 | 7, v2);
      if ( v15 == v2 )
        return 0;
    }
    v5 = v2 + 8;
    v6 = v2;
    v2 = _InterlockedCompareExchange64(a1, v2 + 8, v2);
  }
  while ( v6 != v2 );
  v7 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
  v8 = v5;
  v9 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
  v10 = 0LL;
  v11 = 0;
  if ( (v5 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
    goto LABEL_27;
  do
  {
    if ( v7 == a2 )
    {
      v12 = *(_QWORD *)v7;
      if ( v10 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(v7 + 36), 2u);
        *v10 = v12;
        v11 = 1;
        if ( v12 )
          *(_QWORD *)(v12 + 16) = v10;
        v7 = v12;
      }
      else
      {
        v5 = *(_QWORD *)v7;
        if ( v12 )
          v5 = v12 ^ ((unsigned __int8)v8 ^ (unsigned __int8)v12) & 0xF;
        v13 = v8;
        v8 = _InterlockedCompareExchange64(a1, v5, v8);
        if ( v13 == v8 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(v7 + 36), 2u);
          v11 = 1;
          v8 = v5;
          if ( !v12 )
            return 1;
        }
        else
        {
          v5 = v8;
        }
        v7 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
        v9 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
        v10 = 0LL;
      }
    }
    else
    {
      *(_QWORD *)(v7 + 16) = v10;
      v10 = (_QWORD *)v7;
      v7 = *(_QWORD *)v7;
    }
  }
  while ( v7 );
  if ( v9 )
    *(_QWORD *)(v9 + 8) = v10;
  if ( !v11 )
LABEL_27:
    _InterlockedOr((volatile signed __int32 *)(a2 + 36), 2u);
  RtlpWakeConditionVariable(a1, v5, 0);
  if ( !v11 )
    return _interlockedbittestandreset((volatile signed __int32 *)(a2 + 36), 1u) == 0;
  return v11;
}
