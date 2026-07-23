/*
 * XREFs of KeEstimateClockTickDuration @ 0x14013C120
 * Callers:
 *     PpmEstimateIdleDuration @ 0x14013BFC0 (PpmEstimateIdleDuration.c)
 * Callees:
 *     KiGetNextTimerExpirationDueTime @ 0x14009C8B8 (KiGetNextTimerExpirationDueTime.c)
 */

int *__fastcall KeEstimateClockTickDuration(__int64 a1, char a2, char a3, unsigned __int64 a4, _QWORD *a5, int *a6)
{
  int v6; // edi
  bool v7; // zf
  unsigned __int64 v9; // rbx
  int *result; // rax
  unsigned __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v6 = 2;
  v7 = *(_BYTE *)(a1 + 33) == 0;
  v9 = KiClockTimerNextTickTime;
  v12 = 2;
  if ( v7 )
  {
    KiGetNextTimerExpirationDueTime(a1, 0, a4, a3, v11, &v12);
    if ( v9 <= v11[0] )
      v9 = v11[0];
    goto LABEL_4;
  }
  if ( a2 )
  {
    if ( (_BYTE)KiDynamicTickDisableReason || KiClockState )
      a2 = 0;
    if ( a2 )
    {
      KiGetNextTimerExpirationDueTime(a1, 1, a4, a3, v11, &v12);
      if ( a4 + (unsigned int)KiLastRequestedTimeIncrement < v11[0] )
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
  else if ( v9 <= a4 )
  {
    *a5 = 0LL;
  }
  else
  {
    *a5 = v9 - a4;
  }
  result = a6;
  *a6 = v6;
  return result;
}
