/*
 * XREFs of PiCreateDeviceInstanceKey @ 0x14054EC5C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     _CmCreateDevice @ 0x14054ED28 (_CmCreateDevice.c)
 */

__int64 __fastcall PiCreateDeviceInstanceKey(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int Device; // ebx
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax
  char v11; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = (int)a2;
  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  *a3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  Device = CmCreateDevice(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 983103, v4, (__int64)&v11, 0);
  if ( Device >= 0 )
    *a3 = 2 - (v11 != 0);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  v8 = KeGetCurrentThread();
  v9 = v8->KernelApcDisable + 1;
  v8->KernelApcDisable = v9;
  if ( !v9
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
    && !v8->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)Device;
}
