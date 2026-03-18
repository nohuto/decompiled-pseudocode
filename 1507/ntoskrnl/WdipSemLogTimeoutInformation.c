/*
 * XREFs of WdipSemLogTimeoutInformation @ 0x1406DFBF8
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x14054CD10 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     WdipSemWriteTimeoutEvent @ 0x1406DF4B8 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmEnabled @ 0x1406DF7D0 (WdipSemSqmEnabled.c)
 *     WdipSemSqmLogTimeoutDataPoints @ 0x1406DF8B4 (WdipSemSqmLogTimeoutDataPoints.c)
 */

__int64 __fastcall WdipSemLogTimeoutInformation(ULONGLONG a1, unsigned __int16 a2, const GUID *a3)
{
  NTSTATUS v6; // ebx

  v6 = 0;
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_TIMEOUT) )
  {
    v6 = WdipSemWriteTimeoutEvent(a1, a2, a3);
    if ( v6 < 0 )
      v6 = 0;
  }
  if ( WdipSemSqmEnabled() )
  {
    v6 = WdipSemSqmLogTimeoutDataPoints(a1, a2);
    if ( v6 < 0 )
      return 0;
  }
  return (unsigned int)v6;
}
