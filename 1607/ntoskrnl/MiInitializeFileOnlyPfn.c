/*
 * XREFs of MiInitializeFileOnlyPfn @ 0x1401ED710
 * Callers:
 *     MiBuildFileOnlyProtos @ 0x1401ECFD8 (MiBuildFileOnlyProtos.c)
 * Callees:
 *     MiReferenceControlAreaPfn @ 0x140023264 (MiReferenceControlAreaPfn.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiMakeSubsectionPte @ 0x1401F25A8 (MiMakeSubsectionPte.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiInitializeFileOnlyPfn(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 ContainingPageTable; // rbx
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 TransitionPte; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)a1;
  MiMakeSubsectionPte(a1);
  v7 = (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F;
  ContainingPageTable = MiGetContainingPageTable(v8);
  v10 = 48 * ContainingPageTable - 0x58000000000LL;
  v11 = 48 * a3 - 0x58000000000LL;
  *(_QWORD *)v11 = 0LL;
  *(_QWORD *)(v11 + 40) |= 0x200000000000000uLL;
  *(_QWORD *)(v11 + 16) = v12;
  MiLockPageAtDpcInline(v11);
  v13 = *(_QWORD *)(v11 + 40);
  *(_BYTE *)(v11 + 35) &= 0xF8u;
  *(_QWORD *)(v11 + 8) = a2;
  *(_QWORD *)(v11 + 40) ^= (ContainingPageTable ^ v13) & 0xFFFFFFFFFLL;
  *(_BYTE *)(v11 + 34) = *(_BYTE *)(v11 + 34) & 0xF8 | 2;
  *(_BYTE *)(v11 + 34) = *(_BYTE *)(v11 + 34) & 0x3F | 0x40;
  *(_QWORD *)(v11 + 24) &= 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  TransitionPte = MiMakeTransitionPte(a3, v7);
  *a2 = TransitionPte;
  if ( (unsigned int)MiPteInShadowRange(a2, TransitionPte) )
    MiWritePteShadow(v16, v15);
  MiReferenceControlAreaPfn(v3, a1, 1u);
  MiLockPageAtDpcInline(v10);
  result = *(_QWORD *)(v10 + 24);
  *(_QWORD *)(v10 + 24) = result ^ (result ^ (result + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
