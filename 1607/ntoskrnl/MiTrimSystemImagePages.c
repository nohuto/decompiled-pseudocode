/*
 * XREFs of MiTrimSystemImagePages @ 0x140082164
 * Callers:
 *     MiSetPagingOfDriver @ 0x140081F24 (MiSetPagingOfDriver.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiMakePrototypePteDirect @ 0x1401F2584 (MiMakePrototypePteDirect.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiTrimSystemImagePages(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  __int64 *i; // r14
  __int64 v5; // rax
  char v6; // bl
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 PrototypePteDirect; // rax
  __int64 TransitionPte; // rdx
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  __int64 ContainingPageTable; // rbx
  unsigned __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  for ( i = a1; (unsigned __int64)i <= a2; ++i )
  {
    v5 = MI_READ_PTE_LOCK_FREE(i);
    if ( (v5 & 1) == 0 && (v5 & 0x400) != 0 )
    {
      v6 = v5 & 0xFE | 1;
      v20 = v5 & 0xFFFFFFFFFFFFFBFEuLL | 1;
      v7 = MI_GET_PFN_FROM_PTE(&v20);
      v9 = v7;
      if ( (*(_QWORD *)(v7 + 40) & 0x200000000000000LL) != 0 )
      {
        PrototypePteDirect = MiMakePrototypePteDirect(v8 | *(_QWORD *)(v7 + 8));
        TransitionPte = PrototypePteDirect;
        if ( (v12 & *(_QWORD *)(v9 + 8)) == 0 )
          TransitionPte = PrototypePteDirect | 0x800;
      }
      else
      {
        v13 = MI_GET_PAGE_FRAME_FROM_PTE(&v20);
        TransitionPte = MiMakeTransitionPte(v13, v14);
      }
      *i = TransitionPte;
      if ( (unsigned int)MiPteInShadowRange(i, TransitionPte) )
        MiWritePteShadow(v16, v15);
      v17 = 0LL;
      MiLockPageAtDpcInline(v9);
      *(_BYTE *)(v9 + 35) &= ~8u;
      if ( (v6 & 0x42) != 0 )
        v17 = MiCaptureDirtyBitToPfn(v9);
      if ( (*(_QWORD *)(v9 + 40) & 0x200000000000000LL) != 0 )
        ContainingPageTable = MiGetContainingPageTable(i);
      else
        ContainingPageTable = -1LL;
      *(_BYTE *)(v9 + 35) = *(_BYTE *)(v9 + 35) & 0xF8 | 2;
      MiDecrementShareCount(v9);
      if ( ContainingPageTable != -1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v9 = 48 * ContainingPageTable - 0x58000000000LL;
        MiLockPageAtDpcInline(v9);
        MiDecrementShareCount(v9);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v17 )
        MiReleasePageFileInfo((struct _KEVENT *)MiSystemPartition, v17, 1);
      ++v2;
    }
  }
  return v2;
}
