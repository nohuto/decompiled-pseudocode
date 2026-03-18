/*
 * XREFs of MmGetNextSession @ 0x1400E6E28
 * Callers:
 *     ExCallSessionCallBack @ 0x140445140 (ExCallSessionCallBack.c)
 *     PfpPrivSourceEnum @ 0x14044B238 (PfpPrivSourceEnum.c)
 *     ObpProcessRemoveObjectQueue @ 0x14049BD74 (ObpProcessRemoveObjectQueue.c)
 *     ExGetSessionPoolTagInformation @ 0x1404AC20C (ExGetSessionPoolTagInformation.c)
 *     MmEnumerateSystemImages @ 0x140500E94 (MmEnumerateSystemImages.c)
 *     PfpProcessScenarioPhase @ 0x14050B304 (PfpProcessScenarioPhase.c)
 *     MmGetSessionMappedViewInformation @ 0x1406213A0 (MmGetSessionMappedViewInformation.c)
 *     MmPerfLogSessionRundown @ 0x140625390 (MmPerfLogSessionRundown.c)
 *     PopInputDisabled @ 0x14063C4D4 (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x140665B54 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x14066A9A8 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x1406C33EC (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1406C34BC (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MmGetNextSession(void *a1)
{
  return MiGetNextSession(a1);
}
