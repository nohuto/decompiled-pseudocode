/*
 * XREFs of MiPurgeSubsection @ 0x1401DEEA0
 * Callers:
 *     MiDeleteCachedSubsection @ 0x1401DE3FC (MiDeleteCachedSubsection.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockLeafPage @ 0x14002E5D0 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14004E530 (MiCheckProtoPtePageState.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDereferenceControlAreaPfnList @ 0x14008F3D0 (MiDereferenceControlAreaPfnList.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401F2760 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiPurgeSubsection(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int8 v3; // di
  __int64 v4; // r14
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG_PTR v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  KIRQL v18; // al
  unsigned __int8 v19; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 8);
  v2 = *(unsigned int *)(BugCheckParameter2 + 44);
  v3 = 17;
  v4 = *(_QWORD *)BugCheckParameter2;
  v19 = 17;
  v6 = 0LL;
  v7 = v1 + 8 * v2;
  if ( v1 >= v7 )
    return 1LL;
  do
  {
    if ( (v1 & 0xFFF) == 0 || v3 == 17 )
    {
      if ( v3 != 17 )
        MiUnlockProtoPoolPage(v6, v3);
      v6 = MiCheckProtoPtePageState(v1, &v19);
      if ( !v6 )
      {
        v1 = (v1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_21:
        v3 = v19;
        continue;
      }
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      if ( *(_QWORD *)(BugCheckParameter2 + 96) != 1LL || (*(_BYTE *)(BugCheckParameter2 + 32) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        MiUnlockProtoPoolPage(v6, v19);
        return 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      v3 = v19;
    }
    MiLockLeafPage(v1, 0);
    BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v1);
    if ( v11 )
    {
      if ( (BugCheckParameter4 & 1) != 0 )
        KeBugCheckEx(0xDEu, 3uLL, BugCheckParameter2, v1, BugCheckParameter4);
      v12 = ((unsigned __int64)MiReverseSwizzleInvalidPte(BugCheckParameter4, v9, v10, v11) >> 12) & 0xFFFFFFFFFLL;
      v13 = 48 * v12 - 0x58000000000LL;
      if ( (*(_BYTE *)(v13 + 34) & 0x10) != 0 || *(_WORD *)(v13 + 32) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v6, v19);
        v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
        *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72), v18);
        return 0LL;
      }
      MiDereferenceControlAreaPfnList(v4, BugCheckParameter2, 1LL, 2);
      v14 = *(_QWORD *)(v13 + 16);
      *(_QWORD *)v1 = v14;
      if ( (unsigned int)MiPteInShadowRange(v1, v14) )
        MiWritePteShadow(v16, v15);
      MiUnlinkPageFromList(48 * v12 - 0x58000000000LL, 0);
      MiInsertPageInFreeOrZeroedList(v12, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiLockPageAtDpcInline(v6);
      MiDecrementShareCount(v6);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v1 += 8LL;
      goto LABEL_21;
    }
    if ( (BugCheckParameter4 & 0xC00) == 0 && BugCheckParameter4 )
      KeBugCheckEx(0xDEu, 4uLL, BugCheckParameter2, v1, BugCheckParameter4);
    v1 += 8LL;
  }
  while ( v1 < v7 );
  if ( v3 != 17 )
    MiUnlockProtoPoolPage(v6, v3);
  return 1LL;
}
