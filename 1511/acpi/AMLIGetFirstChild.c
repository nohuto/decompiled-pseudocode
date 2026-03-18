/*
 * XREFs of AMLIGetFirstChild @ 0x1C00077C8
 * Callers:
 *     EnableDisableCMOSRegions @ 0x1C0007690 (EnableDisableCMOSRegions.c)
 *     ACPIGpeBuildEventMasks @ 0x1C00089F4 (ACPIGpeBuildEventMasks.c)
 *     ACPIBuildMissingChildren @ 0x1C0035788 (ACPIBuildMissingChildren.c)
 *     EnableDisableRegions @ 0x1C0066F60 (EnableDisableRegions.c)
 *     EnableDisableIPMIRegions @ 0x1C007B5DC (EnableDisableIPMIRegions.c)
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
    dword_1C005A228 = 0;
    v3 += 112LL;
    byte_1C005A22C = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return v3;
}
