/*
 * XREFs of AMLIIterateSiblingsNext @ 0x1C000DB94
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C000DA68 (ACPIGpeBuildEventMasks.c)
 *     ACPIBuildMissingChildren @ 0x1C0044404 (ACPIBuildMissingChildren.c)
 *     EnableDisableRegions @ 0x1C0086E6C (EnableDisableRegions.c)
 *     EnableDisableIPMIRegions @ 0x1C009C834 (EnableDisableIPMIRegions.c)
 * Callees:
 *     FreeObjectHandle @ 0x1C005CBAC (FreeObjectHandle.c)
 */

__int64 __fastcall AMLIIterateSiblingsNext(volatile signed __int32 *a1)
{
  KIRQL v2; // cl
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rbx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( !v3 || (v4 = **(_QWORD **)a1, v4 == v3 + 24) )
  {
    v5 = 0LL;
  }
  else
  {
    dword_1C0074698 = 0;
    v5 = v4 + 120;
    byte_1C007469C = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  dword_1C0074698 = 0;
  byte_1C007469C = 0;
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    FreeObjectHandle(a1);
  return v5;
}
