/*
 * XREFs of PpDevCfgCheckDeviceNeedsUpdate @ 0x14068CEDC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     PiDevCfgInitDeviceContext @ 0x14058A12C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x1405B20A8 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140682C5C (PiDevCfgCheckDeviceNeedsUpdate.c)
 */

__int64 __fastcall PpDevCfgCheckDeviceNeedsUpdate(__int64 a1, __int64 a2, unsigned int *a3)
{
  int inited; // ebx
  _QWORD v8[10]; // [rsp+20h] [rbp-58h] BYREF

  LODWORD(v8[0]) = 0;
  memset(&v8[1], 0, 0x40uLL);
  inited = PiDevCfgInitDeviceContext(a1, a2, v8);
  if ( inited >= 0 )
    inited = PiDevCfgCheckDeviceNeedsUpdate((__int64)v8, a3);
  PiDevCfgFreeDeviceContext((__int64)v8);
  return (unsigned int)inited;
}
