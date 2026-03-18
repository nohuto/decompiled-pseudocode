/*
 * XREFs of IopOpenRegistryKeyEx @ 0x14058F9E4
 * Callers:
 *     PnpBootDeviceWait @ 0x14015DD04 (PnpBootDeviceWait.c)
 *     IopStoreSystemPartitionInformation @ 0x1407B634C (IopStoreSystemPartitionInformation.c)
 *     PipInitDeviceOverrideCache @ 0x1407B67F8 (PipInitDeviceOverrideCache.c)
 *     PipInitComputerIds @ 0x1407B6E78 (PipInitComputerIds.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1407B7C88 (PipCheckSystemFirmwareUpdated.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407B7FBC (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x1407B82F0 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x1407B8580 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x1407B91D4 (IopInitializeBuiltinDriver.c)
 *     PiInitCacheGroupInformation @ 0x1407BA388 (PiInitCacheGroupInformation.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x1407BA5D4 (PipInitializeEarlyLaunchDrivers.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
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
