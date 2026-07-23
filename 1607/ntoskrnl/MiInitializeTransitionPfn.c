/*
 * XREFs of MiInitializeTransitionPfn @ 0x140022CA4
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MiSectionCreated @ 0x1400FB048 (MiSectionCreated.c)
 *     MiInitializeImageProtos @ 0x1400FB5BC (MiInitializeImageProtos.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiProtectionToCacheAttribute @ 0x1400E538C (MiProtectionToCacheAttribute.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiInitializeTransitionPfn(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 ContainingPageTable; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // al
  char v10; // al
  __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 TransitionPte; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 result; // rax
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v4 = 48 * a1 - 0x58000000000LL;
  ContainingPageTable = MiGetContainingPageTable(a2);
  *(_QWORD *)v4 = 0LL;
  v6 = ContainingPageTable;
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 16) = v7;
  *(_QWORD *)(v4 + 8) = a2;
  *(_QWORD *)(v4 + 24) &= ~0x4000000000000000uLL;
  v9 = *(_BYTE *)(v4 + 34);
  *(_QWORD *)(v4 + 40) = v6 & 0xFFFFFFFFFLL | v8 & 0xFFFFFFF000000000uLL | 0x200000000000000LL;
  if ( (v9 & 0x10) != 0 )
    v10 = v9 & 0xF8 | 3;
  else
    v10 = v9 & 0xF8 | 2;
  *(_BYTE *)(v4 + 34) = v10;
  v18 = MI_READ_PTE_LOCK_FREE(a2);
  v11 = (unsigned int)MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v18);
  v12 = MiProtectionToCacheAttribute(v11);
  MiFinalizePageAttribute(v4, v12, 1LL);
  *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
  TransitionPte = MiMakeTransitionPte(a1, (unsigned int)v11);
  v18 = TransitionPte;
  *a2 = TransitionPte;
  if ( (unsigned int)MiPteInShadowRange(a2, TransitionPte) )
    MiWritePteShadow(v15, v14);
  v16 = 48 * v6 - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v16);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v16 + 24) ^= (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
