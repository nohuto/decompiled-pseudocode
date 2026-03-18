/*
 * XREFs of PiQueryAndAllocateBootResources @ 0x14045CAAC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401808F0 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     IopQueryDeviceResources @ 0x14045CCC0 (IopQueryDeviceResources.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiQueryAndAllocateBootResources(__int64 a1)
{
  PVOID v2; // rbx
  int DeviceResources; // esi
  int v4; // eax
  HANDLE v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+48h] BYREF
  PVOID Data; // [rsp+A0h] [rbp+50h]

  v2 = 0LL;
  DeviceResources = 0;
  Data = 0LL;
  KeyHandle = 0LL;
  if ( !*(_QWORD *)(a1 + 544) )
  {
    DeviceResources = IopQueryDeviceResources(*(_QWORD *)(a1 + 32));
    if ( DeviceResources < 0 )
      Data = 0LL;
    else
      v2 = Data;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 9
    || (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && (*(_DWORD *)(a1 + 404) == 3 || *(_DWORD *)(a1 + 404) == 19) )
  {
    goto LABEL_9;
  }
  v4 = CmOpenDeviceRegKey(
         *(__int64 *)&PiPnpRtlCtx,
         *(_QWORD *)(a1 + 48),
         0x14u,
         0,
         983103,
         v2 != 0LL,
         (__int64)&KeyHandle,
         0LL);
  v5 = KeyHandle;
  if ( v4 < 0 )
    v5 = 0LL;
  KeyHandle = v5;
  if ( !v5 || *(_QWORD *)(a1 + 544) )
    goto LABEL_9;
  *(_DWORD *)&ValueName.Length = 1441812;
  ValueName.Buffer = (wchar_t *)L"BootConfig";
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  if ( Data )
    ZwSetValueKey(KeyHandle, &ValueName, 0, 8u, Data, 0);
  else
    ZwDeleteValueKey(KeyHandle, &ValueName);
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
  v2 = Data;
  if ( Data )
  {
    DeviceResources = IopAllocateBootResourcesRoutine(4LL, *(_QWORD *)(a1 + 32), Data);
    if ( DeviceResources >= 0 )
      PipSetDevNodeFlags(a1, 64LL);
LABEL_9:
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DeviceResources;
}
