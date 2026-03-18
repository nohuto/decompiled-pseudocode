/*
 * XREFs of MiResolveProtoCombine @ 0x14012AE34
 * Callers:
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140005934 (MiLockAndDecrementShareCount.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiLockLeafPage @ 0x1400A2340 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MiDiscardTransitionPte @ 0x140117148 (MiDiscardTransitionPte.c)
 *     MI_IS_PTE_IN_STORE_EX @ 0x140123ABC (MI_IS_PTE_IN_STORE_EX.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiResolveProtoCombine(unsigned __int64 a1, ULONG_PTR a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  int *v9; // rbx
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r14
  unsigned __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // al
  unsigned __int64 v20; // rdi
  __int64 v21; // rcx
  unsigned __int64 ValidKernelPte; // rbx
  int *v23; // [rsp+30h] [rbp-48h]
  __int64 v24[8]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v26; // [rsp+98h] [rbp+20h] BYREF

  v5 = 0LL;
  if ( !MiLockProtoPoolPage(a3, 0LL) )
    return 0LL;
  v6 = 48
     * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
     - 0x58000000000LL;
  v7 = MiLockLeafPage(a3, 0);
  if ( !v7 )
    goto LABEL_11;
  v8 = MI_READ_PTE_LOCK_FREE(a3);
  v26 = v8;
  if ( (v8 & 1) != 0 )
  {
    v9 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v7 + 40)) >> 8) & 0x3FF);
    goto LABEL_32;
  }
  if ( (v8 & 0x400) != 0
    || (v8 & 0x800) == 0
    || (v23 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v7 + 40)) >> 8) & 0x3FF),
        (*(_BYTE *)(v7 + 34) & 0x20) != 0) )
  {
LABEL_10:
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_11:
    MiUnlockProtoPoolPage(v6, 0x11u);
    return 0LL;
  }
  if ( !(unsigned int)MiUnlinkPageFromList(v7, 0) )
  {
    MiDiscardTransitionPte(v7);
    goto LABEL_10;
  }
  __incgsdword(0x2E18u);
  ++*(_WORD *)(v7 + 32);
  *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
  *(_BYTE *)(v7 + 34) = *(_BYTE *)(v7 + 34) & 0xF8 | 6;
  v11 = MmProtectToPteMask[(*(_QWORD *)a3 >> 5) & 0x1FLL] ^ (*(_QWORD *)a3 ^ MmProtectToPteMask[(*(_QWORD *)a3 >> 5) & 0x1FLL]) & 0xFFFFFFFFF000LL | 0x21;
  v26 = v11;
  if ( a3 + 0x904C0000000LL <= 0x3FFFFFFF )
  {
    v11 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
    v26 = v11;
  }
  if ( a3 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && a3 >= 0xFFFFF68000000000uLL
    || a3 >= 0xFFFFF6FB40000000uLL
    && a3 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || a3 >= 0xFFFFF6FB7DA00000uLL
    && a3 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || a3 >= 0xFFFFF6FB7DBED000uLL
    && a3 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v11 |= 4uLL;
    v26 = v11;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a3) )
  {
    v11 |= 0x100uLL;
    v26 = v11;
  }
  if ( (*(_DWORD *)(v7 + 16) & 0x400LL) == 0 && MI_IS_PTE_IN_STORE_EX((__int64)v23, *(_QWORD *)(v7 + 16)) )
    v5 = MiCaptureDirtyBitToPfn(v7);
  *(_QWORD *)a3 = v11;
  if ( (unsigned int)MiPteInShadowRange(a3) )
    MiWritePteShadow(a3, v11);
  v9 = v23;
LABEL_32:
  *(_QWORD *)(v7 + 24) ^= (*(_QWORD *)(v7 + 24) ^ (*(_QWORD *)(v7 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v6, 0x11u);
  if ( v5 )
    MiReleasePageFileInfo((__int64)v9, v5, 1);
  v12 = MI_GET_PAGE_FRAME_FROM_PTE(&v26);
  v13 = 48 * v12 - 0x58000000000LL;
  v14 = *(_QWORD *)(v13 + 16);
  v24[0] = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v15 = MI_GET_PFN_FROM_PTE(v24);
  MiLockPageAtDpcInline(v15, v16, v17);
  *(_QWORD *)(v15 + 24) ^= (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v19 = *(_BYTE *)(v13 + 34) >> 6;
  v20 = 16 * ((v14 >> 5) & 0x1F);
  v21 = (v20 >> 4) & 7;
  if ( v19 != 1 )
  {
    if ( v19 )
    {
      if ( v19 == 2 )
        v21 = (unsigned int)v21 | 0x18;
    }
    else
    {
      v21 = (unsigned int)v21 | 8;
    }
  }
  if ( (unsigned __int64)((__int64)(a1 << 25) >> 16) >= 0xFFFF800000000000uLL )
  {
    if ( (*(_BYTE *)(a2 + 216) & 7u) < 2 )
    {
      ValidKernelPte = MmProtectToPteMask[v21] ^ ((v12 << 12) ^ MmProtectToPteMask[v21]) & 0xFFFFFFFFF000LL | 0x21;
      if ( a1 + 0x904C0000000LL <= 0x3FFFFFFF )
        ValidKernelPte &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
      if ( a1 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
        && a1 >= 0xFFFFF68000000000uLL
        || a1 >= 0xFFFFF6FB40000000uLL
        && a1 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
        || a1 >= 0xFFFFF6FB7DA00000uLL
        && a1 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
        || a1 >= 0xFFFFF6FB7DBED000uLL
        && a1 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
      {
        ValidKernelPte |= 4uLL;
      }
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a1) )
        ValidKernelPte |= 0x100uLL;
    }
    else
    {
      ValidKernelPte = MiMakeValidKernelPte(v12, v21, a1, v18);
    }
  }
  else
  {
    ValidKernelPte = MmProtectToPteMask[v21] & 0xFFFFFFFFFFFFFF7FuLL | (((16 * (v12 & 0xFFFFFFFFFLL)) | HIBYTE(word_1402FE760) & 1) << 8) | 0x25;
  }
  if ( !MiAllocateWsle(a2, (unsigned __int64 *)a1, v13, (unsigned int)v20 & 0xFFFFFE0F, ValidKernelPte, 0LL) )
  {
    MiLockAndDecrementShareCount(v13, 0);
    MiLockAndDecrementShareCount(v15, 0);
    return 0LL;
  }
  return 1LL;
}
