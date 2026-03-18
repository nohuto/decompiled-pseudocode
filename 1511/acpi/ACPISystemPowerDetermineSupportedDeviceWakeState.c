/*
 * XREFs of ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1C0019A5C
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C00189E4 (ACPISystemPowerUpdateWakeCapabilitiesForPDOs.c)
 *     ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C001960C (ACPISystemPowerUpdateWakeCapabilitiesForFilters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPISystemPowerDetermineSupportedDeviceWakeState(__int64 a1)
{
  __int64 *v1; // r8
  int v2; // edx

  v1 = *(__int64 **)(a1 + 352);
  v2 = 5;
  if ( !v1 )
    return (*(_QWORD *)(a1 + 904) & 0x500000000LL) != 0 ? 4u : 0;
  do
  {
    if ( *((_DWORD *)v1 + 5) < v2 )
      v2 = *((_DWORD *)v1 + 5);
    v1 = (__int64 *)*v1;
  }
  while ( v1 );
  if ( v2 == 5 )
    return (*(_QWORD *)(a1 + 904) & 0x500000000LL) != 0 ? 4u : 0;
  return (unsigned int)v2;
}
