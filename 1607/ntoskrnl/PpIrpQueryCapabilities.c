/*
 * XREFs of PpIrpQueryCapabilities @ 0x140512E24
 * Callers:
 *     IoGetDeviceProperty @ 0x1404DC2F8 (IoGetDeviceProperty.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14050FD98 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     PiControlGetDevicePowerData @ 0x14064A2E8 (PiControlGetDevicePowerData.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     IopSynchronousCall @ 0x1404E8B2C (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryCapabilities(struct _DEVICE_OBJECT *a1, _DWORD *a2)
{
  __int64 v4; // r9
  _QWORD v6[10]; // [rsp+30h] [rbp-58h] BYREF

  memset(a2, 0, 0x40uLL);
  *a2 = 65600;
  a2[3] = -1;
  a2[2] = -1;
  memset(v6, 0, 0x48uLL);
  LOWORD(v6[0]) = 2331;
  v6[1] = a2;
  return IopSynchronousCall(a1, (__int64)v6, -1073741637, v4, 0LL);
}
