/*
 * XREFs of SepRmCallLsa @ 0x1400AF870
 * Callers:
 *     <none>
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x1400098A0 (PsDetachSiloFromCurrentThread.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     SepRmDispatchDataToLsa @ 0x1400AFB40 (SepRmDispatchDataToLsa.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     NtWaitForSingleObject @ 0x1404469A0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     AdtpWriteToEtw @ 0x14056B25C (AdtpWriteToEtw.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140570080 (SepAdtOpenEtwReadyEvent.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
 */

__int64 __fastcall SepRmCallLsa(__int64 a1)
{
  int v2; // ebp
  char v3; // r14
  __int64 result; // rax
  NTSTATUS v5; // ebx
  __int64 *v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rcx
  struct _KEVENT *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 **v14; // rcx
  struct _KEVENT *v15; // rcx
  __int64 *v16; // rdx
  __int64 v17; // rax
  struct _KTHREAD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  int v21; // ebp
  signed __int32 v22; // ebp
  void *v23; // rcx
  char v24[8]; // [rsp+20h] [rbp-78h] BYREF
  HANDLE Object; // [rsp+28h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  char v27[48]; // [rsp+48h] [rbp-50h] BYREF

  Object = 0LL;
  v2 = 1;
  v3 = SepRmAuditingEnabled;
  if ( !AdtpRegisteredWithEtw )
  {
    result = SepAdtOpenEtwReadyEvent(&Object);
    if ( (int)result < 0 )
      return result;
    v5 = NtWaitForSingleObject(Object, 1u, 0LL);
    NtClose(Object);
    if ( v5 < 0 )
      return (unsigned int)v5;
  }
  if ( v3 )
    KiStackAttachProcess(SepRmLsaCallProcess);
  do
  {
    v6 = 0LL;
    if ( (*(_BYTE *)(a1 + 224) & 1) == 0 )
      goto LABEL_46;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 32), 1u);
    v8 = *(__int64 **)a1;
    if ( *(_QWORD *)a1 == a1 )
    {
      v9 = *(struct _KEVENT **)(a1 + 192);
      if ( v9 )
        KeSetEvent(v9, 0, 0);
    }
    else if ( *((_DWORD *)v8 + 13) == *(_DWORD *)(a1 + 184) + 1 )
    {
      v6 = *(__int64 **)a1;
      v10 = *v8;
      if ( v8[1] != a1 || *(__int64 **)(v10 + 8) != v8 )
        __fastfail(3u);
      *(_QWORD *)a1 = v10;
      *(_QWORD *)(v10 + 8) = a1;
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 32));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
    if ( !v6 )
    {
LABEL_46:
      if ( (*(_BYTE *)(a1 + 224) & 2) == 0 )
        continue;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      v14 = (__int64 **)(a1 + 16);
      if ( *v14 == (__int64 *)v14 )
      {
        v15 = *(struct _KEVENT **)(a1 + 200);
        if ( v15 )
          KeSetEvent(v15, 0, 0);
      }
      else
      {
        v16 = *v14;
        if ( *((_DWORD *)*v14 + 13) == *(_DWORD *)(a1 + 184) + 1 )
        {
          v6 = *v14;
          v17 = *v16;
          if ( (__int64 **)v16[1] != v14 || *(__int64 **)(v17 + 8) != v16 )
            __fastfail(3u);
          *v14 = (__int64 *)v17;
          *(_QWORD *)(v17 + 8) = v14;
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( !v6 )
        continue;
    }
    if ( *((_DWORD *)v6 + 8) != 1 || (*(_DWORD *)(v6[3] + 20) & 2) != 0 )
    {
      if ( v3 )
        SepRmDispatchDataToLsa(v6);
    }
    else
    {
      v18 = KeGetCurrentThread();
      v19 = v6[7];
      v24[0] = 0;
      v20 = *(_QWORD *)&v18[1].WaitBlockFill11[160];
      *(_QWORD *)&v18[1].WaitBlockFill11[160] = v19;
      v21 = AdtpWriteToEtw(v6[3], v24);
      PsDetachSiloFromCurrentThread(v20);
      if ( v21 < 0 )
      {
        SepAdtLastAuditFailStatus = v21;
        _InterlockedIncrement(&SepAdtAuditFailureCount);
        if ( !v24[0] )
          SepAuditFailed((unsigned int)v21);
      }
      if ( (unsigned int)(*((_DWORD *)v6 + 4) - 4) <= 1 )
        ExFreePoolWithTag((PVOID)v6[3], 0);
    }
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
    v22 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 176), 0xFFFFFFFF);
    v23 = (void *)v6[7];
    v2 = v22 - 1;
    if ( v23 )
    {
      ObfDereferenceObjectWithTag(v23, 0x69416553u);
      v6[7] = 0LL;
    }
    (*(void (__fastcall **)(__int64 *))(a1 + 216))(v6);
  }
  while ( v2 );
  if ( v3 )
    KiUnstackDetachProcess(v27, 0LL);
  return 0LL;
}
