/*
 * XREFs of MiMapMdlCommon @ 0x1401D35FC
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x1401D37F4 (MmMapLockedPagesWithReservedMapping.c)
 *     MmMapLockedRestartPages @ 0x140620E68 (MmMapLockedRestartPages.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400FE304 (MiMakeProtectionPfnCompatible.c)
 *     MiAssignInitialPageAttribute @ 0x14013F0EC (MiAssignInitialPageAttribute.c)
 *     MiShowBadMapper @ 0x1401CEA7C (MiShowBadMapper.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapMdlCommon(__int64 a1, __int64 *a2, char a3, int a4)
{
  __int64 v4; // r11
  __int64 *v5; // rdi
  int v6; // esi
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 ProtectionPfnCompatible; // r9
  ULONG_PTR v13; // r10
  int v14; // r11d
  __int64 v15; // rbx
  unsigned __int64 ValidKernelPte; // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int16 v19; // cx

  v4 = *(unsigned int *)(a1 + 44);
  v5 = a2;
  v6 = MiPlatformCacheAttributes[a4];
  v7 = v4 + ((__int64)((_QWORD)a2 << 25) >> 16);
  v8 = ((((_WORD)v4 + (unsigned __int16)*(_DWORD *)(a1 + 32)) & 0xFFF)
      + (unsigned __int64)*(unsigned int *)(a1 + 40)
      + 4095) >> 12;
  v9 = MiPlatformCacheAttributes[a4 + 6];
  v10 = a1 + 48 - (_QWORD)a2;
  do
  {
    if ( MI_IS_PFN(*(__int64 *)((char *)v5 + v10)) )
    {
      v15 = 48 * v13 - 0x58000000000LL;
      if ( *(_WORD *)(v15 + 32) == (_WORD)v14 && dword_1402FEC90 == v14 )
        MiShowBadMapper(v13, 1);
      if ( (*(_BYTE *)(v15 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v15, v6);
      ProtectionPfnCompatible = (unsigned int)MiMakeProtectionPfnCompatible(a3, v15);
    }
    else if ( v9 )
    {
      if ( v9 == 2 )
        ProtectionPfnCompatible = (unsigned int)ProtectionPfnCompatible | 0x38;
    }
    else
    {
      ProtectionPfnCompatible = (unsigned int)ProtectionPfnCompatible | 0x28;
    }
    ValidKernelPte = MiMakeValidKernelPte(-1LL, ProtectionPfnCompatible, (unsigned __int64)v5, ProtectionPfnCompatible);
    v17 = ValidKernelPte;
    if ( (ValidKernelPte & 0x800) != 0 )
      v17 = ValidKernelPte | 0x42;
    v18 = (v17 ^ (*(__int64 *)((char *)v5 + v10) << 12)) & 0xFFFFFFFFF000LL ^ v17;
    *v5 = v18;
    if ( (unsigned int)MiPteInShadowRange(v5) )
      MiWritePteShadow(v5, v18);
    ++v5;
    --v8;
  }
  while ( v8 );
  v19 = *(_WORD *)(a1 + 10) | 1;
  *(_QWORD *)(a1 + 24) = v7;
  *(_WORD *)(a1 + 10) = v19;
  if ( (v19 & 0x10) != 0 )
    *(_WORD *)(a1 + 10) = v19 | 0x20;
  return v7;
}
