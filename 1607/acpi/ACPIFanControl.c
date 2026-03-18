/*
 * XREFs of ACPIFanControl @ 0x1C004DCC0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceInternalDeviceRequest @ 0x1C000A33C (ACPIDeviceInternalDeviceRequest.c)
 */

__int64 __fastcall ACPIFanControl(__int64 a1, char a2)
{
  int v2; // edx
  __int64 result; // rax

  v2 = a2 != 0 ? 1 : 4;
  if ( *(_DWORD *)(a1 + 336) != v2 )
    return ACPIDeviceInternalDeviceRequest((_QWORD *)a1, v2, (int)ACPIFanPowerCallback, 0, 0);
  return result;
}
