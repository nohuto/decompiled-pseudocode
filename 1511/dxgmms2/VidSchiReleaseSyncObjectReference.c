/*
 * XREFs of VidSchiReleaseSyncObjectReference @ 0x1C000DF2C
 * Callers:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000DD84 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C000E84C (VidSchiCompleteSignalCommmand.c)
 *     VidSchDestroySyncObject @ 0x1C003ACE0 (VidSchDestroySyncObject.c)
 *     ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1C007A110 (--1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ.c)
 * Callees:
 *     ?FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C00102F8 (-FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 */

void __fastcall VidSchiReleaseSyncObjectReference(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  void *v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF) == 1 )
  {
    v2 = *(_DWORD *)(a1 + 40) - 3;
    if ( v2 )
    {
      if ( v2 == 1 && !*(_QWORD *)(a1 + 16) )
        VIDMM_GLOBAL::FreeFenceStorageSlot((struct VIDMM_MONITORED_FENCE_STORAGE *)(a1 + 48), *(_BYTE *)(a1 + 24) != 0);
    }
    else
    {
      ObfDereferenceObject(*(PVOID *)(a1 + 48));
      *(_QWORD *)(a1 + 48) = 0LL;
    }
    if ( *(_BYTE *)(a1 + 27) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 168) + 8LL), &LockHandle);
      v3 = *(_QWORD *)(a1 + 120);
      v4 = *(_QWORD **)(a1 + 128);
      if ( *(_QWORD *)(v3 + 8) != a1 + 120 || *v4 != a1 + 120 )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v5 = *(void **)(a1 + 168);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag(v5, 0);
    }
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
