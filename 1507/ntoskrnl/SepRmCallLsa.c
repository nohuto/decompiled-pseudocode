/*
 * XREFs of SepRmCallLsa @ 0x140117528
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SepRmDispatchDataToLsa @ 0x140117760 (SepRmDispatchDataToLsa.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     NtWaitForSingleObject @ 0x140494560 (NtWaitForSingleObject.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     PsDetachSiloFromCurrentThread @ 0x14052EA14 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14052EA20 (PsAttachSiloToCurrentThread.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140592A78 (SepAdtOpenEtwReadyEvent.c)
 *     AdtpWriteToEtw @ 0x1405A166C (AdtpWriteToEtw.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 */

__int64 __fastcall SepRmCallLsa(__int64 a1)
{
  char v1; // r14
  int v3; // ebp
  __int64 *v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rcx
  __int64 v7; // rax
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax
  signed __int32 v10; // ebp
  void *v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // ebp
  NTSTATUS v16; // ebx
  struct _KEVENT *v17; // rcx
  __int64 **v18; // rcx
  struct _KEVENT *v19; // rcx
  __int64 *v20; // rdx
  __int64 v21; // rax
  char v22[8]; // [rsp+20h] [rbp-88h] BYREF
  HANDLE Object; // [rsp+28h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v25[48]; // [rsp+48h] [rbp-60h] BYREF

  v1 = SepRmAuditingEnabled;
  v3 = 1;
  Object = 0LL;
  if ( !AdtpRegisteredWithEtw )
  {
    result = SepAdtOpenEtwReadyEvent(&Object);
    if ( (int)result < 0 )
      return result;
    v16 = NtWaitForSingleObject(Object, 1u, 0LL);
    NtClose(Object);
    if ( v16 < 0 )
      return (unsigned int)v16;
  }
  if ( v1 )
    KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0, (__int64)v25);
  do
  {
    v4 = 0LL;
    if ( (*(_BYTE *)(a1 + 224) & 1) == 0 )
      goto LABEL_51;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 32), 1u);
    v6 = *(__int64 **)a1;
    if ( *(_QWORD *)a1 == a1 )
    {
      v17 = *(struct _KEVENT **)(a1 + 192);
      if ( v17 )
        KeSetEvent(v17, 0, 0);
    }
    else if ( *((_DWORD *)v6 + 13) == *(_DWORD *)(a1 + 184) + 1 )
    {
      v4 = *(__int64 **)a1;
      v7 = *v6;
      if ( v6[1] != a1 || *(__int64 **)(v7 + 8) != v6 )
        __fastfail(3u);
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(v7 + 8) = a1;
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 32));
    v8 = KeGetCurrentThread();
    v9 = v8->KernelApcDisable + 1;
    v8->KernelApcDisable = v9;
    if ( !v9
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
      && !v8->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( !v4 )
    {
LABEL_51:
      if ( (*(_BYTE *)(a1 + 224) & 2) == 0 )
        continue;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      v18 = (__int64 **)(a1 + 16);
      if ( *v18 == (__int64 *)v18 )
      {
        v19 = *(struct _KEVENT **)(a1 + 200);
        if ( v19 )
          KeSetEvent(v19, 0, 0);
      }
      else
      {
        v20 = *v18;
        if ( *((_DWORD *)*v18 + 13) == *(_DWORD *)(a1 + 184) + 1 )
        {
          v4 = *v18;
          v21 = *v20;
          if ( (__int64 **)v20[1] != v18 || *(__int64 **)(v21 + 8) != v20 )
            __fastfail(3u);
          *v18 = (__int64 *)v21;
          *(_QWORD *)(v21 + 8) = v18;
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( !v4 )
        continue;
    }
    if ( *((_DWORD *)v4 + 8) != 1 || (*(_DWORD *)(v4[3] + 20) & 2) != 0 )
    {
      if ( v1 )
        SepRmDispatchDataToLsa(v4);
    }
    else
    {
      v13 = v4[7];
      v22[0] = 0;
      v14 = PsAttachSiloToCurrentThread(v13);
      v15 = AdtpWriteToEtw(v4[3], v22);
      PsDetachSiloFromCurrentThread(v14);
      if ( v15 < 0 )
      {
        SepAdtLastAuditFailStatus = v15;
        _InterlockedIncrement(&SepAdtAuditFailureCount);
        if ( !v22[0] )
          SepAuditFailed((unsigned int)v15);
      }
      if ( (unsigned int)(*((_DWORD *)v4 + 4) - 4) <= 1 )
        ExFreePoolWithTag((PVOID)v4[3], 0);
    }
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
    v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 176), 0xFFFFFFFF);
    v11 = (void *)v4[7];
    v3 = v10 - 1;
    if ( v11 )
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
    v4[7] = 0LL;
    (*(void (__fastcall **)(__int64 *))(a1 + 216))(v4);
  }
  while ( v3 );
  if ( v1 )
    KiUnstackDetachProcess((struct _KTHREAD *)v25, 0);
  return 0LL;
}
