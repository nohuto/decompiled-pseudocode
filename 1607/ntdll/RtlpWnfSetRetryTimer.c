/*
 * XREFs of RtlpWnfSetRetryTimer @ 0x1800D9EEC
 * Callers:
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800D9958 (RtlpWnfCalculateAndSetNextTimer.c)
 * Callees:
 *     TpSetTimerEx @ 0x18003C000 (TpSetTimerEx.c)
 */

__int64 __fastcall RtlpWnfSetRetryTimer(unsigned __int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  result = qword_1801530A0;
  if ( !*(_QWORD *)(qword_1801530A0 + 88) || *(_QWORD *)(qword_1801530A0 + 88) > a1 )
  {
    v3 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
    if ( v3 <= a1 )
      v4 = a1 - v3;
    else
      v4 = 500000LL;
    v5 = qword_1801530A0;
    *(_QWORD *)(qword_1801530A0 + 88) = v4;
    v6 = *(_QWORD *)(v5 + 80);
    v7 = -v4;
    return TpSetTimerEx(v6, (__int64)&v7, 0, 50);
  }
  return result;
}
