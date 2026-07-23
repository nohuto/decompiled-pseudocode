/*
 * XREFs of MiUnmapLargePages @ 0x1401F5770
 * Callers:
 *     MmUnmapIoSpace @ 0x14009ACB0 (MmUnmapIoSpace.c)
 *     MiReleaseLargePteMappings @ 0x1401264F4 (MiReleaseLargePteMappings.c)
 *     MiUnmapLargeDriver @ 0x140663010 (MiUnmapLargeDriver.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiUnmapLargePages(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // esi
  __int64 v4; // r9
  __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  __int64 v8; // r11
  __int64 *v9; // r12
  __int64 *v10; // r10
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r10
  int v14; // [rsp+20h] [rbp-108h] BYREF
  __int16 v15; // [rsp+24h] [rbp-104h]
  __int64 v16; // [rsp+28h] [rbp-100h]
  __int64 v17; // [rsp+30h] [rbp-F8h]
  __int64 v18; // [rsp+38h] [rbp-F0h]

  v16 = 20LL;
  v3 = a3;
  if ( a3 == 9 )
    v3 = 15;
  LODWORD(v4) = 0;
  v5 = a2 >> 21;
  v14 = 0;
  v6 = a2;
  v15 = 0;
  v17 = 0LL;
  v18 = 0LL;
  if ( (a2 & 0x1FFFFF) != 0 )
  {
    v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 = (__int64 *)(v8 + (v5 << 12));
    v10 = v9;
    v11 = v8 + 8 * (((a1 & 0xFFF) + a2 + 4095) >> 12);
    if ( (unsigned __int64)v9 < v11 )
    {
      do
      {
        if ( !MI_READ_PTE_LOCK_FREE((unsigned __int64)v10) )
          break;
        *v10 = v4;
        if ( MiPteInShadowRange((unsigned __int64)v10) )
          MiWritePteShadow(v12, v4);
        v10 = (__int64 *)(v13 + 8);
      }
      while ( (unsigned __int64)v10 < v11 );
    }
    if ( v10 != v9 )
      MiInsertTbFlushEntry((__int64)&v14, ((v5 << 37) + (v8 << 25)) >> 16, ((__int64)v10 - v8 + -4096 * v5) >> 3, v4);
    v6 = (v6 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  }
  MiInsertTbFlushEntry((__int64)&v14, a1, v5, 1u);
  MiReturnSystemVa(a1, v6 + a1, v3, (__int64)&v14);
}
