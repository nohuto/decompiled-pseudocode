/*
 * XREFs of NtDeleteKey @ 0x1403DA844
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmObReferenceObjectByHandle @ 0x1403F3664 (CmObReferenceObjectByHandle.c)
 *     CmpIsSystemEntity @ 0x1403FBD30 (CmpIsSystemEntity.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405E17EC (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405E1850 (CmKeyBodyRemapToVirtual.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1406520E0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

NTSTATUS __stdcall NtDeleteKey(HANDLE KeyHandle)
{
  char v2; // si
  __int64 v3; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r8d
  int v6; // r9d
  char v7; // r14
  NTSTATUS v8; // ebx
  struct _KTHREAD *v9; // rax
  _QWORD *v10; // rdi
  int v11; // r8d
  __int64 v12; // rdi
  signed __int64 v13; // rcx
  ULONG_PTR v14; // rtt
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  PVOID v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r9d
  signed __int64 v26; // rcx
  ULONG_PTR v27; // rtt
  int v28; // eax
  GUID *p_TransactionId; // r8
  int v30; // esi
  PVOID Object; // [rsp+48h] [rbp-49h] BYREF
  int v32; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v33[8]; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v34[2]; // [rsp+60h] [rbp-31h] BYREF
  char *v35; // [rsp+70h] [rbp-21h] BYREF
  _QWORD v36[4]; // [rsp+78h] [rbp-19h] BYREF
  int v37; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v38; // [rsp+A4h] [rbp+13h]
  int v39; // [rsp+ACh] [rbp+1Bh]
  GUID TransactionId; // [rsp+B0h] [rbp+1Fh] BYREF

  v2 = 0;
  v32 = 0;
  memset(v36, 0, sizeof(v36));
  v3 = 0LL;
  v37 = 0;
  v38 = 0LL;
  v39 = 0;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v37, (char *)0x20000);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v7 = 1;
    LOBYTE(v6) = KeGetCurrentThread()->PreviousMode;
    v8 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 0x10000, v5, v6, (__int64)&Object, (__int64)v33);
    if ( v8 == -1073741790 && CmpVEEnabled && !(unsigned __int8)CmpIsSystemEntity(&v32) )
    {
      LOBYTE(v25) = KeGetCurrentThread()->PreviousMode;
      v8 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 131097, v24, v25, (__int64)&Object, (__int64)v33);
      if ( v8 >= 0 && !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
      {
        ObfDereferenceObject(Object);
        v8 = -1073741790;
      }
      v2 = 1;
    }
    v34[1] = v34;
    v34[0] = v34;
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    if ( v8 < 0 )
      goto LABEL_31;
    v10 = Object;
    if ( CmpCallBackCount )
    {
      if ( !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
      {
        v36[0] = v10;
        LOBYTE(v11) = 1;
        v8 = CmpCallCallBacks(0, (unsigned int)v36, v11, 15, (__int64)v10, (__int64)v34);
        if ( v8 < 0 )
        {
          ObfDereferenceObject(v10);
          if ( v8 == -1073740541 )
            v8 = 0;
          goto LABEL_31;
        }
      }
    }
    if ( CmpTraceRoutine && v10 )
      v3 = v10[1];
    v12 = KeAbPreAcquire((ULONG_PTR)&ExpKeyManipLock, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&ExpKeyManipLock, v12, (ULONG_PTR)&ExpKeyManipLock);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    if ( ExpControlKey && *((_QWORD *)Object + 1) == *((_QWORD *)ExpControlKey + 1)
      || qword_1402D61F8 && *((_QWORD *)Object + 1) == *((_QWORD *)qword_1402D61F8 + 1) )
    {
      _m_prefetchw(&ExpKeyManipLock);
      v26 = ExpKeyManipLock - 16;
      if ( (ExpKeyManipLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v26 = 0LL;
      if ( (ExpKeyManipLock & 2) != 0
        || (v27 = ExpKeyManipLock,
            v27 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, v26, ExpKeyManipLock)) )
      {
        ExfReleasePushLock(&ExpKeyManipLock);
      }
      KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
      v18 = Object;
      v8 = 0;
      goto LABEL_30;
    }
    _m_prefetchw(&ExpKeyManipLock);
    v13 = ExpKeyManipLock - 16;
    if ( (ExpKeyManipLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v13 = 0LL;
    if ( (ExpKeyManipLock & 2) != 0
      || (v14 = ExpKeyManipLock,
          v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, v13, ExpKeyManipLock)) )
    {
      ExfReleasePushLock(&ExpKeyManipLock);
    }
    KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
    v18 = Object;
    v19 = *((_QWORD *)Object + 1);
    if ( (*(_DWORD *)(v19 + 4) & 0x80u) != 0
      || (v20 = *(_QWORD *)(v19 + 72)) != 0 && (*(_DWORD *)(v20 + 4) & 0x80u) != 0 )
    {
      v8 = -1073741790;
    }
    else
    {
      if ( v2 )
      {
        v28 = CmKeyBodyRemapToVirtual(&Object);
        v18 = Object;
        v8 = v28;
        if ( v28 < 0 )
          goto LABEL_30;
        if ( !CmpVEEnabled || (*(_WORD *)(*((_QWORD *)Object + 1) + 186LL) & 0x100) == 0 )
          v8 = -1073741790;
      }
      if ( v8 < 0 )
      {
LABEL_30:
        v8 = CmPostCallbackNotification(15, (_DWORD)v18, v8, (unsigned int)v36, (__int64)v34);
        ObfDereferenceObject(v18);
LABEL_31:
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        if ( CmpTraceRoutine )
        {
          LOBYTE(v21) = 12;
          CmpTraceRoutine(v21, &v37, (unsigned int)v8, 0LL, v3, 0LL);
        }
        if ( v7 )
        {
          ExReleaseRundownProtection_0(&CmpShutdownRundown);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        }
        return v8;
      }
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v18 = Object;
      v7 = 0;
      v8 = CmDeleteKey(Object);
    }
    if ( v8 >= 0 && (v33[0] & 4) != 0 )
    {
      if ( *((_QWORD *)v18 + 7) || *((_QWORD *)v18 + 8) )
      {
        CmpLockRegistry(v19, v15, v16, v17);
        v30 = CmpSearchAddTrans((__int64)v18, 0LL, 0LL, *((_QWORD *)v18 + 7), *((__int128 **)v18 + 8), 0, &v35);
        if ( v30 >= 0 )
          TransactionId = (GUID)*((_OWORD *)v35 + 5);
        CmpUnlockRegistry();
        if ( v30 < 0 )
          goto LABEL_30;
        p_TransactionId = &TransactionId;
      }
      else
      {
        p_TransactionId = 0LL;
      }
      SeDeleteObjectAuditAlarmWithTransaction(v18, KeyHandle, p_TransactionId);
    }
    goto LABEL_30;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v8 = -1073741431;
  if ( CmpTraceRoutine )
  {
    LOBYTE(v23) = 12;
    CmpTraceRoutine(v23, &v37, 3221225865LL, 0LL, 0LL, 0LL);
  }
  return v8;
}
