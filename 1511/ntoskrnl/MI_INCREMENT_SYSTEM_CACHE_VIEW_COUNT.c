/*
 * XREFs of MI_INCREMENT_SYSTEM_CACHE_VIEW_COUNT @ 0x1401D574C
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400B1590 (MiObtainSystemCacheView.c)
 * Callees:
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MI_INCREMENT_SYSTEM_CACHE_VIEW_COUNT(unsigned __int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE((__int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL));
  result = MI_GET_PFN_FROM_PTE((__int64)&v2);
  ++*(_BYTE *)(result + 39);
  return result;
}
