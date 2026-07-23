/*
 * XREFs of MiSetSystemCacheReverseMap @ 0x1401E6C94
 * Callers:
 *     MiReleaseSystemCacheView @ 0x140017EF4 (MiReleaseSystemCacheView.c)
 *     MiExpandSystemCache @ 0x1400A1428 (MiExpandSystemCache.c)
 * Callees:
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiSetSystemCacheReverseMap(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r9
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  result = MI_GET_PFN_FROM_PTE(&v3);
  *(_QWORD *)(result + 16) = v2;
  return result;
}
