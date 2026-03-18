/*
 * XREFs of PnpFreeDeviceInstancePath @ 0x1404C21BC
 * Callers:
 *     IopDestroyDeviceNode @ 0x140455E40 (IopDestroyDeviceNode.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1404F0FA8 (PiBuildDeviceNodeInstancePath.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeDeviceInstancePath(__int64 a1)
{
  void *v2; // rcx

  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v2 = *(void **)(a1 + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x49706E50u);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
}
