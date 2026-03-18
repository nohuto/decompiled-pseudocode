/*
 * XREFs of ACPIDockIrpSetSystemPower @ 0x1C00343FC
 * Callers:
 *     ACPIDockIrpSetPower @ 0x1C00343D0 (ACPIDockIrpSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C0037F50 (ACPIDeviceIrpWarmEjectRequest.c)
 *     ACPIDispatchPowerIrpSuccess @ 0x1C00396C0 (ACPIDispatchPowerIrpSuccess.c)
 */

__int64 __fastcall ACPIDockIrpSetSystemPower(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  __int64 v2; // rbx
  __int64 DeviceExtension; // rax
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // rcx
  POWER_STATE v9; // r8d
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rax

  v2 = Context[23];
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  v6 = *(int *)(v2 + 24);
  v7 = DeviceExtension;
  v8 = *(_QWORD *)(DeviceExtension + 176);
  v9.SystemState = *(_SYSTEM_POWER_STATE *)(DeviceExtension + 4 * v6 + 452);
  *(_DWORD *)(v8 + 492) = v6;
  if ( *(_DWORD *)(v2 + 32) == 7 )
  {
    v10 = Context[23];
    *((_DWORD *)Context + 12) = 0;
    *(_BYTE *)(v10 + 3) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 672));
    LOBYTE(v6) = *(_DWORD *)(DeviceExtension + 184) == 4;
    result = ACPIDeviceIrpWarmEjectRequest(v8, Context, ACPIDeviceIrpCompleteRequest, v6);
    if ( (_DWORD)result == -1073741802 )
      return 259LL;
  }
  else if ( *(_DWORD *)(DeviceExtension + 328) == v9.SystemState )
  {
    return ACPIDispatchPowerIrpSuccess(DeviceObject, Context);
  }
  else
  {
    v12 = Context[23];
    *((_DWORD *)Context + 12) = 0;
    *(_BYTE *)(v12 + 3) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 672));
    PoRequestPowerIrp(DeviceObject, 2u, v9, ACPIBusIrpSetSystemPowerComplete, Context, 0LL);
    return 259LL;
  }
  return result;
}
