/*
 * XREFs of MiMigratePfn @ 0x140073740
 * Callers:
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiIsFaultPteIntact @ 0x14001D2B8 (MiIsFaultPteIntact.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x1400634F0 (MiObtainFaultCharges.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x14006A630 (MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiComputeFaultNode @ 0x1400707F0 (MiComputeFaultNode.c)
 *     MiGetInPageSupportBlock @ 0x140070DF4 (MiGetInPageSupportBlock.c)
 *     MiCanPageMove @ 0x1400712E0 (MiCanPageMove.c)
 *     MiCopyPfnEntry @ 0x140071D80 (MiCopyPfnEntry.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MI_IS_PFN_COMMIT_NOT_CHARGED @ 0x1400AA2E4 (MI_IS_PFN_COMMIT_NOT_CHARGED.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 *     MiReturnFaultCharges @ 0x1400F2600 (MiReturnFaultCharges.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMigratePfn(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  int v10; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  _WORD *v14; // rcx
  int *v15; // rsi
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rdx
  _WORD *v19; // r9
  _WORD *v20; // rbx
  __int64 v21; // rdi
  unsigned int v22; // r9d
  unsigned int v23; // ebp
  unsigned int v24; // r8d
  __int64 Page; // rax
  ULONG_PTR v26; // r12
  __int64 v27; // r8
  int *v28; // rcx
  __int64 v29; // rsi
  _WORD *v30; // rdx
  _BYTE *v31; // rbp
  unsigned __int64 v32; // rdx
  unsigned int v33; // ebx
  _QWORD *v34; // r15
  unsigned __int64 v35; // rbx
  __int16 v36; // r14
  unsigned int v37; // [rsp+30h] [rbp-78h]
  int BugCheckParameter2; // [rsp+38h] [rbp-70h]
  __int64 v39; // [rsp+40h] [rbp-68h]
  unsigned __int64 v40; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v41; // [rsp+50h] [rbp-58h] BYREF
  _WORD *v42; // [rsp+58h] [rbp-50h] BYREF
  __int16 v43; // [rsp+60h] [rbp-48h]
  unsigned __int16 v44; // [rsp+62h] [rbp-46h]
  unsigned int v46; // [rsp+C0h] [rbp+18h]

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
    || (BYTE4(KeGetCurrentThread()[1].Queue) & 0x40) != 0
    || !MiCanPageMove(a3) )
  {
    return a3;
  }
  v10 = MiComputeFaultNode(a1, a2, 0LL, a5, &v41);
  MI_INITIALIZE_COLOR_BASE(a1, v10, (__int64)&v42);
  BugCheckParameter2 = v44 >> byte_1402FE6D9;
  if ( BugCheckParameter2 == *(_QWORD *)(a3 + 40) >> 58 )
    return a3;
  v12 = *(_QWORD *)(a3 + 40) >> 40;
  LOWORD(v12) = v12 & 0x3FF;
  v13 = MiPartitionIdToPointer(v12);
  v14 = v42;
  v15 = (int *)v13;
  v39 = v13;
  ++*v42;
  v37 = v16 | (unsigned __int16)(v43 & *v14);
  v18 = v17 * (unsigned int)(unsigned __int16)KeNumberNodes;
  v19 = (char *)qword_1402FE6B8 + 2 * v18;
  v20 = &v19[(unsigned __int16)KeNumberNodes];
  if ( v19 >= v20 )
  {
LABEL_16:
    v21 = 0LL;
    v22 = 1;
    if ( (*(_QWORD *)(a3 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
    {
      v23 = 1;
    }
    else
    {
      v23 = 0;
      if ( (unsigned int)MI_IS_PFN_COMMIT_NOT_CHARGED(a3, v18) )
        v23 = 5;
    }
    v46 = v23;
    if ( !(unsigned int)MiObtainFaultCharges(v15, v22, v23) )
      return a3;
    v24 = 1;
    if ( (a5 & 1) != 0 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4
      || a2 + 0x80000000000LL <= 0x7FFFFFFFFFLL
      || PsNtosImageBase
      && (a2 >= (unsigned __int64)PsNtosImageBase && a2 < PsNtosImageEnd
       || a2 >= (unsigned __int64)PsHalImageBase && a2 < PsHalImageEnd) )
    {
      v24 = 9;
    }
    Page = MiGetPage((__int64)v15, v37, v24);
    v26 = Page;
    if ( Page == -1 )
    {
      v27 = v23;
      v28 = v15;
LABEL_50:
      MiReturnFaultCharges(v28, 1LL, v27);
      return a3;
    }
    v29 = 48 * Page - 0x58000000000LL;
    if ( BugCheckParameter2 != (unsigned __int8)HIBYTE(*(_QWORD *)(v29 + 40)) >> 2 )
    {
      v30 = (char *)qword_1402FE6B8 + 2 * (unsigned int)(unsigned __int16)KeNumberNodes * BugCheckParameter2;
      if ( v30 < v20 )
      {
        while ( *v30 != ((*(_QWORD *)(a3 + 40) >> 58) & 0x3F) )
        {
          if ( *v30 != ((*(_QWORD *)(v29 + 40) >> 58) & 0x3F) && ++v30 < v20 )
            continue;
          goto LABEL_39;
        }
        MiLockNestedPageAtDpcInline(v29);
        if ( *(_QWORD *)(v29 + 16) )
          MiInsertPageInFreeOrZeroedList(v26, 2uLL);
        else
          MiInsertPageInFreeOrZeroedList(v26, 1uLL);
        v27 = v23;
        goto LABEL_49;
      }
    }
LABEL_39:
    if ( a4 )
    {
      v31 = MiGetInPageSupportBlock(6);
      if ( !v31 )
      {
        MiLockNestedPageAtDpcInline(v29);
        if ( *(_QWORD *)(v29 + 16) )
          v32 = 2LL;
        else
          v32 = 1LL;
        MiInsertPageInFreeOrZeroedList(v26, v32);
        v27 = v46;
LABEL_49:
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v28 = (int *)v39;
        goto LABEL_50;
      }
    }
    else
    {
      v31 = 0LL;
    }
    v33 = *(unsigned __int8 *)(a3 + 34) >> 6;
    MiLockNestedPageAtDpcInline(v29);
    MiFinalizePageAttribute(v29, v33, 1);
    MiCopyPfnEntry(v29, a3);
    *(_WORD *)(v29 + 32) = 1;
    *(_QWORD *)(v29 + 24) &= 0xC000000000000000uLL;
    *(_BYTE *)(a3 + 34) = *(_BYTE *)(a3 + 34) & 0xF8 | 5;
    if ( v31 )
    {
      v31[189] |= 0x10u;
      *(_BYTE *)(v29 + 34) |= 0x20u;
      *(_QWORD *)v29 = v31 + 32;
      *((_QWORD *)v31 + 30) = v29;
    }
    v34 = (_QWORD *)(*(_QWORD *)(v29 + 8) | 0x8000000000000000uLL);
    v35 = ((v26 & 0xFFFFFFFFFLL) << 12) | MI_READ_PTE_LOCK_FREE(v34) & 0xFFFF000000000FFFuLL;
    v40 = v35;
    *v34 = v35;
    if ( (unsigned int)MiPteInShadowRange(v34) )
      MiWritePteShadow(v34, v35);
    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a4 )
    {
      MiLockNestedPageAtDpcInline(a4);
      MiAddLockedPageCharge(a4, 3LL);
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockProtoPoolPage(a4, 0x11u);
      *a6 = v31;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(2uLL);
    }
    MiCopyPage(v26, (a3 + 0x58000000000LL) / 48, 0LL, 2u);
    if ( a4 )
    {
      MiLockProtoPoolPage((unsigned __int64)v34, 0LL);
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
    MiInsertPageInFreeOrZeroedList((a3 + 0x58000000000LL) / 48, 2uLL);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiLockPageAtDpcInline(v29);
    *(_BYTE *)(v29 + 34) &= ~0x20u;
    v36 = *(_WORD *)(v29 + 32);
    *(_QWORD *)v29 = 0LL;
    MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(v29);
    if ( v31 )
    {
      v31[189] &= ~0x10u;
      if ( (*(_QWORD *)(v29 + 24) & 0x4000000000000000LL) != 0 )
      {
        if ( v36 == 1 )
        {
          if ( (*(_DWORD *)(v29 + 16) & 0x400LL) == 0 )
            v21 = MiCapturePageFileInfoInline(v29 + 16, 0LL, 1LL);
          MiInsertPageInFreeOrZeroedList(v26, 2uLL);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( a4 )
          MiUnlockProtoPoolPage(a4, 2u);
        if ( v21 )
        {
          MiReleasePageFileInfo(v39, v21, 1LL);
          return 0LL;
        }
        return 0LL;
      }
      if ( !(unsigned int)MiIsFaultPteIntact(a2, (__int64)v34, &v40) )
      {
        if ( v36 == 1 )
          MiPfnReferenceCountIsZero(v29, v26);
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( a4 )
          MiUnlockProtoPoolPage(a4, 2u);
        return 0LL;
      }
    }
    return v29;
  }
  v18 = *(_QWORD *)(a3 + 40) >> 58;
  while ( *v19 != (v18 & 0x3F) )
  {
    if ( *(_OWORD *)(*(_QWORD *)(v13 + 40) + 1336LL * (unsigned __int16)*v19 + 1168) == 0LL && ++v19 < v20 )
      continue;
    goto LABEL_16;
  }
  return a3;
}
