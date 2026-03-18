/*
 * XREFs of IoOpenDeviceRegistryKey @ 0x1404AE9F0
 * Callers:
 *     VerifierIoOpenDeviceRegistryKey @ 0x1406C07B4 (VerifierIoOpenDeviceRegistryKey.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 */

NTSTATUS __stdcall IoOpenDeviceRegistryKey(
        PDEVICE_OBJECT DeviceObject,
        ULONG DevInstKeyType,
        ACCESS_MASK DesiredAccess,
        PHANDLE DeviceRegKey)
{
  _DWORD *DeviceNode; // r10
  unsigned int v8; // ebx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v10; // ebx

  if ( !DeviceObject )
    return -1073741811;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
    return -1073741811;
  if ( (DevInstKeyType & 1) != 0 )
  {
    v8 = 17;
    goto LABEL_7;
  }
  if ( (DevInstKeyType & 2) == 0 )
    return -1073741811;
  v8 = 18;
LABEL_7:
  if ( (DevInstKeyType & 4) != 0 )
    v8 |= 0x200u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v10 = CmOpenDeviceRegKey(
          *(__int64 *)&PiPnpRtlCtx,
          *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 6),
          v8,
          0,
          DesiredAccess,
          1,
          (__int64)DeviceRegKey,
          0LL);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v10;
}
