/*
 * XREFs of MiMigratePfn @ 0x140036990
 * Callers:
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     MiIsFaultPteIntact @ 0x1400257E0 (MiIsFaultPteIntact.c)
 *     MiObtainFaultCharges @ 0x14002B0B0 (MiObtainFaultCharges.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14004CD60 (MiRemoveLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiIsPfnCommitNotCharged @ 0x14004ECC0 (MiIsPfnCommitNotCharged.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiReturnFaultCharges @ 0x1400B0E08 (MiReturnFaultCharges.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiComputeFaultNode @ 0x1400E3FD0 (MiComputeFaultNode.c)
 *     MiGetInPageSupportBlock @ 0x1400E53C0 (MiGetInPageSupportBlock.c)
 *     MiCanPageMove @ 0x1401051DC (MiCanPageMove.c)
 *     MiCopyPfnEntry @ 0x1401058C0 (MiCopyPfnEntry.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdateTransitionPteFrame @ 0x1401F2864 (MiUpdateTransitionPteFrame.c)
 */

__int64 __fastcall MiMigratePfn(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  _WORD *v16; // rcx
  int *v17; // r12
  int v18; // r8d
  int v19; // r9d
  _WORD *v20; // r9
  _WORD *v21; // rdi
  unsigned __int64 v22; // rbx
  unsigned int v23; // r10d
  unsigned int v24; // ebp
  __int64 v25; // r8
  __int64 Page; // rax
  ULONG_PTR v27; // r13
  __int64 v28; // r14
  _WORD *v29; // rdx
  __int64 v30; // rbp
  unsigned int v31; // edi
  __int64 v32; // rax
  __int64 updated; // rax
  __int64 *v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int16 v40; // si
  unsigned int v41; // [rsp+30h] [rbp-78h]
  int BugCheckParameter2; // [rsp+38h] [rbp-70h]
  struct _KEVENT *v43; // [rsp+40h] [rbp-68h]
  __int64 v44; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v45[8]; // [rsp+50h] [rbp-58h] BYREF
  _WORD *v46; // [rsp+58h] [rbp-50h] BYREF
  __int16 v47; // [rsp+60h] [rbp-48h]
  unsigned __int16 v48; // [rsp+62h] [rbp-46h]
  unsigned int v50; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v51; // [rsp+C0h] [rbp+18h]

  if ( (*(_QWORD *)(a3 + 24) & 0x4000000000000000LL) == 0 )
  {
    if ( (*(_QWORD *)(a3 + 40) & 0x10000000000000LL) == 0 )
      goto LABEL_3;
    return a3;
  }
  if ( (*(_QWORD *)(a3 + 40) & 0x10000000000000LL) != 0 )
    return a3;
LABEL_3:
  if ( (unsigned __int16)KeNumberNodes <= 1u
    || *(_WORD *)(a3 + 32)
    || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0
    || !(unsigned int)MiCanPageMove(a3, a2, 0x10000000000000LL, a4) )
  {
    return a3;
  }
  v10 = MiComputeFaultNode(a1, a2, 0, a5, (__int64)v45);
  MiInitializePageColorBase(a1, v10, &v46);
  v12 = v48 >> byte_140326A09;
  BugCheckParameter2 = v12;
  if ( (_DWORD)v12 == *(_QWORD *)(a3 + 40) >> 58 )
    return a3;
  v14 = *(_QWORD *)(a3 + 40) >> 40;
  LOWORD(v14) = v14 & 0x3FF;
  v15 = MiPartitionIdToPointer(v14, v11, v48, v12);
  v16 = v46;
  v17 = (int *)v15;
  v43 = (struct _KEVENT *)v15;
  ++*v46;
  v41 = v18 | (unsigned __int16)(v47 & *v16);
  v20 = (char *)qword_1403269E8 + 2 * v19 * (unsigned int)(unsigned __int16)KeNumberNodes;
  v21 = &v20[(unsigned __int16)KeNumberNodes];
  if ( v20 >= v21 )
  {
LABEL_15:
    v22 = 0LL;
    v23 = 1;
    if ( (*(_QWORD *)(a3 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
    {
      v24 = 1;
    }
    else
    {
      v24 = 0;
      if ( (unsigned int)MiIsPfnCommitNotCharged(a3) )
        v24 = 5;
    }
    v50 = v24;
    if ( !(unsigned int)MiObtainFaultCharges(v17, v23, v24) )
      return a3;
    v25 = 1LL;
    if ( (a5 & 1) != 0 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4
      || a2 >= qword_140328030 && a2 < qword_140328030 + 0x8000000000LL
      || PsNtosImageBase
      && (a2 >= (unsigned __int64)PsNtosImageBase && a2 < PsNtosImageEnd
       || a2 >= (unsigned __int64)PsHalImageBase && a2 < PsHalImageEnd) )
    {
      v25 = 9LL;
    }
    Page = MiGetPage(v17, v41, v25);
    v27 = Page;
    if ( Page == -1 )
    {
LABEL_42:
      MiReturnFaultCharges(v17, 1LL, v24);
      return a3;
    }
    v28 = 48 * Page - 0x58000000000LL;
    if ( BugCheckParameter2 != (unsigned __int8)HIBYTE(*(_QWORD *)(v28 + 40)) >> 2 )
    {
      v29 = (char *)qword_1403269E8 + 2 * (unsigned int)(unsigned __int16)KeNumberNodes * BugCheckParameter2;
      if ( v29 < v21 )
      {
        while ( *v29 != ((*(_QWORD *)(a3 + 40) >> 58) & 0x3F) )
        {
          if ( *v29 != ((*(_QWORD *)(v28 + 40) >> 58) & 0x3F) && ++v29 < v21 )
            continue;
          goto LABEL_38;
        }
        goto LABEL_41;
      }
    }
LABEL_38:
    if ( a4 )
    {
      v30 = MiGetInPageSupportBlock(6LL);
      if ( !v30 )
      {
        v24 = v50;
LABEL_41:
        MiLockNestedPageAtDpcInline(v28);
        MiInsertPageInFreeOrZeroedList(v27);
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_42;
      }
    }
    else
    {
      v30 = 0LL;
    }
    v31 = *(unsigned __int8 *)(a3 + 34) >> 6;
    MiLockNestedPageAtDpcInline(v28);
    MiFinalizePageAttribute(v28, v31, 1u);
    MiCopyPfnEntry(v28, a3);
    *(_WORD *)(v28 + 32) = 1;
    *(_QWORD *)(v28 + 24) &= 0xC000000000000000uLL;
    *(_BYTE *)(a3 + 34) = *(_BYTE *)(a3 + 34) & 0xF8 | 5;
    if ( v30 )
    {
      *(_BYTE *)(v30 + 189) |= 0x10u;
      *(_BYTE *)(v28 + 34) |= 0x20u;
      *(_QWORD *)v28 = v30 + 32;
      *(_QWORD *)(v30 + 240) = v28;
    }
    v51 = *(_QWORD *)(v28 + 8) | 0x8000000000000000uLL;
    v32 = MI_READ_PTE_LOCK_FREE(v51);
    updated = MiUpdateTransitionPteFrame(v32, v27);
    v44 = updated;
    *v34 = updated;
    if ( (unsigned int)MiPteInShadowRange(v34, updated) )
      MiWritePteShadow(v36, v35);
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a4 )
    {
      MiLockNestedPageAtDpcInline(a4);
      MiAddLockedPageCharge(a4, 3LL, v37, v38);
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(v39) = 17;
      MiUnlockProtoPoolPage(a4, v39);
      *a6 = v30;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(2uLL);
    }
    MiCopyPage(v27, (a3 + 0x58000000000LL) / 48, 0LL, 2LL);
    if ( a4 )
    {
      MiLockProtoPoolPage(v51, 0LL);
      MiLockPageAtDpcInline(a4);
      MiRemoveLockedPageChargeAndDecRef(a4);
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiLockPageAtDpcInline(a3);
    }
    else
    {
      MiLockPageInline(a3);
    }
    *(_QWORD *)(a3 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    MiInsertPageInFreeOrZeroedList((a3 + 0x58000000000LL) / 48);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiLockPageAtDpcInline(v28);
    *(_BYTE *)(v28 + 34) &= ~0x20u;
    v40 = *(_WORD *)(v28 + 32);
    *(_QWORD *)v28 = 0LL;
    MiRemoveLockedPageCharge(v28);
    if ( v30 )
    {
      *(_BYTE *)(v30 + 189) &= ~0x10u;
      if ( (*(_QWORD *)(v28 + 24) & 0x4000000000000000LL) != 0 )
      {
        if ( v40 == 1 )
        {
          if ( (*(_DWORD *)(v28 + 16) & 0x400LL) == 0 )
            v22 = MiCapturePageFileInfoInline(v28 + 16, 0LL, 1LL);
          MiInsertPageInFreeOrZeroedList(v27);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( a4 )
          MiUnlockProtoPoolPage(a4, 2LL);
        if ( v22 )
        {
          MiReleasePageFileInfo(v43, v22, 1);
          return 0LL;
        }
        return 0LL;
      }
      if ( !MiIsFaultPteIntact(a2, v51, &v44) )
      {
        if ( v40 == 1 )
          MiPfnReferenceCountIsZero(v28, v27);
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( a4 )
          MiUnlockProtoPoolPage(a4, 2LL);
        return 0LL;
      }
    }
    return v28;
  }
  while ( *v20 != ((*(_QWORD *)(a3 + 40) >> 58) & 0x3F) )
  {
    if ( *(_OWORD *)(*(_QWORD *)(v15 + 48) + 2184LL * (unsigned __int16)*v20 + 2008) == 0LL && ++v20 < v21 )
      continue;
    goto LABEL_15;
  }
  return a3;
}
