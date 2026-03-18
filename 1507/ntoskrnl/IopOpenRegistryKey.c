/*
 * XREFs of IopOpenRegistryKey @ 0x140539BE4
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140163F28 (IopInitializeOfflineCrashDump.c)
 *     IopReadDumpRegistry @ 0x14016C0B4 (IopReadDumpRegistry.c)
 *     IopIsBitlockerOn @ 0x140170058 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x1401F7B88 (IopAllowRemoteDASD.c)
 *     IopUnloadDriver @ 0x140539658 (IopUnloadDriver.c)
 *     IopLoadUnloadDriver @ 0x140571B04 (IopLoadUnloadDriver.c)
 *     IopBootLog @ 0x140572968 (IopBootLog.c)
 *     pIoQueryDeviceDescription @ 0x14057D9B0 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14057DE14 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14057DF20 (pIoQueryBusDescription.c)
 *     IopRegistryOpenDeepestPath @ 0x1405B1764 (IopRegistryOpenDeepestPath.c)
 *     IopSymlinkQueryEnabledClasses @ 0x1405B1844 (IopSymlinkQueryEnabledClasses.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405C2B88 (IopCopyBootLogRegistryToFile.c)
 *     IopSafebootDriverLoad @ 0x14067249C (IopSafebootDriverLoad.c)
 * Callees:
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKey(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4, ULONG Disposition)
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  ObjectAttributes.ObjectName = a3;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  if ( (_BYTE)Disposition )
    return ZwCreateKey(a1, a4, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
  else
    return ZwOpenKey(a1, a4, &ObjectAttributes);
}
