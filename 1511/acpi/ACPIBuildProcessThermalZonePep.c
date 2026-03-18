/*
 * XREFs of ACPIBuildProcessThermalZonePep @ 0x1C0023AF0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0004F54 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000C030 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZonePep(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 4;
  if ( (*(_DWORD *)(v3 + 904) & 0x2000000) != 0
    || (_InterlockedOr64((volatile signed __int64 *)(v3 + 904), 0x2000000uLL),
        v2 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v3 + 704), (__int64)ACPIBuildDiscoverDeviceCompletion, a1),
        v2 != 259) )
  {
    ACPIBuildCompleteMustSucceed(0LL, v2, 0LL, a1);
  }
  else
  {
    return 0;
  }
  return v2;
}
