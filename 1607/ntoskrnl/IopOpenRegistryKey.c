/*
 * XREFs of IopOpenRegistryKey @ 0x1404C90F0
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x14013D92C (IopInitializeOfflineCrashDump.c)
 *     IopReadDumpRegistry @ 0x1401435C8 (IopReadDumpRegistry.c)
 *     IopIsBitlockerOn @ 0x14014BE4C (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x1401CA20C (IopAllowRemoteDASD.c)
 *     SecureDump_ReadRegistry @ 0x1401CBD34 (SecureDump_ReadRegistry.c)
 *     IopLoadUnloadDriver @ 0x1404C8FAC (IopLoadUnloadDriver.c)
 *     IopBootLog @ 0x1404D1E28 (IopBootLog.c)
 *     pIoQueryDeviceDescription @ 0x14053FC00 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x140540064 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140540170 (pIoQueryBusDescription.c)
 *     IopUnloadDriver @ 0x140545368 (IopUnloadDriver.c)
 *     IopRegistryOpenDeepestPath @ 0x140566BE8 (IopRegistryOpenDeepestPath.c)
 *     IopSymlinkQueryEnabledClasses @ 0x140566CC8 (IopSymlinkQueryEnabledClasses.c)
 *     IopCopyBootLogRegistryToFile @ 0x140581A08 (IopCopyBootLogRegistryToFile.c)
 *     IopSafebootDriverLoad @ 0x140622440 (IopSafebootDriverLoad.c)
 * Callees:
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
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
