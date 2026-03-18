/*
 * XREFs of MmIsSpecialPoolAddress @ 0x14005ED6C
 * Callers:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     ExProtectPool @ 0x14005EE00 (ExProtectPool.c)
 *     ExReturnPoolQuota @ 0x140119294 (ExReturnPoolQuota.c)
 *     IopUpdateMinidumpContext @ 0x1401F4F1C (IopUpdateMinidumpContext.c)
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1402175B8 (MmIsNonPagedSystemAddressValid.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     VeAllocatePoolWithTagPriority @ 0x140736208 (VeAllocatePoolWithTagPriority.c)
 *     ExFreePoolSanityChecks @ 0x140758D44 (ExFreePoolSanityChecks.c)
 * Callees:
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 *     MI_VA_IN_SESSION_SPECIAL_POOL @ 0x14005EDE4 (MI_VA_IN_SESSION_SPECIAL_POOL.c)
 */

__int64 __fastcall MmIsSpecialPoolAddress(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned int v2; // r9d

  if ( a1 + 0x98000000000LL <= 0x7FFFFFFFFFLL || !MiIsAddressValid(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
    return 0LL;
  if ( qword_14034EDB0 && v1 >= qword_14034EDB0 && v1 < qword_14034EDB0 + (qword_14034ED90 << 21) )
    return 1LL;
  LOBYTE(v2) = (unsigned int)MI_VA_IN_SESSION_SPECIAL_POOL(v1) != 0;
  return v2;
}
