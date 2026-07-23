/*
 * XREFs of MiCopyKstack @ 0x1401E6034
 * Callers:
 *     MiSwapStackPage @ 0x140109A7C (MiSwapStackPage.c)
 *     MiStackTheftIsr @ 0x1401E6498 (MiStackTheftIsr.c)
 * Callees:
 *     KeCopyPage @ 0x140162490 (KeCopyPage.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCopyKstack(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  char v10; // cl
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  KeCopyPage(a3 << 25 >> 16, (__int64)(v3 << 25) >> 16);
  v6 = MI_READ_PTE_LOCK_FREE(v3);
  v7 = (((a1 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12;
  *(_QWORD *)v3 = v7 | v6 & 0xFFFF000000000FFFuLL;
  if ( (unsigned int)MiPteInShadowRange(v3, v7) )
    MiWritePteShadow(v8, v9);
  v10 = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  *(_QWORD *)(a2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  result = (__int64)(v3 << 25) >> 16;
  *(_BYTE *)(a2 + 34) = v10;
  return result;
}
