/*
 * XREFs of MiManageSubsectionView @ 0x1400B12D0
 * Callers:
 *     MiInsertInSystemSpace @ 0x14000A670 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x14000B73C (MiRemoveFromSystemSpace.c)
 *     MmUnmapViewInSystemCache @ 0x1400ADB30 (MmUnmapViewInSystemCache.c)
 *     MmMapViewInSystemCache @ 0x1400B0E10 (MmMapViewInSystemCache.c)
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 *     MiSessionRemoveImage @ 0x14011F8FC (MiSessionRemoveImage.c)
 *     MiSessionInsertImage @ 0x14012599C (MiSessionInsertImage.c)
 *     MiConstructLoaderEntry @ 0x1403CE188 (MiConstructLoaderEntry.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiManageSubsectionView(__int64 a1, _QWORD *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r15
  __int64 v7; // r12
  volatile signed __int32 *v8; // r14
  struct _KTHREAD *v9; // rdi
  __int64 v10; // rsi
  unsigned __int8 AbOrphanedEntrySummary; // si
  unsigned int AbEntrySummary; // edx
  __int64 v13; // rcx
  struct _KPROCESS *Process; // rax
  unsigned __int64 v15; // rcx
  int v16; // eax
  __int16 v17; // ax
  int v18; // ebp
  int v19; // ebp
  int v20; // ebp
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  struct _KTHREAD *v27; // rbx
  __int64 v28; // rcx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)a1;
  v7 = a1;
  --CurrentThread->SpecialApcDisable;
  v8 = (volatile signed __int32 *)(v5 + 112);
  if ( !KiAbEnabled )
  {
    v10 = 0LL;
    goto LABEL_20;
  }
  v9 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v9, v5 + 112, KeGetCurrentIrql(), 0LL);
  --v9->SpecialApcDisable;
  if ( !v9->AbEntrySummary )
  {
    v10 = 0LL;
    if ( !v9->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        EtwTraceAutoBoostEntryExhaustion(v9, v5 + 112);
        _interlockedbittestandset((volatile signed __int32 *)&v9->116 + 1, 0xFu);
        goto LABEL_16;
      }
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = v9->AbOrphanedEntrySummary;
    v9->AbOrphanedEntrySummary = 0;
    v9->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v9->AbEntrySummary;
  _BitScanForward((unsigned int *)&v13, AbEntrySummary);
  v9->AbEntrySummary = AbEntrySummary & ~(1 << v13);
  a1 = 96 * v13;
  v10 = (__int64)v9->LockEntries + a1;
  if ( !v10 )
  {
LABEL_7:
    _interlockedbittestandset((volatile signed __int32 *)&v9->116 + 1, 0xFu);
    goto LABEL_16;
  }
  if ( (unsigned __int64)(v5 + 0x70000000070LL) > 0x7FFFFFFFFFLL
    || (Process = v9->ApcState.Process, (v15 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v16 = -1;
  }
  else
  {
    v16 = *(_DWORD *)(v15 + 8);
  }
  *(_DWORD *)(v10 + 40) = v16;
  a1 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v10 + 32) = (unsigned __int64)v8 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_16:
  v17 = v9->SpecialApcDisable + 1;
  v9->SpecialApcDisable = v17;
  if ( !v17 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery(a1);
LABEL_20:
  if ( _interlockedbittestandset64(v8, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 112), v10, v5 + 112);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v18 = a3 - 1;
  if ( !v18 )
  {
    v23 = *(_QWORD *)(v7 + 80);
    v24 = (_QWORD *)(v7 + 80);
    *a2 = v23;
    a2[1] = v7 + 80;
    if ( *(_QWORD *)(v23 + 8) != v7 + 80 )
      __fastfail(3u);
    goto LABEL_41;
  }
  v19 = v18 - 1;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      if ( v20 == 1 && (*(_DWORD *)(v5 + 56) & 0x400) == 0 )
      {
        v21 = *a2;
        v22 = (_QWORD *)a2[1];
        if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v22 != a2 )
          __fastfail(3u);
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
      }
      goto LABEL_42;
    }
    v23 = *(_QWORD *)(v5 + 8);
    v24 = (_QWORD *)(v5 + 8);
    *a2 = v23;
    a2[1] = v5 + 8;
    if ( *(_QWORD *)(v23 + 8) != v5 + 8 )
      __fastfail(3u);
LABEL_41:
    *(_QWORD *)(v23 + 8) = a2;
    *v24 = a2;
    goto LABEL_42;
  }
  v25 = *a2;
  v26 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v26 != a2 )
    __fastfail(3u);
  *v26 = v25;
  *(_QWORD *)(v25 + 8) = v26;
LABEL_42:
  v27 = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 112));
  KeAbPostRelease(v5 + 112);
  result = (unsigned int)++v27->SpecialApcDisable;
  if ( !(_WORD)result )
  {
    result = (__int64)&v27->152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(v28);
  }
  return result;
}
