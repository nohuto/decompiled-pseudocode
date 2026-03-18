/*
 * XREFs of WdipSemWriteEvent @ 0x140552618
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x14055241C (WdipSemWriteSemActionsEvent.c)
 *     WdipSemSqmInit @ 0x1405ADE34 (WdipSemSqmInit.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x1406DF1DC (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x1406DF2BC (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x1406DF344 (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x1406DF3A8 (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x1406DF428 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x1406DF4B8 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x1406DF684 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1406DF81C (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 */

NTSTATUS __fastcall WdipSemWriteEvent(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        ULONG a4,
        struct _EVENT_DATA_DESCRIPTOR *UserData)
{
  REGHANDLE v5; // rdi

  v5 = WdipSemRegHandle;
  if ( !a2 )
    return -1073741811;
  if ( EtwEventEnabled(WdipSemRegHandle, a2) )
    return EtwWrite(v5, a2, a3, a4, UserData);
  return -1073741816;
}
