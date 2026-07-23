/*
 * XREFs of PiCreateDeviceInstanceKey @ 0x14050D484
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     _CmCreateDevice @ 0x14050D534 (_CmCreateDevice.c)
 */

__int64 __fastcall PiCreateDeviceInstanceKey(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx
  int Device; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char v12; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = (int)a2;
  *a3 = 0;
  v12 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  Device = CmCreateDevice(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 983103, v5, (__int64)&v12, 0);
  if ( Device >= 0 )
    *a3 = 2 - (v12 != 0);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
  return (unsigned int)Device;
}
