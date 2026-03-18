/*
 * XREFs of IopOpenRegistryKey @ 0x14049446C
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140135E98 (IopInitializeOfflineCrashDump.c)
 *     IopReadDumpRegistry @ 0x14013A6B4 (IopReadDumpRegistry.c)
 *     IopIsBitlockerOn @ 0x14014204C (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x1401BDC74 (IopAllowRemoteDASD.c)
 *     IopUnloadDriver @ 0x140493DE4 (IopUnloadDriver.c)
 *     IopLoadUnloadDriver @ 0x140494328 (IopLoadUnloadDriver.c)
 *     IopBootLog @ 0x1404C4034 (IopBootLog.c)
 *     pIoQueryDeviceDescription @ 0x1405071C8 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14050762C (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140507738 (pIoQueryBusDescription.c)
 *     IopRegistryOpenDeepestPath @ 0x1405349E8 (IopRegistryOpenDeepestPath.c)
 *     IopSymlinkQueryEnabledClasses @ 0x140534AC8 (IopSymlinkQueryEnabledClasses.c)
 *     IopCopyBootLogRegistryToFile @ 0x14054B79C (IopCopyBootLogRegistryToFile.c)
 *     IopSafebootDriverLoad @ 0x1405F8504 (IopSafebootDriverLoad.c)
 * Callees:
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401509C0 (ZwCreateKey.c)
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
