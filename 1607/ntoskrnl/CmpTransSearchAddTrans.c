/*
 * XREFs of CmpTransSearchAddTrans @ 0x1403FE004
 * Callers:
 *     CmpTransSearchAddTransFromKeyBody @ 0x1403FBA4C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpTransSearchAddTransFromRm @ 0x1404C2298 (CmpTransSearchAddTransFromRm.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExBlockOnAddressPushLock @ 0x14009DC4C (ExBlockOnAddressPushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpBindHiveToTrans @ 0x1403FDF4C (CmpBindHiveToTrans.c)
 *     CmpTransReferenceTransaction @ 0x1403FDF98 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x1403FDFE8 (CmpTransDereferenceTransaction.c)
 *     CmpSearchForTrans @ 0x1403FE1D4 (CmpSearchForTrans.c)
 *     CmpTransInitializeTransaction @ 0x1404BDABC (CmpTransInitializeTransaction.c)
 *     CmpTransAllocateTrans @ 0x1404CFC84 (CmpTransAllocateTrans.c)
 */

__int64 __fastcall CmpTransSearchAddTrans(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        int a5,
        _QWORD *a6)
{
  _QWORD *Trans; // rsi
  int v7; // r13d
  int v12; // edi
  int v13; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  struct _KTHREAD *v31; // rax
  BOOLEAN v32; // al
  struct _KTHREAD *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  signed __int32 v42[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v43; // [rsp+30h] [rbp-38h] BYREF

  Trans = 0LL;
  v7 = 0;
  if ( a1 )
  {
    v12 = CmpTransReferenceTransaction(a1);
    if ( v12 < 0 )
      return (unsigned int)v12;
  }
  v13 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v15 = CmpSearchForTrans(a3, a1, a2);
      if ( !v15 )
      {
        if ( !a5 )
          goto LABEL_20;
        break;
      }
      if ( a1 && (*(_DWORD *)(v15 + 48) & 7) != 0 )
      {
LABEL_20:
        v12 = -1072103422;
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(v15 + 48) & 8) == 0 )
        break;
      if ( !a5 )
        goto LABEL_20;
      LODWORD(v43) = CmpTransactionInitializingCount;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v28, v29, v30);
      ExBlockOnAddressPushLock(
        (__int64)&CmpTransactionInitializingEvent,
        &CmpTransactionInitializingCount,
        &v43,
        4uLL,
        0LL);
    }
    if ( Trans )
      break;
    if ( v15 )
    {
      CmpBindHiveToTrans((__int64)a4, v15);
      goto LABEL_11;
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v21, v22, v23);
    Trans = (_QWORD *)CmpTransAllocateTrans(a1, a2, a3, a4);
    if ( !Trans )
    {
      v12 = -1073741670;
      goto LABEL_16;
    }
  }
  if ( !*(_QWORD *)(a3 + 80)
    || (v31 = KeGetCurrentThread(),
        --v31->KernelApcDisable,
        v32 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a3 + 80) + 2776LL)),
        (v7 = v32) != 0) )
  {
    v24 = *(_QWORD **)(a3 + 24);
    if ( *v24 != a3 + 16 )
      __fastfail(3u);
    Trans[1] = v24;
    *Trans = a3 + 16;
    *v24 = Trans;
    *(_QWORD *)(a3 + 24) = Trans;
    ++CmpTransactionInitializingCount;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v25, v26, v27);
    v13 = 0;
    v12 = CmpTransInitializeTransaction(Trans);
    if ( v12 < 0 )
    {
      v33 = KeGetCurrentThread();
      --v33->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v34 = *Trans;
      v35 = (_QWORD *)Trans[1];
      if ( *(_QWORD **)(*Trans + 8LL) != Trans || (_QWORD *)*v35 != Trans )
        __fastfail(3u);
      *v35 = v34;
      *(_QWORD *)(v34 + 8) = v35;
      --CmpTransactionInitializingCount;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v36, v37, v38);
      _InterlockedOr(v42, 0);
      if ( CmpTransactionInitializingEvent )
        ExfUnblockPushLock(&CmpTransactionInitializingEvent, 0LL);
      goto LABEL_21;
    }
    v16 = Trans;
LABEL_11:
    v12 = 0;
    *a6 = v16;
    goto LABEL_12;
  }
  v12 = -1073741431;
LABEL_21:
  if ( Trans )
    ExFreePoolWithTag(Trans, 0x72544D43u);
LABEL_12:
  if ( v7 )
  {
    ExReleaseRundownProtection(a4 + 347);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v39, v40, v41);
  }
  if ( v13 )
  {
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v17, v18, v19);
  }
LABEL_16:
  if ( a1 )
    CmpTransDereferenceTransaction(a1);
  return (unsigned int)v12;
}
