/*
 * XREFs of IopOpenRegistryKeyEx @ 0x140522A1C
 * Callers:
 *     PnpBootDeviceWait @ 0x140133EA8 (PnpBootDeviceWait.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x14074F500 (PipInitializeEarlyLaunchDrivers.c)
 *     PipInitComputerIds @ 0x14074FA48 (PipInitComputerIds.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140750B14 (PipCheckSystemFirmwareUpdated.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407510A0 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x1407513D4 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140751608 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x14075210C (IopInitializeBuiltinDriver.c)
 *     PipInitDeviceOverrideCache @ 0x140753200 (PipInitDeviceOverrideCache.c)
 *     IopStoreSystemPartitionInformation @ 0x14075363C (IopStoreSystemPartitionInformation.c)
 *     PiInitCacheGroupInformation @ 0x1407539C0 (PiInitCacheGroupInformation.c)
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKeyEx(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4)
{
  OBJECT_ATTRIBUTES v5; // [rsp+20h] [rbp-38h] BYREF

  *a1 = 0LL;
  v5.RootDirectory = a2;
  v5.ObjectName = a3;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  v5.Length = 48;
  v5.Attributes = 576;
  return ZwOpenKey(a1, a4, &v5);
}
