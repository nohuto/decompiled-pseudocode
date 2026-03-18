/*
 * XREFs of CmpTransMgrPrepare @ 0x1404F0D4C
 * Callers:
 *     CmKtmNotification @ 0x1404EF414 (CmKtmNotification.c)
 *     CmpRmUnDoPhase @ 0x14065D500 (CmpRmUnDoPhase.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmpGetNextActiveHive @ 0x140445EE8 (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     HvpMarkDirty @ 0x14049F900 (HvpMarkDirty.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmListGetNextElement @ 0x1404F1644 (CmListGetNextElement.c)
 *     CmpIsHiveBoundToTrans @ 0x1404F1D50 (CmpIsHiveBoundToTrans.c)
 *     CmpTransMgrSyncHive @ 0x1404F3070 (CmpTransMgrSyncHive.c)
 */

__int64 __fastcall CmpTransMgrPrepare(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // esi
  struct _KTHREAD *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdi
  BOOLEAN v13; // bl
  signed __int32 v14; // eax
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  __int64 NextElement; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _EX_RUNDOWN_REF *v21; // rbp
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  ULONG_PTR v24; // rdi
  ULONG_PTR v25; // rdi
  struct _EX_RUNDOWN_REF *v27; // rdi
  unsigned __int64 v28; // rtt
  unsigned __int64 v29; // rtt
  struct _EX_RUNDOWN_REF *v30; // rcx
  unsigned __int64 v31; // rtt
  ULONG_PTR v32; // r14
  struct _KTHREAD *v33; // r15
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rbp
  char v37; // al
  ULONG_PTR v38; // rbp
  char v39; // r14
  signed __int32 v40; // eax
  __int64 v41; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  *a3 = 0;
  *a4 = 0;
  --CurrentThread->KernelApcDisable;
  v10 = KeGetCurrentThread();
  v11 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, (__int64)a4);
  v12 = v11;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v11);
  v13 = 1;
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  qword_14034D768 = (__int64)v10;
  *(_DWORD *)(a2 + 104) |= 1u;
  qword_14034D768 = 0LL;
  v14 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
  if ( v14 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v14);
  KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable + 1;
  v15->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
  {
    *a4 = 1;
    return 0LL;
  }
  else
  {
    CmpLockRegistry();
    v41 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(a2 + 16, &v41, 0LL);
      if ( !NextElement )
        break;
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(NextElement + 48) + 32LL) + 5400LL) == a1 )
        ++*a3;
    }
    v21 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
    if ( !v21 )
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v24 )
      {
        NextActiveHive = CmpGetNextActiveHive(i, v18, v19, v20);
        v24 = (ULONG_PTR)NextActiveHive;
        if ( !NextActiveHive )
        {
          v25 = qword_1403168C0;
          if ( (*(_DWORD *)(*(_QWORD *)(qword_1403168C0 + 64) + 144LL) & 1) != 0 )
          {
            CmpUnlockRegistry();
            return v5;
          }
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(qword_1403168C0 + 2848), 1u);
          v32 = *(_QWORD *)(v25 + 2840);
          v33 = KeGetCurrentThread();
          v35 = KeAbPreAcquire(v32, 0LL, 0LL, v34);
          v36 = v35;
          if ( !_interlockedbittestandreset((volatile signed __int32 *)v32, 0) )
            ExpAcquireFastMutexContended(v32, v35);
          if ( v36 )
            *(_BYTE *)(v36 + 26) |= 1u;
          *(_QWORD *)(v32 + 8) = v33;
          v37 = HvpMarkDirty(v25, 0, 32, 0);
          v38 = *(_QWORD *)(v25 + 2840);
          v39 = v37;
          *(_QWORD *)(v38 + 8) = 0LL;
          v40 = _InterlockedCompareExchange((volatile signed __int32 *)v38, 1, 0);
          if ( v40 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)v38, v40);
          KeAbPostRelease(v38);
          if ( v39 )
          {
            *(_DWORD *)(*(_QWORD *)(v25 + 64) + 144LL) |= 1u;
            ExReleaseResourceLite(*(PERESOURCE *)(v25 + 2848));
            CmpUnlockRegistry();
            if ( (int)CmpFlushHive(v25, 0) >= 0 )
              return v5;
          }
          else
          {
            ExReleaseResourceLite(*(PERESOURCE *)(v25 + 2848));
            CmpUnlockRegistry();
          }
          return (unsigned int)-1073741670;
        }
        if ( NextActiveHive[675] == a1
          && (NextActiveHive[18] & 2) == 0
          && (unsigned __int8)CmpIsHiveBoundToTrans(NextActiveHive, a2) == 1 )
        {
          CmpUnlockRegistry();
          v5 = CmpTransMgrSyncHive(v24);
          if ( (v5 & 0x80000000) != 0 )
          {
            v30 = (struct _EX_RUNDOWN_REF *)(v24 + 2776);
            _m_prefetchw((const void *)(v24 + 2776));
            v31 = *(_QWORD *)(v24 + 2776) & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v31 == _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 2776), v31 - 2, v31) )
              return v5;
LABEL_35:
            ExfReleaseRundownProtection(v30);
            return v5;
          }
          CmpLockRegistry();
        }
      }
    }
    v27 = v21 + 347;
    _m_prefetchw(&v21[347]);
    v28 = v21[347].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v28 != _InterlockedCompareExchange64((volatile signed __int64 *)&v21[347], v28 + 2, v28) )
      v13 = ExfAcquireRundownProtection(v21 + 347);
    CmpUnlockRegistry();
    if ( v13 )
    {
      v5 = CmpTransMgrSyncHive((ULONG_PTR)v21);
      _m_prefetchw(v27);
      v29 = v27->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v29 != _InterlockedCompareExchange64((volatile signed __int64 *)v27, v29 - 2, v29) )
      {
        v30 = v21 + 347;
        goto LABEL_35;
      }
    }
    return v5;
  }
}
