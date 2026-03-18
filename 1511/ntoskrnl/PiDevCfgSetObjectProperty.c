/*
 * XREFs of PiDevCfgSetObjectProperty @ 0x140512D8C
 * Callers:
 *     PiDevCfgResolveDriverDependencies @ 0x140510598 (PiDevCfgResolveDriverDependencies.c)
 *     PiDevCfgProcessDevice @ 0x140511A60 (PiDevCfgProcessDevice.c)
 *     PiDevCfgConfigureDevice @ 0x140511EA0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x140514894 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgMigrateDevice @ 0x140514B9C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x140515118 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x140609E1C (PiDevCfgRequestDriverConfigurations.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140609F54 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x14060A40C (PiDevCfgResolveDeviceDependencies.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14060D284 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgInit @ 0x1407682AC (PpDevCfgInit.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x14045C530 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgSetObjectProperty(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        unsigned int a10)
{
  unsigned int v10; // r10d

  v10 = 0;
  if ( a1 == *(_QWORD *)&PiPnpRtlCtx && a4 == 1 && a2 && (*a2 & 1) != 0 )
    v10 = 0x20000;
  return PnpSetObjectProperty(a1, a3, a4, a5, 0LL, a7, a8, a9, a10, v10);
}
