/*
 * XREFs of MiLockPagedAddress @ 0x140004FA4
 * Callers:
 *     MiInsertNewCombineBlocks @ 0x14022A9B4 (MiInsertNewCombineBlocks.c)
 *     MiBuildNewCloneDescriptor @ 0x1404069E0 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     MiMakeSystemAddressValidSystemWs @ 0x1400052D8 (MiMakeSystemAddressValidSystemWs.c)
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWriteValidPteVolatile @ 0x140226110 (MiWriteValidPteVolatile.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiLockPagedAddress(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // r15
  unsigned int v7; // esi
  signed __int32 i; // edx
  unsigned __int64 v9; // r14
  unsigned __int64 PteShadow; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int v14; // ebp
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebp
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FE40);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(dword_14034FE40, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FE40);
    for ( i = dword_14034FE40[0]; (dword_14034FE40[0] & 0xBFFFFFFF) != 0x80000000; i = dword_14034FE40[0] )
    {
      if ( (i & 0x40000000) == 0 )
      {
        a1 = i | 0x40000000u;
        _InterlockedCompareExchange(dword_14034FE40, a1, i);
      }
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
  }
  v9 = v4 + 0x90482413000LL;
  while ( 1 )
  {
    while ( 1 )
    {
      PteShadow = *(_QWORD *)v4;
      if ( v9 <= 0x7F8 )
        PteShadow = MiReadPteShadow(v4, PteShadow);
      v23 = PteShadow;
      if ( (PteShadow & 1) != 0 )
        break;
      LOBYTE(a3) = CurrentIrql;
      MiMakeSystemAddressValidSystemWs(dword_14034FE40, v3, a3);
    }
    if ( (PteShadow & 0x200) == 0 )
      break;
    MiCopyOnWriteEx((__int64)(v4 << 25) >> 16, 0);
  }
  if ( (unsigned __int64)&STACK[0x90482413060] <= 0x7F8
    && (unsigned int)MiPteHasShadow(a1, PteShadow)
    && (PteShadow & 1) != 0
    && ((PteShadow & 0x20) == 0 || (PteShadow & 0x42) == 0) )
  {
    v11 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 8 * (((unsigned __int64)&v23 >> 3) & 0x1FF));
      if ( (v12 & 0x20) != 0 )
        PteShadow |= 0x20uLL;
      if ( (v12 & 0x42) != 0 )
        PteShadow |= 0x42uLL;
    }
  }
  v13 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v14);
    }
    while ( *(__int64 *)(v13 + 24) < 0 );
  }
  if ( (unsigned int)MiAddLockedPageCharge(v13, 0LL) )
  {
    v17 = 1;
    v5 = MiCaptureDirtyBitToPfn(v13);
  }
  else
  {
    v17 = 0;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v17 )
  {
    if ( v5 )
    {
      v18 = *(_QWORD *)(v13 + 40) >> 40;
      LOWORD(v18) = v18 & 0x3FF;
      v19 = MiPartitionIdToPointer(v18);
      MiReleasePageFileInfo(v19, v5, 1LL);
    }
    v15 = *(_QWORD *)v4;
    if ( v9 <= 0x7F8
      && (unsigned int)MiPteHasShadow(v16, v15)
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      v20 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 8 * ((v4 >> 3) & 0x1FF));
        if ( (v21 & 0x20) != 0 )
          v15 |= 0x20uLL;
        if ( (v21 & 0x42) != 0 )
          v15 |= 0x42uLL;
      }
    }
    if ( (v15 & 0x20) == 0 || (v15 & 0x42) == 0 )
      MiWriteValidPteVolatile(v4, 3LL);
    if ( (MiFlags & 0x100) == 0 )
      KeFlushSingleTb(v3, 0LL, 1LL);
  }
  LOBYTE(v15) = CurrentIrql;
  MiUnlockWorkingSetExclusive(dword_14034FE40, v15);
  return v17;
}
