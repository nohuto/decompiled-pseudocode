/*
 * XREFs of PiDevCfgSetObjectProperty @ 0x140589E38
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14058793C (PiDevCfgProcessDevice.c)
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgResolveDriverDependencies @ 0x140588148 (PiDevCfgResolveDriverDependencies.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140589C68 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgMigrateDevice @ 0x140589F68 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgCopyObjectProperties @ 0x140685538 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x140689244 (PiDevCfgRequestDriverConfigurations.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x1406893E8 (PiDevCfgResolveDeviceDependencies.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14068CF4C (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgInit @ 0x1407DC428 (PpDevCfgInit.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x1404D8694 (_PnpSetObjectProperty.c)
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
