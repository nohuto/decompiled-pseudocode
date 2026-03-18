/*
 * XREFs of MmIsDriverLoadedCurrentSession @ 0x14051C764
 * Callers:
 *     VfThunkApplyMandatoryThunks @ 0x140744C8C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140744D5C (VfThunkApplyThunks.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1400FEA40 (MiSessionLookupImage.c)
 */

_BOOL8 __fastcall MmIsDriverLoadedCurrentSession(unsigned __int64 a1)
{
  return MiSessionLookupImage(a1) != 0LL;
}
