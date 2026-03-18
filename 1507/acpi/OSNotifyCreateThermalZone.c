/*
 * XREFs of OSNotifyCreateThermalZone @ 0x1C0021B20
 * Callers:
 *     OSNotifyCreate @ 0x1C000B330 (OSNotifyCreate.c)
 *     ACPIBuildMissingChildren @ 0x1C0034B08 (ACPIBuildMissingChildren.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C00089D4 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C0021B5C (ACPIBuildThermalZoneRequest.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C0021C3C (ACPIBuildThermalZoneExtension.c)
 */

__int64 __fastcall OSNotifyCreateThermalZone(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  volatile signed __int64 *v4; // rcx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  result = ACPIBuildThermalZoneExtension(a1, a2, &v5);
  if ( (int)result >= 0 )
  {
    ACPIInitReferenceDeviceExtension(v5);
    _InterlockedOr64(v4, a2);
    return ACPIBuildThermalZoneRequest(v5);
  }
  return result;
}
