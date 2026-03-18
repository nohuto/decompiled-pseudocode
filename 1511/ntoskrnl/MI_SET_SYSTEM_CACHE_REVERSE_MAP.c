/*
 * XREFs of MI_SET_SYSTEM_CACHE_REVERSE_MAP @ 0x1401D5784
 * Callers:
 *     MiExpandSystemCache @ 0x1400162A8 (MiExpandSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x1400AE7E8 (MiReleaseSystemCacheView.c)
 * Callees:
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MI_SET_SYSTEM_CACHE_REVERSE_MAP(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE((__int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL));
  result = MI_GET_PFN_FROM_PTE((__int64)&v4);
  *(_QWORD *)(result + 16) = a2;
  return result;
}
