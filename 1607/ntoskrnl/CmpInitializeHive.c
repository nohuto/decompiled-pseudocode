/*
 * XREFs of CmpInitializeHive @ 0x14047DED8
 * Callers:
 *     CmpInitHiveFromFile @ 0x1403F89AC (CmpInitHiveFromFile.c)
 *     HvRefreshHive @ 0x140606018 (HvRefreshHive.c)
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 *     CmpCreateTemporaryHive @ 0x14060D2A0 (CmpCreateTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x14060D390 (CmpLoadHiveVolatile.c)
 *     CmpInitializeSystemHive @ 0x1407AD830 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x1407AE20C (CmpInitializePreloadedHive.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SetFailureLocation @ 0x1401B29DC (SetFailureLocation.c)
 *     CmpUnJoinClassOfTrust @ 0x1401B4694 (CmpUnJoinClassOfTrust.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpDereferenceHive @ 0x1403FB910 (CmpDereferenceHive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpReorganizeHive @ 0x14047E780 (CmpReorganizeHive.c)
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 *     CmpInitSecurityCache @ 0x14047EFEC (CmpInitSecurityCache.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14047F024 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmCheckRegistry @ 0x14047F0C8 (CmCheckRegistry.c)
 *     CmpGetVolumeClusterSize @ 0x140480CE4 (CmpGetVolumeClusterSize.c)
 *     CmpAllocate @ 0x1404F72C4 (CmpAllocate.c)
 *     HvFreeHive @ 0x1404F76B4 (HvFreeHive.c)
 *     CmpFree @ 0x1404F7940 (CmpFree.c)
 *     CmpDestroySecurityCache @ 0x1405181E0 (CmpDestroySecurityCache.c)
 *     CmpUnlockHiveList @ 0x1405183C8 (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x1405193C8 (CmpLockHiveListExclusive.c)
 *     CmpLogHiveInitializeEvent @ 0x1405FBB50 (CmpLogHiveInitializeEvent.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140601D18 (CmpVERemoveHiveFromSIDMappingTable.c)
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
  ULONG_PTR v14; // rdi
  BOOLEAN v15; // r15
  char v16; // r14
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  int VolumeClusterSize; // eax
  void *v24; // rax
  _QWORD *v25; // r15
  char *PoolWithTag; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rdx
  struct _KTHREAD *v34; // rcx
  __int16 v35; // ax
  _QWORD *v36; // rax
  struct _KTHREAD *v37; // rcx
  __int16 v38; // ax
  int v40; // [rsp+28h] [rbp-79h]
  BOOLEAN v41; // [rsp+68h] [rbp-39h]
  unsigned int v42; // [rsp+74h] [rbp-2Dh] BYREF
  _QWORD v43[12]; // [rsp+78h] [rbp-29h] BYREF

  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  if ( a2 > 2 && a2 != 5 )
  {
    v17 = -1073741811;
    SetFailureLocation((__int64)a12, 0, 1, -1073741811, 0);
    goto LABEL_74;
  }
  if ( (a3 & 0xFFE17CEC) != 0 )
  {
    v40 = 16;
LABEL_6:
    v17 = -1073741811;
    SetFailureLocation((__int64)a12, 0, 1, -1073741811, v40);
    return v17;
  }
  if ( a4 > 2 )
  {
    v40 = 32;
    goto LABEL_6;
  }
  if ( !a5 && a2 == 1 )
  {
    v40 = 48;
    goto LABEL_6;
  }
  if ( a6 )
  {
    if ( (a3 & 0x8001) == 1 )
    {
      v40 = 64;
      goto LABEL_6;
    }
    if ( !*(_QWORD *)a6 && (*(_QWORD *)(a6 + 8) || *(_QWORD *)(a6 + 16)) )
    {
      v40 = 80;
      goto LABEL_6;
    }
    v18 = *(_QWORD *)(a6 + 8);
    if ( v18 && !a4 )
    {
      v40 = 96;
      goto LABEL_6;
    }
    v19 = *(_QWORD *)(a6 + 16);
    if ( v19 && a4 != 2 )
    {
      v40 = 112;
      goto LABEL_6;
    }
    if ( *(_QWORD *)(a6 + 24) && (*(_QWORD *)a6 || v18 || v19) )
    {
      v40 = 128;
      goto LABEL_6;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v41 = ExAcquireRundownProtection(&CmpShutdownRundown);
  v15 = v41;
  if ( !v41 )
  {
    v21 = KeGetCurrentThread();
    v22 = v21->KernelApcDisable + 1;
    v21->KernelApcDisable = v22;
    if ( !v22
      && ($2B8565053CDC740D4E4887693DD8AC9E *)v21->ApcState.ApcListHead[0].Flink != &v21->152
      && !v21->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v21);
    }
  }
  if ( !v41 )
  {
    v17 = -1073741431;
LABEL_80:
    if ( v15 )
    {
      ExReleaseRundownProtection(&CmpShutdownRundown);
      v34 = KeGetCurrentThread();
      v35 = v34->KernelApcDisable + 1;
      v34->KernelApcDisable = v35;
      if ( !v35
        && ($2B8565053CDC740D4E4887693DD8AC9E *)v34->ApcState.ApcListHead[0].Flink != &v34->152
        && !v34->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v34);
      }
    }
    return v17;
  }
  if ( a6 )
  {
    if ( *(_QWORD *)a6 )
    {
      VolumeClusterSize = CmpGetVolumeClusterSize(*(HANDLE *)a6);
      v17 = VolumeClusterSize;
      if ( VolumeClusterSize < 0 )
      {
        SetFailureLocation((__int64)a12, 0, 1, VolumeClusterSize, 160);
        goto LABEL_80;
      }
    }
  }
  v24 = (void *)CmpAllocate(0x17A8uLL);
  v14 = (ULONG_PTR)v24;
  if ( !v24 )
  {
    v17 = -1073741670;
    SetFailureLocation((__int64)a12, 0, 1, -1073741670, 176);
    goto LABEL_80;
  }
  memset(v24, 0, 0x17A8uLL);
  *(_DWORD *)(v14 + 5496) = 1;
  *(_DWORD *)(v14 + 4088) = 0;
  *(_QWORD *)(v14 + 4096) = 0LL;
  v25 = (_QWORD *)(v14 + 2728);
  *(_QWORD *)(v14 + 4104) = 0LL;
  *(_BYTE *)(v14 + 4112) = 0;
  *(_QWORD *)(v14 + 4120) = 0LL;
  *(_BYTE *)(v14 + 4168) = 0;
  *(_DWORD *)(v14 + 4172) = 0;
  *(_QWORD *)(v14 + 5416) = 0LL;
  *(_QWORD *)(v14 + 5424) = 0LL;
  *(_QWORD *)(v14 + 5432) = 0LL;
  *(_DWORD *)(v14 + 6032) = 0;
  *(_QWORD *)(v14 + 6040) = 0LL;
  *(_QWORD *)(v14 + 4184) = v14 + 4176;
  *(_QWORD *)(v14 + 4176) = v14 + 4176;
  *(_QWORD *)(v14 + 2736) = v14 + 2728;
  *(_QWORD *)(v14 + 2728) = v14 + 2728;
  *(_QWORD *)(v14 + 2776) = 0LL;
  *(_QWORD *)(v14 + 2792) = v14 + 2784;
  *(_QWORD *)(v14 + 2784) = v14 + 2784;
  *(_QWORD *)(v14 + 2800) = 0LL;
  *(_DWORD *)(v14 + 2808) = 0;
  *(_DWORD *)(v14 + 2828) = 0;
  *(_QWORD *)(v14 + 4192) = 0LL;
  *(_DWORD *)(v14 + 4204) = 16;
  *(_DWORD *)(v14 + 4200) = 0;
  *(_QWORD *)(v14 + 5400) = 0LL;
  *(_QWORD *)(v14 + 5408) = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD8uLL, 0x38344D43u);
  if ( !PoolWithTag )
  {
    v17 = -1073741670;
    SetFailureLocation((__int64)a12, 0, 1, -1073741670, 192);
    v16 = 0;
LABEL_73:
    v15 = v41;
LABEL_74:
    if ( v14 )
    {
      if ( v16 )
      {
        CmpDestroySecurityCache(v14);
        CmpUnJoinClassOfTrust(v14);
        CmpVERemoveHiveFromSIDMappingTable(v14);
        if ( (*(_DWORD *)(v14 + 144) & 8) == 0 )
        {
          LOBYTE(v33) = 1;
          HvFreeHive(v14, v33);
        }
        CmpDereferenceHive(v14);
      }
      else
      {
        CmpFree(v14, 6056LL);
      }
    }
    goto LABEL_80;
  }
  *(_QWORD *)(v14 + 2832) = PoolWithTag;
  *(_QWORD *)(v14 + 2840) = PoolWithTag + 56;
  *(_QWORD *)(v14 + 2848) = PoolWithTag + 112;
  *(_QWORD *)(v14 + 3000) = 0LL;
  *(_DWORD *)(v14 + 2992) = 0;
  *(_QWORD *)(v14 + 3016) = 0LL;
  *(_DWORD *)(v14 + 3008) = 0;
  *(_QWORD *)(v14 + 3032) = 0LL;
  *(_DWORD *)(v14 + 3024) = 0;
  if ( a6 )
  {
    *(_QWORD *)(v14 + 2664) = *(_QWORD *)a6;
    *(_QWORD *)(v14 + 2680) = *(_QWORD *)(a6 + 24);
    *(_QWORD *)(v14 + 2688) = 0LL;
    if ( !a4 )
    {
      *(_QWORD *)(v14 + 2672) = 0LL;
LABEL_50:
      *(_QWORD *)(v14 + 2696) = 0LL;
      *(_QWORD *)(v14 + 2704) = 0LL;
      goto LABEL_53;
    }
    if ( a4 == 1 )
    {
      *(_QWORD *)(v14 + 2672) = *(_QWORD *)(a6 + 8);
      goto LABEL_50;
    }
    *(_QWORD *)(v14 + 2672) = 0LL;
    *(_QWORD *)(v14 + 2696) = *(_QWORD *)(a6 + 8);
    *(_QWORD *)(v14 + 2704) = *(_QWORD *)(a6 + 16);
  }
  else
  {
    memset((void *)(v14 + 2664), 0, 0x30uLL);
  }
LABEL_53:
  v27 = *(_QWORD *)(v14 + 2832);
  *(_QWORD *)(v14 + 2712) = 0LL;
  *(_QWORD *)(v14 + 2720) = 0LL;
  *(_DWORD *)v27 = 1;
  *(_QWORD *)(v27 + 8) = 0LL;
  *(_DWORD *)(v27 + 16) = 0;
  KeInitializeEvent((PRKEVENT)(v27 + 24), SynchronizationEvent, 0);
  v28 = *(_QWORD *)(v14 + 2840);
  *(_DWORD *)v28 = 1;
  *(_QWORD *)(v28 + 8) = 0LL;
  *(_DWORD *)(v28 + 16) = 0;
  KeInitializeEvent((PRKEVENT)(v28 + 24), SynchronizationEvent, 0);
  ExInitializeResourceLite(*(PERESOURCE *)(v14 + 2848));
  memset((void *)(v14 + 5440), 0, 0x30uLL);
  v29 = 0;
  *(_DWORD *)(v14 + 5488) = 0;
  if ( (a8 & 0x8000000) != 0 )
    v29 = 128;
  *(_DWORD *)(v14 + 2856) = 0;
  *(_DWORD *)(v14 + 5360) = v29;
  *(_QWORD *)(v14 + 2864) = 0LL;
  *(_DWORD *)(v14 + 2872) = 0;
  *(_QWORD *)(v14 + 2880) = 0LL;
  *(_DWORD *)(v14 + 2888) = 0;
  *(_DWORD *)(v14 + 2904) = 0;
  *(_QWORD *)(v14 + 2912) = 0LL;
  *(_DWORD *)(v14 + 2920) = 0;
  *(_QWORD *)(v14 + 2928) = 0LL;
  *(_DWORD *)(v14 + 2936) = 0;
  *(_QWORD *)(v14 + 2944) = 0LL;
  *(_QWORD *)(v14 + 2952) = 0LL;
  *(_DWORD *)(v14 + 2960) = 0;
  if ( a8 < 0 )
    *(_DWORD *)(v14 + 5360) |= 0x800u;
  *(_QWORD *)(v14 + 5376) = v14 + 5368;
  *(_QWORD *)(v14 + 5368) = v14 + 5368;
  *(_QWORD *)(v14 + 2752) = v14 + 2744;
  *(_QWORD *)(v14 + 2744) = v14 + 2744;
  *(_QWORD *)(v14 + 5384) = 0LL;
  *(_QWORD *)(v14 + 5392) = 0LL;
  *(_QWORD *)(v14 + 2968) = 0LL;
  *(_DWORD *)(v14 + 2964) = 0;
  *(_QWORD *)(v14 + 2976) = 0LL;
  *(_QWORD *)(v14 + 2984) = 0LL;
  *(_DWORD *)(v14 + 5492) = 0;
  *(_DWORD *)(v14 + 6028) = 0;
  CmpInitSecurityCache(v14);
  v43[0] = CmpAllocate;
  v43[1] = CmpFree;
  *(_QWORD *)(v14 + 56) = a12;
  v43[3] = CmpFileWrite;
  *a12 = v14;
  v43[4] = CmpFileRead;
  v42 = 0;
  v30 = HvInitializeHive(v14, a5, (__int64)v43, 1, a7, a9, a10, a11, (__int64)&v42);
  v17 = v30;
  if ( v30 < 0 )
  {
    SetFailureLocation((__int64)a12, 0, 1, v30, 224);
LABEL_72:
    v16 = 1;
    goto LABEL_73;
  }
  if ( (a3 & 0x180000) == 0x80000 )
  {
    v31 = *(_QWORD *)(v14 + 64);
    if ( *(_DWORD *)(v31 + 24) < 6u || (*(_DWORD *)(v31 + 144) & 2) == 0 )
    {
      v17 = -1073741811;
      goto LABEL_72;
    }
  }
  if ( ((a2 - 1) & 0xFFFFFFFA) == 0 && a2 != 6 && (unsigned int)CmCheckRegistry(v14) )
  {
    v17 = -1073741492;
    SetFailureLocation((__int64)a12, 0, 1, -1073741492, 240);
    goto LABEL_72;
  }
  CmpReorganizeHive(v14);
  CmpLockRegistry();
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v14 + 2848), 1u);
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v14 + 2840));
  v32 = 0;
  if ( a2 )
    v32 = HvCheckAndUpdateHiveBackupTimeStamp(v14);
  else
    *(_BYTE *)(v14 + 175) = 1;
  v17 = v32;
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v14 + 2840));
  ExReleaseResourceLite(*(PERESOURCE *)(v14 + 2848));
  CmpUnlockRegistry();
  if ( (v17 & 0x80000000) != 0 )
  {
    SetFailureLocation((__int64)a12, 0, 1, v17, 256);
    goto LABEL_72;
  }
  if ( (a8 & 0x1000000) != 0 )
  {
    *(_QWORD *)(v14 + 2736) = v14 + 2728;
    *v25 = v25;
  }
  else
  {
    CmpLockHiveListExclusive();
    v36 = (_QWORD *)qword_140747E38;
    if ( *(__int64 **)qword_140747E38 != &CmpHiveListHead )
      __fastfail(3u);
    *v25 = &CmpHiveListHead;
    *(_QWORD *)(v14 + 2736) = v36;
    *v36 = v25;
    qword_140747E38 = v14 + 2728;
    CmpUnlockHiveList();
  }
  v17 = 0;
  *(_QWORD *)(v14 + 56) = 0LL;
  *a1 = v14;
  ExReleaseRundownProtection(&CmpShutdownRundown);
  v37 = KeGetCurrentThread();
  v38 = v37->KernelApcDisable + 1;
  v37->KernelApcDisable = v38;
  if ( !v38
    && ($2B8565053CDC740D4E4887693DD8AC9E *)v37->ApcState.ApcListHead[0].Flink != &v37->152
    && !v37->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)v37);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveInitializeEvent(v14, a2, a7, v42);
  return v17;
}
