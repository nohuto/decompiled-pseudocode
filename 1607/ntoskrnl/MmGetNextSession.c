/*
 * XREFs of MmGetNextSession @ 0x140086620
 * Callers:
 *     ExCallSessionCallBack @ 0x140463D04 (ExCallSessionCallBack.c)
 *     MmEnumerateSystemImages @ 0x140498F00 (MmEnumerateSystemImages.c)
 *     ExGetSessionPoolTagInformation @ 0x1404990F4 (ExGetSessionPoolTagInformation.c)
 *     ObpProcessRemoveObjectQueue @ 0x1404B96EC (ObpProcessRemoveObjectQueue.c)
 *     PfpPrivSourceEnum @ 0x140508A08 (PfpPrivSourceEnum.c)
 *     PfpProcessScenarioPhase @ 0x1405453E8 (PfpProcessScenarioPhase.c)
 *     MmGetSessionMappedViewInformation @ 0x140657244 (MmGetSessionMappedViewInformation.c)
 *     MmPerfLogSessionRundown @ 0x140659F68 (MmPerfLogSessionRundown.c)
 *     PopInputDisabled @ 0x140674AE0 (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x1406A7568 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1406AB034 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x14070F47C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x14070F54C (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MmGetNextSession(void *a1)
{
  return MiGetNextSession(a1);
}
