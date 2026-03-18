/*
 * XREFs of PpIrpQueryCapabilities @ 0x140461B3C
 * Callers:
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x140461AEC (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     IoGetDeviceProperty @ 0x1404E2C80 (IoGetDeviceProperty.c)
 *     PiControlGetDevicePowerData @ 0x1406943EC (PiControlGetDevicePowerData.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     IopSynchronousCall @ 0x1404D457C (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryCapabilities(int a1, _DWORD *a2)
{
  _QWORD v5[9]; // [rsp+30h] [rbp-58h] BYREF

  memset(a2, 0, 0x40uLL);
  *a2 = 65600;
  a2[3] = -1;
  a2[2] = -1;
  memset(v5, 0, sizeof(v5));
  LOWORD(v5[0]) = 2331;
  v5[1] = a2;
  return IopSynchronousCall(a1, (unsigned int)v5, -1073741637, 0, 0LL);
}
