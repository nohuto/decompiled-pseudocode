/*
 * XREFs of MiLockAndInsertPageInFreeList @ 0x140131B78
 * Callers:
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiClaimPhysicalRun @ 0x1400720B0 (MiClaimPhysicalRun.c)
 *     MiAllocateMostlyContiguous @ 0x1400BEC20 (MiAllocateMostlyContiguous.c)
 *     MiEnableNewPfns @ 0x1401D197C (MiEnableNewPfns.c)
 *     MiFreeBootPageTable @ 0x140747AC8 (MiFreeBootPageTable.c)
 *     MxSwapPages @ 0x14074817C (MxSwapPages.c)
 *     MiFreeEmptyBootPageTable @ 0x140784BBC (MiFreeEmptyBootPageTable.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiLockAndInsertPageInFreeList(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v2 = (unsigned __int8)MiLockPageInline(a1);
  MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2uLL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v2);
  return result;
}
