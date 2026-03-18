/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x14001F86C
 * Callers:
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 *     MiTranslatePageForCopy @ 0x1401D4068 (MiTranslatePageForCopy.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiRelockProtoPoolPage @ 0x1400105C4 (MiRelockProtoPoolPage.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiIsFaultPteIntact @ 0x14001D2B8 (MiIsFaultPteIntact.c)
 *     KeAbPreWait @ 0x140020C90 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x1400317E4 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MiImagePageOk @ 0x1400E2EAC (MiImagePageOk.c)
 *     MiFreeInPageSupportBlock @ 0x1400FDE30 (MiFreeInPageSupportBlock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        volatile LONG *a4,
        char a5,
        unsigned __int8 a6,
        _DWORD *a7)
{
  unsigned __int64 v7; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  _DWORD *v14; // r14
  __int64 v15; // rbp
  ULONG_PTR v16; // rsi
  __int64 v17; // rax
  unsigned int v18; // ebx
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v7 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v12 = MI_READ_PTE_LOCK_FREE(v7);
  v14 = a7;
  v15 = 0LL;
  v16 = *(_QWORD *)a1 - 32LL;
  v20 = v12;
  if ( !*a7 )
  {
    if ( !(unsigned int)MiAddLockedPageCharge(a1, 2LL) )
      *v14 = 1;
    if ( !*v14 && a2 && *(_WORD *)(a2 + 32) >= 0x7FFFu )
    {
      *v14 = 1;
      MiRemoveLockedPageChargeAndDecRef(a1);
    }
  }
  if ( *v14 == 1 && a2 )
  {
    MiLockNestedPageAtDpcInline(a2);
    MiRemoveLockedPageChargeAndDecRef(a2);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v16 + 176));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a2 )
  {
    LOBYTE(v13) = a6;
    MiUnlockProtoPoolPage(a2, v13);
  }
  else
  {
    __writecr8(a6);
  }
  if ( a4 )
  {
    LOBYTE(v13) = a5;
    MiUnlockWorkingSetExclusive(a4, v13);
  }
  if ( *(_QWORD *)(v16 + 208) )
  {
    v17 = KeAbPreAcquire(v16);
    v15 = v17;
    if ( v17 )
      KeAbPreWait(v17);
  }
  KeWaitForSingleObject((PVOID)(v16 + 56), WrPageIn, 0, 0, 0LL);
  if ( v15 )
  {
    KeAbPreAcquire(v16);
    KeAbPostReleaseEx(v16);
  }
  MiFreeInPageSupportBlock((PVOID)v16);
  if ( a4 )
    ExAcquireSpinLockExclusive(a4);
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
      v18 = (*(_BYTE *)(a1 + 35) & 0x10) != 0 ? -1073741801 : -1073740748;
    }
    else
    {
      if ( (unsigned int)MiIsFaultPteIntact(a3, v7, &v20) && (unsigned int)MiImagePageOk(a3, a1) )
        return 0LL;
      v18 = -1073740748;
    }
    MiRemoveLockedPageChargeAndDecRef(a1);
    return v18;
  }
  return 3221226548LL;
}
