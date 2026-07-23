/*
 * XREFs of MmIsSpecialPoolAddress @ 0x1400E90BC
 * Callers:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ExProtectPoolEx @ 0x1400E80E0 (ExProtectPoolEx.c)
 *     ExReturnPoolQuota @ 0x1400F73A4 (ExReturnPoolQuota.c)
 *     IopUpdateMinidumpContext @ 0x1401C7970 (IopUpdateMinidumpContext.c)
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1401E677C (MmIsNonPagedSystemAddressValid.c)
 *     ExQueryPoolBlockSize @ 0x14022CE48 (ExQueryPoolBlockSize.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     VeAllocatePoolWithTagPriority @ 0x140701DA8 (VeAllocatePoolWithTagPriority.c)
 *     ExFreePoolSanityChecks @ 0x140721350 (ExFreePoolSanityChecks.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     MiVaIsSessionSpecialPool @ 0x1400E9150 (MiVaIsSessionSpecialPool.c)
 */

__int64 __fastcall MmIsSpecialPoolAddress(unsigned __int64 a1)
{
  unsigned int v2; // r8d

  if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || !MiIsAddressValid(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
  {
    return 0LL;
  }
  if ( qword_140326C70 && a1 >= qword_140326C70 && a1 < qword_140326C70 + (qword_140326C50 << 21) )
    return 1LL;
  LOBYTE(v2) = (unsigned int)MiVaIsSessionSpecialPool(a1) != 0;
  return v2;
}
