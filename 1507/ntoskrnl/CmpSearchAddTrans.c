/*
 * XREFs of CmpSearchAddTrans @ 0x1404F0F50
 * Callers:
 *     CmEnumerateValueKey @ 0x1404277E0 (CmEnumerateValueKey.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140429678 (CmQueryMultipleValueKey.c)
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     NtDeleteKey @ 0x1404462E0 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmpBuildHashStackAndLookupCache @ 0x14049A140 (CmpBuildHashStackAndLookupCache.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     CmQueryKey @ 0x1404C3F30 (CmQueryKey.c)
 *     CmEnumerateKey @ 0x1404C66B0 (CmEnumerateKey.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140655BB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140656248 (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140657138 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpRecoverEnlistment @ 0x14065CBDC (CmpRecoverEnlistment.c)
 *     CmpRmAnalysisPhase @ 0x14065D144 (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x14065D354 (CmpRmReDoPhase.c)
 * Callees:
 *     TmIsTransactionActive @ 0x140001198 (TmIsTransactionActive.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExBlockOnAddressPushLock @ 0x1400D2B14 (ExBlockOnAddressPushLock.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     CmpSearchForTrans @ 0x1404F15D8 (CmpSearchForTrans.c)
 *     CmpBindHiveToTrans @ 0x1404F1670 (CmpBindHiveToTrans.c)
 *     CmpAccountForLogReservation @ 0x1404F1D78 (CmpAccountForLogReservation.c)
 *     CmTmCreateEnlistment @ 0x1404F2794 (CmTmCreateEnlistment.c)
 *     CmpStartRMLogs @ 0x1404F2804 (CmpStartRMLogs.c)
 */

__int64 __fastcall CmpSearchAddTrans(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int128 *a5, char a6, char **a7)
{
  _QWORD *v8; // rax
  bool v10; // zf
  char *v11; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rax
  int v17; // eax
  int v18; // ebx
  signed __int32 v19; // eax
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  __int64 v22; // r8
  _QWORD *v23; // r8
  signed __int32 v24; // eax
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  char *PoolWithTag; // rax
  __int128 v28; // xmm0
  _QWORD *v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  signed __int32 v32; // eax
  __int64 v33; // r9
  struct _KTHREAD *v34; // rcx
  __int16 v35; // ax
  _QWORD *v36; // rbx
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // rdx
  struct _KTHREAD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  signed __int32 v43; // eax
  struct _KTHREAD *v44; // rcx
  __int16 v45; // ax
  unsigned int v46; // ecx
  struct _KTHREAD *v47; // rax
  struct _EX_RUNDOWN_REF *v48; // r9
  unsigned __int64 v49; // rtt
  struct _EX_RUNDOWN_REF *v50; // r8
  unsigned __int64 v51; // rtt
  struct _KTHREAD *v52; // rdx
  __int16 v53; // ax
  signed __int32 v54; // eax
  struct _KTHREAD *v55; // rcx
  __int16 v56; // ax
  struct _KTHREAD *v57; // rcx
  __int16 v58; // ax
  signed __int32 v59; // eax
  struct _KTHREAD *v60; // rcx
  __int16 v61; // ax
  struct _KTHREAD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  _QWORD *v65; // rcx
  PVOID *v66; // rax
  signed __int32 v67; // eax
  struct _KTHREAD *v68; // rdx
  __int16 v69; // ax
  struct _EX_RUNDOWN_REF *v70; // rcx
  unsigned __int64 v71; // rtt
  struct _KTHREAD *v72; // rcx
  __int16 v73; // ax
  _QWORD *v74; // rcx
  PVOID *v75; // rax
  signed __int32 v76[8]; // [rsp+0h] [rbp-A8h] BYREF
  NTSTATUS started; // [rsp+40h] [rbp-68h]
  PVOID P; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *v79; // [rsp+50h] [rbp-58h]
  __int64 v80; // [rsp+58h] [rbp-50h]
  __int64 v81; // [rsp+60h] [rbp-48h] BYREF
  struct _KTHREAD *v82; // [rsp+68h] [rbp-40h]
  PVOID Object; // [rsp+70h] [rbp-38h] BYREF
  struct _KTHREAD *v84; // [rsp+78h] [rbp-30h]
  char v85[40]; // [rsp+80h] [rbp-28h] BYREF
  __int64 v86; // [rsp+B0h] [rbp+8h]
  _QWORD *v87; // [rsp+B8h] [rbp+10h]
  __int64 v88; // [rsp+C0h] [rbp+18h]
  BOOLEAN v89; // [rsp+E0h] [rbp+38h]

  v88 = a3;
  v87 = a2;
  v86 = a1;
  v8 = a2;
  v10 = CmpMiniNTBoot == 0;
  v11 = 0LL;
  started = 0;
  *a7 = 0LL;
  P = 0LL;
  v89 = 0;
  if ( !v10 )
    return 0LL;
  if ( !a5 )
  {
    if ( !a4 )
      return 0LL;
    ObfReferenceObject((PVOID)a4);
    if ( !TmIsTransactionActive((PKTRANSACTION)a4) )
    {
      v18 = -1072103421;
      goto LABEL_21;
    }
    v8 = v87;
    a1 = v86;
    a3 = v88;
LABEL_7:
    if ( a1 )
    {
      v22 = *(_QWORD *)(a1 + 8);
      if ( (v22 & 1) != 0 )
        v22 ^= 1uLL;
      a3 = *(_QWORD *)(v22 + 32);
      v88 = a3;
    }
    else
    {
      if ( v8 )
        goto LABEL_9;
      if ( !a3 )
      {
LABEL_85:
        v18 = -1072103419;
        goto LABEL_21;
      }
    }
    v87 = *(_QWORD **)(a3 + 5400);
    if ( v87 )
      goto LABEL_9;
    if ( !a3 || (*(_DWORD *)(a3 + 5360) & 8) != 0 )
      goto LABEL_85;
    v18 = 0;
LABEL_21:
    if ( a4 )
      ObfDereferenceObject((PVOID)a4);
    if ( P )
      ExFreePoolWithTag(P, 0x72544D43u);
    if ( v18 >= 0 )
      *a7 = v11;
    return (unsigned int)v18;
  }
  if ( !a2 )
    goto LABEL_7;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_9:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v79 = KeGetCurrentThread();
      v14 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, a4);
      v15 = v14;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v14);
      if ( v15 )
        *(_BYTE *)(v15 + 26) |= 1u;
      qword_14034D768 = (__int64)v79;
      v16 = CmpSearchForTrans(v87, a4, a5);
      v11 = (char *)v16;
      if ( !v16 )
        break;
      v17 = *(_DWORD *)(v16 + 104);
      if ( (v17 & 8) == 0 )
      {
        if ( a4 && (v17 & 7) != 0 )
        {
          v18 = -1072103422;
        }
        else
        {
          CmpBindHiveToTrans(v88, v11);
          v18 = started;
        }
        qword_14034D768 = 0LL;
        v19 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
        if ( v19 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v19);
        KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
        v20 = KeGetCurrentThread();
        v21 = v20->KernelApcDisable + 1;
        v20->KernelApcDisable = v21;
        if ( !v21
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
          && !v20->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        goto LABEL_21;
      }
      LODWORD(v81) = CmpTransactionInitializingCount;
      qword_14034D768 = 0LL;
      v54 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
      if ( v54 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v54);
      KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
      v55 = KeGetCurrentThread();
      v56 = v55->KernelApcDisable + 1;
      v55->KernelApcDisable = v56;
      if ( !v56
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v55->ApcState.ApcListHead[0].Flink != &v55->152
        && !v55->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( !a6 )
        goto LABEL_67;
      ExBlockOnAddressPushLock(
        (__int64)&CmpTransactionInitializingEvent,
        &CmpTransactionInitializingCount,
        &v81,
        4uLL,
        0LL);
    }
    v23 = P;
    if ( P )
      break;
    qword_14034D768 = 0LL;
    v24 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
    if ( v24 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v24);
    KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
    v25 = KeGetCurrentThread();
    v26 = v25->KernelApcDisable + 1;
    v25->KernelApcDisable = v26;
    if ( !v26
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
      && !v25->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( !a6 )
      goto LABEL_67;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0xA8uLL, 0x72544D43u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v18 = -1073741670;
      goto LABEL_21;
    }
    memset(PoolWithTag, 0, 0xA8uLL);
    *((_QWORD *)v11 + 6) = a4;
    *((_QWORD *)v11 + 12) = CLFS_LSN_INVALID_EXT;
    *((_QWORD *)v11 + 7) = v87;
    *((_DWORD *)v11 + 26) = 8;
    if ( a5 )
      v28 = *a5;
    else
      v28 = *(_OWORD *)(a4 + 176);
    *((_OWORD *)v11 + 5) = v28;
    *((_QWORD *)v11 + 3) = v11 + 16;
    *((_QWORD *)v11 + 2) = v11 + 16;
    *((_QWORD *)v11 + 5) = v11 + 32;
    *((_QWORD *)v11 + 4) = v11 + 32;
    CmpBindHiveToTrans(v88, v11);
    P = v11;
  }
  v29 = v87;
  v11 = (char *)P;
  if ( v87[10] )
  {
    v47 = KeGetCurrentThread();
    --v47->KernelApcDisable;
    v48 = (struct _EX_RUNDOWN_REF *)v87[10];
    _m_prefetchw(&v48[347]);
    v49 = v48[347].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v49 == _InterlockedCompareExchange64((volatile signed __int64 *)&v48[347], v49 + 2, v49) )
    {
      v89 = 1;
    }
    else
    {
      v89 = ExfAcquireRundownProtection(v48 + 347);
      if ( !v89 )
      {
        v57 = KeGetCurrentThread();
        v58 = v57->KernelApcDisable + 1;
        v57->KernelApcDisable = v58;
        if ( !v58
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v57->ApcState.ApcListHead[0].Flink != &v57->152
          && !v57->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        qword_14034D768 = 0LL;
        v59 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
        if ( v59 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v59);
        KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
        v60 = KeGetCurrentThread();
        v61 = v60->KernelApcDisable + 1;
        v60->KernelApcDisable = v61;
        if ( !v61
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v60->ApcState.ApcListHead[0].Flink != &v60->152
          && !v60->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
LABEL_67:
        v18 = -1072103422;
        goto LABEL_21;
      }
      v29 = v87;
      v23 = v11;
    }
  }
  v30 = (_QWORD *)v29[3];
  v31 = v29 + 2;
  v23[1] = v30;
  *v23 = v31;
  v79 = (struct _KTHREAD *)(v23 + 1);
  if ( (_QWORD *)*v30 != v31 )
    __fastfail(3u);
  *v30 = v23;
  v31[1] = v23;
  ++CmpTransactionInitializingCount;
  qword_14034D768 = 0LL;
  v32 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
  if ( v32 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v32);
  KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
  v34 = KeGetCurrentThread();
  v35 = v34->KernelApcDisable + 1;
  v34->KernelApcDisable = v35;
  if ( !v35
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v34->ApcState.ApcListHead[0].Flink != &v34->152
    && !v34->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  LODWORD(v80) = 64;
  P = 0LL;
  if ( a4 )
  {
    if ( v87 != CmRmSystem )
    {
      started = CmpSearchAddTrans(0, 0, qword_1403168C0, a4, (__int64)a5, a6, (__int64)v85);
      if ( started < 0 )
      {
        v36 = v87;
LABEL_119:
        v62 = KeGetCurrentThread();
        --v62->KernelApcDisable;
        v82 = KeGetCurrentThread();
        v63 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v37);
        v64 = v63;
        v80 = v63;
        if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
        {
          ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v63);
          v64 = v80;
        }
        if ( v64 )
          *(_BYTE *)(v64 + 26) |= 1u;
        qword_14034D768 = (__int64)v82;
        v65 = *(_QWORD **)v11;
        v66 = *(PVOID **)&v79->Header.Lock;
        if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 || *v66 != v11 )
          __fastfail(3u);
        *v66 = v65;
        v65[1] = v66;
        --CmpTransactionInitializingCount;
        qword_14034D768 = 0LL;
        v67 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
        if ( v67 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v67);
        KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
        v68 = KeGetCurrentThread();
        v69 = v68->KernelApcDisable + 1;
        v68->KernelApcDisable = v69;
        if ( !v69
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v68->ApcState.ApcListHead[0].Flink != &v68->152
          && !v68->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        _InterlockedOr(v76, 0);
        if ( CmpTransactionInitializingEvent )
          ExfUnblockPushLock(&CmpTransactionInitializingEvent, 0LL);
LABEL_133:
        ExFreePoolWithTag(v11, 0x72544D43u);
        if ( v89 )
        {
          v70 = (struct _EX_RUNDOWN_REF *)(v36[10] + 2776LL);
          _m_prefetchw(v70);
          v71 = v70->Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v71 != _InterlockedCompareExchange64((volatile signed __int64 *)v70, v71 - 2, v71) )
            ExfReleaseRundownProtection(v70);
          v72 = KeGetCurrentThread();
          v73 = v72->KernelApcDisable + 1;
          v72->KernelApcDisable = v73;
          if ( !v73
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v72->ApcState.ApcListHead[0].Flink != &v72->152
            && !v72->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        v18 = started;
        goto LABEL_21;
      }
    }
    v36 = v87;
    started = CmpStartRMLogs(v87);
    if ( started < 0 )
      goto LABEL_119;
    started = CmTmCreateEnlistment(v11 + 72, v87[7], a4, v11);
    if ( started < 0 )
      goto LABEL_119;
    started = ObReferenceObjectByHandle(*((HANDLE *)v11 + 9), 0, 0LL, 0, &Object, 0LL);
    LOBYTE(v38) = 1;
    *((_QWORD *)v11 + 8) = Object;
    if ( (int)CmpAccountForLogReservation(v87, v39, v38) >= 0 )
      LODWORD(v80) = 96;
  }
  else
  {
    v36 = v87;
  }
  v40 = KeGetCurrentThread();
  --v40->KernelApcDisable;
  v84 = KeGetCurrentThread();
  v41 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v33);
  v42 = v41;
  v82 = (struct _KTHREAD *)v41;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
  {
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v41);
    v42 = (__int64)v82;
  }
  if ( v42 )
    *(_BYTE *)(v42 + 26) |= 1u;
  --CmpTransactionInitializingCount;
  qword_14034D768 = (__int64)v84;
  if ( (*((_DWORD *)v11 + 26) & 6) != 0 )
  {
    v74 = *(_QWORD **)v11;
    v75 = *(PVOID **)&v79->Header.Lock;
    if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 || *v75 != v11 )
      __fastfail(3u);
    *v75 = v74;
    v74[1] = v75;
    started = -1072103422;
  }
  else
  {
    *((_DWORD *)v11 + 26) = v80;
  }
  qword_14034D768 = 0LL;
  v43 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
  if ( v43 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v43);
  KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
  v44 = KeGetCurrentThread();
  v45 = v44->KernelApcDisable + 1;
  v44->KernelApcDisable = v45;
  if ( !v45
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v44->ApcState.ApcListHead[0].Flink != &v44->152
    && !v44->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  _InterlockedOr(v76, 0);
  if ( CmpTransactionInitializingEvent )
    ExfUnblockPushLock(&CmpTransactionInitializingEvent, 0LL);
  v46 = started;
  if ( started < 0 )
    goto LABEL_133;
  *a7 = v11;
  if ( v89 )
  {
    v50 = (struct _EX_RUNDOWN_REF *)v36[10];
    _m_prefetchw(&v50[347]);
    v51 = v50[347].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v51 != _InterlockedCompareExchange64((volatile signed __int64 *)&v50[347], v51 - 2, v51) )
    {
      ExfReleaseRundownProtection(v50 + 347);
      v46 = started;
    }
    v52 = KeGetCurrentThread();
    v53 = v52->KernelApcDisable + 1;
    v52->KernelApcDisable = v53;
    if ( !v53
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v52->ApcState.ApcListHead[0].Flink != &v52->152
      && !v52->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
      return (unsigned int)started;
    }
  }
  return v46;
}
