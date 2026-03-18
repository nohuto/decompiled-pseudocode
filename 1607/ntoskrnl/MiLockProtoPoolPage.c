/*
 * XREFs of MiLockProtoPoolPage @ 0x14004ED80
 * Callers:
 *     MiLockCode @ 0x1400155F0 (MiLockCode.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DF00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmCheckCachedPageStates @ 0x140033AB0 (MmCheckCachedPageStates.c)
 *     MiMigratePfn @ 0x140036E10 (MiMigratePfn.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiDeleteSubsectionPages @ 0x140061C70 (MiDeleteSubsectionPages.c)
 *     MiDeleteMergedPte @ 0x1400B8E10 (MiDeleteMergedPte.c)
 *     MiWalkVaRange @ 0x1400BB684 (MiWalkVaRange.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiAllocateInPageSupport @ 0x1400E6F94 (MiAllocateInPageSupport.c)
 *     MiMakeImageReadOnly @ 0x1400FC6F4 (MiMakeImageReadOnly.c)
 *     MiSectionCreated @ 0x1400FD2C8 (MiSectionCreated.c)
 *     MiInitializeImageProtos @ 0x1400FD83C (MiInitializeImageProtos.c)
 *     MiRemoveMappedPtes @ 0x140100320 (MiRemoveMappedPtes.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiGetPageFileSectionForReservation @ 0x140115A88 (MiGetPageFileSectionForReservation.c)
 *     MiTranslatePageForCopy @ 0x1401E4C54 (MiTranslatePageForCopy.c)
 *     MiPurgeImageSection @ 0x1401EA8A8 (MiPurgeImageSection.c)
 *     MiReplaceLockedPage @ 0x1401EB18C (MiReplaceLockedPage.c)
 *     MiBuildFileOnlyProtos @ 0x1401ED1AC (MiBuildFileOnlyProtos.c)
 *     MiEliminateStaleExtents @ 0x1401ED5F8 (MiEliminateStaleExtents.c)
 *     MiDeletePerSessionProtos @ 0x1401F4ECC (MiDeletePerSessionProtos.c)
 *     MiInitializeProtoPfn @ 0x1401F5180 (MiInitializeProtoPfn.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1401F90BC (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x1401FA48C (MiResolveProtoCombine.c)
 * Callees:
 *     MiLockOwnedProtoPage @ 0x140022970 (MiLockOwnedProtoPage.c)
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     MiChargeCommit @ 0x14002B650 (MiChargeCommit.c)
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     MiIsPfnInline @ 0x140030920 (MiIsPfnInline.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiIsPfnCommitNotCharged @ 0x14004F140 (MiIsPfnCommitNotCharged.c)
 *     MiWriteValidPteVolatile @ 0x1400FF0F4 (MiWriteValidPteVolatile.c)
 *     MiChargePartitionResidentAvailable @ 0x1401034A4 (MiChargePartitionResidentAvailable.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAE68 (HvlNotifyLongSpinWait.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F2550 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiLockProtoPoolPage(unsigned __int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v10; // rax
  __int64 v11; // r10
  __int16 v12; // ax
  __int64 v13; // rcx
  char v14; // si
  int IsPfnCommitNotCharged; // eax
  char v16; // r11
  unsigned __int16 v17; // r10
  int *v18; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v21; // ett
  unsigned __int8 v22; // bp
  unsigned __int64 v23; // r14
  unsigned int v24; // edi
  unsigned __int64 v26; // rax
  _QWORD v27[2]; // [rsp+20h] [rbp-48h] BYREF
  int v28; // [rsp+80h] [rbp+18h] BYREF
  int v29; // [rsp+88h] [rbp+20h] BYREF

  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v4 = MI_READ_PTE_LOCK_FREE(v3);
    v27[0] = v4;
    if ( (v4 & 1) == 0 || (v4 & 0x200) != 0 )
      return 0LL;
    v5 = MI_READ_PTE_LOCK_FREE(v27);
    v7 = v6 & (v5 >> 12);
  }
  while ( !MiIsPfnInline(v7) );
  v8 = 48 * v7 - 0x58000000000LL;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v28 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v28);
      while ( (*(_QWORD *)(v8 + 24) & 0x8000000000000000uLL) != 0 );
    }
    *a2 = CurrentIrql;
  }
  else
  {
    v29 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v29);
      while ( (*(_QWORD *)(v8 + 24) & 0x8000000000000000uLL) != 0 );
    }
  }
  v10 = MI_READ_PTE_LOCK_FREE(v3);
  v27[0] = v10;
  if ( (v10 & 1) == 0 || (v10 & 0x200) != 0 || v7 != MI_GET_PAGE_FRAME_FROM_PTE(v27) )
  {
    if ( a2 )
    {
      v26 = *a2;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v26);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
  v11 = *(_QWORD *)(v8 + 40);
  if ( (v11 & 0x10000000000000LL) != 0 )
    goto LABEL_42;
  v12 = *(_WORD *)(v8 + 32);
  v13 = *(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v12 )
  {
    if ( v12 != 1 )
    {
      if ( v12 != 2 || !v13 )
        goto LABEL_42;
LABEL_23:
      if ( (*(_BYTE *)(v8 + 34) & 8) == 0 )
        goto LABEL_42;
      goto LABEL_24;
    }
    if ( !v13 )
      goto LABEL_23;
  }
LABEL_24:
  if ( (v11 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v8 + 16) & 0x400LL) != 0 )
  {
    v14 = 1;
  }
  else
  {
    IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(48 * v7 - 0x58000000000LL);
    v14 = v16;
    if ( IsPfnCommitNotCharged )
      v14 = 1;
  }
  v17 = (HIDWORD(v11) >> 8) & 0x3FF;
  if ( v17 == 1023 )
    v18 = MiSystemPartition;
  else
    v18 = *(int **)(qword_140326FF8 + 8LL * v17);
  if ( v14 && !(unsigned int)MiChargeCommit((__int64)v18, 1uLL, 4) )
    goto LABEL_43;
  if ( v18 == MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( CachedResidentAvailable )
    {
      if ( CachedResidentAvailable == -1 )
        break;
      v21 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - 1,
                                  CachedResidentAvailable);
      if ( v21 == CachedResidentAvailable )
        goto LABEL_42;
    }
  }
  if ( !(unsigned int)MiChargePartitionResidentAvailable(v18, 1LL, 0xFFFFFFFFLL) )
  {
    if ( v14 )
      MiReturnCommit((__int64)v18, 1uLL);
    goto LABEL_43;
  }
LABEL_42:
  ++*(_WORD *)(v8 + 32);
LABEL_43:
  if ( a2 )
  {
    v22 = *a2;
    v23 = *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL;
    while ( (*(_BYTE *)(v8 + 34) & 0x20) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v22 != 17 )
        __writecr8(v22);
      v24 = 0;
      while ( (*(_BYTE *)(v8 + 34) & 0x20) != 0 )
      {
        if ( (++v24 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v24);
      }
      MiLockPageInline(v8);
    }
    *(_BYTE *)(v8 + 34) |= 0x20u;
    if ( (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) == 0 && (MI_READ_PTE_LOCK_FREE(v23) & 0x20) == 0 )
      MiWriteValidPteVolatile(v23, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    MiLockOwnedProtoPage(v8, 0x11u);
  }
  return v8;
}
