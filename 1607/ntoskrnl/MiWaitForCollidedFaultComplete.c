/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x1400C4044
 * Callers:
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiTranslatePageForCopy @ 0x1401E4A80 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiRelockProtoPoolPage @ 0x140022490 (MiRelockProtoPoolPage.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiIsFaultPteIntact @ 0x1400257E0 (MiIsFaultPteIntact.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     MiImagePageOk @ 0x14009CCE8 (MiImagePageOk.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiFreeInPageSupportBlock @ 0x1400C4240 (MiFreeInPageSupportBlock.c)
 *     KeAbPostReleaseEx @ 0x1400C455C (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1400C62F0 (KeAbPreWait.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        unsigned __int8 a6,
        _DWORD *a7)
{
  unsigned __int64 v7; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  _DWORD *v14; // r14
  __int64 v15; // rbp
  ULONG_PTR v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  LONG *SharedVm; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // [rsp+60h] [rbp+8h] BYREF

  v7 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v12 = MI_READ_PTE_LOCK_FREE(v7);
  v14 = a7;
  v15 = 0LL;
  v16 = *(_QWORD *)a1 - 32LL;
  v29 = v12;
  if ( !*a7 )
  {
    if ( !(unsigned int)MiAddLockedPageCharge(a1, 2) )
      *v14 = 1;
    if ( !*v14 && a2 && *(_WORD *)(a2 + 32) >= 0x7FFFu )
    {
      *v14 = 1;
      MiRemoveLockedPageChargeAndDecRef(a1, v13, v17, v18);
    }
  }
  if ( *v14 == 1 && a2 )
  {
    MiLockNestedPageAtDpcInline(a2);
    MiRemoveLockedPageChargeAndDecRef(a2, v26, v27, v28);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v16 + 176));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a2 )
    MiUnlockProtoPoolPage(a2, a6);
  else
    __writecr8(a6);
  if ( a4 )
  {
    LOBYTE(v13) = a5;
    MiUnlockWorkingSetExclusive(a4, v13);
  }
  if ( *(_QWORD *)(v16 + 208) )
  {
    v19 = KeAbPreAcquire(v16, 0LL, 0);
    v15 = v19;
    if ( v19 )
      KeAbPreWait(v19);
  }
  KeWaitForSingleObject((PVOID)(v16 + 56), WrPageIn, 0, 0, 0LL);
  if ( v15 )
  {
    KeAbPreAcquire(v16, v15, 0);
    KeAbPostReleaseEx(v16);
  }
  MiFreeInPageSupportBlock((PVOID)v16);
  if ( a4 )
  {
    SharedVm = MiGetSharedVm(a4);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  if ( *v14 != 1 )
  {
    if ( a2 )
    {
      MiRelockProtoPoolPage(a2, (char *)&a6);
      MiLockPageAtDpcInline(a1);
    }
    else
    {
      MiLockPageInline(a1);
    }
    if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    {
      v24 = (*(_BYTE *)(a1 + 35) & 0x10) != 0 ? -1073741801 : -1073740748;
    }
    else
    {
      if ( MiIsFaultPteIntact(a3, v7, &v29) && MiImagePageOk(a3, a1) )
        return 0LL;
      v24 = -1073740748;
    }
    MiRemoveLockedPageChargeAndDecRef(a1, v21, v22, v23);
    return v24;
  }
  return 3221226548LL;
}
