/*
 * XREFs of MmIsSpecialPoolAddress @ 0x1400EB24C
 * Callers:
 *     ExAllocatePoolWithQuotaTag @ 0x1400127B0 (ExAllocatePoolWithQuotaTag.c)
 *     ExProtectPoolEx @ 0x1400EA270 (ExProtectPoolEx.c)
 *     ExReturnPoolQuota @ 0x1400F9564 (ExReturnPoolQuota.c)
 *     IopUpdateMinidumpContext @ 0x1401C7AD0 (IopUpdateMinidumpContext.c)
 *     KeBugCheck2 @ 0x1401D40EC (KeBugCheck2.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1401E6950 (MmIsNonPagedSystemAddressValid.c)
 *     ExQueryPoolBlockSize @ 0x14022D01C (ExQueryPoolBlockSize.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     VeAllocatePoolWithTagPriority @ 0x140701D78 (VeAllocatePoolWithTagPriority.c)
 *     ExFreePoolSanityChecks @ 0x140721350 (ExFreePoolSanityChecks.c)
 * Callees:
 *     MiIsAddressValid @ 0x140037540 (MiIsAddressValid.c)
 *     MiVaIsSessionSpecialPool @ 0x1400EB2E0 (MiVaIsSessionSpecialPool.c)
 */

__int64 __fastcall MmIsSpecialPoolAddress(unsigned __int64 a1)
{
  unsigned int v2; // r8d

  if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || !MiIsAddressValid(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
  {
    return 0LL;
  }
  if ( qword_140326C30 && a1 >= qword_140326C30 && a1 < qword_140326C30 + (qword_140326C10 << 21) )
    return 1LL;
  LOBYTE(v2) = (unsigned int)MiVaIsSessionSpecialPool(a1) != 0;
  return v2;
}
