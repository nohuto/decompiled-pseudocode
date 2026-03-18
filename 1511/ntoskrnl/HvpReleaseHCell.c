/*
 * XREFs of HvpReleaseHCell @ 0x140040C50
 * Callers:
 *     HvpEnlistFreeCell @ 0x1403D9258 (HvpEnlistFreeCell.c)
 *     HvpDelistFreeCell @ 0x1403D963C (HvpDelistFreeCell.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     HvIsCellAllocated @ 0x1403F94C0 (HvIsCellAllocated.c)
 *     CmpCheckLeaf @ 0x1403F9670 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x140403CF0 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140404270 (CmpCheckKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpReleaseHCell(__int64 a1)
{
  return (*(__int64 (**)(void))(a1 + 16))();
}
