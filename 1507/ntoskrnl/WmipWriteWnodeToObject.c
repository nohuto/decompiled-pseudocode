/*
 * XREFs of WmipWriteWnodeToObject @ 0x14007516C
 * Callers:
 *     WmipProcessEvent @ 0x1404A9A7C (WmipProcessEvent.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     WmipClearIrpObjectList @ 0x140074C14 (WmipClearIrpObjectList.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     WmipQueueNotification @ 0x14055BE88 (WmipQueueNotification.c)
 */

__int64 __fastcall WmipWriteWnodeToObject(__int64 a1, unsigned int *a2, char a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rbx
  char v8; // r15
  unsigned int v9; // esi
  _DWORD *v10; // rcx
  __int64 v12; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0;
  KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, &LockHandle);
  v7 = *(_QWORD *)(a1 + 72);
  if ( v7 )
  {
    WmipClearIrpObjectList(*(_QWORD *)(a1 + 72));
    v7 &= -(__int64)(_InterlockedExchange64((volatile __int64 *)(v7 + 104), 0LL) != 0);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v8 = 1;
  if ( !v7 )
    goto LABEL_8;
  v9 = *a2;
  v10 = *(_DWORD **)(v7 + 24);
  if ( *a2 > *(_DWORD *)(*(_QWORD *)(v7 + 184) + 8LL) )
  {
    v10[12] = v9;
    *v10 = 56;
    v9 = 56;
    v10[11] = 32;
  }
  else
  {
    memmove(v10, a2, v9);
    v8 = 0;
  }
  *(_DWORD *)(v7 + 48) = 0;
  *(_QWORD *)(v7 + 56) = v9;
  pIofCompleteRequest((PIRP)v7, 0);
  if ( v8 )
  {
LABEL_8:
    v12 = a1 + 96;
    if ( !a3 )
      v12 = a1 + 128;
    return (unsigned int)WmipQueueNotification(a1, v12, a2);
  }
  return v6;
}
