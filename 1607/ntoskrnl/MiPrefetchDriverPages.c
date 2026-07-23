/*
 * XREFs of MiPrefetchDriverPages @ 0x1404B0324
 * Callers:
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 * Callees:
 *     MiPrefetchVirtualMemory @ 0x1400BDB30 (MiPrefetchVirtualMemory.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiPrefetchDriverPages(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  result = MiMakeDemandZeroPte(4);
  v10 = 0LL;
  v9 = 0LL;
  if ( a1 <= v5 )
  {
    do
    {
      result = MI_READ_PTE_LOCK_FREE(a1);
      if ( (result & 1) == 0 && ((result & 0x400) != 0 || (result & 0x800) == 0 && result != v6) )
      {
        if ( !v7 )
        {
          v8 = (__int64)(a1 << 25) >> 16;
          v9 = v8;
        }
        result = 0LL;
        v7 = ((__int64)((a1 << 25) + 0x10000000) >> 16) - v8;
        v10 = v7;
      }
      a1 += 8LL;
    }
    while ( a1 <= a2 );
    if ( v7 > 0x1000 )
      return MiPrefetchVirtualMemory(1uLL, (__int64)&v9, 1LL, 45);
  }
  return result;
}
