/*
 * XREFs of IopReleaseResources @ 0x140603E54
 * Callers:
 *     IopLegacyResourceAllocation @ 0x1406045CC (IopLegacyResourceAllocation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PipClearDevNodeFlags @ 0x1404574A4 (PipClearDevNodeFlags.c)
 *     PnpReleaseResourcesInternal @ 0x140617424 (PnpReleaseResourcesInternal.c)
 */

void __fastcall IopReleaseResources(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  int v4; // ecx
  __int64 v5; // r8
  void *v6; // rcx

  PnpReleaseResourcesInternal();
  ExAcquireFastMutex(&PiResourceListLock);
  v2 = *(void **)(a1 + 416);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 416) = 0LL;
  }
  v3 = *(void **)(a1 + 424);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 424) = 0LL;
  }
  KeReleaseGuardedMutex(&PiResourceListLock);
  v4 = *(_DWORD *)(a1 + 396);
  if ( (v4 & 0x10001) == 1 )
  {
    if ( (v4 & 0x40) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 544);
      if ( v5 )
        IopAllocateBootResourcesInternal(4, *(_QWORD *)(a1 + 32), v5);
    }
  }
  else
  {
    PipClearDevNodeFlags(a1, 192);
    v6 = *(void **)(a1 + 544);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      *(_QWORD *)(a1 + 544) = 0LL;
    }
  }
}
