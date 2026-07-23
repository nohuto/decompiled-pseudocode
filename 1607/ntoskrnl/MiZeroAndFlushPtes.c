/*
 * XREFs of MiZeroAndFlushPtes @ 0x14009AE08
 * Callers:
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MmUnmapIoSpace @ 0x14009ACB0 (MmUnmapIoSpace.c)
 *     MiMapContiguousMemory @ 0x14009B0AC (MiMapContiguousMemory.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiDereferenceIoPages @ 0x14009B770 (MiDereferenceIoPages.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiZeroAndFlushPtes(unsigned __int64 a1)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r11
  __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned __int64 v8; // rtt
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  _QWORD *v16; // rsi
  __int64 v17; // r15
  __int64 result; // rax
  __int64 v19; // r9
  __int64 v20; // rdi
  _QWORD *v21; // rbx
  unsigned int v22; // [rsp+28h] [rbp-E0h]
  __int64 v23; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v25; // [rsp+40h] [rbp-C8h]
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v27; // [rsp+4Ch] [rbp-BCh]
  __int64 v28; // [rsp+50h] [rbp-B8h]
  __int64 v29; // [rsp+58h] [rbp-B0h]
  __int64 v30; // [rsp+60h] [rbp-A8h]
  _QWORD v31[32]; // [rsp+108h] [rbp+0h] BYREF

  v1 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 1LL;
  v22 = MI_IS_PHYSICAL_ADDRESS(a1);
  v6 = v22;
  if ( v22 )
  {
    do
    {
      v3 <<= 9;
      v2 = v5 + ((v2 >> 9) & 0x7FFFFFFFF8LL);
      --v6;
    }
    while ( v6 );
  }
  v7 = 0;
  v28 = 20LL;
  v26 = 0;
  v27 = 0;
  v29 = 0LL;
  v30 = 0LL;
  while ( 1 )
  {
    v8 = v4;
    v4 %= v3;
    v25 = v4;
    v24 = v2 + 8 * (v8 / v3);
    if ( v2 < v24 )
    {
      do
      {
        v23 = MI_READ_PTE_LOCK_FREE(v2);
        v9 = MI_READ_PTE_LOCK_FREE(&v23);
        *(_QWORD *)v2 = 0LL;
        v10 = (v9 >> 12) & 0xFFFFFFFFFLL;
        if ( (unsigned int)MiPteInShadowRange(v2, v11) )
          MiWritePteShadow(v12, 0LL);
        MiInsertTbFlushEntry(&v26, v1, 1LL);
        if ( !MiIsPfnInline(v10) )
        {
          if ( v7 && (v13 = v31[2 * v7 - 1], v13 == v10) )
          {
            v31[2 * v7 - 1] = v3 + v13;
          }
          else
          {
            v14 = 2LL * v7++;
            v31[v14] = v10;
            v31[v14 + 1] = v10 + v3;
            if ( v7 == 16 )
            {
              MiFlushTbList(&v26);
              v16 = v31;
              v17 = 16LL;
              do
              {
                MiDereferenceIoPages(1LL, *v16, v16[1] - *v16, v15);
                v16 += 2;
                --v17;
              }
              while ( v17 );
              v7 = 0;
            }
          }
        }
        v2 += 8LL;
        v1 += v3 << 12;
      }
      while ( v2 < v24 );
      v4 = v25;
      v5 = 0xFFFFF68000000000uLL;
    }
    if ( !v4 )
      break;
    v3 = 1LL;
    v2 = v5 + ((v1 >> 9) & 0x7FFFFFFFF8LL);
  }
  result = MiFlushTbList(&v26);
  v20 = v7;
  if ( v7 )
  {
    v21 = v31;
    do
    {
      result = MiDereferenceIoPages(1LL, *v21, v21[1] - *v21, v19);
      v21 += 2;
      --v20;
    }
    while ( v20 );
  }
  return result;
}
