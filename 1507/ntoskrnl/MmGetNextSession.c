/*
 * XREFs of MmGetNextSession @ 0x1400FD460
 * Callers:
 *     ObpProcessRemoveObjectQueue @ 0x140474070 (ObpProcessRemoveObjectQueue.c)
 *     PfpPrivSourceEnum @ 0x14050CF74 (PfpPrivSourceEnum.c)
 *     ExCallSessionCallBack @ 0x14051C2F8 (ExCallSessionCallBack.c)
 *     MmEnumerateSystemImages @ 0x14051C530 (MmEnumerateSystemImages.c)
 *     ExGetSessionPoolTagInformation @ 0x14051C77C (ExGetSessionPoolTagInformation.c)
 *     PfpProcessScenarioPhase @ 0x140582300 (PfpProcessScenarioPhase.c)
 *     MmGetSessionMappedViewInformation @ 0x1406A0A34 (MmGetSessionMappedViewInformation.c)
 *     MmPerfLogSessionRundown @ 0x1406A4DE0 (MmPerfLogSessionRundown.c)
 *     PopInputDisabled @ 0x1406BCB30 (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x1406E8CE0 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1406EDFF0 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x140744C8C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140744D5C (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MmGetNextSession(void *a1)
{
  return MiGetNextSession(a1);
}
