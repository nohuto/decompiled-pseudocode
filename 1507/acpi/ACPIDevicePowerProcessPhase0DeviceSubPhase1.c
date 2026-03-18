/*
 * XREFs of ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C000A4E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000C280 (ACPIDeviceCompleteGenericPhase.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase0DeviceSubPhase1(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rsi
  unsigned int v4; // eax

  v1 = *(_QWORD **)(a1 + 40);
  v2 = a1 + 216;
  *(_DWORD *)(a1 + 212) = 4;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v4 = ACPIGet(v1, 1096045407, -1610344446, 0LL, 0, (__int64)ACPIDeviceCompleteGenericPhase, a1, v2 + 16, v2 + 24);
  if ( v4 == 259 )
    return 259LL;
  ACPIDeviceCompleteGenericPhase(0LL, v4, v2, a1);
  return 0LL;
}
