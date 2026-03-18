/*
 * XREFs of HvMarkCellDirty @ 0x140660960
 * Callers:
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1401E0F38 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14044B704 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1404AE5EC (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpCommitSetSecurityUoW @ 0x14058E3F0 (CmpCommitSetSecurityUoW.c)
 *     CmpDoBuildVirtualStack @ 0x1406584F0 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     <none>
 */

char __fastcall HvMarkCellDirty(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  return HvpMarkCellDirty(a1, a2, a3, 0LL);
}
