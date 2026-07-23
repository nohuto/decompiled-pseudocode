/*
 * XREFs of MiGetWsAndInsertVad @ 0x140030660
 * Callers:
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MiInsertProcessVads @ 0x14046C754 (MiInsertProcessVads.c)
 *     MiAllocateChildVads @ 0x14050ABE0 (MiAllocateChildVads.c)
 *     MmInitializeHandBuiltProcess2 @ 0x14057F1E4 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExpAcquireSpinLockExclusive @ 0x14002E7B0 (ExpAcquireSpinLockExclusive.c)
 *     MiInsertVad @ 0x1400424D0 (MiInsertVad.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1401F2898 (MiPreUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiGetWsAndInsertVad(__int64 a1)
{
  LONG *p_Blink; // rbx
  _KPROCESS *Process; // rbp
  unsigned __int8 CurrentIrql; // si
  LONG *SharedVm; // rax
  __int64 result; // rax
  __int64 *v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  struct _KTHREAD *v15; // rdi

  p_Blink = &dword_140327CC0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( ((__int64)Process[2].Header.WaitListHead.Flink & 7) != 2 )
    p_Blink = (LONG *)&Process[2].Header.WaitListHead.Blink;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(p_Blink, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(p_Blink, CurrentIrql);
  p_Blink[1] = 0;
  MiInsertVad(a1, Process);
  MiPreUnlockWorkingSetExclusive(&Process[1].IdealNode[12], CurrentIrql);
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  ExReleaseSpinLockExclusiveFromDpcLevel(SharedVm);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( (*(_DWORD *)(a1 + 48) & 0x8000) == 0 )
  {
    v7 = *(__int64 **)(a1 + 72);
    v8 = (_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 112) = (unsigned __int64)Process | 1;
    v9 = *v7;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v11 = KeAbPreAcquire(v9 + 104, 0LL, 0);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx(v9 + 104, v11, v9 + 104);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    v13 = *(_QWORD *)(v9 + 8);
    v14 = (_QWORD *)(v9 + 8);
    if ( *(_QWORD *)(v13 + 8) != v9 + 8 )
      __fastfail(3u);
    *(_QWORD *)(a1 + 104) = v14;
    *v8 = v13;
    *(_QWORD *)(v13 + 8) = v8;
    *v14 = v8;
    v15 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9 + 104);
    KeAbPostRelease(v9 + 104);
    result = (unsigned int)++v15->SpecialApcDisable;
    if ( !(_WORD)result )
    {
      result = (__int64)&v15->152;
      if ( *(_QWORD *)result != result )
        return KiCheckForKernelApcDelivery();
    }
  }
  return result;
}
