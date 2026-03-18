/*
 * XREFs of HvpReleaseHCell @ 0x14002D330
 * Callers:
 *     HvpDelistFreeCell @ 0x140401978 (HvpDelistFreeCell.c)
 *     HvIsCellAllocated @ 0x1404399C0 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x14043C940 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x14043D610 (CmpCheckKey.c)
 *     CmpCheckLeaf @ 0x14043FDC0 (CmpCheckLeaf.c)
 *     HvpMarkCellDirty @ 0x1405136F0 (HvpMarkCellDirty.c)
 *     HvpEnlistFreeCell @ 0x140514E4C (HvpEnlistFreeCell.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpReleaseHCell(__int64 a1)
{
  return (*(__int64 (**)(void))(a1 + 16))();
}
