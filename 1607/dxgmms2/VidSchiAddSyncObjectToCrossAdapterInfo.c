/*
 * XREFs of VidSchiAddSyncObjectToCrossAdapterInfo @ 0x1C0023D30
 * Callers:
 *     VidSchCreateSyncObject @ 0x1C00444F0 (VidSchCreateSyncObject.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiAddSyncObjectToCrossAdapterInfo(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 168) + 8LL), &LockHandle);
  _InterlockedIncrement(*(volatile signed __int32 **)(a1 + 168));
  v2 = (_QWORD *)(a1 + 120);
  v3 = *(_QWORD *)(a1 + 168) + 16LL;
  v4 = *(_QWORD *)v3;
  if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 )
    __fastfail(3u);
  *(_QWORD *)(a1 + 128) = v3;
  *v2 = v4;
  *(_QWORD *)(v4 + 8) = v2;
  *(_QWORD *)v3 = v2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
