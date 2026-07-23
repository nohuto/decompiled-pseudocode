/*
 * XREFs of CcIsThereDirtyDataEx @ 0x1401B2110
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 */

BOOLEAN __stdcall CcIsThereDirtyDataEx(PVPB Vpb, PULONG NumberOfDirtyPages)
{
  BOOLEAN v3; // bl
  KIRQL v5; // r8
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
      if ( (struct _DEVICE_OBJECT *)*(v6 - 1) == Vpb->DeviceObject )
        break;
      v6 = (__int64 *)*v6;
      v7 = 0LL;
    }
    while ( v6 != &CcVolumeCacheMapList );
    if ( v7 && (v7[4] || *((_DWORD *)v7 + 49)) )
    {
      if ( NumberOfDirtyPages )
        *NumberOfDirtyPages = *((_DWORD *)v7 + 8) + *((_DWORD *)v7 + 49);
      v3 = 1;
    }
  }
  KeReleaseQueuedSpinLock(5uLL, v5);
  return v3;
}
