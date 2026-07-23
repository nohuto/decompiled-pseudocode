/*
 * XREFs of MiFinishVadDeletion @ 0x140029160
 * Callers:
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 * Callees:
 *     MiClearVadBits @ 0x140027D40 (MiClearVadBits.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1401F2898 (MiPreUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiReturnVadQuota @ 0x14042E950 (MiReturnVadQuota.c)
 *     MiRemoveVadCharges @ 0x14042E9F0 (MiRemoveVadCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x1404330E0 (MiReturnPageTablePageCommitment.c)
 */

void __fastcall MiFinishVadDeletion(
        unsigned int *P,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  struct _KTHREAD *CurrentThread; // r13
  int v7; // r12d
  unsigned __int64 v9; // r14
  _KPROCESS *Process; // rbx
  int v13; // esi
  __int64 v14; // rax
  int v15; // r12d
  _BOOL8 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  ULONG_PTR v20; // rdi
  __int16 v21; // ax
  _QWORD *v22; // rdi
  __int64 **v23; // r14
  LONG *p_Blink; // rsi
  _KPROCESS *v25; // r15
  unsigned __int64 CurrentIrql; // rcx
  signed __int32 v27; // edx
  bool v28; // zf
  signed __int32 v29; // eax
  __int64 *v30; // rcx
  __int64 *v31; // rdx
  unsigned __int8 v32; // si
  LONG *v33; // rcx
  struct _KTHREAD *v34; // rsi
  __int16 v35; // ax
  _QWORD *v36; // rbx
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v38; // [rsp+70h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = a2;
  v9 = a5;
  Process = CurrentThread->ApcState.Process;
  v13 = (P[12] >> 19) & 1;
  if ( (BYTE3(Process[2].Header.WaitListHead.Flink) & 2) == 0 )
  {
    MiClearVadBits(a4, a5, a2, a3);
    v14 = P[13];
    LODWORD(v14) = v14 & 0x7FFFFFFF;
    if ( (v14 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) <= 0x7FFFFFFFELL )
      MiReturnPageTablePageCommitment(a4, v9, (_DWORD)Process, v7, a3, (__int64)P, a6);
  }
  v15 = 0;
  v16 = 0LL;
  if ( v13 == 1 && (P[12] & 0x8000) == 0 )
  {
    v17 = P[13];
    LODWORD(v17) = v17 & 0x7FFFFFFF;
    v16 = (v17 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) < 0x7FFFFFFFELL;
  }
  if ( v9 <= Process[1].ActiveProcessors.Bitmap[18] )
    Process[1].Affinity.Bitmap[1] += a4 - v9 - 1;
  v18 = P[12];
  if ( (v18 & 7) == 2 && (v18 & 0x10000) != 0 )
    --*(_QWORD *)(qword_140327FD0 + 276840640);
  if ( v13 == 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(qword_140327FD0 + 276840552));
    v19 = P[12];
    if ( (v19 & 0x100000) != 0 )
    {
      if ( (v19 & 0x8000) != 0 )
        --*(_QWORD *)(qword_140327FD0 + 276840648);
      else
        --*(_QWORD *)(qword_140327FD0 + 276840656);
    }
    MiReturnVadQuota(P, Process, v16);
    MiRemoveVadCharges(P, Process);
  }
  LOBYTE(CurrentThread[1].Queue) &= ~1u;
  v20 = (ULONG_PTR)&Process[1].Affinity.Bitmap[7];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[7], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v20);
  KeAbPostRelease(v20);
  v21 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v21;
  if ( !v21 && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v22 = 0LL;
  if ( v13 == 1 )
  {
    v23 = (__int64 **)(P + 14);
    p_Blink = &dword_140327CC0;
    v25 = KeGetCurrentThread()->ApcState.Process;
    if ( ((__int64)v25[2].Header.WaitListHead.Flink & 7) != 2 )
      p_Blink = (LONG *)&v25[2].Header.WaitListHead.Blink;
    CurrentIrql = KeGetCurrentIrql();
    a5 = CurrentIrql;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(p_Blink, (unsigned __int8)CurrentIrql);
    }
    else
    {
      v38 = 0;
      if ( _interlockedbittestandset(p_Blink, 0x1Fu) )
        v38 = ExpWaitForSpinLockExclusiveAndAcquire(p_Blink, (unsigned __int8)CurrentIrql);
      v27 = *p_Blink;
      while ( (v27 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v27 & 0x40000000) == 0 )
        {
          v29 = _InterlockedCompareExchange(p_Blink, v27 | 0x40000000, v27);
          v28 = v27 == v29;
          v27 = v29;
          if ( !v28 )
            continue;
        }
        KeYieldProcessorEx(&v38);
        v27 = *p_Blink;
      }
    }
    p_Blink[1] = 0;
    v30 = *v23;
    if ( *v23 )
    {
      do
      {
        v31 = (__int64 *)*v30;
        if ( (v30[1] & 1) != 0 )
        {
          *v30 = (__int64)v22;
          v22 = v30;
          *v23 = v31;
        }
        else
        {
          v23 = (__int64 **)v30;
        }
        v30 = v31;
      }
      while ( v31 );
    }
    v32 = a5;
    MiPreUnlockWorkingSetExclusive(&v25[1].IdealNode[12], (unsigned __int8)a5);
    v33 = &dword_140327CC0;
    if ( ((__int64)v25[2].Header.WaitListHead.Flink & 7) != 2 )
      v33 = (LONG *)&v25[2].Header.WaitListHead.Blink;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v33, retaddr);
    else
      *v33 = 0;
    __writecr8(v32);
    *((_QWORD *)P + 2) = -1LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(qword_140327FD0 + 276840552), 0xFFFFFFFF) == 1 )
      KeSetEvent(*(PRKEVENT *)(qword_140327FD0 + 276840568), 0, 0);
    if ( v22 )
      --CurrentThread->KernelApcDisable;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 && (P[12] & 0x80000) != 0 )
    v15 = 1;
  v34 = KeGetCurrentThread();
  LOBYTE(v34[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 10);
  KeAbPostRelease((ULONG_PTR)(P + 10));
  v35 = v34->SpecialApcDisable + 1;
  v34->SpecialApcDisable = v35;
  if ( !v35 && ($2B8565053CDC740D4E4887693DD8AC9E *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
    KiCheckForKernelApcDelivery();
  if ( v15 == 1 )
    ExFreePoolWithTag(P, 0);
  if ( v22 )
  {
    do
    {
      v36 = (_QWORD *)*v22;
      KeSignalGate(v22 + 2, 1LL);
      v22 = v36;
    }
    while ( v36 );
    KeLeaveCriticalRegionThread(CurrentThread);
  }
}
