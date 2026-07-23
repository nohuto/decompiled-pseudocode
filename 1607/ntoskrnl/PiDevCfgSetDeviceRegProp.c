/*
 * XREFs of PiDevCfgSetDeviceRegProp @ 0x140641064
 * Callers:
 *     PpDevCfgProcessDeviceOperations @ 0x14050E6F8 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14057171C (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x140639400 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgMigrateDevice @ 0x14063A918 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgProcessDevice @ 0x14063B1DC (PiDevCfgProcessDevice.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x14063DBB0 (PiDevCfgResolveDeviceDependencies.c)
 *     PpDevCfgProcessDeviceClass @ 0x140641444 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140641768 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x140641DE4 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     PiPnpRtlSetDeviceRegProperty @ 0x14062F780 (PiPnpRtlSetDeviceRegProperty.c)
 */

__int64 __fastcall PiDevCfgSetDeviceRegProp(
        __int64 a1,
        __int64 a2,
        signed int a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned int a6)
{
  unsigned int v6; // r10d

  v6 = 0;
  if ( (*(_BYTE *)a2 & 1) != 0 )
    v6 = 0x20000;
  return PiPnpRtlSetDeviceRegProperty(
           *(__int64 *)&PiPnpRtlCtx,
           *(const WCHAR **)(a2 + 8),
           *(_QWORD *)(a2 + 16),
           a3,
           a4,
           a5,
           a6,
           v6);
}
