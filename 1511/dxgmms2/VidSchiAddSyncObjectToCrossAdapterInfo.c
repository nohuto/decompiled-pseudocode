/*
 * XREFs of VidSchiAddSyncObjectToCrossAdapterInfo @ 0x1C0020CE0
 * Callers:
 *     VidSchCreateSyncObject @ 0x1C003B730 (VidSchCreateSyncObject.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiAddSyncObjectToCrossAdapterInfo(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // rcx
  __int64 v4; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 168) + 8LL), &LockHandle);
  _InterlockedIncrement(*(volatile signed __int32 **)(a1 + 168));
  v2 = a1 + 120;
  v3 = (__int64 *)(*(_QWORD *)(a1 + 168) + 16LL);
  v4 = *v3;
  *(_QWORD *)(a1 + 120) = *v3;
  *(_QWORD *)(a1 + 128) = v3;
  if ( *(__int64 **)(v4 + 8) != v3 )
    __fastfail(3u);
  *(_QWORD *)(v4 + 8) = v2;
  *v3 = v2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
