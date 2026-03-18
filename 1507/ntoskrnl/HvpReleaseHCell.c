/*
 * XREFs of HvpReleaseHCell @ 0x1400CA7E0
 * Callers:
 *     HvpEnlistFreeCell @ 0x14049F304 (HvpEnlistFreeCell.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvpDelistFreeCell @ 0x14049FF74 (HvpDelistFreeCell.c)
 *     HvIsCellAllocated @ 0x1404C29A0 (HvIsCellAllocated.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpReleaseHCell(__int64 a1)
{
  return (*(__int64 (**)(void))(a1 + 16))();
}
