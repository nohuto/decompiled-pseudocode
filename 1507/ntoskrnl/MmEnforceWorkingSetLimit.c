/*
 * XREFs of MmEnforceWorkingSetLimit @ 0x14000961C
 * Callers:
 *     PspApplyWorkingSetLimitsToProcess @ 0x14041B1FC (PspApplyWorkingSetLimitsToProcess.c)
 *     PspSetQuotaLimits @ 0x14054F6C8 (PspSetQuotaLimits.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1406C42F8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x1406C43B8 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MmEnforceWorkingSetLimit(_KPROCESS *a1, char a2)
{
  volatile signed __int32 *v2; // rbx
  char v3; // di
  char v4; // al
  int v5; // r15d
  unsigned int v6; // r14d
  unsigned __int8 CurrentIrql; // r12
  unsigned int v8; // esi
  signed __int32 v9; // edx
  __int64 v10; // rdx
  int v11; // eax
  char v12; // cl
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  char v15; // [rsp+20h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-58h] BYREF
  char v17[48]; // [rsp+40h] [rbp-40h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+28h]

  v2 = (volatile signed __int32 *)&a1[1].IdealNode[8];
  v3 = a2;
  v4 = 0;
  v15 = 0;
  v5 = 0;
  v6 = 0;
  if ( (a2 & 4) != 0 )
  {
    v3 = a2 & 0xF7;
    v4 = 0x80;
    v15 = 0x80;
  }
  if ( (v3 & 1) != 0 )
  {
    v3 &= ~2u;
    v15 = v4 | 0x40;
  }
  if ( KeGetCurrentThread()->ApcState.Process != a1 )
  {
    v5 = 1;
    KiStackAttachProcess((ULONG_PTR)a1);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2);
  }
  else
  {
    v8 = 0;
    if ( _interlockedbittestandset(v2, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire(v2);
    while ( 1 )
    {
      v9 = *v2;
      if ( (*v2 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v9 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v2, v9 | 0x40000000, v9);
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
  if ( (v3 & 8) != 0 )
    *((_BYTE *)v2 + 216) &= ~0x80u;
  if ( (v3 & 2) != 0 )
    *((_BYTE *)v2 + 216) &= ~0x40u;
  v11 = *((_DWORD *)v2 + 54);
  v12 = v15;
  if ( (v11 & 0x80u) != 0 )
    v12 = v15 | 0x80;
  if ( (v11 & 0x40) != 0 )
    v12 |= 0x40u;
  if ( v12 < 0 && (v12 & 0x40) != 0 && (unsigned __int64)(*((_QWORD *)v2 + 12) + 6LL) >= *((_QWORD *)v2 + 17) )
  {
    v6 = -1073741748;
    v3 &= 0xFAu;
  }
  if ( (v3 & 4) != 0 )
    *((_BYTE *)v2 + 216) |= 0x80u;
  if ( (v3 & 1) != 0 )
    *((_BYTE *)v2 + 216) |= 0x40u;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
  else
  {
    _m_prefetchw(&LockHandle);
    Next = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_27;
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
  }
LABEL_27:
  LOBYTE(v10) = CurrentIrql;
  MiUnlockWorkingSetExclusive(v2, v10);
  if ( v5 )
    KiUnstackDetachProcess(v17, 0LL);
  return v6;
}
