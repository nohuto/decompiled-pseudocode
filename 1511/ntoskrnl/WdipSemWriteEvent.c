/*
 * XREFs of WdipSemWriteEvent @ 0x140504CCC
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x140504988 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemSqmInit @ 0x140532950 (WdipSemSqmInit.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x14065C934 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x14065CA14 (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x14065CA9C (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x14065CB00 (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x14065CB80 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x14065CC10 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x14065CDDC (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x14065CF74 (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
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
