/*
 * XREFs of PnpGetDeviceInstanceRegistryValue @ 0x1406E5AF4
 * Callers:
 *     sub_1406B9CE8 @ 0x1406B9CE8 (sub_1406B9CE8.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     IopGetRegistryValue @ 0x14049F430 (IopGetRegistryValue.c)
 *     _CmOpenDeviceRegKey @ 0x1404FCD30 (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall PnpGetDeviceInstanceRegistryValue(__int64 a1, __int64 a2, void *a3, __int64 a4, _QWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int RegistryValue; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  HANDLE Handle; // [rsp+60h] [rbp+18h] BYREF

  Handle = a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  RegistryValue = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a1, 0x11u, 0, 131097, 0, (__int64)&Handle, 0LL);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle, L"DeviceAddressCache", 26, a5);
    ZwClose(Handle);
  }
  return (unsigned int)RegistryValue;
}
