/*
 * XREFs of ACPIDeviceHasFirmwareDependencies @ 0x1C00097B4
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0008DA4 (ACPIThermalLoopEx.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0012C60 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C0086A04 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIDeviceHasFirmwareDependencies(__int64 a1)
{
  return (*(_BYTE *)(a1 + 912) & 0x40) != 0 || *(_QWORD *)(a1 + 600) != 0LL;
}
