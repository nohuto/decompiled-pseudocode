/*
 * XREFs of MiIncrementSystemCacheViewCount @ 0x1401E6DBC
 * Callers:
 *     MiObtainSystemCacheView @ 0x140019B70 (MiObtainSystemCacheView.c)
 * Callees:
 *     MI_GET_PFN_FROM_PTE @ 0x1401F2594 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiIncrementSystemCacheViewCount(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  result = MI_GET_PFN_FROM_PTE(&v2);
  ++*(_BYTE *)(result + 39);
  return result;
}
