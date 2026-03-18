/*
 * XREFs of IopWriteAllocatedResourcesToRegistry @ 0x140529A40
 * Callers:
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceLists @ 0x140529948 (PnpBuildCmResourceLists.c)
 *     IopLegacyResourceAllocation @ 0x1406045CC (IopLegacyResourceAllocation.c)
 *     PnpReleaseResourcesInternal @ 0x140617424 (PnpReleaseResourcesInternal.c)
 *     PnpRestoreResourcesInternal @ 0x140617684 (PnpRestoreResourcesInternal.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140151F40 (ZwDeleteValueKey.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall IopWriteAllocatedResourcesToRegistry(__int64 a1, void *a2, ULONG a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  NTSTATUS v8; // eax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v7 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 0x13u, 0, 983103, 1, (__int64)&KeyHandle, 0LL);
  if ( v7 >= 0 )
  {
    ValueName.Buffer = L"AllocConfig";
    *(_DWORD *)&ValueName.Length = 1572886;
    if ( a2 )
      v8 = ZwSetValueKey(KeyHandle, &ValueName, 0, 8u, a2, a3);
    else
      v8 = ZwDeleteValueKey(KeyHandle, &ValueName);
    v7 = v8;
    ZwClose(KeyHandle);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
