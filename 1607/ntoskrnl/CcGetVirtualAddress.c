/*
 * XREFs of CcGetVirtualAddress @ 0x140032F40
 * Callers:
 *     CcPinFileData @ 0x140031960 (CcPinFileData.c)
 *     CcMapAndCopyInToCache @ 0x140034AE0 (CcMapAndCopyInToCache.c)
 *     CcPurgeAndClearCacheSection @ 0x14006C3C0 (CcPurgeAndClearCacheSection.c)
 *     CcPrepareMdlWrite @ 0x1400AF55C (CcPrepareMdlWrite.c)
 *     CcMapAndCopyFromCache @ 0x140446260 (CcMapAndCopyFromCache.c)
 *     CcMapData @ 0x1404464C0 (CcMapData.c)
 *     CcMapDataCommon @ 0x140457310 (CcMapDataCommon.c)
 *     CcMdlRead @ 0x14045758C (CcMdlRead.c)
 * Callees:
 *     CcUnmapVacbArray @ 0x140017B40 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400182AC (CcGetVacbMiss.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     CcInsertVacbArray @ 0x140136844 (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x1401369F0 (CcAllocateInitializeVacbArray.c)
 *     CcBuildUpHighPriorityMappings @ 0x140148130 (CcBuildUpHighPriorityMappings.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall CcGetVirtualAddress(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 **a3,
        _DWORD *a4,
        int a5,
        int a6)
{
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  int v9; // r15d
  __int64 InitializeVacbArray; // rax
  __int64 v11; // rdi
  KIRQL v12; // bl
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v17; // rcx
  __int64 v18; // r14
  int SessionId; // eax
  __int16 v20; // ax
  BOOL v21; // r14d
  __int64 v22; // r9
  __int64 v23; // r8
  int v24; // edx
  int v25; // ecx
  int v26; // ecx
  volatile signed __int32 *VacbMiss; // rdi
  __int64 v28; // rax
  signed __int64 v29; // rax
  signed __int64 v30; // rcx
  volatile signed __int64 v31; // rtt
  __int64 v32; // rbx
  signed __int64 v33; // rax
  signed __int64 v34; // rcx
  volatile signed __int64 v35; // rtt
  __int64 *v36; // rdx
  unsigned int v37; // r8d
  __int64 v39; // [rsp+38h] [rbp-70h] BYREF
  __int64 v40; // [rsp+40h] [rbp-68h] BYREF
  __int64 v41; // [rsp+48h] [rbp-60h] BYREF
  __int64 v42; // [rsp+B8h] [rbp+10h]

  v42 = a2;
  v7 = a2 & 0x3FFFF;
  v39 = a2 - (a2 & 0x3FFFF);
  v8 = (*(_DWORD *)(a1 + 152) & 0x200) != 0;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 || a5 )
  {
    v9 = 1;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 5 || (unsigned int)CcNumberOfFreeHighPriorityVacbs >= 5 )
      goto LABEL_12;
  }
  else
  {
    v9 = 0;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 5 )
      goto LABEL_12;
  }
  InitializeVacbArray = CcAllocateInitializeVacbArray();
  v11 = InitializeVacbArray;
  if ( InitializeVacbArray )
  {
    if ( v9 == 1 )
      CcBuildUpHighPriorityMappings(InitializeVacbArray);
    v12 = KeAcquireQueuedSpinLock(4uLL);
    CcInsertVacbArray(v11);
    KeReleaseQueuedSpinLock(4uLL, v12);
  }
  a2 = v42;
LABEL_12:
  if ( a2 > *(_QWORD *)(a1 + 32) )
    KeBugCheckEx(0x34u, 0x549uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CurrentThread = KeGetCurrentThread();
  v14 = a1 + 104;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 104, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v18 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, a1 + 104);
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
        goto LABEL_26;
      }
      goto LABEL_18;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v17, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v17);
  v18 = (__int64)&CurrentThread->LockEntries[v17];
  if ( !v18 )
  {
LABEL_18:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_26;
  }
  if ( v14 < qword_140326950 || v14 >= qword_140326950 + 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  *(_DWORD *)(v18 + 40) = SessionId;
  *(_QWORD *)(v18 + 32) = v14 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_26:
  v20 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v20;
  if ( !v20 && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v14, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 104, v18, a1 + 104);
  if ( v18 )
    *(_BYTE *)(v18 + 26) |= 1u;
  v21 = a6
     || (*(_DWORD *)(a1 + 152) & 0x800200) == 0x200
     || (v39 & 0xFFFFF) != 0
     || v39 < 0x100000
     || v39 == *(_QWORD *)(a1 + 336);
  v22 = *(_QWORD *)(a1 + 32);
  if ( v22 <= 0x2000000 )
  {
    VacbMiss = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v42 >> 18));
  }
  else
  {
    v23 = v42;
    v24 = 0;
    v25 = 25;
    do
    {
      v25 += 7;
      ++v24;
    }
    while ( v22 > 1LL << v25 );
    v26 = v25 - 7;
    VacbMiss = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 88) + 8 * (v42 >> v26));
    if ( !VacbMiss )
    {
LABEL_49:
      _m_prefetchw((const void *)v14);
      v29 = *(_QWORD *)v14;
      if ( (*(_QWORD *)v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v30 = 0LL;
      else
        v30 = v29 - 16;
      if ( (v29 & 2) != 0
        || (v31 = *(_QWORD *)v14, v31 != _InterlockedCompareExchange64((volatile signed __int64 *)v14, v30, v29)) )
      {
        ExfReleasePushLock(a1 + 104);
      }
      KeAbPostRelease(a1 + 104);
      VacbMiss = (volatile signed __int32 *)CcGetVacbMiss((_QWORD *)a1, v42, v8, v9);
      v32 = v39;
      if ( (*(_DWORD *)(a1 + 152) & 0x8000200) == 0x200 && (v39 & 0xFFFFF) == 0 && v39 >= 0x100000 )
      {
        v32 = v39 - 0x100000;
        v39 -= 0x100000LL;
        CcUnmapVacbArray(a1, &v39, 0x100000u, 1, 0);
      }
      goto LABEL_67;
    }
    do
    {
      if ( !v24 )
        break;
      --v24;
      v28 = 1LL << v26;
      v26 -= 7;
      v23 &= v28 - 1;
      VacbMiss = *(volatile signed __int32 **)&VacbMiss[2 * (v23 >> v26)];
    }
    while ( VacbMiss );
  }
  if ( !VacbMiss )
    goto LABEL_49;
  if ( !(unsigned __int16)_InterlockedIncrement(VacbMiss + 4) )
    KeBugCheckEx(0x34u, 0x977uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  _m_prefetchw((const void *)v14);
  v33 = *(_QWORD *)v14;
  if ( (*(_QWORD *)v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v34 = 0LL;
  else
    v34 = v33 - 16;
  if ( (v33 & 2) != 0
    || (v35 = *(_QWORD *)v14, v35 != _InterlockedCompareExchange64((volatile signed __int64 *)v14, v34, v33)) )
  {
    ExfReleasePushLock(a1 + 104);
  }
  KeAbPostRelease(a1 + 104);
  v32 = v39;
LABEL_67:
  if ( !v21 )
  {
    if ( (*(_DWORD *)(a1 + 152) & 0x800000) != 0 )
    {
      if ( v32 >= 8650752 )
        goto LABEL_70;
      v41 = 0x40000LL;
      v36 = &v41;
    }
    else
    {
      if ( v32 >= 0x800000 )
      {
LABEL_70:
        v36 = &v39;
        v39 = v32 - 0x800000;
        v37 = 0x800000;
LABEL_75:
        CcUnmapVacbArray(a1, v36, v37, 1, 0);
        goto LABEL_76;
      }
      v40 = 0LL;
      v36 = &v40;
    }
    v37 = v32;
    goto LABEL_75;
  }
LABEL_76:
  *a3 = VacbMiss;
  *a4 = 0x40000 - v7;
  return v7 + *(_QWORD *)VacbMiss;
}
