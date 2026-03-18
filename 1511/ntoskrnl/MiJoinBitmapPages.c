/*
 * XREFs of MiJoinBitmapPages @ 0x1401DA568
 * Callers:
 *     MiReturnNonPagedPoolVa @ 0x1400B4000 (MiReturnNonPagedPoolVa.c)
 * Callees:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiReturnSplitPageCharges @ 0x14013226C (MiReturnSplitPageCharges.c)
 *     MiReturnPfnList @ 0x140132B4C (MiReturnPfnList.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiJoinBitmapPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  __int64 *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r15
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rax
  int v12; // r12d
  _KPROCESS *v13; // rdx
  __int64 v15; // [rsp+20h] [rbp-108h] BYREF
  int v16; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v17; // [rsp+34h] [rbp-F4h]
  int v18; // [rsp+38h] [rbp-F0h]
  int v19; // [rsp+3Ch] [rbp-ECh]
  __int64 v20; // [rsp+40h] [rbp-E8h]
  __int64 v21; // [rsp+48h] [rbp-E0h]

  v3 = qword_140381310;
  v6 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = qword_140381308 ^ (qword_140381308 ^ (qword_1402FF238 << 12)) & 0xFFFFFFFFF000LL | 0x21;
  if ( (unsigned __int64)(v6 + 0x12098000000LL) <= 0x3FFFFFFF )
    v7 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
  if ( (unsigned __int64)v6 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && (unsigned __int64)v6 >= 0xFFFFF68000000000uLL
    || (unsigned __int64)v6 >= 0xFFFFF6FB40000000uLL
    && (unsigned __int64)v6 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || (unsigned __int64)v6 >= 0xFFFFF6FB7DA00000uLL
    && (unsigned __int64)v6 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v6 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v7 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)v6) )
    v7 |= 0x100uLL;
  v8 = 0LL;
  v9 = (~v3 & (v7 | 0x8000000000000000uLL) ^ ((unsigned __int64)(unsigned __int8)word_1402FE760 << 8)) & 0x100 ^ ~v3 & (v7 | 0x8000000000000000uLL);
  if ( a3 )
  {
    v10 = a3;
    do
    {
      v15 = MI_READ_PTE_LOCK_FREE(v6);
      v11 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v15);
      *(_QWORD *)(48 * v11 - 0x58000000000LL) = v8;
      v8 = 48 * v11 - 0x58000000000LL;
      *v6 = 0LL;
      v12 = MiPteInShadowRange(v6);
      if ( v12 )
        MiWritePteShadow(v6, 0LL);
      *v6 = v9;
      if ( v12 )
        MiWritePteShadow(v6, v9);
      ++v6;
      --v10;
    }
    while ( v10 );
  }
  v19 = 0;
  v16 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v17 = 0;
  v18 = 20;
  MiInsertTbFlushEntry((__int64)&v16, a2, a3, 0);
  MiFlushTbList((__int64)&v16, v13);
  MiReturnPfnList(v8);
  return MiReturnSplitPageCharges(a3);
}
