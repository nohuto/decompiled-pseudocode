/*
 * XREFs of MiPrefetchDriverPages @ 0x1404A9194
 * Callers:
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 * Callees:
 *     MiPrefetchVirtualMemory @ 0x140011F20 (MiPrefetchVirtualMemory.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiPrefetchDriverPages(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  if ( (unsigned __int64)a1 <= a2 )
  {
    v2 = 0LL;
    v4 = 0LL;
    v8 = 0LL;
    v7 = 0LL;
    v5 = a1;
    do
    {
      v6 = MI_READ_PTE_LOCK_FREE(v5);
      if ( (v6 & 1) == 0 && ((v6 & 0x400) != 0 || (v6 & 0x800) == 0 && v6 != 128) )
      {
        if ( !v2 )
        {
          v4 = (__int64)((_QWORD)v5 << 25) >> 16;
          v7 = v4;
        }
        v2 = ((((_QWORD)v5 << 25) + 0x10000000LL) >> 16) - v4;
        v8 = v2;
      }
      ++v5;
    }
    while ( (unsigned __int64)v5 <= a2 );
    if ( v2 > 0x1000 )
      MiPrefetchVirtualMemory(1uLL, (__int64)&v7, 1LL, 45);
  }
}
