/*
 * XREFs of CmpSearchAddTrans @ 0x1403D6DD0
 * Callers:
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     NtDeleteKey @ 0x1403DA844 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmEnumerateKey @ 0x1403FDED0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     CmpBuildHashStackAndLookupCache @ 0x140408290 (CmpBuildHashStackAndLookupCache.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     CmEnumerateValueKey @ 0x140423940 (CmEnumerateValueKey.c)
 *     CmQueryMultipleValueKey @ 0x1404A8708 (CmQueryMultipleValueKey.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405E0250 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405E0744 (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405E1414 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpRecoverEnlistment @ 0x1405E5AF8 (CmpRecoverEnlistment.c)
 *     CmpRmAnalysisPhase @ 0x1405E5F84 (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x1405E6190 (CmpRmReDoPhase.c)
 * Callees:
 *     TmIsTransactionActive @ 0x140001198 (TmIsTransactionActive.c)
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExBlockOnAddressPushLock @ 0x1400D26F0 (ExBlockOnAddressPushLock.c)
 *     ExfUnblockPushLock @ 0x140150264 (ExfUnblockPushLock.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     CmpSearchForTrans @ 0x1403D7280 (CmpSearchForTrans.c)
 *     CmpBindHiveToTrans @ 0x1403D7314 (CmpBindHiveToTrans.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     CmpStartRMLogs @ 0x140484E88 (CmpStartRMLogs.c)
 *     CmpAccountForLogReservation @ 0x1404BA95C (CmpAccountForLogReservation.c)
 *     CmTmCreateEnlistment @ 0x1404C43FC (CmTmCreateEnlistment.c)
 */

__int64 __fastcall CmpSearchAddTrans(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int128 *a5, char a6, char **a7)
{
  __int64 v8; // rax
  bool v10; // zf
  char *v11; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rax
  int v15; // eax
  NTSTATUS started; // ebx
  __int64 v17; // r8
  _QWORD *v18; // rax
  char *PoolWithTag; // rax
  __int128 v20; // xmm0
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  struct _KTHREAD *v27; // rax
  struct _KTHREAD *v28; // rax
  struct _KTHREAD *v29; // rax
  _QWORD *v30; // rdx
  PVOID *v31; // rax
  _QWORD *v32; // rcx
  PVOID *v33; // rax
  signed __int32 v34[8]; // [rsp+0h] [rbp-88h] BYREF
  NTSTATUS v35; // [rsp+40h] [rbp-48h]
  int v36; // [rsp+44h] [rbp-44h]
  __int64 v37; // [rsp+48h] [rbp-40h] BYREF
  PVOID P; // [rsp+50h] [rbp-38h]
  PVOID **v39; // [rsp+58h] [rbp-30h]
  PVOID Object; // [rsp+60h] [rbp-28h] BYREF
  char v41[32]; // [rsp+68h] [rbp-20h] BYREF
  _QWORD *v43; // [rsp+98h] [rbp+10h]
  __int64 v44; // [rsp+A0h] [rbp+18h]
  BOOLEAN v45; // [rsp+C0h] [rbp+38h]

  v44 = a3;
  v43 = a2;
  v8 = a1;
  v10 = CmpMiniNTBoot == 0;
  v11 = 0LL;
  v35 = 0;
  *a7 = 0LL;
  P = 0LL;
  v45 = 0;
  if ( !v10 )
    return 0LL;
  if ( !a5 )
  {
    if ( !a4 )
      return 0LL;
    ObfReferenceObject((PVOID)a4);
    if ( !TmIsTransactionActive((PKTRANSACTION)a4) )
    {
      started = -1072103421;
      goto LABEL_16;
    }
    v8 = a1;
    a3 = v44;
    a2 = v43;
LABEL_7:
    if ( v8 )
    {
      v17 = *(_QWORD *)(v8 + 8);
      if ( (v17 & 1) != 0 )
        v17 ^= 1uLL;
      a3 = *(_QWORD *)(v17 + 32);
      v44 = a3;
    }
    else
    {
      if ( a2 )
        goto LABEL_9;
      if ( !a3 )
      {
LABEL_63:
        started = -1072103419;
        goto LABEL_16;
      }
    }
    v43 = *(_QWORD **)(a3 + 5400);
    if ( v43 )
      goto LABEL_9;
    if ( a3 && (*(_DWORD *)(a3 + 5360) & 8) == 0 )
    {
      started = 0;
      goto LABEL_16;
    }
    goto LABEL_63;
  }
  if ( !a2 )
    goto LABEL_7;
  while ( 1 )
  {
LABEL_9:
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v14 = CmpSearchForTrans(v43, a4, a5);
      v11 = (char *)v14;
      if ( !v14 )
        break;
      v15 = *(_DWORD *)(v14 + 104);
      if ( (v15 & 8) == 0 )
      {
        if ( a4 && (v15 & 7) != 0 )
        {
          started = -1072103422;
        }
        else
        {
          CmpBindHiveToTrans(v44, v11);
          started = v35;
        }
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        goto LABEL_15;
      }
      LODWORD(v37) = CmpTransactionInitializingCount;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( !a6 )
        goto LABEL_49;
      ExBlockOnAddressPushLock(
        (__int64)&CmpTransactionInitializingEvent,
        &CmpTransactionInitializingCount,
        &v37,
        4uLL,
        0LL);
    }
    v18 = P;
    if ( P )
      break;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !a6 )
      goto LABEL_49;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0xA8uLL, 0x72544D43u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      started = -1073741670;
      goto LABEL_16;
    }
    memset(PoolWithTag, 0, 0xA8uLL);
    *((_QWORD *)v11 + 6) = a4;
    *((_QWORD *)v11 + 12) = CLFS_LSN_INVALID_EXT;
    *((_QWORD *)v11 + 7) = v43;
    *((_DWORD *)v11 + 26) = 8;
    if ( a5 )
      v20 = *a5;
    else
      v20 = *(_OWORD *)(a4 + 176);
    *((_OWORD *)v11 + 5) = v20;
    *((_QWORD *)v11 + 3) = v11 + 16;
    *((_QWORD *)v11 + 2) = v11 + 16;
    *((_QWORD *)v11 + 5) = v11 + 32;
    *((_QWORD *)v11 + 4) = v11 + 32;
    CmpBindHiveToTrans(v44, v11);
    P = v11;
  }
  v21 = v43;
  v11 = (char *)P;
  if ( !v43[10] )
    goto LABEL_35;
  v28 = KeGetCurrentThread();
  --v28->KernelApcDisable;
  v45 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v43[10] + 2776LL));
  if ( !v45 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_49:
    started = -1072103422;
    goto LABEL_16;
  }
  v21 = v43;
  v18 = v11;
LABEL_35:
  v22 = (_QWORD *)v21[3];
  v23 = v21 + 2;
  v18[1] = v22;
  *v18 = v23;
  v39 = (PVOID **)(v18 + 1);
  if ( (_QWORD *)*v22 != v23 )
    __fastfail(3u);
  *v22 = v18;
  v23[1] = v18;
  ++CmpTransactionInitializingCount;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v36 = 64;
  P = 0LL;
  if ( !a4 )
  {
    started = 0;
    goto LABEL_42;
  }
  v24 = v43;
  if ( v43 != CmRmSystem )
  {
    started = CmpSearchAddTrans(0, 0, qword_1402C77F0, a4, (__int64)a5, a6, (__int64)v41);
    if ( started >= 0 )
    {
      v24 = v43;
      goto LABEL_38;
    }
    goto LABEL_71;
  }
LABEL_38:
  started = CmpStartRMLogs(v24);
  if ( started < 0 || (started = CmTmCreateEnlistment(v11 + 72, v43[7], a4, v11), started < 0) )
  {
LABEL_71:
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    v30 = *(_QWORD **)v11;
    v31 = *v39;
    if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 || *v31 != v11 )
      __fastfail(3u);
    *v31 = v30;
    v30[1] = v31;
    --CmpTransactionInitializingCount;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    _InterlockedOr(v34, 0);
    if ( CmpTransactionInitializingEvent )
      ExfUnblockPushLock(&CmpTransactionInitializingEvent, 0LL);
    goto LABEL_75;
  }
  started = ObReferenceObjectByHandle(*((HANDLE *)v11 + 9), 0, 0LL, 0, &Object, 0LL);
  LOBYTE(v25) = 1;
  *((_QWORD *)v11 + 8) = Object;
  if ( (int)CmpAccountForLogReservation(v43, v26, v25) >= 0 )
    v36 = 96;
LABEL_42:
  v27 = KeGetCurrentThread();
  --v27->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  --CmpTransactionInitializingCount;
  if ( (*((_DWORD *)v11 + 26) & 6) != 0 )
  {
    v32 = *(_QWORD **)v11;
    v33 = *v39;
    if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 || *v33 != v11 )
      __fastfail(3u);
    *v33 = v32;
    started = -1072103422;
    v32[1] = v33;
  }
  else
  {
    *((_DWORD *)v11 + 26) = v36;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  _InterlockedOr(v34, 0);
  if ( CmpTransactionInitializingEvent )
    ExfUnblockPushLock(&CmpTransactionInitializingEvent, 0LL);
  if ( started < 0 )
  {
LABEL_75:
    ExFreePoolWithTag(v11, 0x72544D43u);
    if ( v45 )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v43[10] + 2776LL));
LABEL_15:
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
LABEL_16:
    if ( a4 )
      ObfDereferenceObject((PVOID)a4);
    if ( P )
      ExFreePoolWithTag(P, 0x72544D43u);
    if ( started >= 0 )
      *a7 = v11;
    return (unsigned int)started;
  }
  *a7 = v11;
  if ( v45 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v43[10] + 2776LL));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)started;
}
