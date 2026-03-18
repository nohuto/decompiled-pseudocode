/*
 * XREFs of ACPIBuildProcessDevicePhasePep @ 0x1C000B7A0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0004F54 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     ACPIBuildCompleteCommon @ 0x1C000B874 (ACPIBuildCompleteCommon.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePep(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rdx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 4;
  if ( (*(_DWORD *)(v3 + 904) & 0x2000000) != 0
    || (_InterlockedOr64((volatile signed __int64 *)(v3 + 904), 0x2000000uLL),
        v2 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v3 + 704), (__int64)ACPIBuildDiscoverDeviceCompletion, a1),
        v2 != 259) )
  {
    v4 = *(unsigned int *)(a1 + 32);
    if ( v2 < 0 )
      *(_DWORD *)(a1 + 48) = v2;
    *(_DWORD *)(a1 + 32) = 2;
    ACPIBuildCompleteCommon(a1 + 24, v4);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v2;
}
