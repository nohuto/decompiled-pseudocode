/*
 * XREFs of MmQuitNextSession @ 0x1404C34D0
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x140142930 (PsQueryCpuQuotaInformation.c)
 *     ObpProcessRemoveObjectQueue @ 0x14049BD74 (ObpProcessRemoveObjectQueue.c)
 *     VfThunkApplyMandatoryThunks @ 0x1406C33EC (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1406C34BC (VfThunkApplyThunks.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 */

__int64 __fastcall MmQuitNextSession(void *a1)
{
  ObfDereferenceObject(a1);
  return 0LL;
}
