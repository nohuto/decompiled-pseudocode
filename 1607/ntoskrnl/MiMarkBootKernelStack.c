/*
 * XREFs of MiMarkBootKernelStack @ 0x14078E4F0
 * Callers:
 *     MiInitializeKernelStacks @ 0x14078E3DC (MiInitializeKernelStacks.c)
 * Callees:
 *     MiMarkKernelStack @ 0x140001D14 (MiMarkKernelStack.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiMarkBootKernelStack(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  _KPROCESS *v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // rbp
  signed __int64 v8; // rdi
  signed __int64 v9; // rbx
  int v10; // [rsp+20h] [rbp-E8h] BYREF
  __int16 v11; // [rsp+24h] [rbp-E4h]
  __int64 v12; // [rsp+28h] [rbp-E0h]
  __int64 v13; // [rsp+30h] [rbp-D8h]
  __int64 v14; // [rsp+38h] [rbp-D0h]

  v3 = a1;
  MiMarkKernelStack(a1, a2, -3LL);
  v6 = 0LL;
  v12 = 20LL;
  v10 = 0;
  v11 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v7 = (__int64)(v3 << 25) >> 16;
  if ( v3 < a2 )
  {
    do
    {
      v8 = MI_READ_PTE_LOCK_FREE(v3);
      if ( (MiFlags & 0x10000) == 0 )
      {
        do
        {
          v9 = v8;
          v8 = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)v3,
                 ~qword_1403A9350 & (v8 | 0x8000000000000062uLL) | 0x62,
                 v8);
          MiInsertTbFlushEntry((__int64)&v10, v7, 1LL, 0);
          v7 += 4096LL;
        }
        while ( v8 != v9 );
      }
      v3 += 8LL;
    }
    while ( v3 < a2 );
    LOBYTE(v6) = v11;
  }
  LOBYTE(v6) = v6 | 1;
  LOBYTE(v11) = v6;
  MiFlushTbList((__int64)&v10, v4, v6, v5);
}
