/*
 * XREFs of MiGetZeroingVa @ 0x1400E4BF0
 * Callers:
 *     MiZeroLargePage @ 0x1400E4A68 (MiZeroLargePage.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiReplaceUltraBit @ 0x1400E4CDC (MiReplaceUltraBit.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiMapPagesToZero @ 0x1401E591C (MiMapPagesToZero.c)
 */

__int64 __fastcall MiGetZeroingVa(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // rbx

  if ( *(_BYTE *)(a1 + 24) != 1 )
    return MiMapPagesToZero(*(_QWORD *)(a1 + 40), 48 * a2 - 0x58000000000LL);
  v6 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)a1 == -1LL || *(_QWORD *)(a1 + 8) == 512LL )
  {
    v7 = MiReplaceUltraBit(a1, 1LL);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = v7;
  }
  v8 = *(_QWORD *)(v6 + 48) + ((*(_QWORD *)(a1 + 8) + (*(_QWORD *)a1 << 9)) << 21);
  v9 = (unsigned __int64 *)(((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v10 = MiMakeValidKernelPte(a2, 4, (unsigned __int64)v9, a4) | 0xC2;
  *v9 = v10;
  if ( (unsigned int)MiPteInShadowRange(v9) )
    MiWritePteShadow(v9, v10);
  return v8;
}
