/*
 * XREFs of MiSwapStackPage @ 0x14011F8A0
 * Callers:
 *     MiClaimPhysicalRun @ 0x14005ACA0 (MiClaimPhysicalRun.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140021700 (KeExpandKernelStackAndCalloutInternal.c)
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     MiGetPteFromCopyList @ 0x140059330 (MiGetPteFromCopyList.c)
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     MiPageToNode @ 0x14005AA30 (MiPageToNode.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     KeGenericCallDpc @ 0x1400D3924 (KeGenericCallDpc.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiSwapStackPageNoDpc @ 0x14011FF4C (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x140120138 (MiCanStealKernelStack.c)
 *     MiSwitchKstackPages @ 0x140134ADC (MiSwitchKstackPages.c)
 *     MiCopyKstack @ 0x140134B58 (MiCopyKstack.c)
 *     KeTryToFreezeThreadStack @ 0x14013A07C (KeTryToFreezeThreadStack.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSwapStackPage(__int64 a1, unsigned int *a2, int a3, __int64 *a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  __int64 v7; // rcx
  __int64 v8; // r13
  int v9; // edx
  unsigned int v10; // r8d
  __int64 v11; // rdi
  int v12; // eax
  __int64 Page; // rax
  __int64 v14; // r14
  unsigned __int8 CurrentIrql; // r12
  signed __int8 v16; // cf
  unsigned int v17; // r14d
  signed __int32 i; // edx
  unsigned int v19; // r15d
  unsigned __int8 v20; // dl
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // r8
  unsigned __int64 *PteFromCopyList; // r14
  __int64 v25; // rcx
  int v26; // ecx
  int v27; // eax
  unsigned __int8 v28; // r12
  unsigned int v29; // esi
  signed __int32 j; // edx
  __int64 v31; // rdi
  unsigned __int8 v32; // si
  unsigned __int8 v33; // r14
  unsigned int v34; // edi
  __int64 v36; // [rsp+38h] [rbp-51h]
  __int64 v37; // [rsp+40h] [rbp-49h]
  unsigned __int8 v38; // [rsp+48h] [rbp-41h]
  unsigned __int64 CurrentThread; // [rsp+50h] [rbp-39h]
  _QWORD v40[4]; // [rsp+58h] [rbp-31h] BYREF
  int v41; // [rsp+78h] [rbp-11h]
  unsigned __int64 v42; // [rsp+80h] [rbp-9h]
  __int64 v43; // [rsp+88h] [rbp-1h]
  unsigned __int64 v44; // [rsp+90h] [rbp+7h]
  __int64 v45[8]; // [rsp+98h] [rbp+Fh] BYREF

  v5 = 0;
  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  if ( !byte_14034FB98 )
    return 0LL;
  v7 = a1 + 0x58000000000LL;
  v8 = v7 / 48;
  if ( a3 == -1 )
  {
    v11 = (*(_QWORD *)(a1 + 40) >> 36) & 3LL;
    v12 = MiPageToNode(v7 / 48, 0);
    v10 = 0;
    v9 = ((_DWORD)v11 << byte_14034EB98) | (v12 << byte_14034EB89);
  }
  else
  {
    v9 = a3 & ~dword_14034EBB8;
    v10 = 16;
  }
  Page = MiGetPage((__int64)MiSystemPartition, dword_14034EBB8 & v8 | v9, v10);
  v37 = Page;
  if ( Page == -1 )
    return 0LL;
  v14 = 48 * Page - 0x58000000000LL;
  v36 = v14;
  MiFinalizePageAttribute(v14, 1LL, 0);
  v43 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v38 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FF40);
  }
  else
  {
    v16 = _interlockedbittestandset(dword_14034FF40, 0x1Fu);
    v17 = 0;
    if ( v16 )
      v17 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FF40);
    for ( i = dword_14034FF40[0]; (dword_14034FF40[0] & 0xBFFFFFFF) != 0x80000000; i = dword_14034FF40[0] )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(dword_14034FF40, i | 0x40000000, i);
      if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v17);
    }
    v14 = v36;
  }
  v19 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v19);
    }
    while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
  }
  v42 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
  if ( !(unsigned int)MiCanStealKernelStack(a1, 1LL) )
  {
    v20 = CurrentIrql;
LABEL_88:
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockWorkingSetExclusive((__int64)dword_14034FF40, v20);
    v25 = v14;
LABEL_89:
    MiReleaseFreshPage(v25);
    return 0LL;
  }
  if ( (MiFlags & 0x800) == 0 && (unsigned int)MiSwapStackPageNoDpc(a2, a1, v14) == 1 )
  {
    *(_BYTE *)(a1 + 34) &= 0xC7u;
    *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
    *(_BYTE *)(a1 + 35) &= ~0x20u;
    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockWorkingSetExclusive((__int64)dword_14034FF40, CurrentIrql);
LABEL_31:
    v21 = v37;
    *a5 = 1;
    goto LABEL_84;
  }
  v22 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 == -5LL || (v22 & 1) == 0 )
  {
    v20 = v38;
    goto LABEL_88;
  }
  PteFromCopyList = MiGetPteFromCopyList(a2, v37, -1LL);
  if ( v22 == -3 || v22 == (CurrentThread | 1) )
  {
    if ( !(unsigned int)MiAddLockedPageCharge(a1, 0LL, v23) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *PteFromCopyList = 0LL;
      if ( (unsigned __int64)(PteFromCopyList + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(PteFromCopyList, 0LL);
      MiUnlockWorkingSetExclusive((__int64)dword_14034FF40, v38);
      v25 = v36;
      goto LABEL_89;
    }
    v43 = a1;
  }
  else
  {
    v44 = v22 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (unsigned __int8)KeTryToFreezeThreadStack(v22 & 0xFFFFFFFFFFFFFFFEuLL, v45) == 1 )
    {
      MiCopyKstack(v36, a1, PteFromCopyList);
      MiSwitchKstackPages(v36, a1);
      *(_BYTE *)(a1 + 34) &= 0xC7u;
      *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
      *(_BYTE *)(a1 + 35) &= ~0x20u;
      *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      KeFlushSingleTb(v42, 0, 1);
      if ( v45[0] )
        _InterlockedAnd64((volatile signed __int64 *)(v45[0] + 48), 0LL);
      *(_QWORD *)(v44 + 64) = 0LL;
      MiUnlockWorkingSetExclusive((__int64)dword_14034FF40, v38);
      *PteFromCopyList = 0LL;
      if ( (unsigned __int64)(PteFromCopyList + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(PteFromCopyList, 0LL);
      goto LABEL_31;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockWorkingSetExclusive((__int64)dword_14034FF40, v38);
  v40[0] = v8;
  v21 = v37;
  v40[3] = CurrentThread | 1;
  v40[1] = v37;
  v40[2] = PteFromCopyList;
  v41 = 0;
  if ( v22 == -3 || v22 == (CurrentThread | 1) )
  {
    v27 = KeExpandKernelStackAndCalloutInternal((void (__fastcall *)(__int64))MiJumpStack, (__int64)v40, 24576, 5, 0LL);
    v26 = v41;
    if ( v27 < 0 )
      v26 = v27;
    v41 = v26;
  }
  else
  {
    KeGenericCallDpc((__int64)MiDoStackCopy, (__int64)v40);
    v26 = v41;
  }
  if ( v26 < 0 )
  {
    v28 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FF40);
    }
    else
    {
      v16 = _interlockedbittestandset(dword_14034FF40, 0x1Fu);
      v29 = 0;
      if ( v16 )
        v29 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FF40);
      for ( j = dword_14034FF40[0]; (dword_14034FF40[0] & 0xBFFFFFFF) != 0x80000000; j = dword_14034FF40[0] )
      {
        if ( (j & 0x40000000) == 0 )
          _InterlockedCompareExchange(dword_14034FF40, j | 0x40000000, j);
        if ( (++v29 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v29);
      }
    }
    *PteFromCopyList = 0LL;
    if ( (unsigned __int64)(PteFromCopyList + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(PteFromCopyList, 0LL);
    MiUnlockWorkingSetExclusive((__int64)dword_14034FF40, v28);
    MiReleaseFreshPage(v36);
    v31 = v43;
    if ( v43 )
    {
      v32 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v5);
        }
        while ( (*(_QWORD *)(v31 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) );
      }
      MiRemoveLockedPageChargeAndDecRef(v43);
      _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v32);
    }
    return 0LL;
  }
  *a5 = 0;
  v33 = KeGetCurrentIrql();
  __writecr8(2uLL);
  v34 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v34 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v34);
    }
    while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
  }
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v33);
LABEL_84:
  *(_WORD *)(a1 + 32) = 0;
  if ( a4 )
    *a4 = v21;
  return 1LL;
}
