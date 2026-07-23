/*
 * XREFs of MiObtainReferencedVad @ 0x14003DEA0
 * Callers:
 *     NtResetWriteWatch @ 0x140013270 (NtResetWriteWatch.c)
 *     NtGetWriteWatch @ 0x140014A70 (NtGetWriteWatch.c)
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14010EE28 (MiUnmapLockedPagesInUserSpace.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14040B548 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmSecureVirtualMemory @ 0x14042985C (MmSecureVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x14042D2D0 (MiUnmapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MiProtectVirtualMemory @ 0x140432340 (MiProtectVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x140432C90 (NtFreeVirtualMemory.c)
 *     MmDeleteTeb @ 0x1404B2E50 (MmDeleteTeb.c)
 *     MmFlushVirtualMemory @ 0x1404B5438 (MmFlushVirtualMemory.c)
 *     MiReferenceCfgVad @ 0x1404C1728 (MiReferenceCfgVad.c)
 *     MiSetPriorityVaRanges @ 0x1404C9B34 (MiSetPriorityVaRanges.c)
 *     MiCfgMarkValidEntries @ 0x1404D7248 (MiCfgMarkValidEntries.c)
 *     MmRotatePhysicalView @ 0x14052871C (MmRotatePhysicalView.c)
 *     NtAreMappedFilesTheSame @ 0x1405298F4 (NtAreMappedFilesTheSame.c)
 *     MmStoreFreeVirtualMemory @ 0x140533000 (MmStoreFreeVirtualMemory.c)
 *     MmGetFileNameForAddress @ 0x140656BF4 (MmGetFileNameForAddress.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E930 (MiCopyPagesIntoEnclave.c)
 *     MiInitializeEnclave @ 0x14065F64C (MiInitializeEnclave.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002B9E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiWaitForVadDeletion @ 0x1401F7544 (MiWaitForVadDeletion.c)
 */

unsigned __int64 __fastcall MiObtainReferencedVad(__int64 a1, _DWORD *AbEntrySummary)
{
  char *v2; // r14
  _DWORD *v3; // r8
  unsigned __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r13
  struct _KTHREAD *v7; // rbx
  unsigned __int64 v8; // r15
  __int64 v9; // r9
  __int64 v10; // rcx
  char *v11; // rsi
  int SessionId; // eax
  __int16 v13; // ax
  _KPROCESS *v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KTHREAD *v21; // rsi
  unsigned __int64 v22; // r15
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int16 v26; // ax
  __int16 v27; // ax
  int v29; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v31; // r14
  _DWORD *v32; // [rsp+88h] [rbp+10h]

  v32 = AbEntrySummary;
  v2 = 0LL;
  v3 = AbEntrySummary;
  *AbEntrySummary = 0;
  v4 = a1;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  v7 = KeGetCurrentThread();
  v8 = Process + 872;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v7, Process + 872, KeGetCurrentIrql(), 0LL);
  --v7->SpecialApcDisable;
  v9 = 0x8000000000LL;
  if ( !v7->AbEntrySummary )
  {
    if ( !v7->AbOrphanedEntrySummary )
    {
      v11 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        EtwTraceAutoBoostEntryExhaustion(v7, Process + 872);
        v3 = v32;
      }
      goto LABEL_53;
    }
    AbOrphanedEntrySummary = v7->AbOrphanedEntrySummary;
    v7->AbOrphanedEntrySummary = 0;
    v7->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = (_DWORD *)v7->AbEntrySummary;
  _BitScanForward((unsigned int *)&v10, (unsigned int)AbEntrySummary);
  v7->AbEntrySummary = (unsigned __int8)AbEntrySummary & ~(1 << v10);
  a1 = 96 * v10;
  v11 = (char *)v7->LockEntries + a1;
  if ( !v11 )
  {
LABEL_53:
    _interlockedbittestandset((volatile signed __int32 *)&v7->116 + 1, 0xFu);
    goto LABEL_7;
  }
  if ( v8 < qword_140326950 || v8 >= qword_140326950 + 0x8000000000LL )
  {
    SessionId = -1;
  }
  else
  {
    SessionId = MmGetSessionIdEx(v7->ApcState.Process);
    v3 = v32;
  }
  *((_DWORD *)v11 + 10) = SessionId;
  a1 = 0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v11 + 4) = v8 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_7:
  v13 = v7->SpecialApcDisable + 1;
  v7->SpecialApcDisable = v13;
  if ( !v13 && ($2B8565053CDC740D4E4887693DD8AC9E *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
  {
    KiCheckForKernelApcDelivery(a1, AbEntrySummary, v3, v9);
    v3 = v32;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx(Process + 872, v11, Process + 872);
    v3 = v32;
  }
  if ( v11 )
    v11[26] |= 1u;
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    *v3 = -1073741558;
    goto LABEL_40;
  }
  v14 = KeGetCurrentThread()->ApcState.Process;
  v15 = v14[2].Affinity.Bitmap[5];
  if ( !v15 )
  {
LABEL_39:
    *v3 = -1073741664;
LABEL_40:
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  v16 = v4 >> 12;
  if ( v16 < (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32))
    || v16 > (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) )
  {
    v15 = v14[2].Affinity.Bitmap[3];
    if ( v15 )
    {
      while ( 1 )
      {
        if ( v16 > (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) )
          v29 = 1;
        else
          v29 = -(v16 < (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)));
        if ( v29 < 0 )
        {
          v15 = *(_QWORD *)v15;
        }
        else
        {
          if ( v29 <= 0 )
          {
            v14[2].Affinity.Bitmap[5] = v15;
            goto LABEL_16;
          }
          v15 = *(_QWORD *)(v15 + 8);
        }
        if ( !v15 )
          goto LABEL_39;
      }
    }
    goto LABEL_39;
  }
LABEL_16:
  _InterlockedIncrement((volatile signed __int32 *)(v15 + 36));
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  --CurrentThread->SpecialApcDisable;
  v21 = KeGetCurrentThread();
  v22 = v15 + 40;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v21, v15 + 40, KeGetCurrentIrql(), 0LL);
  --v21->SpecialApcDisable;
  if ( !v21->AbEntrySummary )
  {
    if ( !v21->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v21, v15 + 40);
      goto LABEL_58;
    }
    v31 = v21->AbOrphanedEntrySummary;
    v21->AbOrphanedEntrySummary = 0;
    v21->AbEntrySummary |= v31;
  }
  v23 = v21->AbEntrySummary;
  _BitScanForward((unsigned int *)&v24, v23);
  v21->AbEntrySummary = v23 & ~(1 << v24);
  v18 = 96 * v24;
  v2 = (char *)v21->LockEntries + v18;
  if ( v2 )
  {
    if ( v22 < qword_140326950 || v22 >= qword_140326950 + 0x8000000000LL )
      v25 = -1;
    else
      v25 = MmGetSessionIdEx(v21->ApcState.Process);
    *((_DWORD *)v2 + 10) = v25;
    v18 = 0x7FFFFFFFFFFFFFFCLL;
    *((_QWORD *)v2 + 4) = v22 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_22;
  }
LABEL_58:
  _interlockedbittestandset((volatile signed __int32 *)&v21->116 + 1, 0xFu);
LABEL_22:
  v26 = v21->SpecialApcDisable + 1;
  v21->SpecialApcDisable = v26;
  if ( !v26 && ($2B8565053CDC740D4E4887693DD8AC9E *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
    KiCheckForKernelApcDelivery(v18, v17, v19, v20);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
    ExfAcquirePushLockExclusiveEx(v15 + 40, v2, v15 + 40);
  if ( v2 )
    v2[26] |= 1u;
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  v27 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v27;
  if ( !v27 && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v18, v17, v19, v20);
  if ( (*(_DWORD *)(v15 + 48) & 0x80000) != 0 )
  {
    MiWaitForVadDeletion(v15);
  }
  else if ( v16 >= (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32))
         && v16 <= (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) )
  {
    return v15;
  }
  MiUnlockAndDereferenceVad((char *)v15);
  *v32 = -1073741664;
  return 0LL;
}
