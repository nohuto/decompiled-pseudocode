/*
 * XREFs of MiBuildForkPageTable @ 0x140108830
 * Callers:
 *     MiUpdateForkMaps @ 0x140107B8C (MiUpdateForkMaps.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiBuildForkPageTable(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4, __int64 a5, int a6)
{
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned __int8 v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 TransitionPte; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx

  v10 = 48 * a2 - 0x58000000000LL;
  v11 = 48 * a5 - 0x58000000000LL;
  *(_QWORD *)(v10 + 16) = MiMakeDemandZeroPte(4LL, a5, a3, a4);
  *(_QWORD *)(v10 + 40) ^= (v12 ^ *(_QWORD *)(v10 + 40)) & 0xFFFFFFFFFLL;
  v13 = MiLockPageInline(v11);
  *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockPageAtDpcInline(v10);
  *(_BYTE *)(v10 + 34) |= 0x10u;
  if ( (*(_BYTE *)(v10 + 34) & 0xC0) != 0x40 )
    MiChangePageAttribute(v10, 1u, 1);
  v14 = *(_QWORD *)(v10 + 24) & 0xC000000000000001uLL;
  *(_WORD *)(v10 + 32) = 1;
  *(_QWORD *)(v10 + 8) = a3;
  *(_QWORD *)(v10 + 24) = v14 | 1;
  *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 6;
  MiAddLockedPageCharge(v10, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v13);
  if ( a6 == 1 )
  {
    TransitionPte = MiMakeTransitionPte(a2, 4LL);
    *a4 = TransitionPte;
    result = MiPteInShadowRange(a4, TransitionPte);
    if ( (_DWORD)result )
      return MiWritePteShadow(v22, v21);
  }
  else
  {
    v15 = qword_1403A9360 ^ (qword_1403A9360 ^ (a2 << 12)) & 0xFFFFFFFFF000LL | 0x21;
    if ( a3 >= 0xFFFFF6FB40000000uLL && a3 <= 0xFFFFF6FB7FFFFFFFuLL )
      v15 &= ~qword_1403A9350 & 0x7FFFFFFFFFFFFFFFLL;
    if ( a3 <= 0xFFFFF6BFFFFFFF78uLL && a3 >= 0xFFFFF68000000000uLL
      || a3 >= 0xFFFFF6FB40000000uLL && a3 <= 0xFFFFF6FB5FFFFFF8uLL
      || a3 >= 0xFFFFF6FB7DA00000uLL && a3 <= 0xFFFFF6FB7DAFFFF8uLL
      || a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v15 |= 4uLL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a3) )
      v15 |= 0x100uLL;
    v17 = v15 | 0x46;
    *a4 = v17;
    result = MiPteInShadowRange(a4, v16);
    if ( (_DWORD)result )
      result = MiWritePteShadow(v19, v17);
    if ( a6 == 3 && (MiFlags & 0xC00000) != 0 )
    {
      result = *(_QWORD *)(a1 + 1536);
      *(_QWORD *)((a3 & 0xFFF) + result) = v17;
    }
  }
  return result;
}
