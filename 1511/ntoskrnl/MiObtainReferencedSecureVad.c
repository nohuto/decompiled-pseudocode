/*
 * XREFs of MiObtainReferencedSecureVad @ 0x140038070
 * Callers:
 *     MmUnsecureVirtualMemory @ 0x1403F636C (MmUnsecureVirtualMemory.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14004AD10 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x140063AA0 (MiVadDeleted.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MiWaitForVadDeletion @ 0x1401E1DD8 (MiWaitForVadDeletion.c)
 */

__int64 __fastcall MiObtainReferencedSecureVad(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // rbp
  _KPROCESS *Process; // rsi
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  __int64 Address; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // r14
  volatile signed __int32 *v14; // r15
  struct _KTHREAD *v15; // rsi
  unsigned int AbEntrySummary; // edx
  __int64 v17; // rcx
  int v18; // eax
  __int16 v19; // ax
  struct _KPROCESS *v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // bp

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  *a2 = 0;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&Process[1].Affinity.Bitmap[7]);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[7], 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&Process[1].Affinity.Bitmap[7], v8, (ULONG_PTR)&Process[1].Affinity.Bitmap[7]);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  BYTE4(CurrentThread[1].Queue) |= 2u;
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 16);
    Address = MiLocateAddress(v9, v7);
    v11 = Address;
    if ( !Address )
    {
      UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
LABEL_39:
      *a2 = -1073741664;
      return 0LL;
    }
    _InterlockedIncrement((volatile signed __int32 *)(Address + 36));
    --CurrentThread->SpecialApcDisable;
    UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
    v13 = v9 >> 12;
    --CurrentThread->SpecialApcDisable;
    v14 = (volatile signed __int32 *)(v11 + 40);
    if ( !KiAbEnabled )
    {
LABEL_17:
      if ( _interlockedbittestandset64(v14, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 40), v3, v11 + 40);
      if ( v3 )
        *(_BYTE *)(v3 + 26) |= 1u;
      BYTE4(CurrentThread[1].Queue) |= 0x80u;
      KiLeaveGuardedRegionUnsafe(CurrentThread);
      if ( (unsigned int)MiVadDeleted(v11) == 1 )
      {
        MiWaitForVadDeletion();
      }
      else if ( v13 >= (*(unsigned int *)(v11 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 32) << 32))
             && v13 <= (*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) )
      {
        return v11;
      }
      MiUnlockAndDereferenceVad((PVOID)v11);
      goto LABEL_39;
    }
    v15 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v15, v11 + 40, KeGetCurrentIrql(), 0LL);
    --v15->SpecialApcDisable;
    if ( !v15->AbEntrySummary )
    {
      if ( !v15->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v15, v11 + 40);
        goto LABEL_31;
      }
      AbOrphanedEntrySummary = v15->AbOrphanedEntrySummary;
      v15->AbOrphanedEntrySummary = 0;
      v15->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = v15->AbEntrySummary;
    _BitScanForward((unsigned int *)&v17, AbEntrySummary);
    v15->AbEntrySummary = AbEntrySummary & ~(1 << v17);
    v12 = 96 * v17;
    v3 = (__int64)v15->LockEntries + v12;
    if ( v3 )
    {
      if ( (unsigned __int64)(v11 + 0x70000000028LL) > 0x7FFFFFFFFFLL
        || (v21 = v15->ApcState.Process, (v22 = v21[1].ActiveProcessors.Bitmap[2]) == 0)
        || v21 == PsInitialSystemProcess )
      {
        v18 = -1;
      }
      else
      {
        v18 = *(_DWORD *)(v22 + 8);
      }
      *(_DWORD *)(v3 + 40) = v18;
      v12 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v3 + 32) = (unsigned __int64)v14 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_14:
      v19 = v15->SpecialApcDisable + 1;
      v15->SpecialApcDisable = v19;
      if ( !v19 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
        KiCheckForKernelApcDelivery(v12);
      goto LABEL_17;
    }
LABEL_31:
    _interlockedbittestandset((volatile signed __int32 *)&v15->116 + 1, 0xFu);
    goto LABEL_14;
  }
  UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
  *a2 = -1073741558;
  return 0LL;
}
