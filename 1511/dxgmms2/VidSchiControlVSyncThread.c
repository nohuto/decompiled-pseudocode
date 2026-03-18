/*
 * XREFs of VidSchiControlVSyncThread @ 0x1C0002FE0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiControlVSync @ 0x1C0039180 (VidSchiControlVSync.c)
 */

void __fastcall VidSchiControlVSyncThread(__int64 a1)
{
  struct _ERESOURCE *v1; // rbp
  int v3; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (struct _ERESOURCE *)(a1 + 1200);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1200), 1u);
  if ( *(_BYTE *)(a1 + 1904)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1972), 0, 0)
    && !*(_DWORD *)(a1 + 1920)
    && !*(_DWORD *)(*(_QWORD *)(a1 + 16) + 2016LL)
    && !*(_DWORD *)(a1 + 916)
    && !*(_DWORD *)(a1 + 932) )
  {
    v3 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1824), &LockHandle);
    if ( *(_DWORD *)(a1 + 1976) >= *(_DWORD *)(a1 + 1984) )
    {
      *(_DWORD *)(a1 + 1976) = -1;
      v3 = 1;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v3 )
    {
      VidSchiControlVSync(a1, 0LL, 3LL);
      *(_BYTE *)(a1 + 1928) = 1;
    }
  }
  ExReleaseResourceLite(v1);
  _InterlockedExchange((volatile __int32 *)(a1 + 1968), 0);
}
