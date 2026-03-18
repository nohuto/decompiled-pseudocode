/*
 * XREFs of MiLockAndInsertPageInFreeList @ 0x140144DA4
 * Callers:
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiAllocateMostlyContiguous @ 0x140105140 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x1401063DC (MiClaimPhysicalRun.c)
 *     MiEnableNewPfns @ 0x1401E1B74 (MiEnableNewPfns.c)
 *     MiFreeBootPageTable @ 0x1407B28EC (MiFreeBootPageTable.c)
 *     MiFreeEmptyBootPageTable @ 0x1407D0638 (MiFreeEmptyBootPageTable.c)
 * Callees:
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400671C0 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiLockAndInsertPageInFreeList(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v2 = (unsigned __int8)MiLockPageInline(a1);
  MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v2);
  return result;
}
