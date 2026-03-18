/*
 * XREFs of MiTrimAllSystemPagableMemory @ 0x14021B230
 * Callers:
 *     MmTrimAllSystemPagableMemory @ 0x14021B88C (MmTrimAllSystemPagableMemory.c)
 *     MmVerifierTrimMemory @ 0x140735D84 (MmVerifierTrimMemory.c)
 * Callees:
 *     MiReturnWsToExpansionList @ 0x14002B690 (MiReturnWsToExpansionList.c)
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiEmptyWorkingSet @ 0x14007B85C (MiEmptyWorkingSet.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiPurgePartitionStandby @ 0x140144FC0 (MiPurgePartitionStandby.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiTrimAllSystemPagableMemory(int a1, int a2)
{
  signed __int32 *v2; // r8
  int v3; // edi
  unsigned int v4; // r12d
  signed __int32 *v5; // rbx
  unsigned int v6; // esi
  _DWORD *v7; // r9
  struct _KTHREAD *CurrentThread; // r13
  int v10; // edx
  signed __int32 *v11; // r8
  __int16 v12; // r9
  _KPROCESS *Process; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned int v15; // edi
  signed __int32 v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v19; // r14
  unsigned int v20; // edi
  signed __int32 v21; // eax
  unsigned int v22; // edi
  signed __int32 v23; // eax
  __int64 **v24; // rax
  __int64 v25; // rax
  __int64 *v26; // rdx
  __int64 **v27; // rcx
  __int64 Next; // rax
  __int64 v29; // rax
  __int16 *VmPartition; // rax
  __int16 v31; // cx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+38h]

  v2 = dword_14034FD40;
  v3 = a1;
  v4 = 0;
  v5 = 0LL;
  if ( a1 )
  {
    v6 = 3;
  }
  else
  {
    v6 = 0;
    v7 = &unk_14034F7A8;
    do
    {
      v5 = v2;
      if ( *v7 != v2[49] )
        break;
      ++v6;
      v2 += 64;
      ++v7;
    }
    while ( v6 < 3 );
    if ( v6 == 3 )
      return 0LL;
  }
  if ( KeGetCurrentIrql() > 1u )
    return 0LL;
  CurrentThread = 0LL;
  v10 = 0;
  if ( _InterlockedIncrement(&dword_14034F788) <= 1 && (unsigned __int8)KeAreInterruptsEnabled() )
  {
    CurrentThread = KeGetCurrentThread();
    CurrentThread->SpecialApcDisable += v12;
    if ( !v3 )
      goto LABEL_28;
    if ( v3 == 1 )
    {
      Process = CurrentThread->ApcState.Process;
      v5 = (signed __int32 *)&Process[1].IdealNode[8];
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
      }
      else
      {
        v15 = 0;
        if ( _interlockedbittestandset(v5, 0x1Fu) )
          v15 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)&Process[1].IdealNode[8]);
        while ( 1 )
        {
          v16 = *v5;
          if ( (*v5 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v16 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v5, v16 | 0x40000000, v16);
          if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v15);
        }
        v3 = a1;
      }
      if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
        goto LABEL_58;
      while ( 1 )
      {
        MiUnlockWorkingSetExclusive((__int64)v5, CurrentIrql);
        if ( ++v6 >= 3 )
        {
          if ( a2 == 1 && v4 == 1 )
          {
            if ( v3 == 1 )
              VmPartition = MiGetVmPartition((__int64)v5);
            else
              VmPartition = MiSystemPartition;
            MiPurgePartitionStandby((__int64)VmPartition, 8LL, v17, v18);
          }
          goto LABEL_88;
        }
        v11 = dword_14034FD40;
        v5 = &dword_14034FD40[64 * (unsigned __int64)v6];
        v4 = 0;
LABEL_28:
        if ( (v5[54] & 7) == 3 )
        {
          if ( *((_DWORD *)&MiState[557] + v6) == v5[49] )
          {
            v5 = &v11[64 * (unsigned __int64)++v6];
LABEL_44:
            if ( *((_DWORD *)&MiState[557] + v6) == v5[49] )
              goto LABEL_88;
          }
        }
        else if ( (v5[54] & 7) == 4 )
        {
          goto LABEL_44;
        }
        v19 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
LABEL_46:
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5);
        }
        else
        {
          v22 = 0;
          if ( _interlockedbittestandset(v5, 0x1Fu) )
            v22 = ExpWaitForSpinLockExclusiveAndAcquire(v5);
          while ( 1 )
          {
            v23 = *v5;
            if ( (*v5 & 0xBFFFFFFF) == 0x80000000 )
              break;
            if ( (v23 & 0x40000000) == 0 )
              _InterlockedCompareExchange(v5, v23 | 0x40000000, v23);
            if ( (++v22 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v22);
          }
LABEL_56:
          v3 = a1;
        }
        CurrentIrql = v19;
LABEL_58:
        KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
        v24 = (__int64 **)(v5 + 6);
        if ( *((_QWORD *)v5 + 3) )
        {
          v26 = *v24;
          v27 = (__int64 **)*((_QWORD *)v5 + 4);
          if ( (__int64 **)(*v24)[1] != v24 || *v27 != (__int64 *)v24 )
            __fastfail(3u);
          *v27 = v26;
          v26[1] = (__int64)v27;
          *v24 = 0LL;
          *((_BYTE *)v5 + 217) = *((_BYTE *)v5 + 217) & 0xF9 | 2;
          if ( !v3 )
          {
            v26 = MiState;
            *((_DWORD *)&MiState[557] + v6) = v5[49];
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
            goto LABEL_75;
          }
          _m_prefetchw(&LockHandle);
          Next = (__int64)LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_75;
            Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
LABEL_75:
          LOBYTE(v26) = CurrentIrql;
          MiEmptyWorkingSet((__int64)v5, (unsigned __int64)v26, 0);
          KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
          *((_BYTE *)v5 + 217) &= 0xF9u;
          MiReturnWsToExpansionList((__int64)v5, 0LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
            goto LABEL_81;
          }
          _m_prefetchw(&LockHandle);
          v29 = (__int64)LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_81;
            v29 = KxWaitForLockChainValid((__int64 *)&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(v29 + 8), 1uLL);
LABEL_81:
          v4 = 1;
        }
        else if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
        }
        else
        {
          _m_prefetchw(&LockHandle);
          v25 = (__int64)LockHandle.LockQueue.Next;
          if ( LockHandle.LockQueue.Next )
            goto LABEL_64;
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) != &LockHandle )
          {
            v25 = KxWaitForLockChainValid((__int64 *)&LockHandle);
LABEL_64:
            LockHandle.LockQueue.Next = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(v25 + 8), 1uLL);
          }
        }
      }
    }
    if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    {
      v5 = (signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2968);
      v19 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 )
      {
        v20 = 0;
        if ( _interlockedbittestandset(v5, 0x1Fu) )
          v20 = ExpWaitForSpinLockExclusiveAndAcquire(v5);
        while ( 1 )
        {
          v21 = *v5;
          if ( (*v5 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v21 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v5, v21 | 0x40000000, v21);
          if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v20);
        }
        goto LABEL_56;
      }
      goto LABEL_46;
    }
LABEL_88:
    v10 = 1;
  }
  _InterlockedAdd(&dword_14034F788, 0xFFFFFFFF);
  if ( v10 == 1 )
  {
    v31 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v31;
    if ( !v31
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v4;
}
