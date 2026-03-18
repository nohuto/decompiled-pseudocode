/*
 * XREFs of AMLIGetFirstChild @ 0x1C0006FE8
 * Callers:
 *     EnableDisableCMOSRegions @ 0x1C0006EB0 (EnableDisableCMOSRegions.c)
 *     ACPIGpeBuildEventMasks @ 0x1C000DA68 (ACPIGpeBuildEventMasks.c)
 *     ACPIBuildMissingChildren @ 0x1C0044404 (ACPIBuildMissingChildren.c)
 *     EnableDisableRegions @ 0x1C0086E6C (EnableDisableRegions.c)
 *     EnableDisableIPMIRegions @ 0x1C009C834 (EnableDisableIPMIRegions.c)
 * Callees:
 *     <none>
 */

volatile signed __int32 *__fastcall AMLIGetFirstChild(_QWORD *a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rbx
  _QWORD *v4; // rbx
  volatile signed __int32 *v5; // rbx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = (_QWORD *)(*a1 + 24LL);
  if ( (_QWORD *)*v3 == v3 )
  {
    v5 = 0LL;
  }
  else
  {
    v4 = (_QWORD *)*v3;
    dword_1C0074698 = 0;
    v5 = (volatile signed __int32 *)(v4 + 15);
    byte_1C007469C = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement(v5 + 2);
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return v5;
}
