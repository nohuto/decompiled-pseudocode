/*
 * XREFs of MiMapPagesToZero @ 0x1401E591C
 * Callers:
 *     MiGetZeroingVa @ 0x1400E4BF0 (MiGetZeroingVa.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400FE304 (MiMakeProtectionPfnCompatible.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapPagesToZero(unsigned __int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  unsigned __int64 *v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned int ProtectionPfnCompatible; // eax
  unsigned __int64 v9; // rbx

  v4 = a2;
  v5 = a1;
  if ( a3 == 1 )
    v6 = a2 + 24576;
  else
    v6 = 0LL;
  v7 = (__int64)((_QWORD)a1 << 25) >> 16;
  do
  {
    if ( (*(_BYTE *)(v4 + 34) & 0xC0) == 0xC0 )
      MiFinalizePageAttribute(v4, 1LL, 0);
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v4);
    v9 = MiMakeValidKernelPte(
           (v4 + 0x58000000000LL) / 48,
           ProtectionPfnCompatible,
           (unsigned __int64)v5,
           ProtectionPfnCompatible) | 0x42;
    *v5 = v9;
    if ( MiPteInShadowRange((__int64)v5) )
      MiWritePteShadow((__int64)v5, v9);
    ++v5;
    if ( a3 == 1 )
      v4 += 48LL;
    else
      v4 = *(_QWORD *)v4;
  }
  while ( v4 != v6 );
  return v7;
}
