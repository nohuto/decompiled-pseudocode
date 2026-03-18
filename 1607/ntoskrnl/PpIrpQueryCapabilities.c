/*
 * XREFs of PpIrpQueryCapabilities @ 0x140486BB0
 * Callers:
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x140486C30 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     IoGetDeviceProperty @ 0x1404F936C (IoGetDeviceProperty.c)
 *     PiControlGetDevicePowerData @ 0x14064A204 (PiControlGetDevicePowerData.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     IopSynchronousCall @ 0x140505B9C (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryCapabilities(int a1, _DWORD *a2)
{
  int v4; // r9d
  _QWORD v6[9]; // [rsp+30h] [rbp-58h] BYREF

  memset(a2, 0, 0x40uLL);
  *a2 = 65600;
  a2[3] = -1;
  a2[2] = -1;
  memset(v6, 0, sizeof(v6));
  LOWORD(v6[0]) = 2331;
  v6[1] = a2;
  return IopSynchronousCall(a1, (unsigned int)v6, -1073741637, v4, 0LL);
}
