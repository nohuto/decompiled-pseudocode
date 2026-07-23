/*
 * XREFs of HvpMapEntryReleaseBlockAddress @ 0x1401B6BC8
 * Callers:
 *     HvpCopyModifiedData @ 0x140612960 (HvpCopyModifiedData.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HvpMapEntryReleaseBlockAddress(__int64 a1, struct _EX_RUNDOWN_REF *a2, _WORD *a3)
{
  return HvpMapEntryReleaseBinAddress(a1, a2, a3);
}
