/*
 * XREFs of DpiCorrectPowerAction @ 0x1C000D540
 * Callers:
 *     DpiPdoDispatchPower @ 0x1C000D340 (DpiPdoDispatchPower.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C00C9E50 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleSystemPower @ 0x1C00CA470 (DpiFdoHandleSystemPower.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCorrectPowerAction(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  _QWORD *v6; // rax
  __int64 v7; // rax

  v3 = a3;
  if ( a3 == 3 )
  {
    if ( a2 >= 2 )
    {
      if ( a2 <= 4 )
      {
        v3 = 2;
      }
      else if ( a2 != 5 )
      {
        goto LABEL_6;
      }
      v7 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v7 + 24) = DpiCorrectPowerAction;
      *(_QWORD *)(v7 + 32) = a1;
      WdLogEvent5_WdEvent(v7);
      return v3;
    }
LABEL_6:
    v6 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v6[4] = 0LL;
    v6[3] = DpiCorrectPowerAction;
    v6[5] = a1;
    WdLogEvent5_WdError(v6);
  }
  return v3;
}
