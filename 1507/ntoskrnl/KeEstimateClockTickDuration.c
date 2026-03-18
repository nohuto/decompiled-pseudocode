/*
 * XREFs of KeEstimateClockTickDuration @ 0x1401615C0
 * Callers:
 *     PpmEstimateIdleDuration @ 0x140161464 (PpmEstimateIdleDuration.c)
 * Callees:
 *     KiGetNextTimerExpirationDueTime @ 0x1400AC470 (KiGetNextTimerExpirationDueTime.c)
 */

int *__fastcall KeEstimateClockTickDuration(__int64 a1, __int64 a2, char a3, __int64 a4, _QWORD *a5, int *a6)
{
  int v6; // edi
  bool v7; // zf
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  int *result; // rax
  unsigned __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v6 = 2;
  v7 = *(_BYTE *)(a1 + 33) == 0;
  v8 = a4;
  v9 = KiClockTimerNextTickTime;
  v12 = 2;
  if ( v7 )
  {
    LOBYTE(a4) = a3;
    KiGetNextTimerExpirationDueTime(a1, 0LL, v8, a4, v11, &v12);
    if ( v9 <= v11[0] )
      v9 = v11[0];
    goto LABEL_4;
  }
  if ( (_BYTE)a2 )
  {
    if ( (_BYTE)KiDynamicTickDisableReason || KiClockState )
      LOBYTE(a2) = 0;
    if ( (_BYTE)a2 )
    {
      LOBYTE(a4) = a3;
      LOBYTE(a2) = 1;
      KiGetNextTimerExpirationDueTime(a1, a2, v8, a4, v11, &v12);
      if ( v8 + (unsigned int)KiLastRequestedTimeIncrement < v11[0] )
      {
        v9 = v11[0];
LABEL_4:
        v6 = v12;
      }
    }
  }
  if ( v9 == -1LL )
  {
    *a5 = -1LL;
  }
  else if ( v9 <= v8 )
  {
    *a5 = 0LL;
  }
  else
  {
    *a5 = v9 - v8;
  }
  result = a6;
  *a6 = v6;
  return result;
}
