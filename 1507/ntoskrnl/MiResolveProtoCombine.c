/*
 * XREFs of MiResolveProtoCombine @ 0x14022B144
 * Callers:
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiLockLeafPage @ 0x140037DE0 (MiLockLeafPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     MiDiscardTransitionPte @ 0x14014AE5C (MiDiscardTransitionPte.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x140225A80 (MiGetContainingPageTable.c)
 *     MiMakeTransitionPteValid @ 0x140225E1C (MiMakeTransitionPteValid.c)
 *     MiIsStrongCodeImagePage @ 0x1402311FC (MiIsStrongCodeImagePage.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiResolveProtoCombine(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 PteShadow; // rax
  __int16 *v9; // r15
  __int64 v10; // rdx
  char v12; // al
  __int64 TransitionPteValid; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 ContainingPageTable; // rax
  __int64 v20; // r11
  __int64 v21; // r15
  unsigned int v22; // ebx
  char v23; // al
  unsigned __int64 v24; // rbx
  char v25; // bp
  __int64 v26; // rcx
  char v27; // al
  __int64 v28; // r11
  unsigned __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int64 v31; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v32[64]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v34; // [rsp+98h] [rbp+20h] BYREF

  v31 = 0LL;
  if ( !MiLockProtoPoolPage((unsigned __int64)a3, 0LL) )
    return 0LL;
  v5 = (__int64)(a1 << 25) >> 16;
  v6 = 48 * MiGetContainingPageTable((unsigned __int64)a3) - 0x58000000000LL;
  v7 = MiLockLeafPage(a3, 0LL);
  if ( !v7 )
    goto LABEL_13;
  PteShadow = *a3;
  if ( (unsigned __int64)(a3 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow((__int64)a3, *a3);
  v34 = PteShadow;
  if ( (PteShadow & 1) != 0 )
  {
    v9 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v7 + 40)) >> 8) & 0x3FF);
    goto LABEL_21;
  }
  if ( (PteShadow & 0x400) != 0
    || (PteShadow & 0x800) == 0
    || (v9 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v7 + 40)) >> 8) & 0x3FF),
        (*(_BYTE *)(v7 + 34) & 0x20) != 0) )
  {
LABEL_12:
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_13:
    MiUnlockProtoPoolPage(v6, 0x11u);
    return 0LL;
  }
  if ( !(unsigned int)MiUnlinkPageFromList(v7, 0LL) )
  {
    MiDiscardTransitionPte(v7);
    goto LABEL_12;
  }
  __incgsdword(0x2E18u);
  *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
  v12 = *(_BYTE *)(v7 + 34);
  ++*(_WORD *)(v7 + 32);
  *(_BYTE *)(v7 + 34) = v12 & 0xF8 | 6;
  TransitionPteValid = MiMakeTransitionPteValid((__int64 *)a3, v10);
  v14 = *(_QWORD *)(v7 + 16);
  v15 = TransitionPteValid;
  v34 = TransitionPteValid;
  if ( (v14 & 0x400) == 0 && (v14 & 4) != 0 && (unsigned __int16)v14 >> 12 == *((_DWORD *)v9 + 261) )
    v31 = MiCaptureDirtyBitToPfn(v7);
  *a3 = v15;
  if ( (unsigned __int64)(a3 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow((__int64)a3, v15);
LABEL_21:
  *(_QWORD *)(v7 + 24) ^= (*(_QWORD *)(v7 + 24) ^ (*(_QWORD *)(v7 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v6, 0x11u);
  if ( v31 )
    MiReleasePageFileInfo((struct _KEVENT *)v9, v31, 1);
  v16 = v34;
  if ( (unsigned __int64)&STACK[0x90482413098] <= 0x7F8 )
    v16 = MiReadPteShadow((__int64)&v34, v34);
  v17 = (v16 >> 12) & 0xFFFFFFFFFLL;
  v18 = 48 * v17 - 0x58000000000LL;
  v31 = *(_QWORD *)(v18 + 16);
  ContainingPageTable = MiGetContainingPageTable(a1);
  v21 = 48 * ContainingPageTable - v20;
  v22 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v22 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v22);
    }
    while ( *(__int64 *)(v21 + 24) < 0 );
  }
  *(_QWORD *)(v21 + 24) ^= (*(_QWORD *)(v21 + 24) ^ (*(_QWORD *)(v21 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v23 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE((__int64 *)&v31);
  v24 = 16LL * (v23 & 0x1F);
  LODWORD(v34) = BYTE2(MiFlags) & 3;
  if ( (MiFlags & 0x30000) != 0 && v5 >= 0xFFFF800000000000uLL )
  {
    v25 = v23 & 0x1F;
    if ( (v23 & 2) != 0 )
    {
      if ( (unsigned int)MiIsStrongCodeImagePage(48 * v17 - 0x58000000000LL, v32) )
      {
        v24 = v24 & 0xFFFFFFFFFFFFFE0FuLL | 0x30;
      }
      else if ( (v25 & 0x1F) == 2 )
      {
        v24 = v24 & 0xFFFFFFFFFFFFFE0FuLL | 0x10;
      }
      else
      {
        v24 &= ~0x20uLL;
      }
    }
  }
  v26 = (v24 >> 4) & 7;
  v27 = *(_BYTE *)(v18 + 34) >> 6;
  if ( v27 != 1 )
  {
    if ( v27 )
    {
      if ( v27 == 2 )
        v26 = (unsigned int)v26 | 0x18;
    }
    else
    {
      v26 = (unsigned int)v26 | 8;
    }
  }
  v28 = a2;
  if ( v5 >= 0xFFFF800000000000uLL )
  {
    if ( (*(_BYTE *)(a2 + 216) & 7u) < 2 )
    {
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a1) )
        v29 |= 0x100uLL;
    }
    else
    {
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a1) )
        v30 |= 0x100uLL;
      v29 = v30 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
    }
  }
  else
  {
    v29 = MmProtectToPteMask[v26] & 0xFFFFFFFFFFFFFF7FuLL | (((16 * (v17 & 0xFFFFFFFFFLL)) | HIBYTE(word_14034EC18) & 1) << 8) | 0x25;
  }
  if ( !MiAllocateWsle(v28, a1, v18, (unsigned int)v24 & 0xFFFFFE0F, v29, 0LL) )
  {
    MiLockAndDecrementShareCount(v18, 0);
    MiLockAndDecrementShareCount(v21, 0);
    return 0LL;
  }
  return 1LL;
}
