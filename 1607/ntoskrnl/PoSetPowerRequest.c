/*
 * XREFs of PoSetPowerRequest @ 0x140112090
 * Callers:
 *     PopApplyLegacyPowerRequestFlags @ 0x14010EF9C (PopApplyLegacyPowerRequestFlags.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PoSetPowerRequest(PVOID PowerRequest, POWER_REQUEST_TYPE Type)
{
  unsigned int v2; // eax
  __int32 v3; // edx
  __int32 v5; // edx

  v2 = 0;
  if ( Type == PowerRequestDisplayRequired )
    return PoSetPowerRequestInternal((__int64)PowerRequest, v2);
  v3 = Type - 1;
  if ( !v3 )
  {
    v2 = 1;
    return PoSetPowerRequestInternal((__int64)PowerRequest, v2);
  }
  v5 = v3 - 1;
  if ( !v5 )
  {
    v2 = 2;
    return PoSetPowerRequestInternal((__int64)PowerRequest, v2);
  }
  if ( v5 == 1 )
  {
    v2 = 3;
    return PoSetPowerRequestInternal((__int64)PowerRequest, v2);
  }
  return -1073741637;
}
