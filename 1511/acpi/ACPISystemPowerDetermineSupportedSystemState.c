/*
 * XREFs of ACPISystemPowerDetermineSupportedSystemState @ 0x1C0040534
 * Callers:
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C00184A0 (ACPISystemPowerUpdateDeviceCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPISystemPowerDetermineSupportedSystemState(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 *v3; // rcx

  v2 = 7;
  if ( a2 == 4 )
    return 0;
  v3 = *(__int64 **)(a1 + 8LL * a2 + 352);
  if ( !v3 )
    return 0;
  do
  {
    if ( *((_DWORD *)v3 + 4) < v2 )
      v2 = *((_DWORD *)v3 + 4);
    v3 = (__int64 *)*v3;
  }
  while ( v3 );
  if ( v2 == 7 )
    return 0;
  return (unsigned int)v2;
}
