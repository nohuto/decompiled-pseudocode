/*
 * XREFs of ZwLoadKeyEx @ 0x14015C190
 * Callers:
 *     PiDrvDbLoadHive @ 0x1404CF128 (PiDrvDbLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKeyEx(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        HANDLE TrustClassKey,
        HANDLE Event,
        ACCESS_MASK DesiredAccess,
        PHANDLE RootHandle,
        PVOID Reserved)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
