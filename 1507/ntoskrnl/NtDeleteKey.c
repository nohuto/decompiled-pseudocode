/*
 * XREFs of NtDeleteKey @ 0x1404462E0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     CmObReferenceObjectByHandle @ 0x140428ADC (CmObReferenceObjectByHandle.c)
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     CmpIsSystemEntity @ 0x140481E04 (CmpIsSystemEntity.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140657510 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140657574 (CmKeyBodyRemapToVirtual.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1406D4790 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

NTSTATUS __stdcall NtDeleteKey(HANDLE KeyHandle)
{
  void *v1; // r8
  char v3; // si
  __int64 v4; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v6; // rtt
  struct _KTHREAD *v7; // rcx
  __int16 v8; // ax
  char v10; // r14
  NTSTATUS v11; // edi
  __int64 v12; // r9
  void *v13; // r8
  struct _KTHREAD *v14; // rax
  _QWORD *v15; // rbx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r9
  signed __int64 v20; // rcx
  ULONG_PTR v21; // rtt
  _QWORD *v22; // rbx
  signed __int64 v23; // rcx
  ULONG_PTR v24; // rtt
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  unsigned __int64 v29; // rtt
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  GUID *p_TransactionId; // r8
  int v33; // esi
  struct _KTHREAD *v34; // rcx
  __int16 v35; // ax
  unsigned __int64 v36; // rtt
  struct _KTHREAD *v37; // rcx
  __int16 v38; // ax
  PVOID Object[2]; // [rsp+48h] [rbp-49h] BYREF
  int v40; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v41[2]; // [rsp+60h] [rbp-31h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v42; // [rsp+70h] [rbp-21h] BYREF
  GUID *v43; // [rsp+78h] [rbp-19h] BYREF
  _QWORD v44[4]; // [rsp+80h] [rbp-11h] BYREF
  int v45; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v46; // [rsp+A4h] [rbp+13h]
  int v47; // [rsp+ACh] [rbp+1Bh]
  GUID TransactionId; // [rsp+B0h] [rbp+1Fh] BYREF

  v3 = 0;
  v40 = 0;
  memset(v44, 0, sizeof(v44));
  v4 = 0LL;
  v45 = 0;
  v46 = 0LL;
  v47 = 0;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v45, (char *)0x20000);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v6 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v6 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v7 = KeGetCurrentThread();
    v8 = v7->KernelApcDisable + 1;
    v7->KernelApcDisable = v8;
    if ( !v8
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
      && !v7->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( CmpTraceRoutine )
    {
      LOBYTE(v7) = 12;
      CmpTraceRoutine(v7, &v45, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return -1073741431;
  }
  v10 = 1;
  v11 = CmObReferenceObjectByHandle(KeyHandle, 0x10000u, v1, KeGetCurrentThread()->PreviousMode, Object, &v42);
  if ( v11 == -1073741790 && CmpVEEnabled && !(unsigned __int8)CmpIsSystemEntity(&v40) )
  {
    v11 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v13, KeGetCurrentThread()->PreviousMode, Object, &v42);
    if ( v11 >= 0 && !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object[0]) )
    {
      ObfDereferenceObject(Object[0]);
      v11 = -1073741790;
    }
    v3 = 1;
  }
  v41[1] = v41;
  v41[0] = v41;
  v14 = KeGetCurrentThread();
  --v14->KernelApcDisable;
  if ( v11 >= 0 )
  {
    v15 = Object[0];
    if ( CmpCallBackCount )
    {
      if ( !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
      {
        v44[0] = v15;
        LOBYTE(v16) = 1;
        v11 = CmpCallCallBacks(0, (unsigned int)v44, v16, 15, (__int64)v15, (__int64)v41);
        if ( v11 < 0 )
        {
          ObfDereferenceObject(v15);
          if ( v11 == -1073740541 )
            v11 = 0;
          goto LABEL_75;
        }
      }
    }
    if ( CmpTraceRoutine && v15 )
      v4 = v15[1];
    v18 = KeAbPreAcquire((ULONG_PTR)&ExpKeyManipLock, 0LL, 0LL, v12);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&ExpKeyManipLock, v18, (ULONG_PTR)&ExpKeyManipLock, v19);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
    if ( ExpControlKey && *((_QWORD *)Object[0] + 1) == *((_QWORD *)ExpControlKey + 1)
      || qword_1403253A8 && *((_QWORD *)Object[0] + 1) == *((_QWORD *)qword_1403253A8 + 1) )
    {
      _m_prefetchw(&ExpKeyManipLock);
      v20 = ExpKeyManipLock - 16;
      if ( (ExpKeyManipLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v20 = 0LL;
      if ( (ExpKeyManipLock & 2) != 0
        || (v21 = ExpKeyManipLock,
            v21 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, v20, ExpKeyManipLock)) )
      {
        ExfReleasePushLock(&ExpKeyManipLock, v17);
      }
      KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
      v22 = Object[0];
      v11 = 0;
      goto LABEL_74;
    }
    _m_prefetchw(&ExpKeyManipLock);
    v23 = ExpKeyManipLock - 16;
    if ( (ExpKeyManipLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v23 = 0LL;
    if ( (ExpKeyManipLock & 2) != 0
      || (v24 = ExpKeyManipLock,
          v24 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, v23, ExpKeyManipLock)) )
    {
      ExfReleasePushLock(&ExpKeyManipLock, v17);
    }
    KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
    v22 = Object[0];
    v26 = *((_QWORD *)Object[0] + 1);
    if ( (*(_DWORD *)(v26 + 4) & 0x80u) != 0
      || (v27 = *(_QWORD *)(v26 + 72)) != 0 && (*(_DWORD *)(v27 + 4) & 0x80u) != 0 )
    {
      v11 = -1073741790;
    }
    else
    {
      if ( v3 )
      {
        LOBYTE(v25) = KeGetCurrentThread()->PreviousMode;
        v28 = CmKeyBodyRemapToVirtual(Object, v25, 0x10000LL);
        v22 = Object[0];
        v11 = v28;
        if ( v28 < 0 )
          goto LABEL_74;
        if ( !CmpVEEnabled || (*(_WORD *)(*((_QWORD *)Object[0] + 1) + 186LL) & 0x100) == 0 )
          v11 = -1073741790;
      }
      if ( v11 < 0 )
        goto LABEL_74;
      _m_prefetchw(&CmpShutdownRundown);
      v29 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v29 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v30 = KeGetCurrentThread();
      v31 = v30->KernelApcDisable + 1;
      v30->KernelApcDisable = v31;
      if ( !v31
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
        && !v30->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v22 = Object[0];
      v10 = 0;
      v11 = CmDeleteKey(Object[0]);
    }
    if ( v11 >= 0 && (v42.HandleAttributes & 4) != 0 )
    {
      if ( v22[7] || v22[8] )
      {
        CmpLockRegistry();
        v33 = CmpSearchAddTrans((_DWORD)v22, 0, 0, v22[7], v22[8], 0, (__int64)&v43);
        if ( v33 >= 0 )
          TransactionId = v43[5];
        CmpUnlockRegistry();
        if ( v33 < 0 )
          goto LABEL_74;
        p_TransactionId = &TransactionId;
      }
      else
      {
        p_TransactionId = 0LL;
      }
      SeDeleteObjectAuditAlarmWithTransaction(v22, KeyHandle, p_TransactionId);
    }
LABEL_74:
    v11 = CmPostCallbackNotification(15, (_DWORD)v22, v11, (unsigned int)v44, (__int64)v41);
    ObfDereferenceObject(v22);
  }
LABEL_75:
  v34 = KeGetCurrentThread();
  v35 = v34->KernelApcDisable + 1;
  v34->KernelApcDisable = v35;
  if ( !v35
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v34->ApcState.ApcListHead[0].Flink != &v34->152
    && !v34->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( CmpTraceRoutine )
  {
    LOBYTE(v34) = 12;
    CmpTraceRoutine(v34, &v45, (unsigned int)v11, 0LL, v4, 0LL);
  }
  if ( v10 )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v36 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v36 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v37 = KeGetCurrentThread();
    v38 = v37->KernelApcDisable + 1;
    v37->KernelApcDisable = v38;
    if ( !v38
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v37->ApcState.ApcListHead[0].Flink != &v37->152
      && !v37->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v11;
}
