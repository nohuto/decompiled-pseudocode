/*
 * XREFs of IopOpenRegistryKey @ 0x1404E6780
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x14013D3BC (IopInitializeOfflineCrashDump.c)
 *     IopReadDumpRegistry @ 0x140143058 (IopReadDumpRegistry.c)
 *     IopIsBitlockerOn @ 0x14014B8DC (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x1401CA36C (IopAllowRemoteDASD.c)
 *     SecureDump_ReadRegistry @ 0x1401CBE50 (SecureDump_ReadRegistry.c)
 *     IopLoadUnloadDriver @ 0x1404E663C (IopLoadUnloadDriver.c)
 *     IopBootLog @ 0x1404EFE0C (IopBootLog.c)
 *     pIoQueryDeviceDescription @ 0x14053F6C0 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14053FB24 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14053FC30 (pIoQueryBusDescription.c)
 *     IopUnloadDriver @ 0x140544E28 (IopUnloadDriver.c)
 *     IopRegistryOpenDeepestPath @ 0x1405666A8 (IopRegistryOpenDeepestPath.c)
 *     IopSymlinkQueryEnabledClasses @ 0x140566788 (IopSymlinkQueryEnabledClasses.c)
 *     IopCopyBootLogRegistryToFile @ 0x14058155C (IopCopyBootLogRegistryToFile.c)
 *     IopSafebootDriverLoad @ 0x14062238C (IopSafebootDriverLoad.c)
 * Callees:
 *     ZwOpenKey @ 0x140159EC0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14015A020 (ZwCreateKey.c)
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
