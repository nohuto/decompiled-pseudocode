/*
 * XREFs of PiDevCfgSetObjectProperty @ 0x140640FCC
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140633214 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x140636298 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgCopyObjectProperties @ 0x140636F9C (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgMigrateDevice @ 0x14063A864 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgProcessDevice @ 0x14063B128 (PiDevCfgProcessDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x14063D4E4 (PiDevCfgRequestDriverConfigurations.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14063D61C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x14063DACC (PiDevCfgResolveDeviceDependencies.c)
 *     PiDevCfgResolveDriverDependencies @ 0x14063DD70 (PiDevCfgResolveDriverDependencies.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140641684 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgInit @ 0x1407B8124 (PpDevCfgInit.c)
 * Callees:
 *     PiPnpRtlSetObjectProperty @ 0x140488870 (PiPnpRtlSetObjectProperty.c)
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
