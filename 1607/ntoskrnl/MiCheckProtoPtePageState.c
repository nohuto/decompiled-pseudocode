/*
 * XREFs of MiCheckProtoPtePageState @ 0x14004E530
 * Callers:
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     MiIsSubsectionClean @ 0x1401DEBCC (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1401DEEA0 (MiPurgeSubsection.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiAreChargesNeededToLockPage @ 0x14004E880 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x14004ECC0 (MiIsPfnCommitNotCharged.c)
 *     MiWriteValidPteVolatile @ 0x1400FCE74 (MiWriteValidPteVolatile.c)
 *     MiChargePartitionResidentAvailable @ 0x140101224 (MiChargePartitionResidentAvailable.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 */

__int64 __fastcall MiCheckProtoPtePageState(unsigned __int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r10
  char v17; // si
  int IsPfnCommitNotCharged; // eax
  char v19; // r11
  unsigned __int16 v20; // r10
  int *v21; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v24; // ett
  unsigned __int8 v25; // di
  unsigned __int64 v26; // rsi
  char v27; // al
  _QWORD v29[9]; // [rsp+20h] [rbp-48h] BYREF
  int v30; // [rsp+80h] [rbp+18h] BYREF
  int v31; // [rsp+88h] [rbp+20h] BYREF

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v5 = MI_READ_PTE_LOCK_FREE(v4);
          v29[0] = v5;
          if ( (v5 & 1) != 0 )
            break;
          if ( (v5 & 0x400) != 0 || (v5 & 0x800) == 0 )
            goto LABEL_50;
          if ( (unsigned int)MiInvalidPteConforms(v5) )
          {
            v6 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v29);
            goto LABEL_9;
          }
        }
        if ( (v5 & 0x200) != 0 )
          goto LABEL_50;
        v6 = MI_GET_PAGE_FRAME_FROM_PTE(v29);
LABEL_9:
        ;
      }
      while ( !MiIsPfnInline(v6) );
      v9 = v8 + 48 * v7;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v30 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v30);
        while ( (*(_QWORD *)(v9 + 24) & 0x8000000000000000uLL) != 0 );
      }
      *a2 = CurrentIrql;
      v11 = MI_READ_PTE_LOCK_FREE(v4);
      if ( v11 == v29[0] )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
    if ( (v11 & 1) != 0 )
      break;
    if ( (*(_BYTE *)(v9 + 34) & 7u) < 6 )
      goto LABEL_49;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    MmAccessFault(2uLL, a1, 0, 0LL);
  }
  if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
LABEL_49:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
LABEL_50:
    *a2 = 17;
    return 0LL;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v9, v12, v13, v14) )
    goto LABEL_38;
  v16 = *(_QWORD *)(v9 + 40);
  if ( (v16 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v9 + 16) & 0x400LL) != 0 )
  {
    v17 = 1;
  }
  else
  {
    IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v15);
    v17 = v19;
    if ( IsPfnCommitNotCharged )
      v17 = 1;
  }
  v20 = (HIDWORD(v16) >> 8) & 0x3FF;
  if ( v20 == 1023 )
    v21 = MiSystemPartition;
  else
    v21 = *(int **)(qword_140327038 + 8LL * v20);
  if ( v17 && !(unsigned int)MiChargeCommit((__int64)v21, 1uLL, 4) )
    goto LABEL_39;
  if ( v21 == MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( CachedResidentAvailable )
    {
      if ( CachedResidentAvailable == -1 )
        break;
      v24 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - 1,
                                  CachedResidentAvailable);
      if ( v24 == CachedResidentAvailable )
        goto LABEL_38;
    }
  }
  if ( (unsigned int)MiChargePartitionResidentAvailable(v21, 1LL, 0xFFFFFFFFLL) )
  {
LABEL_38:
    ++*(_WORD *)(v9 + 32);
  }
  else if ( v17 )
  {
    MiReturnCommit((__int64)v21, 1uLL);
  }
LABEL_39:
  v25 = *a2;
  v26 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
  while ( (*(_BYTE *)(v9 + 34) & 0x20) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v25 != 17 )
      __writecr8(v25);
    v27 = *(_BYTE *)(v9 + 34);
    v31 = 0;
    if ( (v27 & 0x20) != 0 )
    {
      do
        KeYieldProcessorEx(&v31);
      while ( (*(_BYTE *)(v9 + 34) & 0x20) != 0 );
    }
    MiLockPageInline(v9);
  }
  *(_BYTE *)(v9 + 34) |= 0x20u;
  if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) == 0 && (MI_READ_PTE_LOCK_FREE(v26) & 0x20) == 0 )
    MiWriteValidPteVolatile(v26, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v9;
}
