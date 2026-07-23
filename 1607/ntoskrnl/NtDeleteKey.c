/*
 * XREFs of NtDeleteKey @ 0x1403FA918
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1403FBA4C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmObReferenceObjectByHandle @ 0x1404025CC (CmObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpIsSystemEntity @ 0x14040E004 (CmpIsSystemEntity.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405FFE80 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405FFEFC (CmKeyBodyRemapToVirtual.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1406914A4 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

NTSTATUS __stdcall NtDeleteKey(HANDLE KeyHandle)
{
  char v1; // si
  __int64 v2; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  BOOLEAN v8; // r14
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *v14; // rax
  _QWORD *v15; // rdi
  int v16; // r8d
  __int64 v17; // rdi
  signed __int64 v18; // rcx
  ULONG_PTR v19; // rtt
  _QWORD *v20; // rdi
  signed __int64 v21; // rcx
  ULONG_PTR v22; // rtt
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  GUID *p_TransactionId; // r8
  int v31; // esi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  PVOID Object; // [rsp+30h] [rbp-49h] BYREF
  int v37; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v38[8]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v39[2]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v40; // [rsp+58h] [rbp-21h] BYREF
  _QWORD v41[4]; // [rsp+60h] [rbp-19h] BYREF
  int v42; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v43; // [rsp+8Ch] [rbp+13h]
  int v44; // [rsp+94h] [rbp+1Bh]
  GUID TransactionId; // [rsp+98h] [rbp+1Fh] BYREF

  v37 = 0;
  v42 = 0;
  v1 = 0;
  memset(v41, 0, sizeof(v41));
  v2 = 0LL;
  v43 = 0LL;
  v44 = 0;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v42, 0x20000uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( !v8 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
    v10 = -1073741431;
    goto LABEL_65;
  }
  LOBYTE(v7) = KeGetCurrentThread()->PreviousMode;
  v10 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 0x10000, v6, v7, (__int64)&Object, (__int64)v38);
  if ( v10 == -1073741790 && CmpVEEnabled && !(unsigned __int8)CmpIsSystemEntity(&v37) )
  {
    LOBYTE(v13) = KeGetCurrentThread()->PreviousMode;
    v10 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 131097, v12, v13, (__int64)&Object, (__int64)v38);
    if ( v10 >= 0 && !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
      ObfDereferenceObject(Object);
      v10 = -1073741790;
    }
    v1 = 1;
  }
  v39[1] = v39;
  v39[0] = v39;
  v14 = KeGetCurrentThread();
  --v14->KernelApcDisable;
  if ( v10 >= 0 )
  {
    v15 = Object;
    if ( CmpCallBackCount )
    {
      if ( !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
      {
        v41[0] = v15;
        LOBYTE(v16) = 1;
        v10 = CmpCallCallBacks(0, (unsigned int)v41, v16, 15, (__int64)v15, (__int64)v39);
        if ( v10 < 0 )
        {
          ObfDereferenceObject(v15);
          if ( v10 == -1073740541 )
            v10 = 0;
          goto LABEL_64;
        }
      }
    }
    if ( CmpTraceRoutine && v15 )
      v2 = v15[1];
    v17 = KeAbPreAcquire((ULONG_PTR)&ExpKeyManipLock, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&ExpKeyManipLock, v17, (ULONG_PTR)&ExpKeyManipLock);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    if ( ExpControlKey && *((_QWORD *)Object + 1) == *((_QWORD *)ExpControlKey + 1)
      || qword_1402FCF78 && *((_QWORD *)Object + 1) == *((_QWORD *)qword_1402FCF78 + 1) )
    {
      _m_prefetchw(&ExpKeyManipLock);
      if ( (ExpKeyManipLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v18 = 0LL;
      else
        v18 = ExpKeyManipLock - 16;
      if ( (ExpKeyManipLock & 2) != 0
        || (v19 = ExpKeyManipLock,
            v19 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, v18, ExpKeyManipLock)) )
      {
        ExfReleasePushLock(&ExpKeyManipLock);
      }
      KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
      v20 = Object;
      v10 = 0;
      goto LABEL_63;
    }
    _m_prefetchw(&ExpKeyManipLock);
    if ( (ExpKeyManipLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v21 = 0LL;
    else
      v21 = ExpKeyManipLock - 16;
    if ( (ExpKeyManipLock & 2) != 0
      || (v22 = ExpKeyManipLock,
          v22 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, v21, ExpKeyManipLock)) )
    {
      ExfReleasePushLock(&ExpKeyManipLock);
    }
    KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
    v20 = Object;
    v24 = *((_QWORD *)Object + 1);
    if ( (*(_DWORD *)(v24 + 4) & 0x80u) != 0
      || (v25 = *(_QWORD *)(v24 + 64)) != 0 && (*(_DWORD *)(v25 + 4) & 0x80u) != 0 )
    {
      v10 = -1073741790;
    }
    else
    {
      if ( v1 )
      {
        LOBYTE(v23) = KeGetCurrentThread()->PreviousMode;
        v26 = CmKeyBodyRemapToVirtual(&Object, v23, 0x10000LL);
        v20 = Object;
        v10 = v26;
        if ( v26 < 0 )
          goto LABEL_63;
        if ( !CmpVEEnabled || (*(_WORD *)(*((_QWORD *)Object + 1) + 178LL) & 0x100) == 0 )
          v10 = -1073741790;
      }
      if ( v10 < 0 )
        goto LABEL_63;
      ExReleaseRundownProtection(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v27, v28, v29);
      v20 = Object;
      v8 = 0;
      v10 = CmDeleteKey(Object);
    }
    if ( v10 >= 0 && (v38[0] & 4) != 0 )
    {
      if ( v20[7] || v20[8] )
      {
        CmpLockRegistry();
        v31 = CmpTransSearchAddTransFromKeyBody(v20, &v40);
        if ( v31 >= 0 )
          TransactionId = *(GUID *)(v40 + 88);
        CmpUnlockRegistry();
        if ( v31 < 0 )
          goto LABEL_63;
        p_TransactionId = &TransactionId;
      }
      else
      {
        p_TransactionId = 0LL;
      }
      SeDeleteObjectAuditAlarmWithTransaction(v20, KeyHandle, p_TransactionId);
    }
LABEL_63:
    v10 = CmPostCallbackNotification(15, (_DWORD)v20, v10, (unsigned int)v41, (__int64)v39);
    ObfDereferenceObject(v20);
  }
LABEL_64:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
LABEL_65:
  if ( CmpTraceRoutine )
  {
    LOBYTE(v9) = 12;
    CmpTraceRoutine(v9, &v42, (unsigned int)v10, 0LL, v2, 0LL);
  }
  if ( v8 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v32, v33, v34);
  }
  return v10;
}
