/*
 * XREFs of PiDevCfgSetObjectProperty @ 0x1406410B0
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgCopyObjectProperties @ 0x140637050 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgMigrateDevice @ 0x14063A918 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgProcessDevice @ 0x14063B1DC (PiDevCfgProcessDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x14063D598 (PiDevCfgRequestDriverConfigurations.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14063D6D0 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x14063DBB0 (PiDevCfgResolveDeviceDependencies.c)
 *     PiDevCfgResolveDriverDependencies @ 0x14063DE54 (PiDevCfgResolveDriverDependencies.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140641768 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgInit @ 0x1407B8124 (PpDevCfgInit.c)
 * Callees:
 *     PiPnpRtlSetObjectProperty @ 0x140510FE4 (PiPnpRtlSetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgSetObjectProperty(
        __int64 a1,
        _BYTE *a2,
        const WCHAR *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned int *a9,
        int a10)
{
  int v10; // r10d

  v10 = 0;
  if ( a1 == *(_QWORD *)&PiPnpRtlCtx && a4 == 1 && a2 && (*a2 & 1) != 0 )
    v10 = 0x20000;
  return PiPnpRtlSetObjectProperty(a1, a3, a4, a5, 0LL, a7, a8, a9, a10, v10);
}
