/*
 * XREFs of CmpInitializeHive @ 0x1404ACE6C
 * Callers:
 *     CmpInitHiveFromFile @ 0x14044A738 (CmpInitHiveFromFile.c)
 *     HvRefreshHive @ 0x14065DE68 (HvRefreshHive.c)
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 *     CmpCreateTemporaryHive @ 0x140661CA8 (CmpCreateTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x140661E7C (CmpLoadHiveVolatile.c)
 *     CmpInitializeSystemHive @ 0x1407D6AC0 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x1407D74A8 (CmpInitializePreloadedHive.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SetFailureLocation @ 0x1401DE608 (SetFailureLocation.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpDereferenceHive @ 0x140447BD4 (CmpDereferenceHive.c)
 *     CmpAllocate @ 0x1404A02B8 (CmpAllocate.c)
 *     HvFreeHive @ 0x1404A06B4 (HvFreeHive.c)
 *     CmpFree @ 0x1404A08B0 (CmpFree.c)
 *     CmpReorganizeHive @ 0x1404AD5C4 (CmpReorganizeHive.c)
 *     HvInitializeHive @ 0x1404AD7D4 (HvInitializeHive.c)
 *     CmpInitSecurityCache @ 0x1404ADEE4 (CmpInitSecurityCache.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1404ADF1C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmCheckRegistry @ 0x1404ADFB0 (CmCheckRegistry.c)
 *     CmpGetVolumeClusterSize @ 0x1404AE73C (CmpGetVolumeClusterSize.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpDestroySecurityCache @ 0x1404EE838 (CmpDestroySecurityCache.c)
 *     HvpFreeHiveFreeDisplay @ 0x14054C3EC (HvpFreeHiveFreeDisplay.c)
 *     CmpLogHiveInitializeEvent @ 0x14065312C (CmpLogHiveInitializeEvent.c)
 *     CmpRemoveHiveFromMapping @ 0x140658DD0 (CmpRemoveHiveFromMapping.c)
 *     HvpCleanMap @ 0x140663C74 (HvpCleanMap.c)
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
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v17; // rtt
  int VolumeClusterSize; // eax
  unsigned int v19; // edi
  PVOID v20; // rax
  ULONG_PTR v21; // rdi
  __int64 *v22; // r12
  char *PoolWithTag; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  ULONG_PTR v27; // r15
  int v28; // eax
  __int64 v29; // r9
  __int64 v30; // rax
  ULONG_PTR v31; // rcx
  __int64 v32; // r14
  ULONG_PTR v33; // r14
  signed __int32 v34; // eax
  __int64 v35; // r9
  unsigned int v36; // r14d
  unsigned __int64 v37; // rtt
  struct _KTHREAD *v38; // rcx
  __int16 v39; // ax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r9
  signed __int8 v44; // cf
  __int64 v45; // r15
  __int64 **v46; // rax
  signed __int64 v47; // rcx
  ULONG_PTR v48; // rtt
  struct _KTHREAD *v49; // rcx
  __int16 v50; // ax
  bool v51; // zf
  unsigned __int64 v52; // rtt
  unsigned __int64 v53; // rtt
  struct _KTHREAD *v54; // rcx
  __int16 v55; // ax
  bool v56; // zf
  unsigned __int64 v57; // rtt
  struct _KTHREAD *v58; // rdx
  __int16 v59; // ax
  __int64 v60; // rdx
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // r9
  __int64 v65; // r13
  __int64 v66; // rcx
  _QWORD *v67; // rax
  signed __int64 v68; // rcx
  ULONG_PTR v69; // rtt
  unsigned __int64 v70; // rtt
  struct _KTHREAD *v71; // rcx
  __int16 v72; // ax
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // r9
  __int64 v78; // r13
  __int64 v79; // rcx
  _QWORD *v80; // rax
  signed __int64 v81; // rcx
  ULONG_PTR v82; // rtt
  unsigned __int64 v83; // rtt
  struct _KTHREAD *v84; // rdx
  __int16 v85; // ax
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // r9
  __int64 v91; // r13
  __int64 v92; // rcx
  _QWORD *v93; // rax
  signed __int64 v94; // rcx
  ULONG_PTR v95; // rtt
  unsigned __int64 v96; // rtt
  struct _KTHREAD *v97; // rcx
  __int16 v98; // ax
  int v99; // [rsp+28h] [rbp-81h]
  _DWORD BugCheckParameter2[3]; // [rsp+6Ch] [rbp-3Dh] BYREF
  struct _KTHREAD *v101; // [rsp+78h] [rbp-31h]
  __int64 v102[13]; // [rsp+80h] [rbp-29h] BYREF
  unsigned int v104; // [rsp+100h] [rbp+57h]
  int v105; // [rsp+100h] [rbp+57h]

  if ( a2 > 2 && a2 != 5 )
  {
    v99 = 0;
    goto LABEL_71;
  }
  if ( (a3 & 0xFFF97CEC) != 0 )
  {
    v99 = 16;
    goto LABEL_71;
  }
  if ( a4 > 2 )
  {
    v99 = 32;
    goto LABEL_71;
  }
  if ( a2 == 1 && !a5 )
  {
    v99 = 48;
    goto LABEL_71;
  }
  if ( a6 )
  {
    if ( (a3 & 0x8001) == 1 )
    {
      v99 = 64;
      goto LABEL_71;
    }
    if ( !*(_QWORD *)a6 && (*(_QWORD *)(a6 + 8) || *(_QWORD *)(a6 + 16)) )
    {
      v99 = 80;
      goto LABEL_71;
    }
    v14 = *(_QWORD *)(a6 + 8);
    if ( v14 && !a4 )
    {
      v99 = 96;
      goto LABEL_71;
    }
    v15 = *(_QWORD *)(a6 + 16);
    if ( v15 && a4 != 2 )
    {
      v99 = 112;
LABEL_71:
      SetFailureLocation((__int64)a12, 0, 1, -1073741811, v99);
      return 3221225485LL;
    }
    if ( *(_QWORD *)(a6 + 24) && (*(_QWORD *)a6 || v14 || v15) )
    {
      v99 = 128;
      goto LABEL_71;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v17 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v17 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v49 = KeGetCurrentThread();
    v50 = v49->KernelApcDisable + 1;
    v49->KernelApcDisable = v50;
    if ( !v50
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v49->ApcState.ApcListHead[0].Flink != &v49->152
      && !v49->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
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
        _m_prefetchw(&CmpShutdownRundown);
        v52 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
        v51 = v52 == _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpShutdownRundown,
                       (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                       CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_89:
        if ( !v51 )
          ExfReleaseRundownProtection(&CmpShutdownRundown);
        v54 = KeGetCurrentThread();
        v55 = v54->KernelApcDisable + 1;
        v54->KernelApcDisable = v55;
        if ( v55 || ($CD287064E7C9F7953DE243E927CFCB99 *)v54->ApcState.ApcListHead[0].Flink == &v54->152 )
          return v19;
        v56 = v54->SpecialApcDisable == 0;
LABEL_94:
        if ( v56 )
          KiCheckForKernelApcDelivery();
        return v19;
      }
    }
  }
  v20 = CmpAllocate(0x17A8uLL, 0, 0x30314D43u);
  v21 = (ULONG_PTR)v20;
  if ( !v20 )
  {
    v19 = -1073741670;
    SetFailureLocation((__int64)a12, 0, 1, -1073741670, 176);
    _m_prefetchw(&CmpShutdownRundown);
    v57 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v57 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v58 = KeGetCurrentThread();
    v59 = v58->KernelApcDisable + 1;
    v58->KernelApcDisable = v59;
    if ( v59 || ($CD287064E7C9F7953DE243E927CFCB99 *)v58->ApcState.ApcListHead[0].Flink == &v58->152 )
      return v19;
    v56 = v58->SpecialApcDisable == 0;
    goto LABEL_94;
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
    CmpFree((void *)v21, 0x17A8u);
    v19 = -1073741670;
    SetFailureLocation((__int64)a12, 0, 1, -1073741670, 192);
    _m_prefetchw(&CmpShutdownRundown);
    v53 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    v51 = v53 == _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpShutdownRundown,
                   (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                   CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL);
    goto LABEL_89;
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
  if ( !a6 )
  {
    memset((void *)(v21 + 2664), 0, 0x30uLL);
    goto LABEL_22;
  }
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
      goto LABEL_22;
    }
    *(_QWORD *)(v21 + 2672) = *(_QWORD *)(a6 + 8);
  }
  else
  {
    *(_QWORD *)(v21 + 2672) = 0LL;
  }
  *(_QWORD *)(v21 + 2696) = 0LL;
  *(_QWORD *)(v21 + 2704) = 0LL;
LABEL_22:
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
  v102[1] = (__int64)CmpFree;
  v102[3] = (__int64)CmpFileWrite;
  v102[4] = (__int64)CmpFileRead;
  v102[0] = (__int64)CmpAllocate;
  *(_QWORD *)(v21 + 56) = a12;
  *a12 = v21;
  BugCheckParameter2[0] = 0;
  v28 = HvInitializeHive(v21, a5, (__int64)v102, 1, a7, a9, a10, a11, (__int64)BugCheckParameter2);
  v104 = v28;
  if ( v28 < 0 )
  {
    SetFailureLocation((__int64)a12, 0, 1, v28, 224);
    if ( (*(_DWORD *)(v21 + 144) & 8) == 0 )
    {
      LOBYTE(v60) = 1;
      HvpFreeHiveFreeDisplay(v21, v60);
      HvpCleanMap(v21);
    }
    CmpDestroySecurityCache(v21);
    if ( *(_QWORD *)v27 != v27 )
    {
      v62 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, v61);
      v44 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
      v65 = v62;
      if ( v44 )
        ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v62, (ULONG_PTR)&CmpHiveListHeadLock, v64);
      if ( v65 )
        *(_BYTE *)(v65 + 26) |= 1u;
      v66 = *(_QWORD *)v27;
      v67 = *(_QWORD **)(v21 + 5376);
      if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 || *v67 != v27 )
        __fastfail(3u);
      *v67 = v66;
      *(_QWORD *)(v66 + 8) = v67;
      _m_prefetchw(&CmpHiveListHeadLock);
      v68 = CmpHiveListHeadLock - 16;
      if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v68 = 0LL;
      if ( (CmpHiveListHeadLock & 2) != 0
        || (v69 = CmpHiveListHeadLock,
            v69 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpHiveListHeadLock,
                     v68,
                     CmpHiveListHeadLock)) )
      {
        ExfReleasePushLock(&CmpHiveListHeadLock, v63);
      }
      KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
    }
    if ( (*(_DWORD *)(v21 + 5360) & 2) != 0 )
      CmpRemoveHiveFromMapping(v21);
    CmpDereferenceHive(v21);
    _m_prefetchw(&CmpShutdownRundown);
    v70 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v70 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v71 = KeGetCurrentThread();
    v72 = v71->KernelApcDisable + 1;
    v71->KernelApcDisable = v72;
    if ( !v72
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v71->ApcState.ApcListHead[0].Flink != &v71->152
      && !v71->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return v104;
  }
  else if ( ((a2 - 1) & 0xFFFFFFFA) != 0 || a2 == 6 || !(unsigned int)CmCheckRegistry(v21, (unsigned int)a8) )
  {
    CmpReorganizeHive(v21);
    CmpLockRegistry();
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v21 + 2848), 1u);
    *(_QWORD *)&BugCheckParameter2[1] = *(_QWORD *)(v21 + 2840);
    v101 = KeGetCurrentThread();
    v30 = KeAbPreAcquire(*(ULONG_PTR *)&BugCheckParameter2[1], 0LL, 0LL, v29);
    v31 = *(_QWORD *)&BugCheckParameter2[1];
    v32 = v30;
    if ( !_interlockedbittestandreset(*(volatile signed __int32 **)&BugCheckParameter2[1], 0) )
    {
      ExpAcquireFastMutexContended(v31, v30);
      v31 = *(_QWORD *)&BugCheckParameter2[1];
    }
    if ( v32 )
      *(_BYTE *)(v32 + 26) |= 1u;
    *(_QWORD *)(v31 + 8) = v101;
    if ( a2 )
    {
      v105 = HvCheckAndUpdateHiveBackupTimeStamp(v21);
    }
    else
    {
      *(_BYTE *)(v21 + 175) = 1;
      v105 = 0;
    }
    v33 = *(_QWORD *)(v21 + 2840);
    *(_QWORD *)(v33 + 8) = 0LL;
    v34 = _InterlockedCompareExchange((volatile signed __int32 *)v33, 1, 0);
    if ( v34 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v33, v34);
    KeAbPostRelease(v33);
    ExReleaseResourceLite(*(PERESOURCE *)(v21 + 2848));
    CmpUnlockRegistry();
    v36 = v105;
    if ( v105 < 0 )
    {
      SetFailureLocation((__int64)a12, 0, 1, v105, 256);
      CmpDestroySecurityCache(v21);
      if ( *(_QWORD *)v27 != v27 )
      {
        v88 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, v87);
        v44 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
        v91 = v88;
        if ( v44 )
          ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v88, (ULONG_PTR)&CmpHiveListHeadLock, v90);
        if ( v91 )
          *(_BYTE *)(v91 + 26) |= 1u;
        v92 = *(_QWORD *)v27;
        v93 = *(_QWORD **)(v21 + 5376);
        if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 || *v93 != v27 )
          __fastfail(3u);
        *v93 = v92;
        *(_QWORD *)(v92 + 8) = v93;
        _m_prefetchw(&CmpHiveListHeadLock);
        v94 = CmpHiveListHeadLock - 16;
        if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v94 = 0LL;
        if ( (CmpHiveListHeadLock & 2) != 0
          || (v95 = CmpHiveListHeadLock,
              v95 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpHiveListHeadLock,
                       v94,
                       CmpHiveListHeadLock)) )
        {
          ExfReleasePushLock(&CmpHiveListHeadLock, v89);
        }
        KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
        v36 = v105;
      }
      HvFreeHive(v21, 1, v86);
      CmpDereferenceHive(v21);
      _m_prefetchw(&CmpShutdownRundown);
      v96 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v96 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v97 = KeGetCurrentThread();
      v98 = v97->KernelApcDisable + 1;
      v97->KernelApcDisable = v98;
      if ( !v98
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v97->ApcState.ApcListHead[0].Flink != &v97->152
        && !v97->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return v36;
    }
    else
    {
      if ( (a8 & 0x1000000) != 0 )
      {
        *(_QWORD *)(v21 + 2736) = v21 + 2728;
        *v22 = (__int64)v22;
      }
      else
      {
        v41 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, v35);
        v44 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
        v45 = v41;
        if ( v44 )
          ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v41, (ULONG_PTR)&CmpHiveListHeadLock, v43);
        if ( v45 )
          *(_BYTE *)(v45 + 26) |= 1u;
        v46 = (__int64 **)qword_14077ED20;
        *v22 = (__int64)&CmpHiveListHead;
        *(_QWORD *)(v21 + 2736) = v46;
        if ( *v46 != &CmpHiveListHead )
          __fastfail(3u);
        *v46 = v22;
        qword_14077ED20 = v21 + 2728;
        _m_prefetchw(&CmpHiveListHeadLock);
        v47 = CmpHiveListHeadLock - 16;
        if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v47 = 0LL;
        if ( (CmpHiveListHeadLock & 2) != 0
          || (v48 = CmpHiveListHeadLock,
              v48 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpHiveListHeadLock,
                       v47,
                       CmpHiveListHeadLock)) )
        {
          ExfReleasePushLock(&CmpHiveListHeadLock, v42);
        }
        KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
      }
      *(_QWORD *)(v21 + 56) = 0LL;
      *a1 = v21;
      _m_prefetchw(&CmpShutdownRundown);
      v37 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v37 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v38 = KeGetCurrentThread();
      v39 = v38->KernelApcDisable + 1;
      v38->KernelApcDisable = v39;
      if ( !v39
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v38->ApcState.ApcListHead[0].Flink != &v38->152
        && !v38->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
        CmpLogHiveInitializeEvent(v21, a2, a7, BugCheckParameter2[0]);
      return 0LL;
    }
  }
  else
  {
    SetFailureLocation((__int64)a12, 0, 1, -1073741492, 240);
    CmpDestroySecurityCache(v21);
    if ( *(_QWORD *)v27 != v27 )
    {
      v75 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, v74);
      v44 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
      v78 = v75;
      if ( v44 )
        ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v75, (ULONG_PTR)&CmpHiveListHeadLock, v77);
      if ( v78 )
        *(_BYTE *)(v78 + 26) |= 1u;
      v79 = *(_QWORD *)v27;
      v80 = *(_QWORD **)(v21 + 5376);
      if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 || *v80 != v27 )
        __fastfail(3u);
      *v80 = v79;
      *(_QWORD *)(v79 + 8) = v80;
      _m_prefetchw(&CmpHiveListHeadLock);
      v81 = CmpHiveListHeadLock - 16;
      if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v81 = 0LL;
      if ( (CmpHiveListHeadLock & 2) != 0
        || (v82 = CmpHiveListHeadLock,
            v82 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpHiveListHeadLock,
                     v81,
                     CmpHiveListHeadLock)) )
      {
        ExfReleasePushLock(&CmpHiveListHeadLock, v76);
      }
      KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
    }
    HvFreeHive(v21, 1, v73);
    CmpDereferenceHive(v21);
    _m_prefetchw(&CmpShutdownRundown);
    v83 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v83 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v84 = KeGetCurrentThread();
    v85 = v84->KernelApcDisable + 1;
    v84->KernelApcDisable = v85;
    if ( !v85
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v84->ApcState.ApcListHead[0].Flink != &v84->152
      && !v84->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225804LL;
  }
}
