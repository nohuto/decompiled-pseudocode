/*
 * XREFs of CmpSecurityMethod @ 0x14042ABB4
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     CmpSignalDeferredPosts @ 0x1404293F0 (CmpSignalDeferredPosts.c)
 *     CmpReportNotify @ 0x140429FE8 (CmpReportNotify.c)
 *     CmGetKCBCacheSecurity @ 0x14042B39C (CmGetKCBCacheSecurity.c)
 *     CmpLockIXLockExclusive @ 0x140447FF0 (CmpLockIXLockExclusive.c)
 *     CmpRundownUnitOfWork @ 0x1404482CC (CmpRundownUnitOfWork.c)
 *     CmpAssignSecurityDescriptorWrapper @ 0x140449A94 (CmpAssignSecurityDescriptorWrapper.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14044B704 (CmpSetSecurityDescriptorInfo.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     CmpIsSystemEntity @ 0x140481E04 (CmpIsSystemEntity.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmRmIsKCBDeleted @ 0x1404C69A0 (CmRmIsKCBDeleted.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1404D0650 (SeQuerySecurityDescriptorInfo.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     CmpAllocateUnitOfWork @ 0x1404F3314 (CmpAllocateUnitOfWork.c)
 *     CmpRollbackTransactionArray @ 0x14065CCEC (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x140664768 (CmpSnapshotTxOwnerArray.c)
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
  ULONG_PTR BugCheckParameter4; // r15
  int v10; // ebx
  _QWORD *v11; // r12
  char v12; // r14
  ULONG_PTR v13; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v15; // r8d
  int v16; // eax
  char v17; // si
  char i; // al
  struct _KTHREAD *v19; // rax
  unsigned __int64 v20; // rtt
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // rsi
  NTSTATUS v26; // eax
  int v27; // ecx
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  unsigned __int64 v30; // rtt
  struct _KTHREAD *v31; // rcx
  __int16 v32; // ax
  unsigned __int64 *v34; // r14
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // rsi
  __int64 v39; // rbx
  ULONG_PTR v40; // rcx
  __int64 v41; // rdx
  signed __int64 *v42; // rsi
  signed __int64 v43; // rax
  signed __int64 v44; // rcx
  signed __int64 v45; // rtt
  signed __int64 *v46; // rsi
  signed __int64 v47; // rax
  signed __int64 v48; // rcx
  signed __int64 v49; // rtt
  __int64 UnitOfWork; // rax
  __int64 v51; // rcx
  __int64 *v52; // rdx
  struct _KTHREAD *v53; // rax
  struct _KTHREAD *v54; // rsi
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  _QWORD *v59; // rcx
  signed __int32 v60; // eax
  struct _KTHREAD *v61; // rcx
  __int16 v62; // ax
  struct _KTHREAD *v63; // rcx
  __int16 v64; // ax
  unsigned __int64 v65; // rtt
  struct _KTHREAD *v66; // rcx
  __int16 v67; // ax
  __int64 v68; // rdx
  signed __int64 *v69; // rbx
  signed __int64 v70; // rax
  bool v71; // cc
  signed __int64 v72; // rcx
  signed __int64 v73; // rtt
  struct _KTHREAD *v74; // rcx
  __int16 v75; // ax
  struct _KTHREAD *v76; // rcx
  __int16 v77; // ax
  unsigned __int64 *v78; // r14
  __int64 v79; // r9
  __int64 v80; // rax
  __int64 v81; // r9
  __int64 v82; // rsi
  char v83; // [rsp+40h] [rbp-C0h]
  unsigned int v84; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v85; // [rsp+48h] [rbp-B8h] BYREF
  int v86; // [rsp+50h] [rbp-B0h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-A8h]
  PSECURITY_INFORMATION SecurityInformation; // [rsp+60h] [rbp-A0h]
  __int64 v89; // [rsp+68h] [rbp-98h]
  __int64 v90; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v91[3]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v92[2]; // [rsp+90h] [rbp-70h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  PULONG Length; // [rsp+A8h] [rbp-58h]
  PGENERIC_MAPPING v95; // [rsp+B0h] [rbp-50h]
  _QWORD v96[7]; // [rsp+B8h] [rbp-48h] BYREF
  int v97; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v98; // [rsp+F4h] [rbp-Ch]
  int v99; // [rsp+FCh] [rbp-4h]

  SecurityInformation = a3;
  BugCheckParameter4 = a2;
  v10 = -1073741823;
  SecurityDescriptor = a4;
  Length = a5;
  v95 = a8;
  v11 = 0LL;
  v85 = 0LL;
  v12 = 0;
  v83 = 1;
  memset(v96, 0, sizeof(v96));
  v86 = 0;
  v97 = 0;
  v98 = 0LL;
  v99 = 0;
  v89 = 0LL;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((char *)&v97, (char *)0x20000);
    if ( CmpTraceRoutine )
    {
      if ( a1 )
        v89 = *(_QWORD *)(a1 + 8);
    }
  }
  v13 = *(_QWORD *)(a1 + 8);
  v91[1] = v91;
  v91[0] = v91;
  v92[1] = v92;
  v92[0] = v92;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
  {
    v17 = 0;
  }
  else
  {
    if ( (_DWORD)BugCheckParameter4 == 1 )
    {
      v96[1] = SecurityInformation;
      LOBYTE(v15) = 1;
      v96[2] = SecurityDescriptor;
      v96[0] = a1;
      v96[3] = a5;
      v16 = CmpCallCallBacks(36, (unsigned int)v96, v15, 37, a1, (__int64)v91);
      v17 = 0;
      goto LABEL_6;
    }
    v17 = 0;
    if ( !(_DWORD)BugCheckParameter4 )
    {
      v96[1] = SecurityInformation;
      LOBYTE(v15) = 1;
      v96[2] = SecurityDescriptor;
      v96[0] = a1;
      v16 = CmpCallCallBacks(38, (unsigned int)v96, v15, 39, a1, (__int64)v91);
LABEL_6:
      v10 = v16;
      if ( v16 < 0 )
      {
        v63 = KeGetCurrentThread();
        if ( v16 == -1073740541 )
          v10 = 0;
        v64 = v63->KernelApcDisable + 1;
        v63->KernelApcDisable = v64;
        if ( !v64
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v63->ApcState.ApcListHead[0].Flink != &v63->152
          && !v63->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( CmpTraceRoutine )
          CmpTraceRoutine((unsigned int)((_DWORD)BugCheckParameter4 != 0) + 28, &v97, (unsigned int)v10, 0LL, v89, 0LL);
        return (unsigned int)v10;
      }
    }
  }
  for ( i = 0; ; i = 1 )
  {
    if ( i )
    {
      _m_prefetchw(&CmpShutdownRundown);
      v65 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v65 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v66 = KeGetCurrentThread();
      v67 = v66->KernelApcDisable + 1;
      v66->KernelApcDisable = v67;
      if ( !v67
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v66->ApcState.ApcListHead[0].Flink != &v66->152
        && !v66->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    _m_prefetchw(&CmpShutdownRundown);
    v20 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v20 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
      && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
    {
      v74 = KeGetCurrentThread();
      v75 = v74->KernelApcDisable + 1;
      v74->KernelApcDisable = v75;
      if ( !v75
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v74->ApcState.ApcListHead[0].Flink != &v74->152
        && !v74->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v76 = KeGetCurrentThread();
      v77 = v76->KernelApcDisable + 1;
      v76->KernelApcDisable = v77;
      if ( !v77
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v76->ApcState.ApcListHead[0].Flink != &v76->152
        && !v76->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v10 = -1073741431;
      if ( CmpTraceRoutine )
        CmpTraceRoutine((unsigned int)((_DWORD)BugCheckParameter4 != 0) + 28, &v97, 3221225865LL, 0LL, v89, 0LL);
      return (unsigned int)v10;
    }
    CmpLockRegistry();
    if ( (_DWORD)BugCheckParameter4 != 1 )
    {
      if ( (*(_WORD *)(v13 + 186) & 0x200) != 0 && !(unsigned __int8)CmpIsSystemEntity(0LL) )
      {
        CmpUnlockRegistry();
        v10 = 0;
        goto LABEL_27;
      }
      CmpLockKcbExclusive(v13);
      goto LABEL_13;
    }
    if ( (v13 & 1) == 0 )
    {
      CmpLockKcbShared(v13, v21, v22, v23);
LABEL_13:
      v17 = v83;
      goto LABEL_14;
    }
    v13 ^= 1uLL;
    v83 = 0;
LABEL_14:
    v24 = *(_QWORD *)(a1 + 56);
    if ( (v24 || *(_QWORD *)(a1 + 64)) && (*(_DWORD *)(v13 + 4) & 0x20000) == 0 )
    {
      v10 = CmpSearchAddTrans(a1, 0, 0, v24, *(_QWORD *)(a1 + 64), 0, (__int64)&v85);
      if ( v10 < 0 )
      {
        if ( v17 )
          CmpUnlockKcb((PVOID)v13);
LABEL_139:
        CmpUnlockRegistry();
        goto LABEL_27;
      }
    }
    v25 = v85;
    if ( (unsigned __int8)CmRmIsKCBDeleted(v13, v85) == 1 )
    {
      v10 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      if ( v83 )
        CmpUnlockKcb((PVOID)v13);
      goto LABEL_139;
    }
    if ( (_DWORD)BugCheckParameter4 != 1 )
    {
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v13 + 32) + 2848LL), 1u);
      v34 = (unsigned __int64 *)(*(_QWORD *)(v13 + 32) + 2952LL);
      v36 = KeAbPreAcquire((ULONG_PTR)v34, 0LL, 0LL, v35);
      v38 = v36;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v34, 0LL) )
        ExfAcquirePushLockExclusiveEx(v34, v36, (ULONG_PTR)v34, v37);
      if ( v38 )
        *(_BYTE *)(v38 + 26) |= 1u;
      v25 = v85;
      v12 = 1;
    }
    if ( (_DWORD)BugCheckParameter4 )
    {
      if ( (_DWORD)BugCheckParameter4 == 1 )
      {
        ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(CmGetKCBCacheSecurity(v13) + 32);
        v26 = SeQuerySecurityDescriptorInfo(SecurityInformation, SecurityDescriptor, Length, &ObjectsSecurityDescriptor);
        goto LABEL_21;
      }
      if ( (_DWORD)BugCheckParameter4 != 2 )
      {
        if ( (_DWORD)BugCheckParameter4 != 3 )
          KeBugCheckEx(0x51u, 5uLL, 1uLL, v13, BugCheckParameter4);
        v26 = CmpAssignSecurityDescriptorWrapper(a1, SecurityDescriptor, v25);
LABEL_21:
        v10 = v26;
      }
LABEL_22:
      if ( v10 < 0 )
      {
LABEL_38:
        if ( v11 )
        {
          CmpRundownUnitOfWork((ULONG_PTR)v11);
          ExFreePoolWithTag(v11, 0x77554D43u);
        }
      }
      if ( (_DWORD)BugCheckParameter4 == 1 )
        goto LABEL_24;
      goto LABEL_47;
    }
    v17 = 0;
    if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v13 + 32) + 5360LL) & 0x20) != 0 )
    {
      v10 = -1073741790;
      goto LABEL_47;
    }
    v39 = v85;
    if ( v85 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v13 + 32) + 144LL) & 2) != 0 )
      {
        v10 = -1072103423;
      }
      else
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        v11 = (_QWORD *)UnitOfWork;
        if ( UnitOfWork )
        {
          v51 = UnitOfWork + 32;
          v52 = *(__int64 **)(v13 + 208);
          *(_QWORD *)(UnitOfWork + 32) = v13 + 200;
          *(_QWORD *)(UnitOfWork + 40) = v52;
          if ( *v52 != v13 + 200 )
            __fastfail(3u);
          *v52 = v51;
          *(_QWORD *)(v13 + 208) = v51;
          CmpReferenceKeyControlBlock(v13);
          v11[6] = v13;
          v53 = KeGetCurrentThread();
          --v53->KernelApcDisable;
          v54 = KeGetCurrentThread();
          v56 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v55);
          v57 = v56;
          if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
            ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v56);
          if ( v57 )
            *(_BYTE *)(v57 + 26) |= 1u;
          qword_14034D768 = (__int64)v54;
          v58 = v85 + 16;
          v59 = *(_QWORD **)(v85 + 24);
          *v11 = v85 + 16;
          v11[1] = v59;
          if ( *v59 != v58 )
            __fastfail(3u);
          *v59 = v11;
          *(_QWORD *)(v58 + 8) = v11;
          qword_14034D768 = 0LL;
          v60 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
          if ( v60 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v60);
          KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
          v61 = KeGetCurrentThread();
          v62 = v61->KernelApcDisable + 1;
          v61->KernelApcDisable = v62;
          if ( !v62
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v61->ApcState.ApcListHead[0].Flink != &v61->152
            && !v61->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v39 = v85;
          v11[7] = v85;
          if ( (unsigned __int8)CmpLockIXLockExclusive(v13 + 240, v11, 0LL)
            && (unsigned __int8)CmpLockIXLockExclusive(v13 + 256, v11, 1LL) )
          {
LABEL_55:
            v10 = CmpSetSecurityDescriptorInfo(v13, a7, v95, v39, (__int64)v11);
            if ( v10 >= 0 )
            {
              v42 = (signed __int64 *)(*(_QWORD *)(v13 + 32) + 2952LL);
              _m_prefetchw(v42);
              v43 = *v42;
              if ( (*v42 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
                v44 = v43 - 16;
              else
                v44 = 0LL;
              if ( (v43 & 2) != 0 || (v45 = *v42, v45 != _InterlockedCompareExchange64(v42, v44, v43)) )
                ExfReleasePushLock(v42, v41);
              KeAbPostRelease((ULONG_PTR)v42);
              v12 = 0;
              CmpReportNotify(v13, *(_QWORD *)(v13 + 32), *(_DWORD *)(v13 + 40), v85, 10, (__int64)v92);
              goto LABEL_22;
            }
          }
          else
          {
            v10 = -1072103423;
          }
          goto LABEL_38;
        }
        v10 = -1073741670;
      }
LABEL_47:
      if ( v12 )
        goto LABEL_76;
      goto LABEL_48;
    }
    v40 = v13 + 240;
    if ( !*(_DWORD *)(v13 + 240) )
    {
      v40 = v13 + 256;
      if ( !*(_DWORD *)(v13 + 256) )
        goto LABEL_55;
    }
    v10 = CmpSnapshotTxOwnerArray(v40, &v84, &v90);
    if ( v10 < 0 )
      goto LABEL_47;
    CmpUnlockKcb((PVOID)v13);
    if ( v12 )
    {
      v69 = (signed __int64 *)(*(_QWORD *)(v13 + 32) + 2952LL);
      v70 = *v69;
      v71 = (*v69 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10;
      v72 = *v69 - 16;
      _m_prefetchw(v69);
      if ( v71 )
        v72 = 0LL;
      if ( (v70 & 2) != 0 || (v73 = *v69, v73 != _InterlockedCompareExchange64(v69, v72, v70)) )
        ExfReleasePushLock(v69, v68);
      KeAbPostRelease((ULONG_PTR)v69);
      v12 = 0;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v13 + 32) + 2848LL));
    CmpUnlockRegistry();
    v10 = CmpRollbackTransactionArray(v84, v90, 0LL, &v86);
    if ( v10 < 0 )
      break;
  }
  CmpLockRegistry();
  CmpLockKcbExclusive(v13);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v13 + 32) + 2848LL), 1u);
  v78 = (unsigned __int64 *)(*(_QWORD *)(v13 + 32) + 2952LL);
  v80 = KeAbPreAcquire((ULONG_PTR)v78, 0LL, 0LL, v79);
  v82 = v80;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v78, 0LL) )
    ExfAcquirePushLockExclusiveEx(v78, v80, (ULONG_PTR)v78, v81);
  if ( v82 )
    *(_BYTE *)(v82 + 26) |= 1u;
LABEL_76:
  v46 = (signed __int64 *)(*(_QWORD *)(v13 + 32) + 2952LL);
  _m_prefetchw(v46);
  v47 = *v46;
  v48 = *v46 - 16;
  if ( (*v46 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v48 = 0LL;
  if ( (v47 & 2) != 0 || (v49 = *v46, v49 != _InterlockedCompareExchange64(v46, v48, v47)) )
    ExfReleasePushLock(v46, 0LL);
  KeAbPostRelease((ULONG_PTR)v46);
LABEL_48:
  ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v13 + 32) + 2848LL));
LABEL_24:
  if ( v83 )
    CmpUnlockKcb((PVOID)v13);
  CmpUnlockRegistry();
  CmpSignalDeferredPosts(v92);
LABEL_27:
  if ( (_DWORD)BugCheckParameter4 == 1 )
  {
    v27 = 37;
    goto LABEL_29;
  }
  if ( !(_DWORD)BugCheckParameter4 )
  {
    v27 = 39;
LABEL_29:
    v10 = CmPostCallbackNotification(v27, a1, v10, (unsigned int)v96, (__int64)v91);
  }
  v28 = KeGetCurrentThread();
  v29 = v28->KernelApcDisable + 1;
  v28->KernelApcDisable = v29;
  if ( !v29
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
    && !v28->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( CmpTraceRoutine )
    CmpTraceRoutine((unsigned int)((_DWORD)BugCheckParameter4 != 0) + 28, &v97, (unsigned int)v10, 0LL, v89, 0LL);
  _m_prefetchw(&CmpShutdownRundown);
  v30 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v30 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  v31 = KeGetCurrentThread();
  v32 = v31->KernelApcDisable + 1;
  v31->KernelApcDisable = v32;
  if ( !v32
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v31->ApcState.ApcListHead[0].Flink != &v31->152
    && !v31->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v10;
}
