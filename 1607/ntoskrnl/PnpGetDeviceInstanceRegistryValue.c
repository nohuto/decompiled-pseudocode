/*
 * XREFs of PnpGetDeviceInstanceRegistryValue @ 0x1406E5C2C
 * Callers:
 *     sub_1406B9E20 @ 0x1406B9E20 (sub_1406B9E20.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
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
