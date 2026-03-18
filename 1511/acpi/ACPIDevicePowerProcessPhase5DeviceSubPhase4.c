/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C000A3D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000C790 (ACPIDeviceCompleteGenericPhase.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase4(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rbx
  unsigned int v4; // eax

  v1 = *(_QWORD **)(a1 + 40);
  v2 = a1 + 216;
  *(_DWORD *)(a1 + 212) = 7;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  v4 = ACPIGet(v1, 1096045407, -1610344446, 0LL, 0, (__int64)ACPIDeviceCompleteGenericPhase, a1, v2 + 16, v2 + 24);
  if ( v4 == 259 )
    return 259LL;
  ACPIDeviceCompleteGenericPhase(0LL, v4, 0LL, a1);
  return 0LL;
}
