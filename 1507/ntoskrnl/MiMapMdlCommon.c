/*
 * XREFs of MiMapMdlCommon @ 0x140214A44
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x140214DA4 (MmMapLockedPagesWithReservedMapping.c)
 *     MmMapLockedRestartPages @ 0x1406A04E4 (MmMapLockedRestartPages.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x1400797E8 (MiMakeProtectionPfnCompatible.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiAssignInitialPageAttribute @ 0x140139738 (MiAssignInitialPageAttribute.c)
 *     MiShowBadMapper @ 0x14020DDF0 (MiShowBadMapper.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapMdlCommon(__int64 a1, __int64 *a2, char a3, int a4)
{
  __int64 v4; // r11
  __int64 *v5; // rbx
  unsigned __int64 v6; // r15
  __int64 v7; // r12
  int v8; // esi
  ULONG_PTR v10; // r10
  int v11; // r11d
  __int64 v12; // rdi
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  __int16 v17; // cx
  __int64 v20; // [rsp+68h] [rbp+10h]

  v4 = *(unsigned int *)(a1 + 44);
  v20 = v4 + ((__int64)((_QWORD)a2 << 25) >> 16);
  v5 = a2;
  v6 = ((((_WORD)v4 + (unsigned __int16)*(_DWORD *)(a1 + 32)) & 0xFFF)
      + (unsigned __int64)*(unsigned int *)(a1 + 40)
      + 4095) >> 12;
  v7 = a1 + 48 - (_QWORD)a2;
  v8 = MiPlatformCacheAttributes[a4];
  do
  {
    if ( MI_IS_PFN(*(__int64 *)((char *)v5 + v7)) )
    {
      v12 = 48 * v10 - 0x58000000000LL;
      if ( *(_WORD *)(v12 + 32) == (_WORD)v11 && dword_14034F150 == v11 )
        MiShowBadMapper(v10, 1);
      if ( (*(_BYTE *)(v12 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v12, v8);
      MiMakeProtectionPfnCompatible(a3, v12);
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)v5) )
      v13 |= 0x100uLL;
    v15 = v13 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
    if ( v13 & 0x800 | ((word_14034EC18 & 1) << 8) & 0x800 )
      v15 |= 0x42uLL;
    v16 = (v15 ^ (*(__int64 *)((char *)v5 + v7) << 12)) & 0xFFFFFFFFF000LL ^ v15;
    *v5 = v16;
    if ( v14 <= 0x7F8 )
      MiWritePteShadow(v5, v16);
    ++v5;
    --v6;
  }
  while ( v6 );
  v17 = *(_WORD *)(a1 + 10) | 1;
  *(_QWORD *)(a1 + 24) = v20;
  *(_WORD *)(a1 + 10) = v17;
  if ( (v17 & 0x10) != 0 )
    *(_WORD *)(a1 + 10) = v17 | 0x20;
  return v20;
}
