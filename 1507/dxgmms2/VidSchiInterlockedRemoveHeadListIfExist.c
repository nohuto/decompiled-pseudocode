/*
 * XREFs of VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0003310
 * Callers:
 *     VidSchiDecrementContextReference @ 0x1C0001880 (VidSchiDecrementContextReference.c)
 *     VidSchiAllocateDmaPacket @ 0x1C002E664 (VidSchiAllocateDmaPacket.c)
 *     VidSchiAllocateQueuePacket @ 0x1C002F130 (VidSchiAllocateQueuePacket.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall VidSchiInterlockedRemoveHeadListIfExist(KSPIN_LOCK *a1, __int64 **a2, _DWORD *a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  if ( *a2 != (__int64 *)a2 )
  {
    v5 = *a2;
    v6 = **a2;
    if ( (__int64 **)(*a2)[1] != a2 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *a2 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = a2;
    if ( a3 )
      --*a3;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
