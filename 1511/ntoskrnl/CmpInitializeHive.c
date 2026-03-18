/*
 * XREFs of CmpInitializeHive @ 0x1403D071C
 * Callers:
 *     CmpInitHiveFromFile @ 0x1403DCB84 (CmpInitHiveFromFile.c)
 *     HvRefreshHive @ 0x1405E6A0C (HvRefreshHive.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 *     CmpCreateTemporaryHive @ 0x1405EA420 (CmpCreateTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x1405EA5F4 (CmpLoadHiveVolatile.c)
 *     CmpInitializeSystemHive @ 0x140744EB4 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x140745898 (CmpInitializePreloadedHive.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SetFailureLocation @ 0x1401A9C98 (SetFailureLocation.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     CmpReorganizeHive @ 0x1403D0DDC (CmpReorganizeHive.c)
 *     HvInitializeHive @ 0x1403D0F54 (HvInitializeHive.c)
 *     CmpInitSecurityCache @ 0x1403D1664 (CmpInitSecurityCache.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1403D169C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmCheckRegistry @ 0x1403D1730 (CmCheckRegistry.c)
 *     CmpGetVolumeClusterSize @ 0x1403D210C (CmpGetVolumeClusterSize.c)
 *     HvpFreeHiveFreeDisplay @ 0x1403D80A4 (HvpFreeHiveFreeDisplay.c)
 *     HvFreeHive @ 0x1403D8128 (HvFreeHive.c)
 *     CmpFree @ 0x1403D8324 (CmpFree.c)
 *     CmpAllocate @ 0x1403D8F04 (CmpAllocate.c)
 *     CmpDereferenceHive @ 0x1403DCA48 (CmpDereferenceHive.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpDestroySecurityCache @ 0x140499358 (CmpDestroySecurityCache.c)
 *     CmpLogHiveInitializeEvent @ 0x1405DDC00 (CmpLogHiveInitializeEvent.c)
 *     CmpRemoveHiveFromMapping @ 0x1405E28F4 (CmpRemoveHiveFromMapping.c)
 *     HvpCleanMap @ 0x1405EBCCC (HvpCleanMap.c)
 */

__int64 __fastcall CmpInitializeHive(
        ULONG_PTR *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        ULONG_PTR *a12)
{
  signed __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  struct _KTHREAD *CurrentThread; // rax
  int VolumeClusterSize; // eax
  unsigned int v19; // edi
  void *v20; // rax
  ULONG_PTR v21; // rdi
  __int64 *v22; // r12
  char *PoolWithTag; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  ULONG_PTR v27; // r15
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // r14d
  __int64 v35; // rax
  signed __int8 v36; // cf
  __int64 v37; // r15
  __int64 **v38; // rax
  signed __int64 v39; // rcx
  ULONG_PTR v40; // rtt
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 v44; // rcx
  _QWORD *v45; // rax
  ULONG_PTR v46; // rtt
  __int64 v47; // rax
  __int64 v48; // r13
  __int64 v49; // rcx
  _QWORD *v50; // rax
  ULONG_PTR v51; // rtt
  __int64 v52; // rax
  __int64 v53; // r13
  __int64 v54; // rcx
  _QWORD *v55; // rax
  ULONG_PTR v56; // rtt
  int v57; // [rsp+28h] [rbp-71h]
  int v58; // [rsp+28h] [rbp-71h]
  unsigned int v59; // [rsp+68h] [rbp-31h]
  unsigned int v60; // [rsp+6Ch] [rbp-2Dh] BYREF
  _QWORD v61[13]; // [rsp+70h] [rbp-29h] BYREF

  if ( a2 > 2 && a2 != 5 )
  {
    v57 = 0;
LABEL_61:
    SetFailureLocation((__int64)a12, 0, 1, -1073741811, v57);
    return 3221225485LL;
  }
  if ( (a3 & 0xFFF97CEC) != 0 )
  {
    v57 = 16;
    goto LABEL_61;
  }
  if ( a4 > 2 )
  {
    v57 = 32;
    goto LABEL_61;
  }
  v14 = 0LL;
  if ( a2 == 1 && !a5 )
  {
    v57 = 48;
    goto LABEL_61;
  }
  if ( a6 )
  {
    if ( (a3 & 0x8001) == 1 )
    {
      v57 = 64;
      goto LABEL_61;
    }
    if ( !*(_QWORD *)a6 && (*(_QWORD *)(a6 + 8) || *(_QWORD *)(a6 + 16)) )
    {
      v57 = 80;
      goto LABEL_61;
    }
    v15 = *(_QWORD *)(a6 + 8);
    if ( v15 && !a4 )
    {
      v57 = 96;
      goto LABEL_61;
    }
    v16 = *(_QWORD *)(a6 + 16);
    if ( v16 && a4 != 2 )
    {
      v57 = 112;
      goto LABEL_61;
    }
    if ( *(_QWORD *)(a6 + 24) && (*(_QWORD *)a6 || v15 || v16) )
    {
      v57 = 128;
      goto LABEL_61;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 3221225865LL;
  }
  if ( a6 )
  {
    if ( *(_QWORD *)a6 )
    {
      VolumeClusterSize = CmpGetVolumeClusterSize(*(HANDLE *)a6);
      v19 = VolumeClusterSize;
      if ( VolumeClusterSize < 0 )
      {
        SetFailureLocation((__int64)a12, 0, 1, VolumeClusterSize, 160);
LABEL_125:
        ExReleaseRundownProtection_0(&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        return v19;
      }
    }
  }
  v20 = (void *)CmpAllocate(0x17A8uLL);
  v21 = (ULONG_PTR)v20;
  if ( !v20 )
  {
    v58 = 176;
LABEL_76:
    v19 = -1073741670;
    SetFailureLocation((__int64)a12, 0, 1, -1073741670, v58);
    goto LABEL_125;
  }
  memset(v20, 0, 0x17A8uLL);
  *(_DWORD *)(v21 + 5496) = 1;
  *(_DWORD *)(v21 + 4088) = 0;
  v22 = (__int64 *)(v21 + 2728);
  *(_QWORD *)(v21 + 4096) = 0LL;
  *(_QWORD *)(v21 + 4104) = 0LL;
  *(_BYTE *)(v21 + 4112) = 0;
  *(_QWORD *)(v21 + 4120) = 0LL;
  *(_BYTE *)(v21 + 4168) = 0;
  *(_DWORD *)(v21 + 4172) = 0;
  *(_QWORD *)(v21 + 5416) = 0LL;
  *(_QWORD *)(v21 + 5424) = 0LL;
  *(_QWORD *)(v21 + 5432) = 0LL;
  *(_DWORD *)(v21 + 6032) = 0;
  *(_QWORD *)(v21 + 6040) = 0LL;
  *(_QWORD *)(v21 + 4184) = v21 + 4176;
  *(_QWORD *)(v21 + 4176) = v21 + 4176;
  *(_QWORD *)(v21 + 2736) = v21 + 2728;
  *(_QWORD *)(v21 + 2728) = v21 + 2728;
  *(_QWORD *)(v21 + 2776) = 0LL;
  *(_QWORD *)(v21 + 2792) = v21 + 2784;
  *(_QWORD *)(v21 + 2784) = v21 + 2784;
  *(_QWORD *)(v21 + 2800) = 0LL;
  *(_DWORD *)(v21 + 2808) = 0;
  *(_DWORD *)(v21 + 2828) = 0;
  *(_QWORD *)(v21 + 4192) = 0LL;
  *(_DWORD *)(v21 + 4204) = 16;
  *(_DWORD *)(v21 + 4200) = 0;
  *(_QWORD *)(v21 + 5400) = 0LL;
  *(_QWORD *)(v21 + 5408) = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD8uLL, 0x38344D43u);
  if ( !PoolWithTag )
  {
    CmpFree(v21, 6056LL);
    v58 = 192;
    goto LABEL_76;
  }
  *(_QWORD *)(v21 + 2832) = PoolWithTag;
  *(_QWORD *)(v21 + 2840) = PoolWithTag + 56;
  *(_QWORD *)(v21 + 2848) = PoolWithTag + 112;
  *(_QWORD *)(v21 + 3000) = 0LL;
  *(_DWORD *)(v21 + 2992) = 0;
  *(_QWORD *)(v21 + 3016) = 0LL;
  *(_DWORD *)(v21 + 3008) = 0;
  *(_QWORD *)(v21 + 3032) = 0LL;
  *(_DWORD *)(v21 + 3024) = 0;
  if ( a6 )
  {
    *(_QWORD *)(v21 + 2664) = *(_QWORD *)a6;
    *(_QWORD *)(v21 + 2680) = *(_QWORD *)(a6 + 24);
    *(_QWORD *)(v21 + 2688) = 0LL;
    if ( a4 )
    {
      if ( a4 != 1 )
      {
        *(_QWORD *)(v21 + 2672) = 0LL;
        *(_QWORD *)(v21 + 2696) = *(_QWORD *)(a6 + 8);
        *(_QWORD *)(v21 + 2704) = *(_QWORD *)(a6 + 16);
        goto LABEL_23;
      }
      *(_QWORD *)(v21 + 2672) = *(_QWORD *)(a6 + 8);
    }
    else
    {
      *(_QWORD *)(v21 + 2672) = 0LL;
    }
    *(_QWORD *)(v21 + 2696) = 0LL;
    *(_QWORD *)(v21 + 2704) = 0LL;
  }
  else
  {
    memset((void *)(v21 + 2664), 0, 0x30uLL);
  }
LABEL_23:
  v24 = *(_QWORD *)(v21 + 2832);
  *(_QWORD *)(v21 + 2712) = 0LL;
  *(_QWORD *)(v21 + 2720) = 0LL;
  *(_DWORD *)v24 = 1;
  *(_QWORD *)(v24 + 8) = 0LL;
  *(_DWORD *)(v24 + 16) = 0;
  KeInitializeEvent((PRKEVENT)(v24 + 24), SynchronizationEvent, 0);
  v25 = *(_QWORD *)(v21 + 2840);
  *(_DWORD *)v25 = 1;
  *(_QWORD *)(v25 + 8) = 0LL;
  *(_DWORD *)(v25 + 16) = 0;
  KeInitializeEvent((PRKEVENT)(v25 + 24), SynchronizationEvent, 0);
  ExInitializeResourceLite(*(PERESOURCE *)(v21 + 2848));
  v26 = 0;
  *(_QWORD *)(v21 + 5440) = 0LL;
  *(_QWORD *)(v21 + 5448) = 0LL;
  *(_QWORD *)(v21 + 5456) = 0LL;
  *(_QWORD *)(v21 + 5464) = 0LL;
  *(_QWORD *)(v21 + 5472) = 0LL;
  *(_QWORD *)(v21 + 5480) = 0LL;
  *(_DWORD *)(v21 + 5488) = 0;
  *(_DWORD *)(v21 + 2856) = 0;
  if ( (a8 & 0x8000000) != 0 )
    v26 = 128;
  *(_QWORD *)(v21 + 2864) = 0LL;
  *(_DWORD *)(v21 + 5360) = v26;
  *(_DWORD *)(v21 + 2872) = 0;
  *(_QWORD *)(v21 + 2880) = 0LL;
  *(_DWORD *)(v21 + 2888) = 0;
  *(_DWORD *)(v21 + 2904) = 0;
  *(_QWORD *)(v21 + 2912) = 0LL;
  *(_DWORD *)(v21 + 2920) = 0;
  *(_QWORD *)(v21 + 2928) = 0LL;
  *(_DWORD *)(v21 + 2936) = 0;
  *(_QWORD *)(v21 + 2944) = 0LL;
  *(_QWORD *)(v21 + 2952) = 0LL;
  *(_DWORD *)(v21 + 2960) = 0;
  if ( a8 < 0 )
    *(_DWORD *)(v21 + 5360) |= 0x800u;
  v27 = v21 + 5368;
  *(_QWORD *)(v21 + 5376) = v21 + 5368;
  *(_QWORD *)(v21 + 5368) = v21 + 5368;
  *(_QWORD *)(v21 + 2752) = v21 + 2744;
  *(_QWORD *)(v21 + 2744) = v21 + 2744;
  *(_QWORD *)(v21 + 5384) = 0LL;
  *(_QWORD *)(v21 + 5392) = 0LL;
  *(_QWORD *)(v21 + 2968) = 0LL;
  *(_DWORD *)(v21 + 2964) = 0;
  *(_QWORD *)(v21 + 2976) = 0LL;
  *(_QWORD *)(v21 + 2984) = 0LL;
  *(_DWORD *)(v21 + 5492) = 0;
  *(_DWORD *)(v21 + 6028) = 0;
  CmpInitSecurityCache(v21);
  v61[1] = CmpFree;
  v61[3] = CmpFileWrite;
  v61[4] = CmpFileRead;
  v61[0] = CmpAllocate;
  *(_QWORD *)(v21 + 56) = a12;
  *a12 = v21;
  v60 = 0;
  v28 = HvInitializeHive(v21, a5, (__int64)v61, 1, a7, a9, a10, a11, (__int64)&v60);
  v59 = v28;
  if ( v28 < 0 )
  {
    SetFailureLocation((__int64)a12, 0, 1, v28, 224);
    if ( (*(_DWORD *)(v21 + 144) & 8) == 0 )
    {
      LOBYTE(v41) = 1;
      HvpFreeHiveFreeDisplay(v21, v41);
      HvpCleanMap(v21);
    }
    CmpDestroySecurityCache(v21);
    if ( *(_QWORD *)v27 != v27 )
    {
      v42 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
      v36 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
      v43 = v42;
      if ( v36 )
        ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v42, (ULONG_PTR)&CmpHiveListHeadLock);
      if ( v43 )
        *(_BYTE *)(v43 + 26) |= 1u;
      v44 = *(_QWORD *)v27;
      v45 = *(_QWORD **)(v21 + 5376);
      if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 || *v45 != v27 )
        __fastfail(3u);
      *v45 = v44;
      *(_QWORD *)(v44 + 8) = v45;
      _m_prefetchw(&CmpHiveListHeadLock);
      if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v14 = CmpHiveListHeadLock - 16;
      if ( (CmpHiveListHeadLock & 2) != 0
        || (v46 = CmpHiveListHeadLock,
            v46 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpHiveListHeadLock,
                     v14,
                     CmpHiveListHeadLock)) )
      {
        ExfReleasePushLock(&CmpHiveListHeadLock);
      }
      KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
    }
    if ( (*(_DWORD *)(v21 + 5360) & 2) != 0 )
      CmpRemoveHiveFromMapping(v21);
    CmpDereferenceHive(v21);
    v19 = v59;
    goto LABEL_125;
  }
  if ( ((a2 - 1) & 0xFFFFFFFA) == 0 && a2 != 6 && (unsigned int)CmCheckRegistry(v21) )
  {
    SetFailureLocation((__int64)a12, 0, 1, -1073741492, 240);
    CmpDestroySecurityCache(v21);
    if ( *(_QWORD *)v27 != v27 )
    {
      v47 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
      v36 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
      v48 = v47;
      if ( v36 )
        ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v47, (ULONG_PTR)&CmpHiveListHeadLock);
      if ( v48 )
        *(_BYTE *)(v48 + 26) |= 1u;
      v49 = *(_QWORD *)v27;
      v50 = *(_QWORD **)(v21 + 5376);
      if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 || *v50 != v27 )
        __fastfail(3u);
      *v50 = v49;
      *(_QWORD *)(v49 + 8) = v50;
      _m_prefetchw(&CmpHiveListHeadLock);
      if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v14 = CmpHiveListHeadLock - 16;
      if ( (CmpHiveListHeadLock & 2) != 0
        || (v51 = CmpHiveListHeadLock,
            v51 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpHiveListHeadLock,
                     v14,
                     CmpHiveListHeadLock)) )
      {
        ExfReleasePushLock(&CmpHiveListHeadLock);
      }
      KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
    }
    HvFreeHive(v21);
    CmpDereferenceHive(v21);
    v19 = -1073741492;
    goto LABEL_125;
  }
  CmpReorganizeHive(v21, a7);
  CmpLockRegistry(v30, v29, v31, v32);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v21 + 2848), 1u);
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v21 + 2840));
  if ( a2 )
  {
    v33 = HvCheckAndUpdateHiveBackupTimeStamp(v21);
  }
  else
  {
    *(_BYTE *)(v21 + 175) = 1;
    v33 = 0;
  }
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v21 + 2840));
  ExReleaseResourceLite(*(PERESOURCE *)(v21 + 2848));
  CmpUnlockRegistry();
  if ( v33 < 0 )
  {
    SetFailureLocation((__int64)a12, 0, 1, v33, 256);
    CmpDestroySecurityCache(v21);
    if ( *(_QWORD *)v27 != v27 )
    {
      v52 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
      v36 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
      v53 = v52;
      if ( v36 )
        ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v52, (ULONG_PTR)&CmpHiveListHeadLock);
      if ( v53 )
        *(_BYTE *)(v53 + 26) |= 1u;
      v54 = *(_QWORD *)v27;
      v55 = *(_QWORD **)(v21 + 5376);
      if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 || *v55 != v27 )
        __fastfail(3u);
      *v55 = v54;
      *(_QWORD *)(v54 + 8) = v55;
      _m_prefetchw(&CmpHiveListHeadLock);
      if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v14 = CmpHiveListHeadLock - 16;
      if ( (CmpHiveListHeadLock & 2) != 0
        || (v56 = CmpHiveListHeadLock,
            v56 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpHiveListHeadLock,
                     v14,
                     CmpHiveListHeadLock)) )
      {
        ExfReleasePushLock(&CmpHiveListHeadLock);
      }
      KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
    }
    HvFreeHive(v21);
    CmpDereferenceHive(v21);
    v19 = v33;
    goto LABEL_125;
  }
  if ( (a8 & 0x1000000) != 0 )
  {
    *(_QWORD *)(v21 + 2736) = v21 + 2728;
    *v22 = (__int64)v22;
  }
  else
  {
    v35 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
    v36 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
    v37 = v35;
    if ( v36 )
      ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v35, (ULONG_PTR)&CmpHiveListHeadLock);
    if ( v37 )
      *(_BYTE *)(v37 + 26) |= 1u;
    v38 = (__int64 **)qword_1406FBD10;
    *v22 = (__int64)&CmpHiveListHead;
    *(_QWORD *)(v21 + 2736) = v38;
    if ( *v38 != &CmpHiveListHead )
      __fastfail(3u);
    *v38 = v22;
    qword_1406FBD10 = v21 + 2728;
    _m_prefetchw(&CmpHiveListHeadLock);
    v39 = CmpHiveListHeadLock - 16;
    if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v39 = 0LL;
    if ( (CmpHiveListHeadLock & 2) != 0
      || (v40 = CmpHiveListHeadLock,
          v40 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpHiveListHeadLock,
                   v39,
                   CmpHiveListHeadLock)) )
    {
      ExfReleasePushLock(&CmpHiveListHeadLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
  }
  *(_QWORD *)(v21 + 56) = 0LL;
  *a1 = v21;
  ExReleaseRundownProtection_0(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveInitializeEvent(v21, a2, a7, v60);
  return 0LL;
}
