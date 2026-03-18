/*
 * XREFs of PopUpdateWakeSourceWorker @ 0x1401ECBD0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PopWakeInfoDereference @ 0x14011A63C (PopWakeInfoDereference.c)
 *     PopAcquireWakeSourceSpinLock @ 0x14011A800 (PopAcquireWakeSourceSpinLock.c)
 *     IoControlPnpDeviceActionQueue @ 0x140124618 (IoControlPnpDeviceActionQueue.c)
 *     PnpUnlockDeviceActionQueue @ 0x140124628 (PnpUnlockDeviceActionQueue.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopFreeWakeSource @ 0x140635E18 (PopFreeWakeSource.c)
 *     PopProcessWakeSourceWork @ 0x140635ED4 (PopProcessWakeSourceWork.c)
 */

__int64 **PopUpdateWakeSourceWorker()
{
  PVOID v0; // rbx
  __int64 v1; // rdi
  int v2; // esi
  __int64 ***v3; // rcx
  __int64 **v4; // rdx
  __int64 ***v5; // rax
  __int64 **v6; // rdx
  __int64 *v7; // rcx
  __int64 ***v8; // rcx
  struct _KEVENT *v9; // rcx
  _QWORD *v10; // rcx
  PVOID *v11; // rax
  __int64 **result; // rax
  __int64 *v13; // rax
  __int64 *v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 **v15; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  __int64 ***v17; // [rsp+78h] [rbp+28h] BYREF
  __int64 ***v18; // [rsp+80h] [rbp+30h] BYREF

  v15 = &v14;
  v14 = (__int64 *)&v14;
  PopAcquireWakeSourceSpinLock(&LockHandle);
  while ( 1 )
  {
    v0 = PopWakeSourceWorkList;
    PopWakeSourceLockOwner = 0LL;
    if ( PopWakeSourceWorkList == &PopWakeSourceWorkList )
      break;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v1 = *((_QWORD *)v0 + 3);
    IoControlPnpDeviceActionQueue(1);
    v2 = PopProcessWakeSourceWork(v0, &v17, &v18);
    PnpUnlockDeviceActionQueue();
    ObfDereferenceObjectWithTag(*((PVOID *)v0 + 2), 0x746C6644u);
    PopAcquireWakeSourceSpinLock(&LockHandle);
    if ( v1 != PopCurrentWakeInfo && v1 != PopPendingWakeInfo || v2 < 0 )
    {
      v5 = v17;
LABEL_12:
      if ( v5 )
      {
        v8 = (__int64 ***)v15;
        *v5 = &v14;
        v5[1] = (__int64 **)v8;
        if ( *v8 != &v14 )
          __fastfail(3u);
        *v8 = (__int64 **)v5;
        v15 = (__int64 **)v5;
      }
      goto LABEL_15;
    }
    v3 = v17;
    v4 = *(__int64 ***)(v1 + 32);
    *v17 = (__int64 **)(v1 + 24);
    v3[1] = v4;
    if ( *v4 != (__int64 *)(v1 + 24) )
      __fastfail(3u);
    v17 = 0LL;
    *v4 = (__int64 *)v3;
    *(_QWORD *)(v1 + 32) = v3;
    ++*(_DWORD *)(v1 + 40);
    v5 = v18;
    if ( v18 )
    {
      v6 = *v18;
      v7 = (__int64 *)v18[1];
      if ( (*v18)[1] != (__int64 *)v18 || (__int64 ***)*v7 != v18 )
        __fastfail(3u);
      *v7 = (__int64)v6;
      v6[1] = v7;
      --*(_DWORD *)(v1 + 40);
      v17 = v5;
      goto LABEL_12;
    }
LABEL_15:
    PopWakeInfoDereference(v1);
    v9 = (struct _KEVENT *)*((_QWORD *)v0 + 4);
    if ( v9 )
      KeSetEvent(v9, 0, 0);
    v10 = *(_QWORD **)v0;
    v11 = (PVOID *)*((_QWORD *)v0 + 1);
    if ( *(PVOID *)(*(_QWORD *)v0 + 8LL) != v0 || *v11 != v0 )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    ExFreePoolWithTag(v0, 0x206D654Du);
  }
  PopWakeSourceWorkInProgress = 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  while ( 1 )
  {
    result = &v14;
    if ( v14 == (__int64 *)&v14 )
      break;
    v13 = (__int64 *)*v14;
    if ( (__int64 **)v14[1] != &v14 || (__int64 *)v13[1] != v14 )
      __fastfail(3u);
    v14 = (__int64 *)*v14;
    v13[1] = (__int64)&v14;
    PopFreeWakeSource();
  }
  return result;
}
