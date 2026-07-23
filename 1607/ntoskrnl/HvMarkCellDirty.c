/*
 * XREFs of HvMarkCellDirty @ 0x1403FC340
 * Callers:
 *     CmpUpdateHiveRootCellFlags @ 0x1400AFEFC (CmpUpdateHiveRootCellFlags.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B3650 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCreateTombstone @ 0x1401B6144 (CmpCreateTombstone.c)
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1401B6504 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FBC58 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCheckKey @ 0x14043C4E0 (CmpCheckKey.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1404C4624 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpDoBuildVirtualStack @ 0x140600C9C (CmpDoBuildVirtualStack.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14060F6D8 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvMarkCellDirty(ULONG_PTR a1, ULONG_PTR a2)
{
  return HvpMarkCellDirty(a1, a2);
}
