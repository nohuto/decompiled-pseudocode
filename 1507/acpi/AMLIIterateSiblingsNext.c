/*
 * XREFs of AMLIIterateSiblingsNext @ 0x1C0008E44
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C0008D18 (ACPIGpeBuildEventMasks.c)
 *     ACPIBuildMissingChildren @ 0x1C0034B08 (ACPIBuildMissingChildren.c)
 *     EnableDisableRegions @ 0x1C0069918 (EnableDisableRegions.c)
 *     EnableDisableIPMIRegions @ 0x1C007B3FC (EnableDisableIPMIRegions.c)
 * Callees:
 *     HeapFree @ 0x1C0010E2C (HeapFree.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 */

__int64 __fastcall AMLIIterateSiblingsNext(volatile signed __int32 *a1)
{
  KIRQL v2; // dl
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v7; // rcx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( !v3 || (v4 = *(_QWORD *)(*(_QWORD *)a1 + 8LL), v4 == *(_QWORD *)(v3 + 24)) )
  {
    v5 = 0LL;
  }
  else
  {
    dword_1C005A218 = 0;
    v5 = v4 + 112;
    byte_1C005A21C = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  dword_1C005A218 = 0;
  byte_1C005A21C = 0;
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
  {
    v7 = *(_QWORD *)a1;
    if ( a1 == (volatile signed __int32 *)(*(_QWORD *)a1 + 112LL) )
    {
      DereferenceObjectEx(v7);
    }
    else
    {
      DereferenceObjectEx(v7);
      HeapFree(a1);
    }
  }
  return v5;
}
