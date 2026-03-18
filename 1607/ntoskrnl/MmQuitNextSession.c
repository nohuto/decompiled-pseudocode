/*
 * XREFs of MmQuitNextSession @ 0x1404F149C
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140018E50 (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x14014C8AC (PsQueryCpuQuotaInformation.c)
 *     ObpProcessRemoveObjectQueue @ 0x1404B96EC (ObpProcessRemoveObjectQueue.c)
 *     VfThunkApplyMandatoryThunks @ 0x14070F47C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x14070F54C (VfThunkApplyThunks.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 */

__int64 __fastcall MmQuitNextSession(void *a1)
{
  ObfDereferenceObject(a1);
  return 0LL;
}
