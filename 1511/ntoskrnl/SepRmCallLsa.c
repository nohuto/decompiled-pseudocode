/*
 * XREFs of SepRmCallLsa @ 0x1400D4F24
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     SepRmDispatchDataToLsa @ 0x1400D513C (SepRmDispatchDataToLsa.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     NtWaitForSingleObject @ 0x14042F250 (NtWaitForSingleObject.c)
 *     PsDetachSiloFromCurrentThread @ 0x14049BC98 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14049BCB0 (PsAttachSiloToCurrentThread.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     SepAdtOpenEtwReadyEvent @ 0x14052EEBC (SepAdtOpenEtwReadyEvent.c)
 *     AdtpWriteToEtw @ 0x14053A414 (AdtpWriteToEtw.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
 */

__int64 __fastcall SepRmCallLsa(__int64 a1)
{
  int v2; // ebp
  char v3; // r14
  __int64 *v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rcx
  __int64 v7; // rax
  signed __int32 v8; // ebp
  void *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // ebp
  NTSTATUS v14; // ebx
  struct _KEVENT *v15; // rcx
  __int64 **v16; // rcx
  struct _KEVENT *v17; // rcx
  __int64 *v18; // rdx
  __int64 v19; // rax
  char v20[8]; // [rsp+20h] [rbp-78h] BYREF
  HANDLE Object; // [rsp+28h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v23; // [rsp+48h] [rbp-50h] BYREF

  Object = 0LL;
  v2 = 1;
  v3 = SepRmAuditingEnabled;
  if ( !AdtpRegisteredWithEtw )
  {
    result = SepAdtOpenEtwReadyEvent(&Object);
    if ( (int)result < 0 )
      return result;
    v14 = NtWaitForSingleObject(Object, 1u, 0LL);
    NtClose(Object);
    if ( v14 < 0 )
      return (unsigned int)v14;
  }
  if ( v3 )
    KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0LL, (__int64)&v23);
  do
  {
    v4 = 0LL;
    if ( (*(_BYTE *)(a1 + 224) & 1) == 0 )
      goto LABEL_47;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 32), 1u);
    v6 = *(__int64 **)a1;
    if ( *(_QWORD *)a1 == a1 )
    {
      v15 = *(struct _KEVENT **)(a1 + 192);
      if ( v15 )
        KeSetEvent(v15, 0, 0);
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !v4 )
    {
LABEL_47:
      if ( (*(_BYTE *)(a1 + 224) & 2) == 0 )
        continue;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      v16 = (__int64 **)(a1 + 16);
      if ( *v16 == (__int64 *)v16 )
      {
        v17 = *(struct _KEVENT **)(a1 + 200);
        if ( v17 )
          KeSetEvent(v17, 0, 0);
      }
      else
      {
        v18 = *v16;
        if ( *((_DWORD *)*v16 + 13) == *(_DWORD *)(a1 + 184) + 1 )
        {
          v4 = *v16;
          v19 = *v18;
          if ( (__int64 **)v18[1] != v16 || *(__int64 **)(v19 + 8) != v18 )
            __fastfail(3u);
          *v16 = (__int64 *)v19;
          *(_QWORD *)(v19 + 8) = v16;
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( !v4 )
        continue;
    }
    if ( *((_DWORD *)v4 + 8) != 1 || (*(_DWORD *)(v4[3] + 20) & 2) != 0 )
    {
      if ( v3 )
        SepRmDispatchDataToLsa(v4);
    }
    else
    {
      v11 = v4[7];
      v20[0] = 0;
      v12 = PsAttachSiloToCurrentThread(v11);
      v13 = AdtpWriteToEtw(v4[3], v20);
      PsDetachSiloFromCurrentThread(v12);
      if ( v13 < 0 )
      {
        SepAdtLastAuditFailStatus = v13;
        _InterlockedIncrement(&SepAdtAuditFailureCount);
        if ( !v20[0] )
          SepAuditFailed((unsigned int)v13);
      }
      if ( (unsigned int)(*((_DWORD *)v4 + 4) - 4) <= 1 )
        ExFreePoolWithTag((PVOID)v4[3], 0);
    }
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 176), 0xFFFFFFFF);
    v9 = (void *)v4[7];
    v2 = v8 - 1;
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x746C6644u);
    v4[7] = 0LL;
    (*(void (__fastcall **)(__int64 *))(a1 + 216))(v4);
  }
  while ( v2 );
  if ( v3 )
    KiUnstackDetachProcess(&v23, 0LL);
  return 0LL;
}
