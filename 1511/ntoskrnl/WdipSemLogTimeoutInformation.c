/*
 * XREFs of WdipSemLogTimeoutInformation @ 0x14065D350
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x1404B691C (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     WdipSemWriteTimeoutEvent @ 0x14065CC10 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmEnabled @ 0x14065CF28 (WdipSemSqmEnabled.c)
 *     WdipSemSqmLogTimeoutDataPoints @ 0x14065D00C (WdipSemSqmLogTimeoutDataPoints.c)
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
