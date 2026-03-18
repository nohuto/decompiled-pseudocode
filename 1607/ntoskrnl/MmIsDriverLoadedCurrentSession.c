/*
 * XREFs of MmIsDriverLoadedCurrentSession @ 0x1404990DC
 * Callers:
 *     VfThunkApplyMandatoryThunks @ 0x14070F47C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x14070F54C (VfThunkApplyThunks.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1400865D4 (MiSessionLookupImage.c)
 */

_BOOL8 __fastcall MmIsDriverLoadedCurrentSession(unsigned __int64 a1)
{
  return MiSessionLookupImage(a1) != 0LL;
}
