/*
 * XREFs of IopReleaseDeviceResources @ 0x1404C5E64
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14009E908 (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404C3474 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDriverLoadingFailed @ 0x14057F858 (PnpDriverLoadingFailed.c)
 *     PnpDisableDevice @ 0x14062D740 (PnpDisableDevice.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14000794C (PnpRequestDeviceAction.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwSetValueKey @ 0x14015A880 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14015B5E0 (ZwDeleteValueKey.c)
 *     PipSetDevNodeFlags @ 0x1403F33A0 (PipSetDevNodeFlags.c)
 *     IopQueryDeviceResources @ 0x1404C89E8 (IopQueryDeviceResources.c)
 *     _CmOpenDeviceRegKey @ 0x1404FCD30 (_CmOpenDeviceRegKey.c)
 *     IopLegacyResourceAllocation @ 0x1405549AC (IopLegacyResourceAllocation.c)
 */

__int64 __fastcall IopReleaseDeviceResources(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+58h] BYREF

  if ( !*(_QWORD *)(a1 + 416) && (*(_DWORD *)(a1 + 396) & 0x80u) == 0 )
    return 0LL;
  if ( a2 && (*(_DWORD *)(a1 + 396) & 1) == 0 )
    IopQueryDeviceResources(*(_QWORD *)(a1 + 32));
  result = IopLegacyResourceAllocation(-1, (_DWORD)PnpDriverObject, *(_QWORD *)(a1 + 32), 0, 0LL);
  if ( (int)result >= 0 )
  {
    PnpRequestDeviceAction(0LL, 0, 0, 0LL, 0LL, 0LL);
    if ( a2 && (*(_DWORD *)(a1 + 396) & 1) == 0 )
    {
      v5 = *(_QWORD *)(a1 + 48);
      KeyHandle = 0LL;
      if ( (int)CmOpenDeviceRegKey(PiPnpRtlCtx, v5, 20, 0, 983103, 0, (__int64)&KeyHandle, 0LL) >= 0 )
      {
        *(_DWORD *)&ValueName.Length = 1441812;
        ValueName.Buffer = (wchar_t *)L"BootConfig";
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        ZwDeleteValueKey(KeyHandle, &ValueName);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
        ZwClose(KeyHandle);
      }
    }
    return 0LL;
  }
  return result;
}
