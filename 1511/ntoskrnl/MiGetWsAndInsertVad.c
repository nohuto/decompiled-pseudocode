/*
 * XREFs of MiGetWsAndInsertVad @ 0x140062070
 * Callers:
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiAllocateChildVads @ 0x140461278 (MiAllocateChildVads.c)
 *     MiInsertProcessVads @ 0x140462C58 (MiInsertProcessVads.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140549A5C (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     MiInsertVad @ 0x14004AD80 (MiInsertVad.c)
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiReduceWs @ 0x1400F12BC (MiReduceWs.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiGetWsAndInsertVad(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 Process; // r14
  volatile signed __int32 *v5; // rbx
  KIRQL CurrentIrql; // si
  unsigned int v7; // edi
  __int64 v8; // rdx
  bool v9; // zf
  unsigned __int32 v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  char v13; // al
  __int64 VmPartition; // rax
  char v15; // al
  __int64 v16; // r8
  __int64 result; // rax
  __int64 *v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rcx
  struct _KTHREAD *v25; // rdi
  __int64 v26; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  Process = (__int64)KeGetCurrentThread()->ApcState.Process;
  v5 = (volatile signed __int32 *)(Process + 1280);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(Process + 1280, CurrentIrql);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(v5, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(Process + 1280), CurrentIrql, a3);
    v8 = *(unsigned int *)v5;
    if ( (*v5 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v8 & 0x40000000) == 0 )
        {
          v10 = _InterlockedCompareExchange(v5, v8 | 0x40000000, v8);
          v9 = (_DWORD)v8 == v10;
          v8 = v10;
          if ( !v9 )
            continue;
        }
        if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v7, v8, a3);
        v8 = *(unsigned int *)v5;
      }
      while ( (v8 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  MiInsertVad(a1, Process);
  v13 = *(_BYTE *)(Process + 1499);
  if ( (v13 & 0x10) != 0 )
  {
    *(_BYTE *)(Process + 1499) = v13 & 0xEF;
    VmPartition = MiGetVmPartition(Process + 1280, v11, v12);
    MiAgeWorkingSet(Process + 1280, CurrentIrql, 1, *(unsigned __int16 *)(*(_QWORD *)(VmPartition + 5616) + 2358LL));
  }
  v15 = *(_BYTE *)(Process + 1499);
  if ( (v15 & 0x20) != 0 )
  {
    v16 = *(_QWORD *)(Process + 1416);
    *(_BYTE *)(Process + 1499) = v15 & 0xDF;
    MiReduceWs(Process + 1280, CurrentIrql, v16);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(Process + 1280, retaddr);
  else
    *v5 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( (*(_DWORD *)(a1 + 48) & 0x8000) == 0 )
  {
    v18 = *(__int64 **)(a1 + 72);
    v19 = (_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 112) = Process | 1;
    v20 = *v18;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v22 = KeAbPreAcquire(v20 + 112, 0LL, 0LL);
    v23 = v22;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 112), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v20 + 112), v22, v20 + 112);
    if ( v23 )
      *(_BYTE *)(v23 + 26) |= 1u;
    v24 = *(_QWORD *)(v20 + 8);
    *v19 = v24;
    v19[1] = v20 + 8;
    if ( *(_QWORD *)(v24 + 8) != v20 + 8 )
      __fastfail(3u);
    *(_QWORD *)(v24 + 8) = v19;
    *(_QWORD *)(v20 + 8) = v19;
    v25 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v20 + 112));
    KeAbPostRelease(v20 + 112);
    result = (unsigned int)++v25->SpecialApcDisable;
    if ( !(_WORD)result )
    {
      result = (__int64)&v25->152;
      if ( *(_QWORD *)result != result )
        return KiCheckForKernelApcDelivery(v26);
    }
  }
  return result;
}
