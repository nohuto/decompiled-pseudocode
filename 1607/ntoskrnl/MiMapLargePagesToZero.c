/*
 * XREFs of MiMapLargePagesToZero @ 0x14008A560
 * Callers:
 *     MiGetLargePageToZero @ 0x140089D80 (MiGetLargePageToZero.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiGetUltraMapping @ 0x14013FD54 (MiGetUltraMapping.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapLargePagesToZero(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // r12
  unsigned __int8 CurrentIrql; // r13
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 UltraMapping; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r11
  __int64 v20; // rcx
  unsigned __int64 v21; // r10

  v8 = MiLargePageSizes[a4];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  MiLockPageAtDpcInline(a3);
  if ( *(_BYTE *)(a1 + 68) == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  v12 = MiMakeValidKernelPte((a3 + 0x58000000000LL) / 48, 4, a2) | 0x42;
  v14 = (__int64)(a2 << 25) >> 16;
  if ( *(_BYTE *)(a1 + 106) == 1 )
  {
    UltraMapping = MiGetUltraMapping(a1, a4, v13, v14);
    v14 = UltraMapping;
    if ( !a4 )
    {
      a2 = ((UltraMapping >> 27) & 0x1FFFF8) - 0x90482600000LL;
      goto LABEL_11;
    }
    a2 = ((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  }
  else if ( a4 != 2 )
  {
    v16 = 2 - a4;
    do
    {
      v14 = v14 << 25 >> 16;
      --v16;
    }
    while ( v16 );
  }
  if ( a4 > 1 )
  {
    v19 = 8 * v8;
    if ( a2 < 8 * v8 + a2 )
    {
      do
      {
        *(_QWORD *)a2 = v12;
        if ( (unsigned int)MiPteInShadowRange(a2, v11) )
          MiWritePteShadow(v20, v12);
        a2 += 8LL;
        v12 ^= (v12 ^ ((v12 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
      }
      while ( a2 < v21 );
    }
    a2 -= v19;
    goto LABEL_18;
  }
LABEL_11:
  v17 = v12 | 0x80;
  *(_QWORD *)a2 = v17;
  if ( (unsigned int)MiPteInShadowRange(a2, v11) )
    MiWritePteShadow(v18, v17);
LABEL_18:
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = v14;
  *(_DWORD *)(a1 + 64) = a4;
  *(_QWORD *)(a1 + 72) = a3;
  *(_QWORD *)(a1 + 48) = v14 + (v8 << 12) - 1;
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return v14;
}
