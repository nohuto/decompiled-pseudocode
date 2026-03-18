/*
 * XREFs of MiMarkBootKernelStack @ 0x140763814
 * Callers:
 *     MiInitializeKernelStacks @ 0x140762E08 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiMarkKernelStack @ 0x1400DFD18 (MiMarkKernelStack.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiMarkBootKernelStack(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  _KPROCESS *v4; // rdx
  char v5; // al
  __int64 v6; // rbp
  signed __int64 v7; // rdi
  signed __int64 v8; // rbx
  int v9; // [rsp+20h] [rbp-E8h] BYREF
  __int16 v10; // [rsp+24h] [rbp-E4h]
  __int64 v11; // [rsp+28h] [rbp-E0h]
  __int64 v12; // [rsp+30h] [rbp-D8h]
  __int64 v13; // [rsp+38h] [rbp-D0h]

  v3 = a1;
  MiMarkKernelStack(a1, a2, -3LL);
  v5 = 0;
  v11 = 20LL;
  v9 = 0;
  v6 = (__int64)(v3 << 25) >> 16;
  v10 = 0;
  v12 = 0LL;
  v13 = 0LL;
  if ( v3 < a2 )
  {
    do
    {
      v7 = MI_READ_PTE_LOCK_FREE((__int64 *)v3);
      if ( (MiFlags & 0x40000) == 0 )
      {
        do
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)v3,
                 ~qword_140381310 & (v7 | 0x8000000000000062uLL) | 0x62,
                 v7);
          MiInsertTbFlushEntry((__int64)&v9, v6, 1LL, 0);
          v6 += 4096LL;
        }
        while ( v7 != v8 );
      }
      v3 += 8LL;
    }
    while ( v3 < a2 );
    v5 = v10;
  }
  LOBYTE(v10) = v5 | 1;
  MiFlushTbList((__int64)&v9, v4);
}
