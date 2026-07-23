/*
 * XREFs of CcIsThereDirtyLoggedPages @ 0x14009F368
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 */

char __fastcall CcIsThereDirtyLoggedPages(__int64 a1, _DWORD *a2)
{
  char v3; // bl
  KIRQL v5; // dl
  __int64 *v6; // rax
  __int64 *v7; // rcx

  v3 = 0;
  v5 = KeAcquireQueuedSpinLock(5uLL);
  v6 = (__int64 *)CcVolumeCacheMapList;
  if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
  {
    do
    {
      v7 = v6 - 2;
      if ( *(v6 - 1) == a1 )
        break;
      v6 = (__int64 *)*v6;
      v7 = 0LL;
    }
    while ( v6 != &CcVolumeCacheMapList );
    if ( v7 && (v7[8] || *((_DWORD *)v7 + 50)) )
    {
      if ( a2 )
        *a2 = *((_DWORD *)v7 + 16) + *((_DWORD *)v7 + 50);
      v3 = 1;
    }
  }
  KeReleaseQueuedSpinLock(5uLL, v5);
  return v3;
}
