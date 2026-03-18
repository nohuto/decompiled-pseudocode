/*
 * XREFs of HvMarkCellDirty @ 0x1403FD480
 * Callers:
 *     CmpUpdateHiveRootCellFlags @ 0x1400B1FBC (CmpUpdateHiveRootCellFlags.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B376C (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCreateTombstone @ 0x1401B6260 (CmpCreateTombstone.c)
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1401B6620 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FCD98 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCheckKey @ 0x14043D610 (CmpCheckKey.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1404E1020 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpDoBuildVirtualStack @ 0x140600BE8 (CmpDoBuildVirtualStack.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14060F624 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvMarkCellDirty(ULONG_PTR a1, ULONG_PTR a2)
{
  return HvpMarkCellDirty(a1, a2);
}
