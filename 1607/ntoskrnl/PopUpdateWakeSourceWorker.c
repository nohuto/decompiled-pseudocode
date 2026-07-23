/*
 * XREFs of PopUpdateWakeSourceWorker @ 0x140205844
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IoControlPnpDeviceActionQueue @ 0x140110C4C (IoControlPnpDeviceActionQueue.c)
 *     PnpUnlockDeviceActionQueue @ 0x140110C5C (PnpUnlockDeviceActionQueue.c)
 *     PopWakeInfoDereference @ 0x140125D7C (PopWakeInfoDereference.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PopFreeWakeSource @ 0x14066E2A4 (PopFreeWakeSource.c)
 *     PopProcessWakeSourceWork @ 0x14066E360 (PopProcessWakeSourceWork.c)
 */

__int64 **PopUpdateWakeSourceWorker()
{
  PVOID v0; // rbx
  __int64 v1; // rdi
  int v2; // esi
  __int64 **v3; // rdx
  __int64 ***v4; // rax
  __int64 ***v5; // rax
  __int64 **v6; // rdx
  __int64 *v7; // rcx
  _QWORD *v8; // rcx
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
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  while ( 1 )
  {
    v0 = PopWakeSourceWorkList;
    if ( PopWakeSourceWorkList == &PopWakeSourceWorkList )
      break;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v1 = *((_QWORD *)v0 + 3);
    IoControlPnpDeviceActionQueue(1);
    v2 = PopProcessWakeSourceWork(v0, &v17, &v18);
    PnpUnlockDeviceActionQueue();
    ObfDereferenceObjectWithTag(*((PVOID *)v0 + 2), 0x746C6644u);
    KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
    if ( v1 != PopCurrentWakeInfo && v1 != PopPendingWakeInfo || v2 < 0 )
    {
      v5 = v17;
LABEL_12:
      if ( v5 )
      {
        v8 = v15;
        if ( *v15 != (__int64 *)&v14 )
          __fastfail(3u);
        v5[1] = v15;
        *v5 = &v14;
        *v8 = v5;
        v15 = (__int64 **)v5;
      }
      goto LABEL_15;
    }
    v3 = *(__int64 ***)(v1 + 32);
    if ( *v3 != (__int64 *)(v1 + 24) )
      __fastfail(3u);
    v4 = v17;
    v17 = 0LL;
    *v4 = (__int64 **)(v1 + 24);
    v4[1] = v3;
    *v3 = (__int64 *)v4;
    *(_QWORD *)(v1 + 32) = v4;
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
