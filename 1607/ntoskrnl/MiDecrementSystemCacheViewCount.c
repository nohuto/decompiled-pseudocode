/*
 * XREFs of MiDecrementSystemCacheViewCount @ 0x1401E6BA8
 * Callers:
 *     MiReleaseSystemCacheView @ 0x140017EF4 (MiReleaseSystemCacheView.c)
 * Callees:
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiDecrementSystemCacheViewCount(unsigned __int64 a1)
{
  __int64 v1; // r9
  char result; // al
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v1 = MI_GET_PFN_FROM_PTE(&v3);
  result = *(_BYTE *)(v1 + 39) - 1;
  *(_BYTE *)(v1 + 39) = result;
  return result;
}
