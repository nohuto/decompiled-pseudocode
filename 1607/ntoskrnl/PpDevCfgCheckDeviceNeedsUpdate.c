/*
 * XREFs of PpDevCfgCheckDeviceNeedsUpdate @ 0x1406412DC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     PiDevCfgFreeDeviceContext @ 0x1404E9134 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140632B70 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceContext @ 0x1406394B4 (PiDevCfgInitDeviceContext.c)
 */

__int64 __fastcall PpDevCfgCheckDeviceNeedsUpdate(__int64 a1, void *a2, unsigned int *a3)
{
  int inited; // ebx
  __int64 v8[10]; // [rsp+20h] [rbp-58h] BYREF

  LODWORD(v8[0]) = 0;
  memset(&v8[1], 0, 0x40uLL);
  inited = PiDevCfgInitDeviceContext(a1, a2, v8);
  if ( inited >= 0 )
    inited = PiDevCfgCheckDeviceNeedsUpdate((__int64)v8, a3);
  PiDevCfgFreeDeviceContext((__int64)v8);
  return (unsigned int)inited;
}
