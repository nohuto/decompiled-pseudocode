/*
 * XREFs of VidSchDestroyDeviceSyncObject @ 0x1C000E640
 * Callers:
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C0090BD0 (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 * Callees:
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C000E5CC (VidSchiRundownMonitoredFenceCpuWaiters.c)
 */

void __fastcall VidSchDestroyDeviceSyncObject(__int64 a1, __int64 a2, char a3, __int64 *a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 **v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 8) + 1856LL), &LockHandle);
  if ( a3 )
    VidSchiRundownMonitoredFenceCpuWaiters(a1, a2, v8, v9);
  if ( a4 )
  {
    v10 = *a4;
    if ( *a4 )
    {
      v11 = (__int64 **)a4[1];
      if ( *(__int64 **)(v10 + 8) != a4 || *v11 != a4 )
        __fastfail(3u);
      *v11 = (__int64 *)v10;
      *(_QWORD *)(v10 + 8) = v11;
      a4[1] = 0LL;
      *a4 = 0LL;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
