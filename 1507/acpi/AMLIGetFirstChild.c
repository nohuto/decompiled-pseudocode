/*
 * XREFs of AMLIGetFirstChild @ 0x1C00070A8
 * Callers:
 *     EnableDisableCMOSRegions @ 0x1C0006F70 (EnableDisableCMOSRegions.c)
 *     ACPIGpeBuildEventMasks @ 0x1C0008D18 (ACPIGpeBuildEventMasks.c)
 *     ACPIBuildMissingChildren @ 0x1C0034B08 (ACPIBuildMissingChildren.c)
 *     EnableDisableRegions @ 0x1C0069918 (EnableDisableRegions.c)
 *     EnableDisableIPMIRegions @ 0x1C007B3FC (EnableDisableIPMIRegions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetFirstChild(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  if ( v3 )
  {
    dword_1C005A218 = 0;
    v3 += 112LL;
    byte_1C005A21C = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return v3;
}
