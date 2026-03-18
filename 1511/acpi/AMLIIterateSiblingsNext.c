/*
 * XREFs of AMLIIterateSiblingsNext @ 0x1C0008B20
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C00089F4 (ACPIGpeBuildEventMasks.c)
 *     ACPIBuildMissingChildren @ 0x1C0035788 (ACPIBuildMissingChildren.c)
 *     EnableDisableRegions @ 0x1C0066F60 (EnableDisableRegions.c)
 *     EnableDisableIPMIRegions @ 0x1C007B5DC (EnableDisableIPMIRegions.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C00144F8 (HeapFree.c)
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
    dword_1C005A228 = 0;
    v5 = v4 + 112;
    byte_1C005A22C = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  dword_1C005A228 = 0;
  byte_1C005A22C = 0;
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
