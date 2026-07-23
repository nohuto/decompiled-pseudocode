/*
 * XREFs of MiResolveProtoCombine @ 0x1401FA2B8
 * Callers:
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiLockLeafPage @ 0x14002E5D0 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiLockAndDecrementShareCount @ 0x140075E7C (MiLockAndDecrementShareCount.c)
 *     MiIsPteInStore @ 0x1401228A0 (MiIsPteInStore.c)
 *     MiDiscardTransitionPte @ 0x140123E30 (MiDiscardTransitionPte.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiMakeTransitionPteValid @ 0x1401F25F0 (MiMakeTransitionPteValid.c)
 */

__int64 __fastcall MiResolveProtoCombine(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rax
  struct _KEVENT *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char v13; // al
  __int64 TransitionPteValid; // rbx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  __int64 v17; // r14
  unsigned __int64 ContainingPageTable; // rax
  __int64 v19; // r9
  __int64 v20; // r15
  char v21; // bl
  char v22; // al
  unsigned __int64 v23; // rbx
  __int64 v24; // rcx
  unsigned __int64 ValidKernelPte; // r11
  __int64 v26[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+98h] [rbp+20h] BYREF

  v28 = 0LL;
  if ( !MiLockProtoPoolPage((unsigned __int64)a3, 0LL) )
    return 0LL;
  v5 = 48 * MiGetContainingPageTable((unsigned __int64)a3) - 0x58000000000LL;
  v6 = MiLockLeafPage((__int64)a3, 0);
  if ( !v6 )
    goto LABEL_11;
  v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
  v26[0] = v7;
  if ( (v7 & 1) != 0 )
  {
    v8 = (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v6 + 40)) >> 8) & 0x3FF);
    goto LABEL_18;
  }
  if ( (v7 & 0x400) != 0
    || (v7 & 0x800) == 0
    || (v8 = (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v6 + 40)) >> 8) & 0x3FF),
        (*(_BYTE *)(v6 + 34) & 0x20) != 0) )
  {
LABEL_10:
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_11:
    MiUnlockProtoPoolPage(v5, 0x11u);
    return 0LL;
  }
  if ( !(unsigned int)MiUnlinkPageFromList(v6, 0) )
  {
    MiDiscardTransitionPte(v6, v9, v10, v11);
    goto LABEL_10;
  }
  __incgsdword(0x2E18u);
  *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  v13 = *(_BYTE *)(v6 + 34);
  ++*(_WORD *)(v6 + 32);
  *(_BYTE *)(v6 + 34) = v13 & 0xF8 | 6;
  TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)a3);
  v26[0] = TransitionPteValid;
  if ( (*(_DWORD *)(v6 + 16) & 0x400LL) == 0 && MiIsPteInStore((__int64)v8, *(_QWORD *)(v6 + 16)) )
    v28 = MiCaptureDirtyBitToPfn(v6);
  *a3 = TransitionPteValid;
  if ( MiPteInShadowRange((unsigned __int64)a3) )
    MiWritePteShadow(v15, TransitionPteValid);
LABEL_18:
  *(_QWORD *)(v6 + 24) ^= (*(_QWORD *)(v6 + 24) ^ (*(_QWORD *)(v6 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v5, 0x11u);
  if ( v28 )
    MiReleasePageFileInfo(v8, v28, 1);
  v16 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)v26);
  v17 = 48 * v16 - 0x58000000000LL;
  v28 = *(_QWORD *)(v17 + 16);
  ContainingPageTable = MiGetContainingPageTable(a1);
  v20 = v19 + 48 * ContainingPageTable;
  MiLockPageAtDpcInline(v20);
  *(_QWORD *)(v20 + 24) ^= (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v21 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE((__int64)&v28);
  v22 = *(_BYTE *)(v17 + 34) >> 6;
  v23 = 16LL * (v21 & 0x1F);
  v24 = (v23 >> 4) & 7;
  if ( v22 != 1 )
  {
    if ( v22 )
    {
      if ( v22 == 2 )
        v24 = (unsigned int)v24 | 0x18;
    }
    else
    {
      v24 = (unsigned int)v24 | 8;
    }
  }
  if ( (unsigned __int64)((__int64)(a1 << 25) >> 16) >= 0xFFFF800000000000uLL )
  {
    if ( (*(_BYTE *)(a2 + 184) & 7u) < 2 )
    {
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a1) )
        ValidKernelPte |= 0x100uLL;
    }
    else
    {
      ValidKernelPte = MiMakeValidKernelPte(v16, v24, a1);
    }
  }
  else
  {
    ValidKernelPte = MmProtectToPteMask[v24] & 0xFFFFFFFFFFFFFF7FuLL | (((16 * (v16 & 0xFFFFFFFFFLL)) | HIBYTE(word_140326AE8) & 1) << 8) | 0x25;
  }
  if ( !MiAllocateWsle(a2, (unsigned __int64 *)a1, v17, (unsigned int)v23 & 0xFFFFFE0F, ValidKernelPte, 0LL) )
  {
    MiLockAndDecrementShareCount(v17, 0);
    MiLockAndDecrementShareCount(v20, 0);
    return 0LL;
  }
  return 1LL;
}
