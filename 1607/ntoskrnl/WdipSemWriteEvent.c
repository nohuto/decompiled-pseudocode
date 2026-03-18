/*
 * XREFs of WdipSemWriteEvent @ 0x1404E4470
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x1404E4274 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemSqmInit @ 0x140564898 (WdipSemSqmInit.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x14069C118 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x14069C1F8 (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x14069C280 (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x14069C2E4 (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x14069C364 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x14069C3F4 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x14069C628 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x14069C7C0 (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
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
