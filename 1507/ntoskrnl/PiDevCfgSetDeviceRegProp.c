/*
 * XREFs of PiDevCfgSetDeviceRegProp @ 0x14068CBF4
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14058793C (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceClass @ 0x140589730 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x140589A64 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgMigrateDevice @ 0x140589F68 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405B1FA0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x140686FA0 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x1406893E8 (PiDevCfgResolveDeviceDependencies.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14068CF4C (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     _CmSetDeviceRegProp @ 0x1404D8AB8 (_CmSetDeviceRegProp.c)
 */

__int64 __fastcall PiDevCfgSetDeviceRegProp(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // r10d

  v6 = 0;
  if ( (*(_BYTE *)a2 & 1) != 0 )
    v6 = 0x20000;
  return CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a3, a4, a5, a6, v6);
}
