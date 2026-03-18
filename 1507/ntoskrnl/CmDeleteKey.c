/*
 * XREFs of CmDeleteKey @ 0x1404468EC
 * Callers:
 *     NtDeleteKey @ 0x1404462E0 (NtDeleteKey.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140427A00 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpSignalDeferredPosts @ 0x1404293F0 (CmpSignalDeferredPosts.c)
 *     CmpReportNotify @ 0x140429FE8 (CmpReportNotify.c)
 *     CmGetVisibleSubkeyCount @ 0x140446FB4 (CmGetVisibleSubkeyCount.c)
 *     CmpLockTwoKcbsExclusive @ 0x140447040 (CmpLockTwoKcbsExclusive.c)
 *     CmpMarkKcbDeletedAndCache @ 0x1404470AC (CmpMarkKcbDeletedAndCache.c)
 *     CmpLockIXLockExclusive @ 0x140447FF0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140448044 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1404482CC (CmpRundownUnitOfWork.c)
 *     CmpCleanUpSubKeyInfo @ 0x140448E64 (CmpCleanUpSubKeyInfo.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140449F10 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x140449FBC (CmpFreeKeyByCell.c)
 *     CmRmIsKCBDeleted @ 0x1404C69A0 (CmRmIsKCBDeleted.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpUnlockTwoKcbs @ 0x1404C6A80 (CmpUnlockTwoKcbs.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpUnlockHashEntry @ 0x1404C8730 (CmpUnlockHashEntry.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpLockHashEntryExclusive @ 0x1404CCB90 (CmpLockHashEntryExclusive.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     CmAddLogForAction @ 0x1404F1E20 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1404F3314 (CmpAllocateUnitOfWork.c)
 *     CmpRemoveFromDelayedDeref @ 0x14054DEEC (CmpRemoveFromDelayedDeref.c)
 *     CmpRollbackTransactionArray @ 0x14065CCEC (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x140664768 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmDeleteKey(_QWORD *a1)
{
  _QWORD *v1; // rsi
  __int64 *UnitOfWork; // r15
  __int64 v3; // rbx
  char i; // al
  struct _KTHREAD *v5; // rax
  unsigned __int64 v6; // rtt
  ULONG_PTR v7; // rdi
  __int64 v8; // r12
  ULONG_PTR v9; // r14
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v12; // r13
  _DWORD *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  ULONG_PTR v16; // rcx
  int v17; // esi
  unsigned int v18; // r12d
  __int64 v19; // rax
  unsigned __int64 v20; // rtt
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  _QWORD *v24; // r12
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  struct _KTHREAD *v28; // rax
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rsi
  _QWORD *v33; // rax
  signed __int32 v34; // eax
  struct _KTHREAD *v35; // rcx
  __int16 v36; // ax
  char *v37; // rcx
  _QWORD *v38; // rdx
  struct _KTHREAD *v39; // rax
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // r12
  __int64 **v43; // rax
  signed __int32 v44; // eax
  struct _KTHREAD *v45; // rcx
  __int16 v46; // ax
  unsigned __int64 v47; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v49; // ax
  struct _KTHREAD *v50; // rcx
  __int16 v51; // ax
  unsigned int v52; // [rsp+40h] [rbp-29h] BYREF
  int v53; // [rsp+44h] [rbp-25h] BYREF
  unsigned int v54; // [rsp+48h] [rbp-21h]
  unsigned int v55; // [rsp+4Ch] [rbp-1Dh]
  PVOID P; // [rsp+50h] [rbp-19h]
  __int64 v57; // [rsp+58h] [rbp-11h] BYREF
  __int64 v58; // [rsp+60h] [rbp-9h] BYREF
  _QWORD *v59[11]; // [rsp+68h] [rbp-1h] BYREF
  struct _KTHREAD *v61; // [rsp+D8h] [rbp+6Fh]
  struct _KTHREAD *v62; // [rsp+D8h] [rbp+6Fh]
  char v63; // [rsp+E0h] [rbp+77h]
  int v64; // [rsp+E8h] [rbp+7Fh] BYREF

  v64 = -1;
  v59[1] = v59;
  v58 = 0LL;
  v59[0] = v59;
  v1 = a1;
  P = 0LL;
  v53 = 0;
  v63 = 1;
  UnitOfWork = 0LL;
  v3 = MEMORY[0xFFFFF78000000014];
  for ( i = 0; ; i = 1 )
  {
    if ( i )
    {
      _m_prefetchw(&CmpShutdownRundown);
      v47 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v47 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      CurrentThread = KeGetCurrentThread();
      v49 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v49;
      if ( !v49
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    v5 = KeGetCurrentThread();
    --v5->KernelApcDisable;
    _m_prefetchw(&CmpShutdownRundown);
    v6 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v6 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&CmpShutdownRundown,
                 (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                 CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
      && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
    {
      v50 = KeGetCurrentThread();
      v51 = v50->KernelApcDisable + 1;
      v50->KernelApcDisable = v51;
      if ( !v51
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v50->ApcState.ApcListHead[0].Flink != &v50->152
        && !v50->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return 3221225865LL;
    }
    CmpLockRegistry();
    v7 = v1[1];
    if ( !*(_QWORD *)(v7 + 72) )
    {
      CmpUnlockRegistry();
      return 3221225761LL;
    }
    CmpLockHashEntryExclusive(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 16));
    CmpLockTwoKcbsExclusive(*(_QWORD *)(v7 + 72), v7);
    if ( v1[7] || v1[8] )
    {
      if ( (unsigned __int8)CmRmIsKCBDeleted(v7, 0LL) == 1 )
      {
LABEL_99:
        v17 = 0;
        goto LABEL_29;
      }
      v17 = CmpSearchAddTrans((_DWORD)v1, 0, 0, v1[7], v1[8], 0, (__int64)&v58);
      if ( v17 < 0 )
        goto LABEL_29;
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 144LL) & 2) != 0 )
      {
        v17 = -1072103423;
        goto LABEL_29;
      }
    }
    v8 = v58;
    if ( (unsigned __int8)CmRmIsKCBDeleted(v7, v58) == 1 )
      goto LABEL_99;
    v9 = *(_QWORD *)(v7 + 32);
    v54 = *(_DWORD *)(v7 + 40);
    v10 = v54;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v9 + 2848), 1u);
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v9 + 8))(v9, v10, &v64);
    v12 = v11;
    if ( !v11 )
    {
      v17 = -1073741670;
      goto LABEL_28;
    }
    CmpUpdateKeyNodeAccessBits(v9, v11, v10);
    v13 = 0LL;
    v55 = *(_DWORD *)(v12 + 16);
    v14 = *(_QWORD *)(v7 + 232);
    if ( v14 && v14 != v8 || (v15 = *(_QWORD *)(v7 + 72)) == 0 )
    {
      v17 = -1073741535;
      goto LABEL_25;
    }
    if ( v8 )
      break;
    v16 = v15 + 240;
    if ( *(int *)(v15 + 240) >= 0 )
    {
      v16 = v7 + 240;
      if ( !*(_DWORD *)(v7 + 240) )
      {
        v16 = v7 + 256;
        if ( !*(_DWORD *)(v7 + 256) )
        {
          if ( (*(_DWORD *)(v7 + 8) & 1) != 0 )
            CmpRemoveFromDelayedDeref(v7);
          goto LABEL_17;
        }
      }
    }
    v17 = CmpSnapshotTxOwnerArray(v16, &v52, &v57);
    if ( v17 < 0 )
      goto LABEL_25;
    (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v64);
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v7 + 32) + 2848LL));
    CmpUnlockTwoKcbs(*(_QWORD *)(v7 + 72), v7);
    CmpUnlockHashEntry(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 16));
    CmpUnlockRegistry();
    v17 = CmpRollbackTransactionArray(v52, v57, 0LL, &v53);
    if ( v17 < 0 )
    {
      CmpLockRegistry();
      CmpLockHashEntryExclusive(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 16));
      CmpLockTwoKcbsExclusive(*(_QWORD *)(v7 + 72), v7);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v7 + 32) + 2848LL), 1u);
LABEL_28:
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v7 + 32) + 2848LL));
      goto LABEL_29;
    }
    v1 = a1;
  }
  P = (PVOID)CmpAllocateUnitOfWork();
  v24 = P;
  if ( P )
  {
    UnitOfWork = (__int64 *)CmpAllocateUnitOfWork();
    if ( UnitOfWork )
    {
      v25 = v24 + 4;
      v26 = *(_QWORD *)(v7 + 72) + 200LL;
      v27 = *(_QWORD **)(*(_QWORD *)(v7 + 72) + 208LL);
      v24[4] = v26;
      v24[5] = v27;
      if ( *v27 != v26 )
        __fastfail(3u);
      *v27 = v25;
      *(_QWORD *)(v26 + 8) = v25;
      CmpReferenceKeyControlBlock(*(_QWORD *)(v7 + 72));
      v24[6] = *(_QWORD *)(v7 + 72);
      v28 = KeGetCurrentThread();
      --v28->KernelApcDisable;
      v61 = KeGetCurrentThread();
      v30 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v29);
      v31 = v30;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v30);
      if ( v31 )
        *(_BYTE *)(v31 + 26) |= 1u;
      qword_14034D768 = (__int64)v61;
      v32 = v58 + 16;
      v33 = *(_QWORD **)(v58 + 24);
      *v24 = v58 + 16;
      v24[1] = v33;
      if ( *v33 != v32 )
        __fastfail(3u);
      *v33 = v24;
      *(_QWORD *)(v32 + 8) = v24;
      qword_14034D768 = 0LL;
      v34 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
      if ( v34 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v34);
      KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
      v35 = KeGetCurrentThread();
      v36 = v35->KernelApcDisable + 1;
      v35->KernelApcDisable = v36;
      if ( !v36
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v35->ApcState.ApcListHead[0].Flink != &v35->152
        && !v35->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v37 = (char *)(UnitOfWork + 4);
      v24[7] = v58;
      v38 = *(_QWORD **)(v7 + 208);
      UnitOfWork[4] = v7 + 200;
      UnitOfWork[5] = (__int64)v38;
      if ( *v38 != v7 + 200 )
        __fastfail(3u);
      *v38 = v37;
      *(_QWORD *)(v7 + 208) = v37;
      CmpReferenceKeyControlBlock(v7);
      UnitOfWork[6] = v7;
      v39 = KeGetCurrentThread();
      --v39->KernelApcDisable;
      v62 = KeGetCurrentThread();
      v41 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v40);
      v42 = v41;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v41);
      if ( v42 )
        *(_BYTE *)(v42 + 26) |= 1u;
      qword_14034D768 = (__int64)v62;
      v43 = *(__int64 ***)(v32 + 8);
      *UnitOfWork = v32;
      UnitOfWork[1] = (__int64)v43;
      if ( *v43 != (__int64 *)v32 )
        __fastfail(3u);
      *v43 = UnitOfWork;
      *(_QWORD *)(v32 + 8) = UnitOfWork;
      qword_14034D768 = 0LL;
      v44 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
      if ( v44 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v44);
      KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
      v45 = KeGetCurrentThread();
      v46 = v45->KernelApcDisable + 1;
      v45->KernelApcDisable = v46;
      if ( !v46
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v45->ApcState.ApcListHead[0].Flink != &v45->152
        && !v45->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v8 = v58;
      v13 = P;
      UnitOfWork[7] = v58;
      if ( !(unsigned __int8)CmpLockIXLockIntent(*(_QWORD *)(v7 + 72) + 240LL, v13)
        || !(unsigned __int8)CmpLockIXLockExclusive(v7 + 240, UnitOfWork, 0LL)
        || !(unsigned __int8)CmpLockIXLockExclusive(v7 + 256, UnitOfWork, 1LL) )
      {
        v17 = -1072103423;
        goto LABEL_63;
      }
LABEL_17:
      if ( (unsigned int)CmGetVisibleSubkeyCount(v7, v12, v8) || (*(_BYTE *)(v12 + 2) & 8) != 0 )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v64);
        v12 = 0LL;
        v17 = -1073741535;
      }
      else
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v64);
        v12 = 0LL;
        if ( v8 )
        {
          v13[17] = 3;
          *((_QWORD *)v13 + 10) = v7;
          *((_DWORD *)UnitOfWork + 17) = 2;
          ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v7 + 32) + 2848LL));
          v63 = 0;
          v17 = CmAddLogForAction(UnitOfWork);
          CmpReportNotify(v7, *(_QWORD *)(v7 + 32), *(_DWORD *)(v7 + 40), v8, 1, (__int64)v59);
        }
        else
        {
          CmpReportNotify(v7, v9, v54, 0LL, 1, (__int64)v59);
          v17 = CmpFreeKeyByCell(v9);
          if ( v17 < 0 )
          {
LABEL_63:
            v24 = P;
            goto LABEL_64;
          }
          CmpFlushNotifiesOnKeyBodyList(v7, 0LL, 0LL);
          CmpCleanUpSubKeyInfo(*(_QWORD *)(v7 + 72));
          v18 = v55;
          v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v9 + 8))(v9, v55, &v64);
          v12 = v19;
          if ( v19 )
          {
            CmpUpdateKeyNodeAccessBits(v9, v19, v18);
            *(_WORD *)(*(_QWORD *)(v7 + 72) + 176LL) = *(_WORD *)(v12 + 52);
            *(_QWORD *)(v12 + 4) = v3;
            *(_QWORD *)(*(_QWORD *)(a1[1] + 72LL) + 168LL) = v3;
            (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v64);
            v12 = 0LL;
          }
          CmpMarkKcbDeletedAndCache(v7);
          *(_DWORD *)(v7 + 40) = -1;
        }
      }
      if ( v17 >= 0 )
        goto LABEL_25;
      goto LABEL_63;
    }
  }
  v17 = -1073741670;
LABEL_64:
  if ( v24 )
  {
    CmpRundownUnitOfWork((ULONG_PTR)v24);
    ExFreePoolWithTag(v24, 0x77554D43u);
  }
  if ( UnitOfWork )
  {
    CmpRundownUnitOfWork((ULONG_PTR)UnitOfWork);
    ExFreePoolWithTag(UnitOfWork, 0x77554D43u);
  }
LABEL_25:
  if ( v12 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v64);
  if ( v63 )
    goto LABEL_28;
LABEL_29:
  CmpUnlockTwoKcbs(*(_QWORD *)(v7 + 72), v7);
  CmpUnlockHashEntry(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 16));
  CmpUnlockRegistry();
  CmpSignalDeferredPosts(v59);
  _m_prefetchw(&CmpShutdownRundown);
  v20 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v20 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  v21 = KeGetCurrentThread();
  v22 = v21->KernelApcDisable + 1;
  v21->KernelApcDisable = v22;
  if ( !v22
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
    && !v21->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v17;
}
