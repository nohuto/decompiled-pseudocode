/*
 * XREFs of IoOpenDeviceInterfaceRegistryKey @ 0x140545070
 * Callers:
 *     IoWMISuggestInstanceName @ 0x14065D8D8 (IoWMISuggestInstanceName.c)
 *     VerifierIoOpenDeviceInterfaceRegistryKey @ 0x1406C07AC (VerifierIoOpenDeviceInterfaceRegistryKey.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PnpUnicodeStringToWstrFree @ 0x14043F59C (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043F5D0 (PnpUnicodeStringToWstr.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x140442160 (_CmOpenDeviceInterfaceRegKey.c)
 */

NTSTATUS __stdcall IoOpenDeviceInterfaceRegistryKey(
        PUNICODE_STRING SymbolicLinkName,
        ACCESS_MASK DesiredAccess,
        PHANDLE DeviceInterfaceRegKey)
{
  NTSTATUS v6; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r9
  void *v10; // [rsp+60h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( SymbolicLinkName && SymbolicLinkName->Buffer && SymbolicLinkName->Length )
  {
    v6 = PnpUnicodeStringToWstr(&v10, 0LL, &SymbolicLinkName->Length);
    if ( v6 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v6 = CmOpenDeviceInterfaceRegKey(
             *(__int64 *)&PiPnpRtlCtx,
             (__int64)v10,
             0x32u,
             v8,
             DesiredAccess,
             1,
             (__int64)DeviceInterfaceRegKey,
             0LL);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  else
  {
    v6 = -1073741811;
  }
  PnpUnicodeStringToWstrFree(v10, (__int64)SymbolicLinkName);
  return v6;
}
