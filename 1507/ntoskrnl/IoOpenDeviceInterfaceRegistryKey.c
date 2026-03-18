/*
 * XREFs of IoOpenDeviceInterfaceRegistryKey @ 0x1405C43F4
 * Callers:
 *     IoWMISuggestInstanceName @ 0x1406E0180 (IoWMISuggestInstanceName.c)
 *     VerifierIoOpenDeviceInterfaceRegistryKey @ 0x140741FA0 (VerifierIoOpenDeviceInterfaceRegistryKey.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PnpUnicodeStringToWstrFree @ 0x140438E10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043AC54 (PnpUnicodeStringToWstr.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14043F154 (_CmOpenDeviceInterfaceRegKey.c)
 */

NTSTATUS __stdcall IoOpenDeviceInterfaceRegistryKey(
        PUNICODE_STRING SymbolicLinkName,
        ACCESS_MASK DesiredAccess,
        PHANDLE DeviceInterfaceRegKey)
{
  NTSTATUS v6; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r9
  struct _KTHREAD *v9; // rcx
  __int16 v10; // ax
  void *v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = 0LL;
  if ( SymbolicLinkName && SymbolicLinkName->Buffer && SymbolicLinkName->Length )
  {
    v6 = PnpUnicodeStringToWstr(&v12, 0LL, &SymbolicLinkName->Length);
    if ( v6 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v6 = CmOpenDeviceInterfaceRegKey(
             *(__int64 **)&PiPnpRtlCtx,
             (__int64)v12,
             0x32u,
             v8,
             DesiredAccess,
             1,
             (__int64)DeviceInterfaceRegKey,
             0LL);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      v9 = KeGetCurrentThread();
      v10 = v9->KernelApcDisable + 1;
      v9->KernelApcDisable = v10;
      if ( !v10
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
        && !v9->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  else
  {
    v6 = -1073741811;
  }
  PnpUnicodeStringToWstrFree(v12, (__int64)SymbolicLinkName);
  return v6;
}
