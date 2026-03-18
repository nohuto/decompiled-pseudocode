/*
 * XREFs of MiObtainReferencedVad @ 0x1400BF400
 * Callers:
 *     NtGetWriteWatch @ 0x14003C8B0 (NtGetWriteWatch.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     NtResetWriteWatch @ 0x14007CF90 (NtResetWriteWatch.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140133700 (MiUnmapLockedPagesInUserSpace.c)
 *     MiReferenceCfgVad @ 0x1404637C0 (MiReferenceCfgVad.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140474640 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiUnmapViewOfSection @ 0x1404B72D0 (MiUnmapViewOfSection.c)
 *     MiProtectVirtualMemory @ 0x1404B9700 (MiProtectVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x1404B9FC0 (NtFreeVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MiCfgMarkValidEntries @ 0x1404FBBC8 (MiCfgMarkValidEntries.c)
 *     MiSetPriorityVaRanges @ 0x1404FBD58 (MiSetPriorityVaRanges.c)
 *     MmSecureVirtualMemory @ 0x14052FA34 (MmSecureVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x140531D6C (MmFlushVirtualMemory.c)
 *     MmDeleteTeb @ 0x14053E174 (MmDeleteTeb.c)
 *     NtAreMappedFilesTheSame @ 0x140551204 (NtAreMappedFilesTheSame.c)
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 *     MmStoreFreeVirtualMemory @ 0x1405686EC (MmStoreFreeVirtualMemory.c)
 *     MmGetFileNameForAddress @ 0x1406A172C (MmGetFileNameForAddress.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140089560 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiWaitForVadDeletion @ 0x14022F098 (MiWaitForVadDeletion.c)
 */

unsigned __int64 __fastcall MiObtainReferencedVad(__int64 a1, _DWORD *a2)
{
  char *v2; // r14
  _DWORD *v3; // r8
  unsigned __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r13
  volatile signed __int64 *v7; // r15
  struct _KTHREAD *v8; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v10; // rcx
  char *v11; // rsi
  int SessionId; // eax
  __int16 v13; // ax
  _KPROCESS *v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  __int64 v17; // rcx
  volatile signed __int32 *v18; // r15
  struct _KTHREAD *v19; // rsi
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int16 v23; // ax
  __int16 v24; // ax
  int v26; // eax
  __int64 v27; // rcx
  __int16 v28; // ax
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v30; // r14

  v2 = 0LL;
  v3 = a2;
  *a2 = 0;
  v4 = a1;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  v7 = (volatile signed __int64 *)(Process + 872);
  if ( !KiAbEnabled )
  {
    v11 = 0LL;
    goto LABEL_9;
  }
  v8 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v8, Process + 872, KeGetCurrentIrql(), 0LL);
  --v8->SpecialApcDisable;
  if ( !v8->AbEntrySummary )
  {
    if ( !v8->AbOrphanedEntrySummary )
    {
      v11 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        EtwTraceAutoBoostEntryExhaustion(v8, Process + 872);
        v3 = a2;
      }
      goto LABEL_62;
    }
    AbOrphanedEntrySummary = v8->AbOrphanedEntrySummary;
    v8->AbOrphanedEntrySummary = 0;
    v8->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v8->AbEntrySummary;
  _BitScanForward((unsigned int *)&v10, AbEntrySummary);
  v8->AbEntrySummary = AbEntrySummary & ~(1 << v10);
  a1 = 96 * v10;
  v11 = (char *)v8->LockEntries + a1;
  if ( !v11 )
  {
LABEL_62:
    _interlockedbittestandset((volatile signed __int32 *)&v8->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( (unsigned __int64)(Process + 0x70000000368LL) <= 0x7FFFFFFFFFLL )
  {
    SessionId = MmGetSessionIdEx(v8->ApcState.Process);
    v3 = a2;
  }
  else
  {
    SessionId = -1;
  }
  *((_DWORD *)v11 + 10) = SessionId;
  a1 = 0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v11 + 4) = (unsigned __int64)v7 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v13 = v8->SpecialApcDisable + 1;
  v8->SpecialApcDisable = v13;
  if ( !v13 && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
  {
    KiCheckForKernelApcDelivery(a1);
    v3 = a2;
  }
LABEL_9:
  if ( _InterlockedCompareExchange64(v7, 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx(Process + 872, v11, Process + 872);
    v3 = a2;
  }
  if ( v11 )
    v11[26] |= 1u;
  BYTE4(CurrentThread[1].Queue) |= 2u;
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    *v3 = -1073741558;
    goto LABEL_42;
  }
  v14 = KeGetCurrentThread()->ApcState.Process;
  v15 = v14[2].Affinity.Bitmap[2];
  if ( !v15 )
  {
LABEL_41:
    *v3 = -1073741664;
LABEL_42:
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    v28 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v28;
    if ( !v28
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v27);
    }
    return 0LL;
  }
  v16 = v4 >> 12;
  if ( v16 < (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32))
    || v16 > (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) )
  {
    v15 = v14[2].Affinity.Bitmap[0];
    if ( v15 )
    {
      while ( 1 )
      {
        if ( v16 > (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) )
          v26 = 1;
        else
          v26 = -(v16 < (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)));
        if ( v26 < 0 )
        {
          v15 = *(_QWORD *)v15;
        }
        else
        {
          if ( v26 <= 0 )
          {
            v14[2].Affinity.Bitmap[2] = v15;
            goto LABEL_17;
          }
          v15 = *(_QWORD *)(v15 + 8);
        }
        if ( !v15 )
          goto LABEL_41;
      }
    }
    goto LABEL_41;
  }
LABEL_17:
  _InterlockedIncrement((volatile signed __int32 *)(v15 + 36));
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  --CurrentThread->SpecialApcDisable;
  v18 = (volatile signed __int32 *)(v15 + 40);
  if ( KiAbEnabled )
  {
    v19 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v19, v15 + 40, KeGetCurrentIrql(), 0LL);
    --v19->SpecialApcDisable;
    if ( !v19->AbEntrySummary )
    {
      if ( !v19->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v19, v15 + 40);
        goto LABEL_69;
      }
      v30 = v19->AbOrphanedEntrySummary;
      v19->AbOrphanedEntrySummary = 0;
      v19->AbEntrySummary |= v30;
    }
    v20 = v19->AbEntrySummary;
    _BitScanForward((unsigned int *)&v21, v20);
    v19->AbEntrySummary = v20 & ~(1 << v21);
    v17 = 96 * v21;
    v2 = (char *)v19->LockEntries + v17;
    if ( v2 )
    {
      if ( v15 + 0x70000000028LL <= 0x7FFFFFFFFFLL )
        v22 = MmGetSessionIdEx(v19->ApcState.Process);
      else
        v22 = -1;
      *((_DWORD *)v2 + 10) = v22;
      v17 = 0x7FFFFFFFFFFFFFFCLL;
      *((_QWORD *)v2 + 4) = (unsigned __int64)v18 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_24:
      v23 = v19->SpecialApcDisable + 1;
      v19->SpecialApcDisable = v23;
      if ( !v23 && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
        KiCheckForKernelApcDelivery(v17);
      goto LABEL_25;
    }
LABEL_69:
    _interlockedbittestandset((volatile signed __int32 *)&v19->116 + 1, 0xFu);
    goto LABEL_24;
  }
LABEL_25:
  if ( _interlockedbittestandset64(v18, 0LL) )
    ExfAcquirePushLockExclusiveEx(v15 + 40, v2, v15 + 40);
  if ( v2 )
    v2[26] |= 1u;
  BYTE4(CurrentThread[1].Queue) |= 0x80u;
  v24 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v24;
  if ( !v24 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v17);
  if ( *(int *)(v15 + 48) < 0 )
  {
    MiWaitForVadDeletion(v15);
  }
  else if ( v16 >= (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32))
         && v16 <= (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) )
  {
    return v15;
  }
  MiUnlockAndDereferenceVad((char *)v15);
  *a2 = -1073741664;
  return 0LL;
}
