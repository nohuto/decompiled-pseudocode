/*
 * XREFs of ACPIBuildProcessPowerResourcePhasePep @ 0x1C0035E10
 * Callers:
 *     <none>
 * Callees:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0004F54 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     ACPIBuildCompleteGeneric @ 0x1C0008660 (ACPIBuildCompleteGeneric.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhasePep(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 4;
  if ( (*(_DWORD *)(v3 + 16) & 0x4000LL) != 0
    || (_InterlockedOr64((volatile signed __int64 *)(v3 + 16), 0x4000uLL),
        v2 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v3 + 32), (__int64)ACPIBuildDiscoverPowerNodeCompletion, a1),
        v2 != 259) )
  {
    ACPIBuildCompleteGeneric(0LL, v2, 0LL, a1);
  }
  return v2;
}
