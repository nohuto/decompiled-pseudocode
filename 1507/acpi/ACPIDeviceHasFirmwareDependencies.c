/*
 * XREFs of ACPIDeviceHasFirmwareDependencies @ 0x1C001A474
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0019DFC (ACPIThermalLoopEx.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001E340 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C0069564 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIDeviceHasFirmwareDependencies(__int64 a1)
{
  return (*(_BYTE *)(a1 + 904) & 0x40) != 0 || *(_QWORD *)(a1 + 592) != 0LL;
}
