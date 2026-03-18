/*
 * XREFs of MiIsCfgBitMapPageShared @ 0x14003A868
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x14003A5B0 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiIsCfgBitMapPageShared(unsigned __int64 a1, __int64 a2, char a3)
{
  unsigned __int64 *v5; // rbx
  __int64 ProtoPteAddress; // rax
  unsigned __int64 PteShadow; // rdx
  __int64 v9; // r11
  unsigned __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 PrototypePteDirect; // rax
  __int64 v18; // r9
  unsigned __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( v5 != (unsigned __int64 *)MiGetNextPageTable(
                                   (unsigned int)(a1 >> 9) & 0xFFFFFFF8,
                                   (unsigned int)(a1 >> 9) & 0xFFFFFFF8,
                                   0,
                                   a3,
                                   0,
                                   (__int64)&v19) )
    return 3LL;
  ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 1LL, &v19);
  PteShadow = *v5;
  v9 = 0x90482413000LL;
  v10 = 2040LL;
  v11 = ProtoPteAddress;
  if ( (unsigned __int64)(v5 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v5, PteShadow);
  v19 = PteShadow;
  if ( !PteShadow )
    return 2LL;
  if ( (PteShadow & 1) != 0 )
  {
    if ( (unsigned __int64)&v19 + v9 <= v10 )
      PteShadow = MiReadPteShadow(&v19, PteShadow);
    v12 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0 )
      return 0LL;
    return (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) == v11;
  }
  else
  {
    if ( (PteShadow & 0x400) == 0 )
      return 0LL;
    if ( (unsigned int)MiIsPrototypePteVadLookup(PteShadow) )
      return 1LL;
    PrototypePteDirect = MiGetPrototypePteDirect(v14, v14, v15, v16);
    return v18 == PrototypePteDirect;
  }
}
