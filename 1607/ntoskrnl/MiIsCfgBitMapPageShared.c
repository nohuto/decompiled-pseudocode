/*
 * XREFs of MiIsCfgBitMapPageShared @ 0x1400E7C60
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1400E7910 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiIsCfgBitMapPageShared(unsigned __int64 a1, __int64 a2, char a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v12; // r9
  __int64 PrototypePteDirect; // rax
  __int64 v14; // r10
  int v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v16; // [rsp+58h] [rbp+20h] BYREF

  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LOBYTE(a4) = a3;
  if ( v6 != MiGetNextPageTable(v6, v6, 0LL, a4, 0, &v15) )
    return 3LL;
  MiGetProtoPteAddress(a2, a1 >> 12, 1, &v16);
  v8 = (__int64 *)MI_READ_PTE_LOCK_FREE(v6);
  v16 = v8;
  if ( !v8 )
    return 2LL;
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v9 = MI_GET_PAGE_FRAME_FROM_PTE(&v16);
    if ( (*(_QWORD *)(48 * v9 - 0x58000000000LL + 40) & 0x200000000000000LL) == 0 )
      return 0LL;
    return (*(_QWORD *)(48 * v9 - 0x58000000000LL + 8) | 0x8000000000000000uLL) == v10;
  }
  else
  {
    if ( ((unsigned __int16)v8 & 0x400) == 0 )
      return 0LL;
    if ( (unsigned int)MiIsPrototypePteVadLookup(v8) )
      return 1LL;
    PrototypePteDirect = MiGetPrototypePteDirect(v12);
    return v14 == PrototypePteDirect;
  }
}
