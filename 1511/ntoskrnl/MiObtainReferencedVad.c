/*
 * XREFs of MiObtainReferencedVad @ 0x14004B200
 * Callers:
 *     NtResetWriteWatch @ 0x1400A5E20 (NtResetWriteWatch.c)
 *     NtGetWriteWatch @ 0x1400B66D0 (NtGetWriteWatch.c)
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1401072A0 (MiUnmapLockedPagesInUserSpace.c)
 *     MiCfgMarkValidEntries @ 0x1403CAC70 (MiCfgMarkValidEntries.c)
 *     NtAreMappedFilesTheSame @ 0x1403E8334 (NtAreMappedFilesTheSame.c)
 *     NtFreeVirtualMemory @ 0x140417AA0 (NtFreeVirtualMemory.c)
 *     MiProtectVirtualMemory @ 0x140418F80 (MiProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x14041BC60 (MiUnmapViewOfSection.c)
 *     MmFlushVirtualMemory @ 0x140455438 (MmFlushVirtualMemory.c)
 *     MiReferenceCfgVad @ 0x140462520 (MiReferenceCfgVad.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14047B7F8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmSecureVirtualMemory @ 0x1404A6550 (MmSecureVirtualMemory.c)
 *     MmDeleteTeb @ 0x1404A92F8 (MmDeleteTeb.c)
 *     MiSetPriorityVaRanges @ 0x1404BFD14 (MiSetPriorityVaRanges.c)
 *     MmRotatePhysicalView @ 0x1404E2C10 (MmRotatePhysicalView.c)
 *     MmStoreFreeVirtualMemory @ 0x1404F3F5C (MmStoreFreeVirtualMemory.c)
 *     MmGetFileNameForAddress @ 0x140621ED0 (MmGetFileNameForAddress.c)
 *     MiCopyPagesIntoEnclave @ 0x140629118 (MiCopyPagesIntoEnclave.c)
 *     MiInitializeEnclave @ 0x140629DFC (MiInitializeEnclave.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14004AD10 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MiWaitForVadDeletion @ 0x1401E1DD8 (MiWaitForVadDeletion.c)
 */

unsigned int *__fastcall MiObtainReferencedVad(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r14
  _DWORD *v3; // r9
  unsigned __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r8
  int v7; // r12d
  ULONG_PTR v8; // r15
  struct _KTHREAD *v9; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v11; // rcx
  __int64 v12; // rsi
  int SessionId; // eax
  __int16 v14; // ax
  _KPROCESS *v15; // rdx
  unsigned int *v16; // rbx
  unsigned __int64 v17; // rbp
  __int64 v18; // rcx
  volatile signed __int32 *v19; // r15
  struct _KTHREAD *v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int16 v23; // ax
  __int16 v24; // ax
  struct _KPROCESS *v26; // rax
  unsigned __int64 v27; // rcx
  int v28; // eax
  unsigned __int8 v29; // r14
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v31; // [rsp+30h] [rbp-48h]

  v2 = 0LL;
  v3 = a2;
  *a2 = 0;
  v4 = a1;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v31 = Process;
  --CurrentThread->SpecialApcDisable;
  v7 = -1;
  v8 = Process + 872;
  if ( !KiAbEnabled )
  {
    v12 = 0LL;
    goto LABEL_9;
  }
  v9 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v9, Process + 872, KeGetCurrentIrql(), 0LL);
  --v9->SpecialApcDisable;
  if ( !v9->AbEntrySummary )
  {
    if ( !v9->AbOrphanedEntrySummary )
    {
      v12 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        EtwTraceAutoBoostEntryExhaustion(v9, Process + 872);
        Process = v31;
        v3 = a2;
      }
      goto LABEL_63;
    }
    AbOrphanedEntrySummary = v9->AbOrphanedEntrySummary;
    v9->AbOrphanedEntrySummary = 0;
    v9->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v9->AbEntrySummary;
  _BitScanForward((unsigned int *)&v11, AbEntrySummary);
  v9->AbEntrySummary = AbEntrySummary & ~(1 << v11);
  a1 = 96 * v11;
  v12 = (__int64)v9->LockEntries + a1;
  if ( !v12 )
  {
LABEL_63:
    _interlockedbittestandset((volatile signed __int32 *)&v9->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( (unsigned __int64)(Process + 0x70000000368LL) <= 0x7FFFFFFFFFLL )
  {
    SessionId = MmGetSessionIdEx(v9->ApcState.Process);
    Process = v31;
    v3 = a2;
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v12 + 40) = SessionId;
  a1 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v12 + 32) = v8 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v14 = v9->SpecialApcDisable + 1;
  v9->SpecialApcDisable = v14;
  if ( !v14 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
  {
    KiCheckForKernelApcDelivery(a1);
    Process = v31;
    v3 = a2;
  }
LABEL_9:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx((unsigned __int64 *)v8, v12, v8);
    Process = v31;
    v3 = a2;
  }
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  BYTE4(CurrentThread[1].Queue) |= 2u;
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    *v3 = -1073741558;
    goto LABEL_46;
  }
  v15 = KeGetCurrentThread()->ApcState.Process;
  v16 = (unsigned int *)v15[2].Affinity.Bitmap[3];
  if ( !v16 )
  {
LABEL_45:
    *v3 = -1073741664;
LABEL_46:
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  v17 = v4 >> 12;
  if ( v17 < (v16[6] | ((unsigned __int64)*((unsigned __int8 *)v16 + 32) << 32))
    || v17 > (v16[7] | ((unsigned __int64)*((unsigned __int8 *)v16 + 33) << 32)) )
  {
    v16 = (unsigned int *)v15[2].Affinity.Bitmap[1];
    if ( v16 )
    {
      while ( 1 )
      {
        if ( v17 > (v16[7] | ((unsigned __int64)*((unsigned __int8 *)v16 + 33) << 32)) )
          v28 = 1;
        else
          v28 = -(v17 < (v16[6] | ((unsigned __int64)*((unsigned __int8 *)v16 + 32) << 32)));
        if ( v28 < 0 )
        {
          v16 = *(unsigned int **)v16;
        }
        else
        {
          if ( v28 <= 0 )
          {
            v15[2].Affinity.Bitmap[3] = (unsigned __int64)v16;
            goto LABEL_17;
          }
          v16 = (unsigned int *)*((_QWORD *)v16 + 1);
        }
        if ( !v16 )
          goto LABEL_45;
      }
    }
    goto LABEL_45;
  }
LABEL_17:
  _InterlockedIncrement((volatile signed __int32 *)v16 + 9);
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  --CurrentThread->SpecialApcDisable;
  v19 = (volatile signed __int32 *)(v16 + 10);
  if ( KiAbEnabled )
  {
    v20 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v20, (ULONG_PTR)(v16 + 10), KeGetCurrentIrql(), 0LL);
    --v20->SpecialApcDisable;
    if ( !v20->AbEntrySummary )
    {
      if ( !v20->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v20, v16 + 10);
        goto LABEL_54;
      }
      v29 = v20->AbOrphanedEntrySummary;
      v20->AbOrphanedEntrySummary = 0;
      v20->AbEntrySummary |= v29;
    }
    v21 = v20->AbEntrySummary;
    _BitScanForward((unsigned int *)&v22, v21);
    v20->AbEntrySummary = v21 & ~(1 << v22);
    v18 = 96 * v22;
    v2 = (__int64)v20->LockEntries + v18;
    if ( v2 )
    {
      if ( (unsigned __int64)(v16 + 0x1C00000000ALL) <= 0x7FFFFFFFFFLL )
      {
        v26 = v20->ApcState.Process;
        v27 = v26[1].ActiveProcessors.Bitmap[2];
        if ( v27 )
        {
          if ( v26 != PsInitialSystemProcess )
            v7 = *(_DWORD *)(v27 + 8);
        }
      }
      *(_DWORD *)(v2 + 40) = v7;
      v18 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v2 + 32) = (unsigned __int64)v19 & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_23;
    }
LABEL_54:
    _interlockedbittestandset((volatile signed __int32 *)&v20->116 + 1, 0xFu);
LABEL_23:
    v23 = v20->SpecialApcDisable + 1;
    v20->SpecialApcDisable = v23;
    if ( !v23 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
      KiCheckForKernelApcDelivery(v18);
  }
  if ( _interlockedbittestandset64(v19, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v16 + 5, v2, (ULONG_PTR)(v16 + 10));
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  BYTE4(CurrentThread[1].Queue) |= 0x80u;
  v24 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v24;
  if ( !v24 && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v18);
  if ( (v16[12] & 0x80000) != 0 )
  {
    MiWaitForVadDeletion(v16);
  }
  else if ( v17 >= (v16[6] | ((unsigned __int64)*((unsigned __int8 *)v16 + 32) << 32))
         && v17 <= (v16[7] | ((unsigned __int64)*((unsigned __int8 *)v16 + 33) << 32)) )
  {
    return v16;
  }
  MiUnlockAndDereferenceVad(v16);
  *a2 = -1073741664;
  return 0LL;
}
