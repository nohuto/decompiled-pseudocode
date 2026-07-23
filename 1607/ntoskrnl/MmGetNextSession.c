/*
 * XREFs of MmGetNextSession @ 0x140087F10
 * Callers:
 *     ExCallSessionCallBack @ 0x140462BD4 (ExCallSessionCallBack.c)
 *     MmEnumerateSystemImages @ 0x140499990 (MmEnumerateSystemImages.c)
 *     ExGetSessionPoolTagInformation @ 0x140499B84 (ExGetSessionPoolTagInformation.c)
 *     ObpProcessRemoveObjectQueue @ 0x1404A541C (ObpProcessRemoveObjectQueue.c)
 *     PfpPrivSourceEnum @ 0x1404EB998 (PfpPrivSourceEnum.c)
 *     PfpProcessScenarioPhase @ 0x140545928 (PfpProcessScenarioPhase.c)
 *     MmGetSessionMappedViewInformation @ 0x140657328 (MmGetSessionMappedViewInformation.c)
 *     MmPerfLogSessionRundown @ 0x14065A04C (MmPerfLogSessionRundown.c)
 *     PopInputDisabled @ 0x140674BC4 (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x1406A76A0 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1406AB16C (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x14070F4AC (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x14070F57C (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MmGetNextSession(void *a1)
{
  return MiGetNextSession(a1);
}
