/*
 * XREFs of CmSetLastWriteTimeKey @ 0x140656248
 * Callers:
 *     NtSetInformationKey @ 0x140477A10 (NtSetInformationKey.c)
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
 *     CmpLockIXLockExclusive @ 0x140447FF0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140448044 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1404482CC (CmpRundownUnitOfWork.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmRmIsKCBDeleted @ 0x1404C69A0 (CmRmIsKCBDeleted.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     CmAddLogForAction @ 0x1404F1E20 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1404F3314 (CmpAllocateUnitOfWork.c)
 *     CmpRollbackTransactionArray @ 0x14065CCEC (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x140664768 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmSetLastWriteTimeKey(__int64 a1, _QWORD *a2)
{
  char *v3; // r15
  int v5; // ebx
  __int64 v6; // rdi
  char v7; // r12
  unsigned __int64 v8; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v10; // ax
  struct _KTHREAD *v11; // rax
  unsigned __int64 v12; // rtt
  ULONG_PTR v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG_PTR v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  ULONG_PTR v24; // r14
  unsigned int v25; // r12d
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *UnitOfWork; // rax
  _QWORD *v32; // rcx
  _QWORD *v33; // rdx
  struct _KTHREAD *v34; // rax
  struct _KTHREAD *v35; // r14
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rbx
  char *v39; // rax
  __int64 *v40; // rcx
  signed __int32 v41; // eax
  struct _KTHREAD *v42; // rcx
  __int16 v43; // ax
  unsigned __int64 v44; // rtt
  struct _KTHREAD *v45; // rcx
  __int16 v46; // ax
  int v47; // [rsp+40h] [rbp-20h] BYREF
  char *v48; // [rsp+48h] [rbp-18h] BYREF
  __int64 v49; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v50; // [rsp+B0h] [rbp+50h] BYREF
  int v51; // [rsp+B8h] [rbp+58h] BYREF

  v47 = -1;
  LOWORD(v3) = 0;
  v5 = 0;
  v48 = 0LL;
  v6 = 0LL;
  v51 = 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 )
    {
      _m_prefetchw(&CmpShutdownRundown);
      v8 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v8 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpShutdownRundown,
                   (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                   CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      CurrentThread = KeGetCurrentThread();
      v10 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v10;
      if ( !v10
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    _m_prefetchw(&CmpShutdownRundown);
    v12 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v12 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
      && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
    {
      break;
    }
    v7 = 1;
    CmpLockRegistry();
    v13 = *(_QWORD *)(a1 + 8);
    CmpLockKcbExclusive(v13, v14, v15, v16);
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      if ( CmRmIsKCBDeleted(v13, 0LL) )
      {
        v5 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
        goto LABEL_63;
      }
      v5 = CmpSearchAddTrans(a1, 0LL, 0LL, *(_QWORD *)(a1 + 56), *(__int128 **)(a1 + 64), 0, &v48);
      if ( v5 < 0 )
        goto LABEL_63;
      if ( (*(_DWORD *)(*(_QWORD *)(v13 + 32) + 144LL) & 2) != 0 )
      {
        v5 = -1072103423;
        goto LABEL_63;
      }
    }
    v3 = v48;
    if ( CmRmIsKCBDeleted(v13, (__int64)v48) )
    {
      v5 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      LOWORD(v3) = 0;
      goto LABEL_63;
    }
    if ( v3 )
    {
      UnitOfWork = CmpAllocateUnitOfWork();
      LOWORD(v3) = 0;
      v6 = (__int64)UnitOfWork;
      if ( !UnitOfWork )
      {
        v5 = -1073741670;
        goto LABEL_63;
      }
      v32 = UnitOfWork + 4;
      v33 = *(_QWORD **)(v13 + 208);
      UnitOfWork[4] = v13 + 200;
      UnitOfWork[5] = v33;
      if ( *v33 != v13 + 200 )
        __fastfail(3u);
      *v33 = v32;
      *(_QWORD *)(v13 + 208) = v32;
      CmpReferenceKeyControlBlock(v13);
      *(_QWORD *)(v6 + 48) = v13;
      v34 = KeGetCurrentThread();
      --v34->KernelApcDisable;
      v35 = KeGetCurrentThread();
      v37 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v36);
      v38 = v37;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v37);
      if ( v38 )
        *(_BYTE *)(v38 + 26) |= 1u;
      qword_14034D768 = (__int64)v35;
      v39 = v48 + 16;
      v40 = (__int64 *)*((_QWORD *)v48 + 3);
      *(_QWORD *)v6 = v48 + 16;
      *(_QWORD *)(v6 + 8) = v40;
      if ( (char *)*v40 != v39 )
        __fastfail(3u);
      *v40 = v6;
      *((_QWORD *)v39 + 1) = v6;
      qword_14034D768 = 0LL;
      v41 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
      if ( v41 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v41);
      KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
      v42 = KeGetCurrentThread();
      v43 = v42->KernelApcDisable + 1;
      v42->KernelApcDisable = v43;
      if ( !v43
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v42->ApcState.ApcListHead[0].Flink != &v42->152
        && !v42->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      *(_QWORD *)(v6 + 56) = v48;
      if ( CmpLockIXLockIntent((unsigned int *)(v13 + 240), v6) && CmpLockIXLockExclusive(v13 + 256, (_QWORD *)v6, 1) )
      {
        *(_DWORD *)(v6 + 68) = 8;
        *(_QWORD *)(v6 + 80) = *a2;
        v5 = CmAddLogForAction(v6, v28);
LABEL_55:
        if ( v5 >= 0 )
          goto LABEL_63;
      }
      else
      {
        v5 = -1072103423;
      }
      if ( v6 )
      {
        CmpRundownUnitOfWork((_QWORD *)v6, v28, v29, v30);
        ExFreePoolWithTag((PVOID)v6, 0x77554D43u);
      }
      goto LABEL_63;
    }
    v17 = v13 + 240;
    if ( *(int *)(v13 + 240) >= 0 )
    {
      v17 = v13 + 256;
      LOWORD(v3) = 0;
      if ( !*(_DWORD *)(v13 + 256) )
      {
        v24 = *(_QWORD *)(v13 + 32);
        v25 = *(_DWORD *)(v13 + 40);
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v24 + 2848), 1u);
        if ( HvpMarkCellDirty(v24, v25, 0, 0LL) )
        {
          v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v24 + 8))(v24, v25, &v47);
          v27 = v26;
          if ( v26 )
          {
            CmpUpdateKeyNodeAccessBits(v24, v26, v25);
            *(_QWORD *)(v27 + 4) = *a2;
            (*(void (__fastcall **)(ULONG_PTR, int *))(v24 + 16))(v24, &v47);
            *(_QWORD *)(v13 + 168) = *a2;
          }
          else
          {
            v5 = -1073741670;
          }
          LOWORD(v3) = 0;
        }
        else
        {
          v5 = -1073741443;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v24 + 2848));
        goto LABEL_55;
      }
    }
    v5 = CmpSnapshotTxOwnerArray(v17, &v50, &v49);
    if ( v5 < 0 )
      goto LABEL_63;
    CmpUnlockKcb((char *)v13);
    CmpUnlockRegistry();
    v5 = CmpRollbackTransactionArray(v50, v49, 0LL, &v51);
    if ( v5 < 0 )
    {
      CmpLockRegistry();
      CmpLockKcbExclusive(v13, v18, v19, v20);
LABEL_63:
      CmpUnlockKcb((char *)v13);
      CmpUnlockRegistry();
      _m_prefetchw(&CmpShutdownRundown);
      v44 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v44 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v45 = KeGetCurrentThread();
      v46 = v45->KernelApcDisable + 1;
      v45->KernelApcDisable = v46;
      if ( !v46
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v45->ApcState.ApcListHead[0].Flink != &v45->152
        && v45->SpecialApcDisable == (_WORD)v3 )
      {
        KiCheckForKernelApcDelivery();
      }
      return (unsigned int)v5;
    }
  }
  v21 = KeGetCurrentThread();
  v22 = v21->KernelApcDisable + 1;
  v21->KernelApcDisable = v22;
  if ( !v22
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
    && !v21->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 3221225865LL;
}
