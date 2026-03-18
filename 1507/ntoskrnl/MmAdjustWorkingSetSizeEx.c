/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x14012B124
 * Callers:
 *     MmAdjustWorkingSetSize @ 0x140213DAC (MmAdjustWorkingSetSize.c)
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     PspSetQuotaLimits @ 0x14054F6C8 (PspSetQuotaLimits.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     PsChargeProcessQuota @ 0x14006B070 (PsChargeProcessQuota.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiEmptyWorkingSet @ 0x14007B85C (MiEmptyWorkingSet.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     PsReturnProcessQuota @ 0x1400EE610 (PsReturnProcessQuota.c)
 *     MiCheckWsLimits @ 0x14012B430 (MiCheckWsLimits.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MmAdjustWorkingSetSizeEx(
        unsigned __int64 a1,
        unsigned __int64 a2,
        int a3,
        char a4,
        int a5,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v8; // r14
  _KPROCESS *Process; // r12
  signed __int32 *v11; // rdi
  __int16 *VmPartition; // r15
  unsigned __int64 v13; // r8
  signed __int32 v14; // eax
  __int64 v15; // r9
  int v16; // r14d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // rdx
  ULONG_PTR v20; // rsi
  unsigned __int64 v21; // rcx
  __int64 Next; // rax
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rdx
  struct _KPROCESS *v28; // [rsp+30h] [rbp-40h]
  unsigned __int64 v29; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-30h] BYREF
  __int64 v31; // [rsp+48h] [rbp-28h]
  __int64 CurrentIrql; // [rsp+50h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-18h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]

  v6 = 0;
  v28 = 0LL;
  v8 = a2;
  Process = 0LL;
  *a6 = 0;
  switch ( a3 )
  {
    case 0:
      Process = KeGetCurrentThread()->ApcState.Process;
      v28 = Process;
      v11 = (signed __int32 *)&Process[1].IdealNode[8];
LABEL_3:
      if ( a1 == -1LL && a2 == -1LL )
      {
        LOBYTE(a2) = 17;
        return MiEmptyWorkingSet((__int64)v11, a2, 0);
      }
      VmPartition = MiGetVmPartition((__int64)v11);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v13);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v11);
      }
      else
      {
        if ( _interlockedbittestandset(v11, 0x1Fu) )
          v6 = ExpWaitForSpinLockExclusiveAndAcquire(v11);
        while ( 1 )
        {
          v14 = *v11;
          if ( (*v11 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v14 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v11, v14 | 0x40000000, v14);
          if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v6);
        }
      }
      if ( !a3 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      {
        v16 = -1073741558;
        goto LABEL_33;
      }
      if ( a1 )
        v29 = a1 >> 12;
      else
        v29 = *((_QWORD *)v11 + 12);
      if ( v8 )
        v30 = v8 >> 12;
      else
        v30 = *((_QWORD *)v11 + 17);
      v16 = MiCheckWsLimits((_DWORD)v11, (unsigned int)&v29, (unsigned int)&v30, a5, 0);
      if ( (v16 & 0xC0000000) == 0xC0000000 )
        goto LABEL_33;
      v17 = *((_QWORD *)v11 + 12);
      v18 = v29;
      v19 = *((_QWORD *)v11 + 23);
      v31 = v19;
      if ( v29 <= v17 )
      {
        v20 = v17 - v29;
        if ( v29 < *(_QWORD *)(v19 + 8) )
        {
          v16 = -1073741748;
          goto LABEL_33;
        }
LABEL_17:
        v21 = v30;
        if ( v30 < *((_QWORD *)v11 + 13) && v30 < *(_QWORD *)(v19 + 32) )
        {
          if ( *(_QWORD *)(v19 + 8) + 6LL >= v30 )
          {
            v16 = -1073741748;
            if ( *a6 == 1 )
            {
              if ( !a3 )
              {
                v25 = *((_QWORD *)v11 + 12);
                *((_QWORD *)v11 + 12) = v18;
                MiChargeWsles((__int64)v11, -(__int64)v20, 1);
                *((_QWORD *)v11 + 12) = v25;
                PsReturnProcessQuota((ULONG_PTR)v28, v26, v20);
              }
              if ( VmPartition == MiSystemPartition )
              {
                MiReturnResidentAvailable(v20);
                _InterlockedExchangeAdd64(&qword_14034F828, v20);
              }
              else
              {
                _InterlockedExchangeAdd64((volatile signed __int64 *)VmPartition + 696, v20);
              }
            }
            goto LABEL_33;
          }
          *((_BYTE *)v11 + 219) |= 0x20u;
        }
        if ( !*a6 && v20 )
        {
          if ( !a3 )
          {
            MiChargeWsles((__int64)v11, -(__int64)v20, 1);
            PsReturnProcessQuota((ULONG_PTR)v28, v27, v20);
          }
          if ( VmPartition == MiSystemPartition )
          {
            MiReturnResidentAvailable(v20);
            _InterlockedExchangeAdd64(&qword_14034F830, v20);
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)VmPartition + 696, v20);
          }
          v21 = v30;
          v18 = v29;
        }
        *((_QWORD *)v11 + 17) = v21;
        *((_QWORD *)v11 + 12) = v18;
        if ( a5 )
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
          if ( (a5 & 4) != 0 )
          {
            *((_BYTE *)v11 + 216) |= 0x80u;
          }
          else if ( (a5 & 8) != 0 )
          {
            *((_BYTE *)v11 + 216) &= ~0x80u;
          }
          if ( (a5 & 1) != 0 )
          {
            *((_BYTE *)v11 + 216) |= 0x40u;
          }
          else if ( (a5 & 2) != 0 )
          {
            *((_BYTE *)v11 + 216) &= ~0x40u;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
            goto LABEL_33;
          }
          _m_prefetchw(&LockHandle);
          Next = (__int64)LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_33;
            Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
        }
LABEL_33:
        MiUnlockWorkingSetExclusive((__int64)v11, CurrentIrql);
        return (unsigned int)v16;
      }
      v20 = v29 - v17;
      *a6 = 1;
      if ( !a4 )
      {
        v16 = -1073741727;
        goto LABEL_33;
      }
      if ( !a3 )
      {
        v16 = PsChargeProcessQuota(v28, v19, v20);
        if ( v16 < 0 )
          goto LABEL_33;
      }
      if ( (unsigned int)MiChargeResident(VmPartition, v20, 512LL, v15) )
      {
        if ( VmPartition == MiSystemPartition )
        {
          _InterlockedExchangeAdd64(&qword_14034F818, v20);
          v18 = v29;
        }
        if ( a3 || (unsigned int)MiChargeWsles((__int64)v11, v20, 1) )
        {
          v19 = v31;
          goto LABEL_17;
        }
        if ( VmPartition == MiSystemPartition )
        {
          MiReturnResidentAvailable(v20);
          _InterlockedExchangeAdd64(&qword_14034F820, v20);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)VmPartition + 696, v20);
        }
      }
      else if ( a3 )
      {
        goto LABEL_70;
      }
      PsReturnProcessQuota((ULONG_PTR)v28, v24, v20);
LABEL_70:
      v16 = -1073741670;
      goto LABEL_33;
    case 2:
      v11 = dword_14034FD40;
      goto LABEL_3;
    case 3:
      v11 = dword_14034FE40;
      goto LABEL_3;
    case 4:
      v11 = dword_14034FF40;
      goto LABEL_3;
  }
  return 3221225713LL;
}
