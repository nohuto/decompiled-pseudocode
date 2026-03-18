/*
 * XREFs of rimDoRimDevChangeCallback @ 0x1C0011374
 * Callers:
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00063A4 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMRemoveDevOfInputType @ 0x1C000BCF8 (RIMRemoveDevOfInputType.c)
 *     RIMDoOnPnpNotification @ 0x1C00108E0 (RIMDoOnPnpNotification.c)
 *     RIMFreeSpecificDev @ 0x1C0010B14 (RIMFreeSpecificDev.c)
 *     RIMCreateDev @ 0x1C0011060 (RIMCreateDev.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0087110 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00C2978 (RIMIDERemoveInjectionDevice.c)
 *     RIMOnPnpNotification @ 0x1C00C2F90 (RIMOnPnpNotification.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C001152C (RimDeviceTypeToRimInputType.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall rimDoRimDevChangeCallback(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v4; // r10
  int v5; // r8d
  void (__fastcall *v6)(_DWORD *); // r9
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 800) )
  {
    v7[0] = a3;
    v3 = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
    v8 = *(_QWORD *)(v4 + 32);
    v7[2] = v3;
    v7[1] = v5;
    v6(v7);
  }
}
