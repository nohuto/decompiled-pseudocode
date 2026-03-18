/*
 * XREFs of CmpSecurityMethod @ 0x140421960
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpLogTransactionAborted @ 0x1401AA55C (CmpLogTransactionAborted.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     CmpLockIXLockExclusive @ 0x1403DDE20 (CmpLockIXLockExclusive.c)
 *     CmpRundownUnitOfWork @ 0x1403DE734 (CmpRundownUnitOfWork.c)
 *     CmpAssignSecurityDescriptorWrapper @ 0x1403DFD88 (CmpAssignSecurityDescriptorWrapper.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403E09B8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpReportNotify @ 0x1403F4FC4 (CmpReportNotify.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmpIsSystemEntity @ 0x1403FBD30 (CmpIsSystemEntity.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     CmGetKCBCacheSecurity @ 0x1404209D8 (CmGetKCBCacheSecurity.c)
 *     SeQuerySecurityDescriptorInfo @ 0x140421240 (SeQuerySecurityDescriptorInfo.c)
 *     CmpSignalDeferredPosts @ 0x1404218C4 (CmpSignalDeferredPosts.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     CmpAllocateUnitOfWork @ 0x1404B5CE4 (CmpAllocateUnitOfWork.c)
 *     CmpRollbackTransactionArray @ 0x1405E5C08 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1405EC1D0 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmpSecurityMethod(
        __int64 a1,
        int a2,
        DWORD *a3,
        void *a4,
        ULONG *a5,
        int a6,
        POOL_TYPE a7,
        GENERIC_MAPPING *a8)
{
  ULONG_PTR BugCheckParameter4; // rdi
  int v12; // ebx
  ULONG_PTR v13; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  char v17; // r12
  struct _KTHREAD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // r13
  __int64 v24; // r9
  __int64 v25; // r15
  int v26; // eax
  char v27; // r15
  _QWORD *v28; // r12
  int v29; // ecx
  unsigned __int64 *v31; // r13
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // r15
  __int64 v35; // rbx
  signed __int64 *v36; // r15
  signed __int64 v37; // rax
  signed __int64 v38; // rcx
  signed __int64 v39; // rtt
  signed __int64 *v40; // r15
  signed __int64 v41; // rax
  signed __int64 v42; // rcx
  signed __int64 v43; // rtt
  __int64 UnitOfWork; // rax
  __int64 v45; // rcx
  __int64 *v46; // rdx
  struct _KTHREAD *v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rcx
  struct _KTHREAD *v50; // rcx
  __int64 v51; // r8
  signed __int64 *v52; // rbx
  signed __int64 v53; // rax
  signed __int64 v54; // rcx
  signed __int64 v55; // rtt
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  volatile signed __int32 *v60; // r12
  __int64 v61; // rax
  __int64 v62; // r15
  __int64 v63; // r8
  signed __int64 *v64; // rbx
  signed __int64 v65; // rax
  signed __int64 v66; // rcx
  signed __int64 v67; // rtt
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  char v72; // [rsp+40h] [rbp-C0h]
  unsigned int v73; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v74; // [rsp+48h] [rbp-B8h] BYREF
  int v75; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h]
  __int64 v77; // [rsp+60h] [rbp-A0h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp-98h]
  _QWORD v79[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v80; // [rsp+80h] [rbp-80h] BYREF
  PSECURITY_INFORMATION SecurityInformation; // [rsp+88h] [rbp-78h]
  _QWORD *v82[2]; // [rsp+90h] [rbp-70h] BYREF
  PULONG Length; // [rsp+A0h] [rbp-60h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+A8h] [rbp-58h] BYREF
  PGENERIC_MAPPING GenericMapping; // [rsp+B0h] [rbp-50h]
  _QWORD v86[7]; // [rsp+B8h] [rbp-48h] BYREF
  int v87; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v88; // [rsp+F4h] [rbp-Ch]
  int v89; // [rsp+FCh] [rbp-4h]

  SecurityInformation = a3;
  BugCheckParameter4 = a2;
  SecurityDescriptor = a4;
  Length = a5;
  GenericMapping = a8;
  v12 = -1073741823;
  v74 = 0LL;
  P = 0LL;
  v72 = 1;
  memset(v86, 0, sizeof(v86));
  v75 = 0;
  v87 = 0;
  v88 = 0LL;
  v89 = 0;
  v77 = 0LL;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((char *)&v87, (char *)0x20000);
    if ( CmpTraceRoutine )
    {
      if ( a1 )
        v77 = *(_QWORD *)(a1 + 8);
    }
  }
  v13 = *(_QWORD *)(a1 + 8);
  v79[1] = v79;
  v79[0] = v79;
  v82[1] = v82;
  v82[0] = v82;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
    goto LABEL_7;
  if ( (_DWORD)BugCheckParameter4 == 1 )
  {
    v86[3] = a5;
    v15 = 37;
    v16 = 36;
  }
  else
  {
    if ( (_DWORD)BugCheckParameter4 )
      goto LABEL_7;
    v15 = 39;
    v16 = 38;
  }
  v86[0] = a1;
  v86[1] = a3;
  v86[2] = a4;
  v12 = CmpCallCallBacks(v16, (__int64)v86, 1, v15, a1, (__int64)v79);
  if ( v12 >= 0 )
  {
LABEL_7:
    v17 = 0;
    while ( 1 )
    {
      if ( v17 )
      {
        ExReleaseRundownProtection_0(&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
      v18 = KeGetCurrentThread();
      --v18->KernelApcDisable;
      if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
      {
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        if ( CmpTraceRoutine )
          CmpTraceRoutine((unsigned int)((_DWORD)BugCheckParameter4 != 0) + 28, &v87, 3221225865LL, 0LL, v77, 0LL);
        return 3221225865LL;
      }
      v17 = 1;
      CmpLockRegistry(v20, v19, v21, v22);
      if ( (_DWORD)BugCheckParameter4 != 1 )
        break;
      if ( (v13 & 1) == 0 )
      {
        CmpLockKcbShared(v13);
LABEL_14:
        v23 = v72;
        goto LABEL_15;
      }
      v13 ^= 1uLL;
      v23 = 0;
      v72 = 0;
LABEL_15:
      v24 = *(_QWORD *)(a1 + 56);
      if ( (v24 || *(_QWORD *)(a1 + 64)) && (*(_DWORD *)(v13 + 4) & 0x20000) == 0 )
      {
        v12 = CmpSearchAddTrans(a1, 0LL, 0LL, v24, *(__int128 **)(a1 + 64), 0, (char **)&v74);
        if ( v12 < 0 )
        {
          if ( !v23 )
            goto LABEL_125;
          goto LABEL_124;
        }
      }
      v25 = v74;
      if ( CmRmIsKCBDeleted(v13, v74) )
      {
        v12 = -1073741444;
        if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
          v12 = -1073740763;
        if ( !v23 )
          goto LABEL_125;
LABEL_124:
        CmpUnlockKcb((char *)v13);
LABEL_125:
        CmpUnlockRegistry();
        goto LABEL_27;
      }
      if ( (_DWORD)BugCheckParameter4 == 1 )
      {
        ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(CmGetKCBCacheSecurity(v13, v25) + 32);
        v26 = SeQuerySecurityDescriptorInfo(SecurityInformation, SecurityDescriptor, Length, &ObjectsSecurityDescriptor);
        v27 = 0;
        goto LABEL_20;
      }
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v13 + 32) + 2848LL), 1u);
      v31 = (unsigned __int64 *)(*(_QWORD *)(v13 + 32) + 2952LL);
      v32 = KeAbPreAcquire((ULONG_PTR)v31, 0LL, 0LL);
      v34 = v32;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v31, 0LL) )
        ExfAcquirePushLockExclusiveEx(v31, v32, (ULONG_PTR)v31);
      if ( v34 )
        *(_BYTE *)(v34 + 26) |= 1u;
      v27 = 1;
      if ( (_DWORD)BugCheckParameter4 )
      {
        if ( (_DWORD)BugCheckParameter4 != 2 )
        {
          if ( (_DWORD)BugCheckParameter4 != 3 )
            KeBugCheckEx(0x51u, 5uLL, 1uLL, v13, BugCheckParameter4);
          v26 = CmpAssignSecurityDescriptorWrapper(a1);
LABEL_20:
          v12 = v26;
        }
        v28 = P;
        goto LABEL_22;
      }
      if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v13 + 32) + 5360LL) & 0x20) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_68;
      }
      v35 = v74;
      if ( v74 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v13 + 32) + 144LL) & 2) != 0 )
        {
          v12 = -1072103423;
          goto LABEL_68;
        }
        UnitOfWork = CmpAllocateUnitOfWork();
        v28 = (_QWORD *)UnitOfWork;
        if ( !UnitOfWork )
        {
          v12 = -1073741670;
          goto LABEL_68;
        }
        v45 = UnitOfWork + 32;
        v46 = *(__int64 **)(v13 + 208);
        *(_QWORD *)(UnitOfWork + 32) = v13 + 200;
        *(_QWORD *)(UnitOfWork + 40) = v46;
        if ( *v46 != v13 + 200 )
          __fastfail(3u);
        *v46 = v45;
        *(_QWORD *)(v13 + 208) = v45;
        CmpReferenceKeyControlBlock((signed __int32 *)v13);
        v28[6] = v13;
        v47 = KeGetCurrentThread();
        --v47->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
        v48 = v74 + 16;
        v49 = *(_QWORD **)(v74 + 24);
        *v28 = v74 + 16;
        v28[1] = v49;
        if ( *v49 != v48 )
          __fastfail(3u);
        *v49 = v28;
        *(_QWORD *)(v48 + 8) = v28;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v35 = v74;
        v28[7] = v74;
        if ( !CmpLockIXLockExclusive(v13 + 240, (__int64)v28, 0) || !CmpLockIXLockExclusive(v13 + 256, (__int64)v28, 1) )
        {
          v12 = -1072103423;
          goto LABEL_33;
        }
LABEL_48:
        v12 = CmpSetSecurityDescriptorInfo(
                v13,
                SecurityInformation,
                SecurityDescriptor,
                v33,
                a7,
                GenericMapping,
                v35,
                (__int64)v28);
        if ( v12 < 0 )
          goto LABEL_33;
        v36 = (signed __int64 *)(*(_QWORD *)(v13 + 32) + 2952LL);
        _m_prefetchw(v36);
        v37 = *v36;
        if ( (*v36 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v38 = v37 - 16;
        else
          v38 = 0LL;
        if ( (v37 & 2) != 0 || (v39 = *v36, v39 != _InterlockedCompareExchange64(v36, v38, v37)) )
          ExfReleasePushLock(v36);
        KeAbPostRelease((ULONG_PTR)v36);
        v27 = 0;
        CmpReportNotify(v13, *(_QWORD *)(v13 + 32), *(_DWORD *)(v13 + 40), v74, 10, (__int64)v82);
LABEL_22:
        if ( v12 < 0 )
        {
LABEL_33:
          if ( v28 )
          {
            CmpRundownUnitOfWork(v28);
            ExFreePoolWithTag(v28, 0x77554D43u);
          }
        }
        if ( (_DWORD)BugCheckParameter4 != 1 )
        {
          if ( v27 )
            goto LABEL_68;
          goto LABEL_55;
        }
        goto LABEL_24;
      }
      if ( *(_DWORD *)(v13 + 240) )
      {
        v12 = CmpSnapshotTxOwnerArray(v13 + 240, &v73, &v80);
        if ( v12 < 0 )
          goto LABEL_68;
        CmpLogTransactionAborted(v13, 8u, v51, v73);
        CmpUnlockKcb((char *)v13);
        v52 = (signed __int64 *)(*(_QWORD *)(v13 + 32) + 2952LL);
        _m_prefetchw(v52);
        v53 = *v52;
        v54 = *v52 - 16;
        if ( (*v52 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v54 = 0LL;
        if ( (v53 & 2) != 0 || (v55 = *v52, v55 != _InterlockedCompareExchange64(v52, v54, v53)) )
          ExfReleasePushLock(v52);
        KeAbPostRelease((ULONG_PTR)v52);
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v13 + 32) + 2848LL));
        CmpUnlockRegistry();
        v12 = CmpRollbackTransactionArray(v73, v80, 0LL, &v75);
        if ( v12 < 0 )
        {
          CmpLockRegistry(v57, v56, v58, v59);
          CmpLockKcbExclusive(v13);
          ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v13 + 32) + 2848LL), 1u);
          v60 = (volatile signed __int32 *)(*(_QWORD *)(v13 + 32) + 2952LL);
          v61 = KeAbPreAcquire((ULONG_PTR)v60, 0LL, 0LL);
          v62 = v61;
          if ( _interlockedbittestandset64(v60, 0LL) )
            goto LABEL_99;
          goto LABEL_100;
        }
      }
      else
      {
        if ( *(_DWORD *)(v13 + 256) == (_DWORD)v74 )
        {
          v28 = P;
          goto LABEL_48;
        }
        v12 = CmpSnapshotTxOwnerArray(v13 + 256, &v73, &v80);
        if ( v12 < 0 )
          goto LABEL_68;
        CmpLogTransactionAborted(v13, 8u, v63, v73);
        CmpUnlockKcb((char *)v13);
        v64 = (signed __int64 *)(*(_QWORD *)(v13 + 32) + 2952LL);
        _m_prefetchw(v64);
        v65 = *v64;
        v66 = *v64 - 16;
        if ( (*v64 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v66 = 0LL;
        if ( (v65 & 2) != 0 || (v67 = *v64, v67 != _InterlockedCompareExchange64(v64, v66, v65)) )
          ExfReleasePushLock(v64);
        KeAbPostRelease((ULONG_PTR)v64);
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v13 + 32) + 2848LL));
        CmpUnlockRegistry();
        v12 = CmpRollbackTransactionArray(v73, v80, 0LL, &v75);
        if ( v12 < 0 )
        {
          CmpLockRegistry(v69, v68, v70, v71);
          CmpLockKcbExclusive(v13);
          ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v13 + 32) + 2848LL), 1u);
          v60 = (volatile signed __int32 *)(*(_QWORD *)(v13 + 32) + 2952LL);
          v61 = KeAbPreAcquire((ULONG_PTR)v60, 0LL, 0LL);
          v62 = v61;
          if ( !_interlockedbittestandset64(v60, 0LL) )
            goto LABEL_100;
LABEL_99:
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v60, v61, (ULONG_PTR)v60);
LABEL_100:
          if ( v62 )
            *(_BYTE *)(v62 + 26) |= 1u;
LABEL_68:
          v40 = (signed __int64 *)(*(_QWORD *)(v13 + 32) + 2952LL);
          _m_prefetchw(v40);
          v41 = *v40;
          if ( (*v40 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
            v42 = v41 - 16;
          else
            v42 = 0LL;
          if ( (v41 & 2) != 0 || (v43 = *v40, v43 != _InterlockedCompareExchange64(v40, v42, v41)) )
            ExfReleasePushLock(v40);
          KeAbPostRelease((ULONG_PTR)v40);
LABEL_55:
          ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v13 + 32) + 2848LL));
LABEL_24:
          if ( v72 )
            CmpUnlockKcb((char *)v13);
          CmpUnlockRegistry();
          CmpSignalDeferredPosts(v82);
LABEL_27:
          if ( (_DWORD)BugCheckParameter4 == 1 )
          {
            v29 = 37;
            goto LABEL_29;
          }
          if ( !(_DWORD)BugCheckParameter4 )
          {
            v29 = 39;
LABEL_29:
            v12 = CmPostCallbackNotification(v29, a1, v12, (unsigned int)v86, (__int64)v79);
          }
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          if ( CmpTraceRoutine )
            CmpTraceRoutine(
              (unsigned int)((_DWORD)BugCheckParameter4 != 0) + 28,
              &v87,
              (unsigned int)v12,
              0LL,
              v77,
              0LL);
          ExReleaseRundownProtection_0(&CmpShutdownRundown);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          return (unsigned int)v12;
        }
      }
    }
    if ( (*(_WORD *)(v13 + 186) & 0x200) != 0 && !CmpIsSystemEntity(0LL) )
    {
      CmpUnlockRegistry();
      v12 = 0;
      goto LABEL_27;
    }
    CmpLockKcbExclusive(v13);
    goto LABEL_14;
  }
  v50 = KeGetCurrentThread();
  if ( v12 == -1073740541 )
    v12 = 0;
  KiLeaveCriticalRegionUnsafe((__int64)v50);
  if ( CmpTraceRoutine )
    CmpTraceRoutine((unsigned int)((_DWORD)BugCheckParameter4 != 0) + 28, &v87, (unsigned int)v12, 0LL, v77, 0LL);
  return (unsigned int)v12;
}
