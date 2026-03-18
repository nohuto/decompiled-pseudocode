/*
 * XREFs of IopReleaseDeviceResources @ 0x1405383A4
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14011BB6C (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405392C8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDriverLoadingFailed @ 0x1405C1A3C (PnpDriverLoadingFailed.c)
 *     PnpDisableDevice @ 0x14067E214 (PnpDisableDevice.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401808F0 (ZwDeleteValueKey.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     IopQueryDeviceResources @ 0x14045CCC0 (IopQueryDeviceResources.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     IopLegacyResourceAllocation @ 0x14067F1F4 (IopLegacyResourceAllocation.c)
 */

__int64 __fastcall IopReleaseDeviceResources(__int64 a1, int a2)
{
  __int64 result; // rax
  PVOID v5; // rbx
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax
  __int64 v10; // rdx
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+90h] [rbp+40h] BYREF
  PVOID Data; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+58h] BYREF

  if ( !*(_QWORD *)(a1 + 416) && (*(_DWORD *)(a1 + 396) & 0x80u) == 0 )
    return 0LL;
  DataSize = 0;
  v5 = 0LL;
  Data = 0LL;
  if ( a2 && (*(_DWORD *)(a1 + 396) & 1) == 0 )
  {
    if ( (int)IopQueryDeviceResources(*(_QWORD *)(a1 + 32), 0, &Data, &DataSize) >= 0 )
    {
      v5 = Data;
    }
    else
    {
      Data = 0LL;
      DataSize = 0;
    }
  }
  result = IopLegacyResourceAllocation(-1, (_DWORD)PnpDriverObject, *(_QWORD *)(a1 + 32), 0, 0LL);
  if ( (int)result >= 0 )
  {
    PnpRequestDeviceAction(0LL, 0, 0, 0LL, 0LL, 0LL);
    if ( a2 && (*(_DWORD *)(a1 + 396) & 1) == 0 )
    {
      v6 = *(_QWORD *)(a1 + 48);
      KeyHandle = 0LL;
      if ( (int)CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v6, 0x14u, 0, 983103, v5 != 0LL, (__int64)&KeyHandle, 0LL) >= 0 )
      {
        *(_DWORD *)&ValueName.Length = 1441812;
        ValueName.Buffer = (wchar_t *)L"BootConfig";
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        if ( Data )
          ZwSetValueKey(KeyHandle, &ValueName, 0, 8u, Data, DataSize);
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
        ZwClose(KeyHandle);
        v5 = Data;
      }
      if ( v5 )
      {
        PipSetDevNodeFlags(a1, 64);
        v10 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 544) = v5;
        IopAllocateBootResourcesRoutine(4LL, v10, v5);
      }
    }
    return 0LL;
  }
  return result;
}
