/*
 * XREFs of rimDoRimDevChange @ 0x1C000FAC0
 * Callers:
 *     RIMRemoveDevOfInputType @ 0x1C000A524 (RIMRemoveDevOfInputType.c)
 *     RIMDoOnPnpNotification @ 0x1C000C538 (RIMDoOnPnpNotification.c)
 *     RIMFreeSpecificDev @ 0x1C000CEB0 (RIMFreeSpecificDev.c)
 *     RIMCreateDev @ 0x1C000E2BC (RIMCreateDev.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0010F40 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0087FB0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00CF4C0 (RIMIDERemoveInjectionDevice.c)
 *     RIMOnPnpNotification @ 0x1C00CFB10 (RIMOnPnpNotification.c)
 * Callees:
 *     RIMHandleTTMDeviceArrival @ 0x1C000C65C (RIMHandleTTMDeviceArrival.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00101D4 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C0080598 (RIMHandleTTMDeviceRemoval.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall rimDoRimDevChange(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // eax
  int v9; // r8d
  __int64 (__fastcall *v10)(_DWORD *); // r9
  int v11; // edx
  int v12; // r9d
  _DWORD v13[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  result = (unsigned int)(a3 - 2);
  if ( a3 == 2 )
  {
    result = RIMHandleTTMDeviceArrival(a2);
    if ( (int)result >= 0 )
      goto LABEL_3;
    v12 = 14;
  }
  else
  {
    if ( a3 != 3 )
      goto LABEL_3;
    result = RIMHandleTTMDeviceRemoval(a2);
    if ( (int)result >= 0 )
      goto LABEL_3;
    v12 = 15;
  }
  LOBYTE(v11) = 3;
  result = WPP_RECORDER_SF_D(
             WPP_GLOBAL_Control->DeviceExtension,
             v11,
             5,
             v12,
             (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
             result);
LABEL_3:
  if ( *(_QWORD *)(a1 + 752) )
  {
    v7 = *(unsigned __int8 *)(a2 + 48);
    v13[0] = a3;
    v8 = RimDeviceTypeToRimInputType(a2, v7);
    v14 = *(_QWORD *)(a2 + 32);
    v13[2] = v8;
    v13[1] = v9;
    return v10(v13);
  }
  return result;
}
