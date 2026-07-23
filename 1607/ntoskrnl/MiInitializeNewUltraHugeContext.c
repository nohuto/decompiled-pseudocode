/*
 * XREFs of MiInitializeNewUltraHugeContext @ 0x14013FBCC
 * Callers:
 *     MiGetLargePageToZero @ 0x140089D80 (MiGetLargePageToZero.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiGetUltraMapping @ 0x14013FD54 (MiGetUltraMapping.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeNewUltraHugeContext(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  _DWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  unsigned __int64 UltraMapping; // rdx
  __int64 *v12; // r8
  __int64 v13; // rax
  __int64 **v14; // rcx
  unsigned __int64 *v15; // r14
  unsigned __int64 ValidKernelPte; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r9d
  __int64 v21; // rcx

  *(_DWORD *)(a2 + 88) = 512;
  *(_QWORD *)(a2 + 96) = a2 + 104;
  v5 = (*(_QWORD *)(a3 + 40) >> 58) & 0x3F;
  *(_QWORD *)(a2 + 168) = a3;
  *(_DWORD *)(a2 + 184) = v5;
  v7 = *(_DWORD **)(a2 + 96);
  *(_DWORD *)(a2 + 188) = 1;
  *v7 |= 1u;
  MiLockPageAtDpcInline(a3);
  if ( *(_BYTE *)(a2 + 68) == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  else
  {
    UltraMapping = MiGetUltraMapping(a1, 0LL, v8, v9);
    v12 = (__int64 *)(a2 + 72);
    v13 = *(_QWORD *)(a1 + 144) + 48LL;
    v14 = *(__int64 ***)(*(_QWORD *)(a1 + 144) + 56LL);
    if ( *v14 != (__int64 *)v13 )
      __fastfail(3u);
    *v12 = v13;
    *(_QWORD *)(a2 + 80) = v14;
    *v14 = v12;
    *(_QWORD *)(v13 + 8) = v12;
    *(_QWORD *)(a2 + 176) = UltraMapping;
    *(_QWORD *)(a2 + 40) = UltraMapping;
    v15 = (unsigned __int64 *)(((UltraMapping >> 27) & 0x1FFFF8) - 0x90482600000LL);
    ValidKernelPte = MiMakeValidKernelPte((a3 + 0x58000000000LL) / 48, 4, (unsigned __int64)v15);
    *v15 = ValidKernelPte | 0xC2;
    v17 = MiPteInShadowRange(v15, ValidKernelPte | 0xC2);
    v20 = 0;
    if ( v17 )
      MiWritePteShadow(v19, v18);
    v21 = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(a2 + 64) = v20;
    *(_QWORD *)(a2 + 48) = v21 + 0x3FFFFFFF;
    *(_QWORD *)(a2 + 32) = v15;
    *(_QWORD *)(a2 + 168) = a3;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_QWORD *)(a1 + 112) = a2;
    result = 1LL;
    *(_WORD *)(a1 + 104) = v20;
  }
  return result;
}
