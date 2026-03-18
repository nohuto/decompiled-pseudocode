/*
 * XREFs of VidSchiControlVSyncThread @ 0x1C0002990
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiControlVSync @ 0x1C00426E0 (VidSchiControlVSync.c)
 */

void __fastcall VidSchiControlVSyncThread(__int64 a1)
{
  struct _ERESOURCE *v1; // rbp
  int v3; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (struct _ERESOURCE *)(a1 + 1232);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1232), 1u);
  if ( *(_BYTE *)(a1 + 1936)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2004), 0, 0)
    && !*(_DWORD *)(a1 + 1952)
    && !*(_DWORD *)(*(_QWORD *)(a1 + 16) + 2160LL)
    && !*(_DWORD *)(a1 + 952)
    && !*(_DWORD *)(a1 + 968) )
  {
    v3 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1856), &LockHandle);
    if ( *(_DWORD *)(a1 + 2008) >= *(_DWORD *)(a1 + 2016) )
    {
      *(_DWORD *)(a1 + 2008) = -1;
      v3 = 1;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v3 )
    {
      VidSchiControlVSync(a1, 0LL, 3LL);
      *(_BYTE *)(a1 + 1960) = 1;
    }
  }
  ExReleaseResourceLite(v1);
  _InterlockedExchange((volatile __int32 *)(a1 + 2000), 0);
}
