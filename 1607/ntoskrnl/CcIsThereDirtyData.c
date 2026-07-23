/*
 * XREFs of CcIsThereDirtyData @ 0x1401B2010
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 */

BOOLEAN __stdcall CcIsThereDirtyData(PVPB Vpb)
{
  int v2; // esi
  KIRQL v3; // al
  __int64 v4; // rbx
  KIRQL v5; // r8
  __int64 *v6; // r14
  BOOLEAN v7; // di
  int v8; // edx
  KIRQL v9; // al

  v2 = 0;
  v3 = KeAcquireQueuedSpinLock(5uLL);
  v4 = CcDirtySharedCacheMapList - 136;
  v5 = v3;
  v6 = (__int64 *)CcDirtySharedCacheMapList;
  if ( (__int64 *)CcDirtySharedCacheMapList == &CcDirtySharedCacheMapList )
  {
LABEL_11:
    v7 = 0;
  }
  else
  {
    v7 = 1;
    while ( 1 )
    {
      v8 = *(_DWORD *)(v4 + 152);
      if ( (v8 & 0x800) == 0
        && *(PVPB *)((*(_QWORD *)(v4 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x10) == Vpb
        && *(_DWORD *)(v4 + 112)
        && (*(_DWORD *)((*(_QWORD *)(v4 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x50) & 0x8000) == 0 )
      {
        break;
      }
      if ( (unsigned int)++v2 >= 0x14 && (v8 & 0x820) == 0 )
      {
        *(_DWORD *)(v4 + 152) |= 0x20u;
        ++*(_DWORD *)(v4 + 112);
        KeReleaseQueuedSpinLock(5uLL, v5);
        v2 = 0;
        v9 = KeAcquireQueuedSpinLock(5uLL);
        *(_DWORD *)(v4 + 152) &= ~0x20u;
        v5 = v9;
        --*(_DWORD *)(v4 + 112);
      }
      v4 = *v6 - 136;
      v6 = (__int64 *)*v6;
      if ( v6 == &CcDirtySharedCacheMapList )
        goto LABEL_11;
    }
  }
  KeReleaseQueuedSpinLock(5uLL, v5);
  return v7;
}
