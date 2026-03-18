/*
 * XREFs of ACPIBusIrpSetSystemPower @ 0x1C0035FA0
 * Callers:
 *     ACPIBusIrpSetPower @ 0x1C0021CF0 (ACPIBusIrpSetPower.c)
 *     ACPICMLidSetPowerCompletion @ 0x1C0036880 (ACPICMLidSetPowerCompletion.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C0037F50 (ACPIDeviceIrpWarmEjectRequest.c)
 *     ACPIDispatchPowerIrpSuccess @ 0x1C00396C0 (ACPIDispatchPowerIrpSuccess.c)
 */

__int64 __fastcall ACPIBusIrpSetSystemPower(PDEVICE_OBJECT DeviceObject, _QWORD *Context, __int64 a3)
{
  __int64 DeviceExtension; // r10
  __int64 v7; // rax
  __int64 v8; // rdx
  POWER_STATE v9; // r8d
  __int64 v10; // rax
  __int64 result; // rax
  PDEVICE_OBJECT v12; // rcx
  __int64 v13; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  v7 = *(int *)(a3 + 24);
  v8 = *(_QWORD *)DeviceExtension;
  v9.SystemState = *(_SYSTEM_POWER_STATE *)(DeviceExtension + 4 * v7 + 452);
  if ( (*(_QWORD *)DeviceExtension & 0x2000000LL) != 0 && (_DWORD)v7 == 1 )
    *(_DWORD *)(DeviceExtension + 236) = *(_WORD *)(a3 + 10) & 0xF;
  if ( *(_DWORD *)(a3 + 32) == 7 )
  {
    v10 = Context[23];
    *((_DWORD *)Context + 12) = 0;
    *(_BYTE *)(v10 + 3) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 672));
    result = ACPIDeviceIrpWarmEjectRequest(DeviceExtension, Context, ACPIDeviceIrpCompleteRequest, 0LL);
    if ( (_DWORD)result == -1073741802 )
      return 259LL;
  }
  else
  {
    if ( (v8 & 0x20000) == 0 || (*(_DWORD *)(DeviceExtension + 904) & 0x400LL) != 0 )
    {
      v12 = DeviceObject;
    }
    else
    {
      v12 = DeviceObject;
      if ( *(_DWORD *)(DeviceExtension + 328) != v9.SystemState )
      {
        v13 = Context[23];
        *((_DWORD *)Context + 12) = 0;
        *(_BYTE *)(v13 + 3) |= 1u;
        _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 672));
        PoRequestPowerIrp(DeviceObject, 2u, v9, ACPIBusIrpSetSystemPowerComplete, Context, 0LL);
        return 259LL;
      }
    }
    return ACPIDispatchPowerIrpSuccess(v12, Context);
  }
  return result;
}
