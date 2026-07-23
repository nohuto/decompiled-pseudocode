/*
 * XREFs of MiReadyStandbyPageForActive @ 0x140034430
 * Callers:
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 */

unsigned __int64 __fastcall MiReadyStandbyPageForActive(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rdi
  int v4; // r9d
  __int64 v5; // r10
  int v6; // eax
  unsigned int v7; // r9d
  __int64 ValidKernelPte; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  ++*(_WORD *)(a1 + 32);
  v2 = (_QWORD *)(v1 | 0x8000000000000000uLL);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  v4 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(a1 + 16);
  v6 = *(unsigned __int8 *)(a1 + 34) >> 6;
  v7 = v4 & 0xFFFFFFE7;
  if ( v6 != 1 )
  {
    if ( v6 )
    {
      if ( v6 == 2 )
        v7 |= 0x18u;
    }
    else
    {
      v7 |= 8u;
    }
  }
  ValidKernelPte = MiMakeValidKernelPte((a1 + 0x58000000000LL) / 48, v7, v5);
  *v2 = ValidKernelPte;
  if ( (unsigned int)MiPteInShadowRange(v2, ValidKernelPte) )
    MiWritePteShadow(v10, v9);
  result = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
