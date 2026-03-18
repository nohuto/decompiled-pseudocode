/*
 * XREFs of CcGetVirtualAddress @ 0x1400A39E0
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140068870 (CcMapAndCopyInToCache.c)
 *     CcPinFileData @ 0x1400A2420 (CcPinFileData.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E7B9C (CcPurgeAndClearCacheSection.c)
 *     CcPrepareMdlWrite @ 0x1400F04A8 (CcPrepareMdlWrite.c)
 *     CcMapAndCopyFromCache @ 0x14047A640 (CcMapAndCopyFromCache.c)
 *     CcMapData @ 0x14047A8B0 (CcMapData.c)
 *     CcMapDataCommon @ 0x1404A8EE4 (CcMapDataCommon.c)
 *     CcMdlRead @ 0x1404D83FC (CcMdlRead.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     CcGetVacbMiss @ 0x1400AEA80 (CcGetVacbMiss.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcUnmapVacbArray @ 0x1400B1DF0 (CcUnmapVacbArray.c)
 *     CcInsertVacbArray @ 0x1401377B4 (CcInsertVacbArray.c)
 *     CcBuildUpHighPriorityMappings @ 0x14013789C (CcBuildUpHighPriorityMappings.c)
 *     CcAllocateInitializeVacbArray @ 0x140137910 (CcAllocateInitializeVacbArray.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcGetVirtualAddress(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, int a5, int a6)
{
  int v6; // r13d
  int v8; // r15d
  __int64 v9; // r12
  int v10; // eax
  __int64 v11; // rcx
  int v12; // ebx
  volatile signed __int64 *v13; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int AbEntrySummary; // edx
  __int64 v16; // rcx
  __int64 v17; // rbp
  int SessionId; // eax
  __int16 v19; // ax
  int v20; // ecx
  __int64 v21; // rdx
  __int64 VacbMiss; // rdi
  signed __int64 v23; // rax
  signed __int64 v24; // rcx
  volatile signed __int64 v25; // rtt
  int v26; // r9d
  __int64 v27; // rbx
  __int64 InitializeVacbArray; // rax
  __int64 v30; // rdi
  KIRQL v31; // bl
  __int64 v32; // r9
  int v33; // r8d
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // rax
  signed __int64 v37; // rax
  signed __int64 v38; // rcx
  volatile signed __int64 v39; // rtt
  __int64 *v40; // rdx
  unsigned __int8 AbOrphanedEntrySummary; // al
  BOOL v42; // [rsp+30h] [rbp-78h]
  __int64 v43; // [rsp+38h] [rbp-70h] BYREF
  __int64 v44; // [rsp+40h] [rbp-68h] BYREF
  __int64 v45; // [rsp+48h] [rbp-60h] BYREF
  unsigned int v46; // [rsp+B0h] [rbp+8h]
  __int64 v47; // [rsp+B8h] [rbp+10h]

  v47 = a2;
  v6 = 0;
  v8 = a2 & 0x3FFFF;
  v9 = a2 & 0x3FFFF;
  v43 = a2 - v9;
  v10 = *(_DWORD *)(a1 + 152) & 0x200;
  v11 = v10 != 0;
  v42 = v10 != 0;
  if ( v10 || a5 )
  {
    v12 = 1;
    v46 = 1;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 5 || (unsigned int)CcNumberOfFreeHighPriorityVacbs >= 5 )
      goto LABEL_3;
  }
  else
  {
    v12 = 0;
    v46 = 0;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 5 )
      goto LABEL_3;
  }
  InitializeVacbArray = CcAllocateInitializeVacbArray();
  v30 = InitializeVacbArray;
  if ( InitializeVacbArray )
  {
    if ( v12 == 1 )
      CcBuildUpHighPriorityMappings(InitializeVacbArray);
    v31 = KeAcquireQueuedSpinLock(4uLL);
    CcInsertVacbArray(v30);
    KeReleaseQueuedSpinLock(4uLL, v31);
  }
  a2 = v47;
LABEL_3:
  if ( a2 > *(_QWORD *)(a1 + 32) )
    KeBugCheckEx(0x34u, 0x549uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v13 = (volatile signed __int64 *)(a1 + 104);
  if ( !KiAbEnabled )
  {
    v17 = 0LL;
    goto LABEL_14;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 104, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v17 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, a1 + 104);
      goto LABEL_76;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v16, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v16);
  v11 = 96 * v16;
  v17 = (__int64)CurrentThread->LockEntries + v11;
  if ( !v17 )
  {
LABEL_76:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_11;
  }
  if ( (unsigned __int64)(a1 + 0x70000000068LL) <= 0x7FFFFFFFFFLL )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v17 + 40) = SessionId;
  v11 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v17 + 32) = (unsigned __int64)v13 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_11:
  v19 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v19;
  if ( !v19 && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v11);
LABEL_14:
  if ( _InterlockedCompareExchange64(v13, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 104), v17, a1 + 104);
  if ( v17 )
    *(_BYTE *)(v17 + 26) |= 1u;
  if ( a6
    || (v20 = *(_DWORD *)(a1 + 152), (v20 & 0x800200) == 0x200)
    || (v20 & 0x1000) != 0
    || (v43 & 0xFFFFF) != 0
    || v43 < 0x100000
    || v43 == *(_QWORD *)(a1 + 336) )
  {
    v6 = 1;
  }
  v21 = *(_QWORD *)(a1 + 32);
  if ( v21 > 0x2000000 )
  {
    v32 = v47;
    v33 = 0;
    v34 = 25;
    do
    {
      v34 += 7;
      ++v33;
    }
    while ( v21 > 1LL << v34 );
    v35 = v34 - 7;
    VacbMiss = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * (v47 >> v35));
    if ( !VacbMiss )
      goto LABEL_48;
    do
    {
      if ( !v33 )
        break;
      --v33;
      v36 = 1LL << v35;
      v35 -= 7;
      v32 &= v36 - 1;
      VacbMiss = *(_QWORD *)(VacbMiss + 8 * (v32 >> v35));
    }
    while ( VacbMiss );
  }
  else
  {
    VacbMiss = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v47 >> 18));
  }
  if ( VacbMiss )
  {
    if ( !(unsigned __int16)_InterlockedIncrement((volatile signed __int32 *)(VacbMiss + 16)) )
      KeBugCheckEx(0x34u, 0x979uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    _m_prefetchw((const void *)v13);
    v23 = *v13;
    if ( (*v13 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v24 = v23 - 16;
    else
      v24 = 0LL;
    if ( (v23 & 2) != 0 || (v25 = *v13, v25 != _InterlockedCompareExchange64(v13, v24, v23)) )
      ExfReleasePushLock((_QWORD *)(a1 + 104));
    KeAbPostRelease(a1 + 104);
    v27 = v43;
    goto LABEL_33;
  }
LABEL_48:
  _m_prefetchw((const void *)v13);
  v37 = *v13;
  if ( (*v13 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v38 = v37 - 16;
  else
    v38 = 0LL;
  if ( (v37 & 2) != 0 || (v39 = *v13, v39 != _InterlockedCompareExchange64(v13, v38, v37)) )
    ExfReleasePushLock((_QWORD *)(a1 + 104));
  KeAbPostRelease(a1 + 104);
  VacbMiss = CcGetVacbMiss(a1, v47, v42, v46);
  v27 = v43;
  if ( (*(_DWORD *)(a1 + 152) & 0x8001200) == 0x200 && (v43 & 0xFFFFF) == 0 && v43 >= 0x100000 )
  {
    v27 = v43 - 0x100000;
    v43 -= 0x100000LL;
    CcUnmapVacbArray(a1, (unsigned int)&v43, 0x100000, 1, 0);
  }
LABEL_33:
  if ( !v6 )
  {
    LOBYTE(v26) = 1;
    if ( (*(_DWORD *)(a1 + 152) & 0x800000) != 0 )
    {
      if ( v27 < 8650752 )
      {
        v45 = 0x40000LL;
        v40 = &v45;
        goto LABEL_61;
      }
    }
    else if ( v27 < 0x800000 )
    {
      v44 = 0LL;
      v40 = &v44;
LABEL_61:
      CcUnmapVacbArray(a1, (_DWORD)v40, v27, v26, 0);
      goto LABEL_34;
    }
    v43 = v27 - 0x800000;
    CcUnmapVacbArray(a1, (unsigned int)&v43, 0x800000, v26, 0);
  }
LABEL_34:
  *a3 = VacbMiss;
  *a4 = 0x40000 - v8;
  return v9 + *(_QWORD *)VacbMiss;
}
