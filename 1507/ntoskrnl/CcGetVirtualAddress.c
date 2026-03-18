/*
 * XREFs of CcGetVirtualAddress @ 0x1400501E0
 * Callers:
 *     CcPinFileData @ 0x140051C40 (CcPinFileData.c)
 *     CcPurgeAndClearCacheSection @ 0x140078F1C (CcPurgeAndClearCacheSection.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     CcPrepareMdlWrite @ 0x140124310 (CcPrepareMdlWrite.c)
 *     CcMdlRead @ 0x1404774E8 (CcMdlRead.c)
 *     CcMapData @ 0x14049CBA0 (CcMapData.c)
 *     CcMapAndCopyFromCache @ 0x14049D020 (CcMapAndCopyFromCache.c)
 *     CcMapDataCommon @ 0x140530004 (CcMapDataCommon.c)
 * Callees:
 *     CcGetVacbMiss @ 0x14003F1B0 (CcGetVacbMiss.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CcUnmapVacbArray @ 0x140086690 (CcUnmapVacbArray.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     CcInsertVacbArray @ 0x140166950 (CcInsertVacbArray.c)
 *     CcBuildUpHighPriorityMappings @ 0x140166A18 (CcBuildUpHighPriorityMappings.c)
 *     CcAllocateInitializeVacbArray @ 0x140166A8C (CcAllocateInitializeVacbArray.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall CcGetVirtualAddress(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 **a3,
        _DWORD *a4,
        int a5,
        int a6)
{
  int v6; // r13d
  int v8; // r15d
  __int64 v9; // r12
  int v10; // eax
  __int64 v11; // rcx
  int v12; // ebx
  volatile signed __int64 *v13; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 AbEntrySummary; // rdx
  __int64 v16; // rcx
  char *v17; // rbp
  int SessionId; // eax
  __int16 v19; // ax
  int v20; // ecx
  __int64 v21; // rdx
  volatile signed __int32 *VacbMiss; // rdi
  signed __int64 v23; // rax
  signed __int64 v24; // rcx
  volatile signed __int64 v25; // rtt
  int v26; // r9d
  __int64 v27; // rbx
  __int64 v29; // r9
  int v30; // r8d
  int v31; // ecx
  int v32; // ecx
  __int64 v33; // rax
  signed __int64 v34; // rax
  signed __int64 v35; // rcx
  volatile signed __int64 v36; // rtt
  __int64 *v37; // rdx
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 InitializeVacbArray; // rax
  __int64 v40; // rdi
  KIRQL v41; // bl
  BOOL v42; // [rsp+30h] [rbp-78h]
  __int64 v43; // [rsp+38h] [rbp-70h] BYREF
  __int64 v44; // [rsp+40h] [rbp-68h] BYREF
  __int64 v45; // [rsp+48h] [rbp-60h] BYREF
  int v46; // [rsp+B0h] [rbp+8h]
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
  v40 = InitializeVacbArray;
  if ( InitializeVacbArray )
  {
    if ( v12 == 1 )
      CcBuildUpHighPriorityMappings(InitializeVacbArray);
    v41 = KeAcquireQueuedSpinLock(4uLL);
    CcInsertVacbArray(v40);
    KeReleaseQueuedSpinLock(4uLL, v41);
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
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, a1 + 104, a3, a4);
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
  v17 = (char *)CurrentThread->LockEntries + v11;
  if ( !v17 )
  {
LABEL_76:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_11;
  }
  if ( (unsigned __int64)(a1 + 0x70000000068LL) <= 0x7FFFFFFFFFLL )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process, AbEntrySummary);
  else
    SessionId = -1;
  *((_DWORD *)v17 + 10) = SessionId;
  v11 = 0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v17 + 4) = (unsigned __int64)v13 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_11:
  v19 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v19;
  if ( !v19 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v11);
LABEL_14:
  if ( _InterlockedCompareExchange64(v13, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 104, v17, a1 + 104);
  if ( v17 )
    v17[26] |= 1u;
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
    v29 = v47;
    v30 = 0;
    v31 = 25;
    do
    {
      v31 += 7;
      ++v30;
    }
    while ( v21 > 1LL << v31 );
    v32 = v31 - 7;
    VacbMiss = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 88) + 8 * (v47 >> v32));
    if ( !VacbMiss )
      goto LABEL_44;
    do
    {
      if ( !v30 )
        break;
      --v30;
      v33 = 1LL << v32;
      v32 -= 7;
      v29 &= v33 - 1;
      VacbMiss = *(volatile signed __int32 **)&VacbMiss[2 * (v29 >> v32)];
    }
    while ( VacbMiss );
  }
  else
  {
    VacbMiss = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v47 >> 18));
  }
  if ( VacbMiss )
  {
    if ( !(unsigned __int16)_InterlockedIncrement(VacbMiss + 4) )
      KeBugCheckEx(0x34u, 0x96AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    _m_prefetchw((const void *)v13);
    v23 = *v13;
    if ( (*v13 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v24 = v23 - 16;
    else
      v24 = 0LL;
    if ( (v23 & 2) != 0 || (v25 = *v13, v25 != _InterlockedCompareExchange64(v13, v24, v23)) )
      ExfReleasePushLock(a1 + 104);
    KeAbPostRelease(a1 + 104);
    v27 = v43;
    goto LABEL_33;
  }
LABEL_44:
  _m_prefetchw((const void *)v13);
  v34 = *v13;
  if ( (*v13 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v35 = v34 - 16;
  else
    v35 = 0LL;
  if ( (v34 & 2) != 0 || (v36 = *v13, v36 != _InterlockedCompareExchange64(v13, v35, v34)) )
    ExfReleasePushLock(a1 + 104);
  KeAbPostRelease(a1 + 104);
  VacbMiss = (volatile signed __int32 *)CcGetVacbMiss(a1, v47, v42, v46);
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
        v37 = &v45;
        goto LABEL_57;
      }
    }
    else if ( v27 < 0x800000 )
    {
      v44 = 0LL;
      v37 = &v44;
LABEL_57:
      CcUnmapVacbArray(a1, (_DWORD)v37, v27, v26, 0);
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
