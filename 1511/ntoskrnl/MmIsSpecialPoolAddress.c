/*
 * XREFs of MmIsSpecialPoolAddress @ 0x140079508
 * Callers:
 *     ExProtectPool @ 0x140077FD0 (ExProtectPool.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     ExReturnPoolQuota @ 0x1400E2A64 (ExReturnPoolQuota.c)
 *     IopUpdateMinidumpContext @ 0x1401B9CA4 (IopUpdateMinidumpContext.c)
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1401D5650 (MmIsNonPagedSystemAddressValid.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     VeAllocatePoolWithTagPriority @ 0x1406B5F18 (VeAllocatePoolWithTagPriority.c)
 *     ExFreePoolSanityChecks @ 0x1406D5158 (ExFreePoolSanityChecks.c)
 * Callees:
 *     MI_VA_IN_SESSION_SPECIAL_POOL @ 0x140079580 (MI_VA_IN_SESSION_SPECIAL_POOL.c)
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 */

__int64 __fastcall MmIsSpecialPoolAddress(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned int v2; // r9d

  if ( a1 + 0x98000000000LL <= 0x7FFFFFFFFFLL
    || !(unsigned __int8)MiIsAddressValid(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
  {
    return 0LL;
  }
  if ( qword_1402FE8F0 && v1 >= qword_1402FE8F0 && v1 < qword_1402FE8F0 + (qword_1402FE8D0 << 21) )
    return 1LL;
  LOBYTE(v2) = (unsigned int)MI_VA_IN_SESSION_SPECIAL_POOL(v1) != 0;
  return v2;
}
