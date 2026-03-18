/*
 * XREFs of CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1401E0F38
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x14044B704 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCommitSetSecurityUoW @ 0x14058E3F0 (CmpCommitSetSecurityUoW.c)
 * Callees:
 *     HvMarkCellDirty @ 0x140660960 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpKeySecurityMarkDirtyForReferenceCountDecrement(unsigned int *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rdx
  __int64 v8; // r8
  __int64 v9; // r8

  v6 = (unsigned int)a3;
  LOBYTE(a3) = a4;
  HvMarkCellDirty(a2, v6, a3);
  if ( a1[3] == 1 )
  {
    LOBYTE(v8) = a4;
    HvMarkCellDirty(a2, a1[1], v8);
    LOBYTE(v9) = a4;
    HvMarkCellDirty(a2, a1[2], v9);
  }
  return 0LL;
}
