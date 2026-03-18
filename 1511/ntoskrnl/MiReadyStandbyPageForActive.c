/*
 * XREFs of MiReadyStandbyPageForActive @ 0x1400A6DA0
 * Callers:
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiReadyStandbyPageForActive(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rsi
  _QWORD *v4; // rsi
  unsigned __int8 v5; // al
  __int64 v6; // r9
  int v7; // ecx
  unsigned __int64 ValidKernelPte; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  ++*(_WORD *)(a1 + 32);
  v4 = (_QWORD *)(v2 | 0x8000000000000000uLL);
  v5 = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  v6 = (*(_DWORD *)(a1 + 16) >> 5) & 7;
  *(_BYTE *)(a1 + 34) = v5;
  v7 = v5 >> 6;
  if ( v7 != 1 )
  {
    if ( v7 )
    {
      if ( v7 == 2 )
        v6 = (unsigned int)v6 | 0x18;
    }
    else
    {
      v6 = (unsigned int)v6 | 8;
    }
  }
  ValidKernelPte = MiMakeValidKernelPte((a1 + 0x58000000000LL) / 48, v6, a2, v6);
  *v4 = ValidKernelPte;
  v9 = ValidKernelPte;
  if ( (unsigned int)MiPteInShadowRange(v4) )
    MiWritePteShadow(v4, v9);
  result = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
