/*
 * XREFs of PnpIrpDeviceEnumerated @ 0x1400B4A94
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     IopSynchronousCall @ 0x140505B9C (IopSynchronousCall.c)
 */

__int64 __fastcall PnpIrpDeviceEnumerated(int a1)
{
  int v2; // r9d
  _WORD v4[36]; // [rsp+30h] [rbp-58h] BYREF

  memset(v4, 0, sizeof(v4));
  v4[0] = 6427;
  return IopSynchronousCall(a1, (unsigned int)v4, -1073741637, v2, 0LL);
}
