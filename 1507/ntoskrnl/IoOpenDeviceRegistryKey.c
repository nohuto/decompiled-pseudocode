/*
 * XREFs of IoOpenDeviceRegistryKey @ 0x140545AE8
 * Callers:
 *     VerifierIoOpenDeviceRegistryKey @ 0x140741FA8 (VerifierIoOpenDeviceRegistryKey.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
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
  struct _KTHREAD *v11; // rdx
  __int16 v12; // cx

  if ( !DeviceObject )
    return -1073741811;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
    return -1073741811;
  if ( (DevInstKeyType & 1) == 0 )
  {
    if ( (DevInstKeyType & 2) != 0 )
    {
      v8 = 18;
      goto LABEL_6;
    }
    return -1073741811;
  }
  v8 = 17;
LABEL_6:
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
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v10;
}
