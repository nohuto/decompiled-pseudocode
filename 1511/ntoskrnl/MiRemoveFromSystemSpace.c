/*
 * XREFs of MiRemoveFromSystemSpace @ 0x14000B73C
 * Callers:
 *     MiUnmapImageInSystemSpace @ 0x1403C72A0 (MiUnmapImageInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x1403C7C24 (MmUnmapViewInSystemSpace.c)
 *     MiMapViewInSystemSpace @ 0x1403C7CC0 (MiMapViewInSystemSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     RtlAvlRemoveNode @ 0x14006BDC0 (RtlAvlRemoveNode.c)
 *     MiManageSubsectionView @ 0x1400B12D0 (MiManageSubsectionView.c)
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiDereferencePerSessionProtos @ 0x14062C01C (MiDereferencePerSessionProtos.c)
 */

void __fastcall MiRemoveFromSystemSpace(__int64 a1, ULONG_PTR a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v6; // rbp
  volatile LONG *v7; // r15
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rsi
  __int64 v10; // r8
  struct _KTHREAD *v11; // rbx
  __int64 v12; // rcx
  char *v13; // rdi
  int v14; // eax
  __int16 v15; // ax
  KIRQL v16; // al
  _QWORD *v17; // rbx
  KIRQL v18; // di
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  void *v21; // r14
  unsigned __int64 v22; // rsi
  __int64 v23; // r12
  volatile signed __int64 *v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdx
  struct _KPROCESS *Process; // rax
  unsigned __int64 v28; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int64 v30[23]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v31; // [rsp+F8h] [rbp+10h]
  struct _KTHREAD *v33; // [rsp+108h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v33 = CurrentThread;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (_UNKNOWN *)a1 == &unk_1402FE5C0 )
  {
    v7 = &dword_1402FFA80;
    v31 = 0LL;
  }
  else
  {
    v31 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v7 = (volatile LONG *)(v31 + 2968);
  }
  v8 = -1LL;
  --CurrentThread->SpecialApcDisable;
  v9 = *(volatile signed __int32 **)(a1 + 8);
  v10 = 0xFFFFFFFFLL;
  if ( !KiAbEnabled )
  {
    v13 = 0LL;
    goto LABEL_13;
  }
  v11 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v11, *(_QWORD *)(a1 + 8), KeGetCurrentIrql(), 0LL);
  --v11->SpecialApcDisable;
  if ( !v11->AbEntrySummary )
  {
    if ( !v11->AbOrphanedEntrySummary )
    {
      v13 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v11, v9);
      goto LABEL_45;
    }
    AbOrphanedEntrySummary = v11->AbOrphanedEntrySummary;
    v11->AbOrphanedEntrySummary = 0;
    v11->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  CurrentThread = (struct _KTHREAD *)v11->AbEntrySummary;
  _BitScanForward((unsigned int *)&v12, (unsigned int)CurrentThread);
  v11->AbEntrySummary = (unsigned __int8)CurrentThread & ~(1 << v12);
  v8 = 96 * v12;
  v13 = (char *)v11->LockEntries + v8;
  if ( !v13 )
  {
LABEL_45:
    _interlockedbittestandset((volatile signed __int32 *)&v11->116 + 1, 0xFu);
    goto LABEL_10;
  }
  if ( (unsigned __int64)(v9 + 0x1C000000000LL) > 0x7FFFFFFFFFLL
    || (Process = v11->ApcState.Process, (v28 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v14 = -1;
  }
  else
  {
    v14 = *(_DWORD *)(v28 + 8);
  }
  *((_DWORD *)v13 + 10) = v14;
  v8 = 0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v13 + 4) = (unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_10:
  v15 = v11->SpecialApcDisable + 1;
  v11->SpecialApcDisable = v15;
  if ( !v15 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery(v8, CurrentThread, v10);
LABEL_13:
  if ( _interlockedbittestandset64(v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v13, v9);
  if ( v13 )
    v13[26] |= 1u;
  v16 = ExAcquireSpinLockExclusive(v7);
  v17 = *(_QWORD **)(a1 + 16);
  v18 = v16;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v17 )
        KeBugCheckEx(0xD7u, a2, 1uLL, 0LL, 0LL);
      v19 = v17[10] & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 < v19 + v17[4] )
        break;
      v17 = (_QWORD *)v17[1];
    }
    if ( a2 >= v19 )
      break;
    v17 = (_QWORD *)*v17;
  }
  --*(_DWORD *)(a1 + 24);
  RtlAvlRemoveNode(a1 + 16, v17);
  LOBYTE(v20) = v18;
  MiUnlockWorkingSetExclusive(v7, v20);
  v21 = (void *)v17[7];
  v22 = v17[6] & 0xFFFFFFFFFFFFFFF8uLL;
  v23 = v17[6] & 1LL;
  v30[0] = v22;
  MiManageSubsectionView(v30, v17 + 8, 4LL);
  v24 = *(volatile signed __int64 **)(a1 + 8);
  if ( (_InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v24);
  KeAbPostRelease((ULONG_PTR)v24);
  KiLeaveGuardedRegionUnsafe(v33);
  if ( v21 )
    ObfDereferenceObject(v21);
  if ( v23 == 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v22 + 92));
  v25 = v17[4] >> 12;
  if ( a3 == 1 )
    MiRemoveMappedPtes(v17, v7);
  v26 = *((unsigned int *)v17 + 23);
  if ( (_DWORD)v26 != 0x7FFFF )
    MiDereferencePerSessionProtos(v22, v26);
  if ( (_UNKNOWN *)a1 == &unk_1402FE5C0 )
  {
    MiReleasePtes(&unk_1402FF0D8, v6, (unsigned int)v25);
    MiChargeWsles((ULONG_PTR)v7);
  }
  else
  {
    MiReleasePtes(v31 + 7824, v6, (unsigned int)v25);
  }
  ExFreePoolWithTag(v17, 0);
}
