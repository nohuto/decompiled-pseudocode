/*
 * XREFs of MiFinishVadDeletion @ 0x14008C870
 * Callers:
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 * Callees:
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiTrimWorkingSet @ 0x140080FFC (MiTrimWorkingSet.c)
 *     MiClearVadBits @ 0x14008B350 (MiClearVadBits.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeSignalGate @ 0x140127FF0 (KeSignalGate.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiReturnPageTablePageCommitment @ 0x1404B7F80 (MiReturnPageTablePageCommitment.c)
 *     MiRemoveVadCharges @ 0x1404B9120 (MiRemoveVadCharges.c)
 *     MiReturnVadQuota @ 0x1404B93D0 (MiReturnVadQuota.c)
 *     MiUpdateVadHint @ 0x1404B9470 (MiUpdateVadHint.c)
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
  int v7; // ebp
  _KPROCESS *Process; // rbx
  BOOL v12; // r14d
  __int64 v13; // rax
  __int64 updated; // r8
  unsigned int v15; // ecx
  ULONG_PTR v16; // rsi
  __int64 v17; // rcx
  __int16 v18; // ax
  _QWORD *v19; // r15
  __int64 **v20; // r14
  volatile signed __int32 *v21; // rsi
  unsigned __int8 CurrentIrql; // r12
  unsigned int v23; // r12d
  signed __int32 v24; // eax
  __int64 *v25; // rcx
  char v26; // al
  char v27; // al
  struct _KTHREAD *v28; // rsi
  __int64 v29; // rcx
  __int16 v30; // ax
  __int64 *v31; // rdx
  __int16 *VmPartition; // rax
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r10
  unsigned int v35; // r14d
  unsigned __int64 v36; // r10
  unsigned __int64 v37; // rax
  _QWORD *v38; // rbx
  __int64 v39; // rcx
  __int16 v40; // ax
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v42; // [rsp+78h] [rbp+10h]
  unsigned __int8 v43; // [rsp+90h] [rbp+28h]
  __int64 i; // [rsp+90h] [rbp+28h]

  v42 = a2;
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  Process = CurrentThread->ApcState.Process;
  v12 = (P[12] & 0x80000000) != 0;
  if ( (BYTE3(Process[2].ProfileListHead.Blink) & 2) == 0 )
  {
    MiClearVadBits(a4, a5, a2, a3);
    v13 = P[13];
    LODWORD(v13) = v13 & 0x7FFFFFFF;
    if ( (v13 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) <= 0x7FFFFFFFELL )
      MiReturnPageTablePageCommitment(a4, a5, (_DWORD)Process, v42, a3, (__int64)P, a6);
  }
  if ( v12 )
    updated = (unsigned int)MiUpdateVadHint(P);
  else
    updated = 0LL;
  if ( a5 <= Process[1].ActiveProcessors.Bitmap[17] )
    Process[1].Affinity.Bitmap[1] += a4 - a5 - 1;
  v15 = P[12];
  if ( (v15 & 7) == 2 && (v15 & 0x20000) != 0 )
    --MEMORY[0xFFFFF58010804260];
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)0xFFFFF58010804218LL);
    MiReturnVadQuota(P, Process, updated);
    MiRemoveVadCharges(P, Process);
  }
  BYTE4(CurrentThread[1].Queue) &= ~1u;
  v16 = (ULONG_PTR)&Process[1].Affinity.Bitmap[7];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[7], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v16);
  KeAbPostRelease(v16);
  v18 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v18;
  if ( !v18 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v17);
  v19 = 0LL;
  if ( v12 )
  {
    v20 = (__int64 **)(P + 14);
    v21 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[8];
    CurrentIrql = KeGetCurrentIrql();
    v43 = CurrentIrql;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v21);
    }
    else
    {
      v23 = 0;
      if ( _interlockedbittestandset(v21, 0x1Fu) )
        v23 = ExpWaitForSpinLockExclusiveAndAcquire(v21);
      while ( 1 )
      {
        v24 = *v21;
        if ( (*v21 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v24 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v21, v24 | 0x40000000, v24);
        if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v23);
      }
      CurrentIrql = v43;
    }
    v25 = *v20;
    if ( *v20 )
    {
      do
      {
        v31 = (__int64 *)*v25;
        if ( (v25[1] & 1) != 0 )
        {
          *v25 = (__int64)v19;
          v19 = v25;
          *v20 = v31;
        }
        else
        {
          v20 = (__int64 **)v25;
        }
        v25 = v31;
      }
      while ( v31 );
    }
    v26 = *((_BYTE *)v21 + 219);
    if ( (v26 & 0x10) != 0 )
    {
      *((_BYTE *)v21 + 219) = v26 & 0xEF;
      VmPartition = MiGetVmPartition((__int64)v21);
      MiAgeWorkingSet(v21, CurrentIrql, 1LL, *(unsigned __int16 *)(*((_QWORD *)VmPartition + 657) + 2358LL));
    }
    v27 = *((_BYTE *)v21 + 219);
    if ( (v27 & 0x20) != 0 )
    {
      v33 = *((_QWORD *)v21 + 17);
      v34 = *((_QWORD *)v21 + 15);
      v35 = 7;
      *((_BYTE *)v21 + 219) = v27 & 0xDF;
      for ( i = v33; v34 > v33; --v35 )
      {
        v36 = v34 - v33;
        if ( v35 )
        {
          v37 = v36;
          v36 = *(_QWORD *)&v21[2 * v35 + 8];
          if ( v36 > v37 )
            v36 = v37;
        }
        if ( v36 )
        {
          MiTrimWorkingSet(v36, (__int64)v21, CurrentIrql, v35, 0);
          if ( !v35 )
            break;
          v33 = i;
        }
        v34 = *((_QWORD *)v21 + 15);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v21, retaddr);
    else
      *v21 = 0;
    __writecr8(CurrentIrql);
    *((_QWORD *)P + 2) = -1LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)0xFFFFF58010804218LL, 0xFFFFFFFF) == 1 )
      KeSetEvent(MEMORY[0xFFFFF58010804228], 0, 0);
    if ( v19 )
      --CurrentThread->KernelApcDisable;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 && (P[12] & 0x80000000) != 0 )
    v7 = 1;
  v28 = KeGetCurrentThread();
  BYTE4(v28[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 10);
  KeAbPostRelease((ULONG_PTR)(P + 10));
  v30 = v28->SpecialApcDisable + 1;
  v28->SpecialApcDisable = v30;
  if ( !v30 && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
    KiCheckForKernelApcDelivery(v29);
  if ( v7 == 1 )
    ExFreePoolWithTag(P, 0);
  if ( v19 )
  {
    do
    {
      v38 = (_QWORD *)*v19;
      KeSignalGate(v19 + 2, 1LL);
      v19 = v38;
    }
    while ( v38 );
    v40 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v40;
    if ( !v40
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v39);
    }
  }
}
