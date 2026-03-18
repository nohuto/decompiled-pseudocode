/*
 * XREFs of MiUnmapLargePages @ 0x1401E2648
 * Callers:
 *     MmUnmapIoSpace @ 0x1400C07D0 (MmUnmapIoSpace.c)
 *     MiReleaseLargePteMappings @ 0x1401171C8 (MiReleaseLargePteMappings.c)
 *     MiUnmapLargeDriver @ 0x140621B08 (MiUnmapLargeDriver.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiUnmapLargePages(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // r15d
  __int64 v4; // r12
  unsigned __int64 v5; // rsi
  __int64 v7; // r14
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 *v12; // rdi
  unsigned __int64 v13; // r15
  int v15; // [rsp+20h] [rbp-128h]
  __int64 *v16; // [rsp+30h] [rbp-118h]
  int v17; // [rsp+40h] [rbp-108h] BYREF
  __int16 v18; // [rsp+44h] [rbp-104h]
  __int64 v19; // [rsp+48h] [rbp-100h]
  __int64 v20; // [rsp+50h] [rbp-F8h]
  __int64 v21; // [rsp+58h] [rbp-F0h]

  v19 = 20LL;
  v3 = a3;
  if ( a3 == 9 )
    v3 = 15;
  v4 = a2 >> 21;
  v15 = v3;
  v5 = a2;
  v17 = 0;
  v18 = 0;
  v20 = 0LL;
  v21 = 0LL;
  if ( (a2 & 0x1FFFFF) != 0 )
  {
    v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 = (a1 & 0xFFF) + a2 + 4095;
    v9 = v4 << 12;
    v10 = v7 + 8 * (v8 >> 12);
    v11 = (__int64 *)((v4 << 12) + v7);
    v16 = v11;
    v12 = v11;
    if ( (unsigned __int64)v11 < v10 )
    {
      v13 = v10;
      do
      {
        if ( !MI_READ_PTE_LOCK_FREE(v12) )
          break;
        *v12 = 0LL;
        if ( MiPteInShadowRange((__int64)v12) )
          MiWritePteShadow((__int64)v12, 0LL);
        ++v12;
      }
      while ( (unsigned __int64)v12 < v13 );
      v3 = v15;
      v11 = v16;
      v9 = v4 << 12;
    }
    if ( v12 != v11 )
      MiInsertTbFlushEntry((__int64)&v17, ((v7 << 25) + (v4 << 37)) >> 16, ((__int64)v12 - v9 - v7) >> 3, 0);
    v5 = (v5 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  }
  MiInsertTbFlushEntry((__int64)&v17, a1, v4, 1);
  return MiReturnSystemVa(a1, v5 + a1, v3, (__int64)&v17);
}
