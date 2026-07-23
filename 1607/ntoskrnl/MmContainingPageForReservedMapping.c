/*
 * XREFs of MmContainingPageForReservedMapping @ 0x1401E3E08
 * Callers:
 *     PnprCopyReservedMapping @ 0x1401CFEC0 (PnprCopyReservedMapping.c)
 * Callees:
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MmContainingPageForReservedMapping(unsigned __int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  return MI_GET_PAGE_FRAME_FROM_PTE(&v2);
}
