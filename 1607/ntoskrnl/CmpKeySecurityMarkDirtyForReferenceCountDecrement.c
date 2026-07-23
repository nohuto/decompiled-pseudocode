/*
 * XREFs of CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1401B6504
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1403FBC58 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     HvMarkCellDirty @ 0x1403FC340 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpKeySecurityMarkDirtyForReferenceCountDecrement(unsigned int *a1, __int64 a2, unsigned int a3)
{
  HvMarkCellDirty(a2, a3, 0LL);
  if ( a1[3] == 1 )
  {
    HvMarkCellDirty(a2, a1[1], 0LL);
    HvMarkCellDirty(a2, a1[2], 0LL);
  }
  return 0LL;
}
